<?php
/**
 * @file
 * gway_ministry_partner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gway_ministry_partner_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ministry_partner';
  $view->description = 'Ministry Partner';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ministry Partner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ministry Partners';
  $handler->display->display_options['css_class'] = 'ministry-partner-list';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_ministry_partner_logo']['id'] = 'field_ministry_partner_logo';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['table'] = 'field_data_field_ministry_partner_logo';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['field'] = 'field_ministry_partner_logo';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['label'] = '';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ministry_partner_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['settings'] = array(
    'image_style' => 'adaptive_no_resize',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ministry_partner_logo']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ministry_partner' => 'ministry_partner',
  );

  /* Display: Ministry Partner Block */
  $handler = $view->new_display('block', 'Ministry Partner Block', 'ministry_partner_list');
  $export['ministry_partner'] = $view;

  return $export;
}
