<?php

/**
 * @file
 * Contains theme override functions and preprocess functions for the gway_boottype theme.
 */


/**
 * Changes the default meta content-type tag to the shorter HTML5 version
 */
function gway_boot_html_head_alter(&$head_elements) {
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );
}




/**
 * Assign the elements of the form to variables so
 * the themer can use those values to control how the 
 * form elements are displayed, or alternatively
 * displaying the whole form as constructed.
 */

function add_placeholder(&$form){
    foreach($form as $key => $val){
        if(substr($key,0,1) == '#' && $form[$key] == 'textfield'){
            $form['#attributes'] = array('placeholder' => t('some text'));
        }else if(is_array($form[$key])){
            add_placeholder($form[$key]);
        }
    }
}


/**
 * Search Bar Changes
 */

function gway_boot_preprocess_search_block_form(&$vars) {
	
	// change type to search per HTML5
  $vars['search_form'] = str_replace('type="text"', 'type="search"', $vars['search_form']);
	
	// change empty value to Placeholder HTML tag which becomes text inside field no longer needs javascript
  $vars['search_form'] = str_replace('value=""', 'placeholder="Search"', $vars['search_form']);

}

function gway_boot_form_alter(&$form, &$form_state, $form_id) {
	//dsm($form);
  if ($form_id == 'search_block_form') {
		
		// Change the text on the label element
    $form['search_block_form']['#title'] = t('Search'); 
		
		// Hint
    $form['search_block_form']['#attributes']['title'] = 'Enter the topic you wish to search for'; 
		
		// Toggle label visibilty
    $form['search_block_form']['#title_display'] = 'invisible'; 
		
		 // define size of the textfield
    $form['search_block_form']['#size'] = 20; 

		
		// HTML5 makes this unnecessary, Set a default value for the textfield
    //$form['search_block_form']['#default_value'] = t('Search'); 
		
		 // Change the text on the submit button, since I am busing image this is unnecessary
    //$form['actions']['submit']['#value'] = t('GO!');
		
		//if you want a hover state spacer should be the exact size of your background images
    $form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/spacer.png'); 

		//Add extra attributes to the text box, HTML5 makes this unnecessary
    //$form['search_block_form']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Search';}"; 
    //$form['search_block_form']['#attributes']['onfocus'] = "if (this.value == 'Search') {this.value = '';}";
  }
} 

/**
 * Uses RDFa attributes if the RDF module is enabled
 * Lifted from Adaptivetheme for D7, full credit to Jeff Burnz
 * ref: http://drupal.org/node/887600
 */
