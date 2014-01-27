<?php
/**
 * @file
 * gway_ads.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gway_ads_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ad';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ad';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_ad_leaderboard_image' => 0,
    'title' => 0,
    'nid' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_ad_leaderboard_image' => 0,
    'title' => 0,
    'nid' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Leaderboard */
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['id'] = 'field_ad_leaderboard_image';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['table'] = 'field_data_field_ad_leaderboard_image';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['field'] = 'field_ad_leaderboard_image';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['label'] = '';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['settings'] = array(
    'image_style' => 'adaptive_no_resize',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['field_api_classes'] = 0;
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['value0']['id'] = 'value0';
  $handler->display->display_options['sorts']['value0']['table'] = 'draggableviews_structure_node0';
  $handler->display->display_options['sorts']['value0']['field'] = 'value0';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
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
    'ad' => 'ad',
  );
  /* Filter criterion: Content: Leaderboard (field_ad_leaderboard_image:fid) */
  $handler->display->display_options['filters']['field_ad_leaderboard_image_fid']['id'] = 'field_ad_leaderboard_image_fid';
  $handler->display->display_options['filters']['field_ad_leaderboard_image_fid']['table'] = 'field_data_field_ad_leaderboard_image';
  $handler->display->display_options['filters']['field_ad_leaderboard_image_fid']['field'] = 'field_ad_leaderboard_image_fid';
  $handler->display->display_options['filters']['field_ad_leaderboard_image_fid']['operator'] = 'not empty';

  /* Display: Ad Image Rotator Block */
  $handler = $view->new_display('block', 'Ad Image Rotator Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;

  /* Display: Ad Image Admin Page */
  $handler = $view->new_display('page', 'Ad Image Admin Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ads Admin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Leaderboard */
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['id'] = 'field_ad_leaderboard_image';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['table'] = 'field_data_field_ad_leaderboard_image';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['field'] = 'field_ad_leaderboard_image';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['field_api_classes'] = 0;
  /* Field: Content: Square */
  $handler->display->display_options['fields']['field_ad_square_image']['id'] = 'field_ad_square_image';
  $handler->display->display_options['fields']['field_ad_square_image']['table'] = 'field_data_field_ad_square_image';
  $handler->display->display_options['fields']['field_ad_square_image']['field'] = 'field_ad_square_image';
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ad_square_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ad_square_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_square_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_square_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ad_square_image']['field_api_classes'] = 0;
  /* Field: Content: Vertical Rectangle */
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['id'] = 'field_ad_vert_rectangle_image';
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['table'] = 'field_data_field_ad_vert_rectangle_image';
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['field'] = 'field_ad_vert_rectangle_image';
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ad_vert_rectangle_image']['field_api_classes'] = 0;
  /* Field: Content: Horizontal Rectangle */
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['id'] = 'field_ad_hor_rectangle_image';
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['table'] = 'field_data_field_ad_hor_rectangle_image';
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['field'] = 'field_ad_hor_rectangle_image';
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['field_api_classes'] = 0;
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value0']['id'] = 'value0';
  $handler->display->display_options['fields']['value0']['table'] = 'draggableviews_structure_node0';
  $handler->display->display_options['fields']['value0']['field'] = 'value0';
  $handler->display->display_options['fields']['value0']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value0']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value0']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value0']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value0']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value0']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value0']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value0']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value0']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value0']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value0']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value0']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value0']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value0']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value0']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value0']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value0']['hide_alter_empty'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  /* Field: Node: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ad' => 'ad',
  );
  $handler->display->display_options['path'] = 'ads/admin';

  /* Display: Ad: Leaderboard Random Block */
  $handler = $view->new_display('block', 'Ad: Leaderboard Random Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Leaderboard */
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['id'] = 'field_ad_leaderboard_image';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['table'] = 'field_data_field_ad_leaderboard_image';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['field'] = 'field_ad_leaderboard_image';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['label'] = '';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['settings'] = array(
    'image_style' => 'adaptive_no_resize',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ad_leaderboard_image']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

  /* Display: Ad: Horizontal Rectangle Block */
  $handler = $view->new_display('block', 'Ad: Horizontal Rectangle Block', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_ad_link']['id'] = 'field_ad_link';
  $handler->display->display_options['fields']['field_ad_link']['table'] = 'field_data_field_ad_link';
  $handler->display->display_options['fields']['field_ad_link']['field'] = 'field_ad_link';
  $handler->display->display_options['fields']['field_ad_link']['label'] = '';
  $handler->display->display_options['fields']['field_ad_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ad_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ad_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_link']['field_api_classes'] = 0;
  /* Field: Content: Horizontal Rectangle */
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['id'] = 'field_ad_hor_rectangle_image';
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['table'] = 'field_data_field_ad_hor_rectangle_image';
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['field'] = 'field_ad_hor_rectangle_image';
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['label'] = '';
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['path'] = '[field_ad_link]';
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['settings'] = array(
    'image_style' => 'adaptive_no_resize',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ad_hor_rectangle_image']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ad' => 'ad',
  );
  /* Filter criterion: Content: Horizontal Rectangle (field_ad_hor_rectangle_image:fid) */
  $handler->display->display_options['filters']['field_ad_hor_rectangle_image_fid']['id'] = 'field_ad_hor_rectangle_image_fid';
  $handler->display->display_options['filters']['field_ad_hor_rectangle_image_fid']['table'] = 'field_data_field_ad_hor_rectangle_image';
  $handler->display->display_options['filters']['field_ad_hor_rectangle_image_fid']['field'] = 'field_ad_hor_rectangle_image_fid';
  $handler->display->display_options['filters']['field_ad_hor_rectangle_image_fid']['operator'] = '!=';
  $export['ad'] = $view;

  return $export;
}
