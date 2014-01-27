<?php

/**
 * Set the breadcrumb using a context reaction.
 */
class context_path_breadcrumb_reaction extends context_reaction {
  /**
   * Provide a form element that allow the admin to chose a menu item.
   */
  function options_form($context) {
    $settings = $this->fetch_from_context($context);
    $form = array();
    $form['current_page_title'] = array(
      '#title' => t('Show the current page title'),
      '#description' => t('Will show the current page title as plain text'),
      '#type' => 'checkbox',
      '#default_value' => isset($settings['current_page_title']) ? $settings['current_page_title'] : '',
    );
    $form['load_page_titles'] = array(
      '#title' => t('Load the page titles from menu table'),
      '#description' => t('By enabling this, the context will do an additional query for each breadcrumb item to get a better title from the menu system, otherwise the URL will be used for the breadcrumbs. This will cost some additional queries and will slow down the page a little bit.'),
      '#type' => 'checkbox',
      '#default_value' => isset($settings['load_page_titles']) ? $settings['load_page_titles'] : '',
    );
    $form['set_active_trail'] = array(
      '#title' => t('Set the active trail'),
      '#description' => t('Set the active trail for all breadcrumb items found in a menu. This will cost some additional queries so will slow down the page a bit (probably not very much).'),
      '#type' => 'checkbox',
      '#default_value' => isset($settings['set_active_trail']) ? $settings['set_active_trail'] : '',
    );
    return $form;
  }

  /**
   * Override of execute().
   */
  function execute(&$vars = NULL) {
    $active = FALSE;
    $current_page_title = FALSE;
    $load_page_titles = FALSE;
    $set_active_trail = FALSE;
    foreach ($this->get_contexts() as $k => $v) {
      if (isset($v->reactions[$this->plugin])) {
        $active = TRUE;
        $current_page_title |= isset($v->reactions[$this->plugin]['current_page_title']) && $v->reactions[$this->plugin]['current_page_title'] === 1;
        $load_page_titles |= isset($v->reactions[$this->plugin]['load_page_titles']) && $v->reactions[$this->plugin]['load_page_titles'] === 1;
        $set_active_trail |= isset($v->reactions[$this->plugin]['set_active_trail']) && $v->reactions[$this->plugin]['set_active_trail'] === 1;
      }
    }

    if ($active) {
      $breadcrumb = array();
      // Frontpage -- bail out.
      if (!drupal_is_front_page() ) {
        $breadcrumb[] = l(t('Home'), '<front>', array('purl' => array('disabled' => TRUE)));

        $pieces = explode('/', request_path());

        // Filter the language first directory.
        $languages = language_list('language');
        if ( isset($languages[reset($pieces)]) ) {
          array_shift($pieces);
        }

        $path = '';
        $parent_candidates_breadcrumb = array();
        $parent_candidates_active = array();
        $matched_menus = array();
        $matched_link_titles = array();

        foreach ($pieces as $piece) {
          $path .= (!empty($path) ? '/' : '') . $piece;

          // Only do this if we load the titles or we set the active trail.
          if ($load_page_titles || $set_active_trail) {
            $path_source = drupal_get_normal_path($path);
          }
          else {
            $path_source = $path;
          }

          $parent_candidates_breadcrumb[] = array('path' => $path_source, 'piece' => $piece);
          $parent_candidates_active[] = $path_source;
        }

        // Find link items matching the parent candidates in all menus.
        if ($set_active_trail) {
          $results = db_select('menu_links', 'ml')
            ->fields('ml',array('menu_name', 'link_path', 'link_title', 'depth'))
            ->condition('link_path', $parent_candidates_active, 'IN')
            ->execute();

          foreach ($results as $record) {
            // Do not touch admin menus.
            if (in_array($record->menu_name, array('management','devel'))) {
              continue;
            }
            // If there is more than one matched link in a menu, use the deepest.
            elseif (!isset($matched_menus[$record->menu_name]) || $record->depth > $matched_menus[$record->menu_name]['depth']) {
              $matched_menus[$record->menu_name]['link_path'] = $record->link_path;
              $matched_menus[$record->menu_name]['depth'] = $record->depth;
            }

            // Get the Link Title if it can be found in a menu item.
            if ($record->link_title && !isset($matched_link_titles[$record->link_path])) {
              $matched_link_titles[$record->link_path] = $record->link_title;
            }
          }
        }

        // Set the active-trail for each menu containing one of the candidates.
        foreach ($matched_menus as $menu_name => $menu_link) {
          menu_tree_set_path($menu_name, $menu_link['link_path']);
        }

        // Build breadcrumbs.
        $skip_paths = array(); // Make sure the same path is not placed in the breadcrumb twice.
        $current_page = array_pop($parent_candidates_breadcrumb); // Add as plain text, not as link.
        foreach ($parent_candidates_breadcrumb as $parent) {
          $title = NULL;
          $path = NULL;
          if (isset($matched_link_titles[$parent['path']])) {
            $title = $matched_link_titles[$parent['path']];
            $path = $parent['path'];
          }
          // Use path from menu item.
          elseif ($load_page_titles) {
            if ($menu_item = menu_link_get_preferred($parent['path'])) {
              $title = $menu_item['title'];
              $path = $menu_item['href'];
            }
          }
          // Create a path manually.
          else {
            $title = drupal_ucfirst($parent['piece']);
            $path = $parent['path'];
          }

          if ($title && $path && !isset($skip_paths[$path])) {
            $breadcrumb[] = l($title, $path);
            $skip_paths[$path] = $path;
          }
        }

        // Show current page as plain text.
        if ($current_page_title) {
          if ($load_page_titles && $title = menu_get_active_title()) {
            $breadcrumb[] = check_plain($title);
          }
          elseif($title = drupal_get_title()) {
            $breadcrumb[] = $title;
          }
          // Create a title manually.
          else {
            $breadcrumb[] = drupal_ucfirst($current_page['piece']);
          }
        }
      }
      drupal_set_breadcrumb($breadcrumb);
    }
  }
}