function gway_boot_preprocess_html(&$vars) {
  if (module_exists('rdf')) {
    $vars['doctype'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD HTML+RDFa 1.1//EN">' . "\n";
    $vars['rdf']->version = 'version=HTML+RDFa 1.1';
    $vars['rdf']->namespaces = $vars['rdf_namespaces'];
    $vars['rdf']->profile = ' profile="' . $vars['grddl_profile'] . '"';
  } else {
    $vars['doctype'] = '<!DOCTYPE html>' . "\n";
    $vars['rdf']->version = '';
    $vars['rdf']->namespaces = '';
    $vars['rdf']->profile = '';
  }
		//Add conditional stylsheet for IE 9 and lower
	  drupal_add_css(drupal_get_path('theme', 'gway_boottype') .'/css/fix-ie.css', array('weight' => CSS_THEME, 'browsers' => array('IE' => 'lt IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
}


/**
 * Override Core CSS, borrowed from Tao, contribe modules should be placed here too if they 
 * create more code to override than it is benefitting us.
 */
function gway_boot_css_alter(&$css) {
  $exclude = array(
    'modules/system/system.menus.css' => FALSE,

    /* Other core css that could be neutralized, cut & paste above in alphabetical order */
		/*
    'sites/all/modules/nice_menus/nice_menus.css' => FALSE,
		'misc/vertical-tabs.css' => FALSE,
    'modules/aggregator/aggregator.css' => FALSE,
    'modules/block/block.css' => FALSE,
    'modules/book/book.css' => FALSE,
    'modules/comment/comment.css' => FALSE,
    'modules/dblog/dblog.css' => FALSE,
    'modules/file/file.css' => FALSE,
    'modules/filter/filter.css' => FALSE,
    'modules/forum/forum.css' => FALSE,
    'modules/help/help.css' => FALSE,
    'modules/menu/menu.css' => FALSE,
    'modules/node/node.css' => FALSE,
    'modules/openid/openid.css' => FALSE,
    'modules/poll/poll.css' => FALSE,
    'modules/profile/profile.css' => FALSE,
    'modules/search/search.css' => FALSE,
    'modules/statistics/statistics.css' => FALSE,
    'modules/syslog/syslog.css' => FALSE,
    'modules/system/admin.css' => FALSE,
    'modules/system/maintenance.css' => FALSE,
    'modules/system/system.css' => FALSE,
    'modules/system/system.admin.css' => FALSE,
    'modules/system/system.base.css' => FALSE,
    'modules/system/system.maintenance.css' => FALSE,
    'modules/system/system.messages.css' => FALSE,
    'modules/system/system.theme.css' => FALSE,
    'modules/taxonomy/taxonomy.css' => FALSE,
    'modules/tracker/tracker.css' => FALSE,
    'modules/update/update.css' => FALSE,
    'modules/user/user.css' => FALSE,*/
  );
  $css = array_diff_key($css, $exclude);
	
}

/**
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
 */
function gway_boot_breadcrumb($vars) {
  $breadcrumb = $vars['breadcrumb'];
  // Determine if we are to display the breadcrumb.
  $show_breadcrumb = theme_get_setting('breadcrumb_display');
  if ($show_breadcrumb == 'yes') {

    // Optionally get rid of the homepage link.
    $show_breadcrumb_home = theme_get_setting('breadcrumb_home');
    if (!$show_breadcrumb_home) {
      array_shift($breadcrumb);
    }

    // Return the breadcrumb with separators.
    if (!empty($breadcrumb)) {
      $separator = filter_xss(theme_get_setting('breadcrumb_separator'));
      $trailing_separator = $title = '';

      // Add the title and trailing separator
      if (theme_get_setting('breadcrumb_title')) {
        if ($title = drupal_get_title()) {
          $trailing_separator = $separator;
        }
      }
      // Just add the trailing separator
      elseif (theme_get_setting('breadcrumb_trailing')) {
        $trailing_separator = $separator;
      }

      // Assemble the breadcrumb
      return implode($separator, $breadcrumb) . $trailing_separator . $title;
    }
  }
  // Otherwise, return an empty string.
  return '';
}

function gway_boot_menu_tree($variables) {
	  // Adjusted the output of this to nav rather than div the following line was
	  // return '<ul class="menu">' . $variables['tree'] . '</ul>';
  return '<nav class="menu"><ul>' . $variables['tree'] . '</ul></nav>';
}

function gway_boot_item_list($variables) {
  $items = $variables['items'];
  $title = $variables['title'];
  $type = $variables['type'];
  $attributes = $variables['attributes'];
	  // Adjusted the output of this to nav rather than div. If it is found that
	  // this outputs more than just navigation items the following should be changed back to
		// $output = '<div class="item-list">'; and the closing nav too.

  $output = '<nav class="item-list">';
  if (isset($title)) {
    $output .= '<h3>' . $title . '</h3>';
  }

  if (!empty($items)) {
    $output .= "<$type" . drupal_attributes($attributes) . '>';
    $num_items = count($items);
    foreach ($items as $i => $item) {
      $attributes = array();
      $children = array();
      $data = '';
      if (is_array($item)) {
        foreach ($item as $key => $value) {
          if ($key == 'data') {
            $data = $value;
          }
          elseif ($key == 'children') {
            $children = $value;
          }
          else {
            $attributes[$key] = $value;
          }
        }
      }
      else {
        $data = $item;
      }
      if (count($children) > 0) {
        // Render nested list.
        $data .= theme_item_list(array('items' => $children, 'title' => NULL, 'type' => $type, 'attributes' => $attributes));
      }
      if ($i == 0) {
        $attributes['class'][] = 'first';
      }
      if ($i == $num_items - 1) {
        $attributes['class'][] = 'last';
      }
      $output .= '<li' . drupal_attributes($attributes) . '>' . $data . "</li>\n";
    }
    $output .= "</$type>";
  }
  $output .= '</nav>';
  return $output;
}
