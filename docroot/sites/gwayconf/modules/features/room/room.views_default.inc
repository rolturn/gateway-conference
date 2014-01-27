<?php
/**
 * @file
 * room.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function room_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'rooms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'rooms';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Rooms';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'room_image_row';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
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
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_room_photo']['id'] = 'field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['table'] = 'field_data_field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['field'] = 'field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['label'] = '';
  $handler->display->display_options['fields']['field_room_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_room_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_room_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_room_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_room_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_photo']['settings'] = array(
    'image_style' => 'room_image_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_room_photo']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room' => 'room',
  );

  /* Display: Room Images By Venue Block */
  $handler = $view->new_display('block', 'Room Images By Venue Block', 'block_1');
  $handler->display->display_options['display_description'] = 'Displays images for all of the rooms for a specific venue.';
  $export['rooms'] = $view;

  return $export;
}
