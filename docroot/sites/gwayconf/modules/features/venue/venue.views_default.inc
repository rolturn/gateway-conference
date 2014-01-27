<?php
/**
 * @file
 * venue.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function venue_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'venue';
  $view->description = 'Output elements from the Venue Content-Type';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Venue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Content: Venue Building Image */
  $handler->display->display_options['fields']['field_venue_building']['id'] = 'field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['table'] = 'field_data_field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['field'] = 'field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['label'] = '';
  $handler->display->display_options['fields']['field_venue_building']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['alter']['path'] = 'registration/[name]';
  $handler->display->display_options['fields']['field_venue_building']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue_building']['element_wrapper_class'] = 'venue-image';
  $handler->display->display_options['fields']['field_venue_building']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_venue_building']['settings'] = array(
    'image_style' => 'venue_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_venue_building']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'registration/[name]';
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
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'venue-name';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Venue Address */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'venue' => 'venue',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Venue Image */
  $handler = $view->new_display('block', 'Venue Image', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Venue Phone Number */
  $handler->display->display_options['fields']['field_venue_phone']['id'] = 'field_venue_phone';
  $handler->display->display_options['fields']['field_venue_phone']['table'] = 'field_data_field_venue_phone';
  $handler->display->display_options['fields']['field_venue_phone']['field'] = 'field_venue_phone';
  $handler->display->display_options['fields']['field_venue_phone']['label'] = '';
  $handler->display->display_options['fields']['field_venue_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_venue_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_venue_phone']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Venue Building Image */
  $handler->display->display_options['fields']['field_venue_building']['id'] = 'field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['table'] = 'field_data_field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['field'] = 'field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['label'] = '';
  $handler->display->display_options['fields']['field_venue_building']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue_building']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_venue_building']['settings'] = array(
    'image_style' => 'home_banners',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_venue_building']['field_api_classes'] = 0;

  /* Display: Venue Header Info */
  $handler = $view->new_display('block', 'Venue Header Info', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
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
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;

  /* Display: Venue Registration List */
  $handler = $view->new_display('block', 'Venue Registration List', 'venue_registration_list');
  $handler->display->display_options['display_description'] = 'list of venue options on registration Landing page';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'venue' => 'venue',
    'place_category' => 0,
    'session_type' => 0,
    'speaker_type' => 0,
    'tags' => 0,
  );

  /* Display: Venue List */
  $handler = $view->new_display('block', 'Venue List', 'block_2');
  $handler->display->display_options['display_description'] = 'list of venue options on venue Landing page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'desk-2 horz-tabt-2 vert-tabt-2 mobile-2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Venue Building Image */
  $handler->display->display_options['fields']['field_venue_building']['id'] = 'field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['table'] = 'field_data_field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['field'] = 'field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['label'] = '';
  $handler->display->display_options['fields']['field_venue_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue_building']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['path'] = 'registration/[name]';
  $handler->display->display_options['fields']['field_venue_building']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue_building']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_venue_building']['settings'] = array(
    'image_style' => 'venue_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_venue_building']['field_api_classes'] = 0;
  /* Field: Content: Venue Address */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['preserve_tags'] = '<div>';
  $handler->display->display_options['fields']['field_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location']['field_api_classes'] = 0;
  /* Field: Content: Venue Phone Number */
  $handler->display->display_options['fields']['field_venue_phone']['id'] = 'field_venue_phone';
  $handler->display->display_options['fields']['field_venue_phone']['table'] = 'field_data_field_venue_phone';
  $handler->display->display_options['fields']['field_venue_phone']['field'] = 'field_venue_phone';
  $handler->display->display_options['fields']['field_venue_phone']['label'] = '';
  $handler->display->display_options['fields']['field_venue_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_venue_phone']['element_class'] = 'venue-phone';
  $handler->display->display_options['fields']['field_venue_phone']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_venue_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue_phone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_venue_phone']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_venue_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_venue_phone']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="venue-image">[field_venue_building]</div>
<h3>[title]</h3>
[field_venue_phone]
[field_location]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'registration-block-link';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_class'] = 'registration-link-block';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;

  /* Display: Venue Volunteer List */
  $handler = $view->new_display('block', 'Venue Volunteer List', 'venue_volunteer_list');
  $handler->display->display_options['display_description'] = 'list of venue options on volunteer Landing page';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'venue' => 'venue',
    'place_category' => 0,
    'session_type' => 0,
    'speaker_type' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Content: Venue Building Image */
  $handler->display->display_options['fields']['field_venue_building']['id'] = 'field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['table'] = 'field_data_field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['field'] = 'field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['label'] = '';
  $handler->display->display_options['fields']['field_venue_building']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['alter']['path'] = 'registration/[name]/volunteer';
  $handler->display->display_options['fields']['field_venue_building']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue_building']['element_wrapper_class'] = 'venue-image';
  $handler->display->display_options['fields']['field_venue_building']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_venue_building']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_venue_building']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_venue_building']['settings'] = array(
    'image_style' => 'venue_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_venue_building']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'registration/[name]/volunteer';
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
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'venue-name';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $export['venue'] = $view;

  return $export;
}
