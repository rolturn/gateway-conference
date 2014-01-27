<?php
/**
 * @file
 * gway_slideshow_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gway_slideshow_slider_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'sliding_banners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sliding Banners';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['class'] = 'slide';
  $handler->display->display_options['style_options']['wrapper_class'] = 'home-slider';
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
    'field_home_banner_link' => 0,
    'field_home_banner_image' => 0,
    'title' => 0,
    'field_home_banner_teaser' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_home_banner_link' => 0,
    'field_home_banner_image' => 0,
    'title' => 0,
    'field_home_banner_teaser' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_options'] = '{"fit":"1"}';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_home_banner_link]" class="home-banner-link" title="[title]"><h1 class="home-title-bg">[title]</h1><br />
<div class="home-teaser-bg">[field_home_banner_teaser]</div><br />
<div class="more">Learn More</a>';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Banner Teaser  */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_teaser']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_teaser']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_teaser']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_teaser']['field_api_classes'] = 0;
  /* Field: Content: Image Upload */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'home_banners',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Speaker Links */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_link']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_separate';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = 0;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'sliding_banners:sort_sliding_banners';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'home_banners' => 'home_banners',
  );
  /* Filter criterion: Content: Where would you like this banner to be placed? (field_home_banner_where) */
  $handler->display->display_options['filters']['field_home_banner_where_value']['id'] = 'field_home_banner_where_value';
  $handler->display->display_options['filters']['field_home_banner_where_value']['table'] = 'field_data_field_home_banner_where';
  $handler->display->display_options['filters']['field_home_banner_where_value']['field'] = 'field_home_banner_where_value';
  $handler->display->display_options['filters']['field_home_banner_where_value']['value'] = array(
    'Home' => 'Home',
  );

  /* Display: Sliding Banner */
  $handler = $view->new_display('block', 'Sliding Banner', 'sliding_banner');

  /* Display: Sort Content: Sliding Banners */
  $handler = $view->new_display('page', 'Sort Content: Sliding Banners', 'sort_sliding_banners');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_teaser' => 'field_teaser',
    'field_image' => 'field_image',
    'field_link' => 'field_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_teaser' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['draggableviews']['hide_empty'] = 0;
  $handler->display->display_options['fields']['draggableviews']['empty_zero'] = 0;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Save this Order';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_home_banner_link]" class="home-banner-link" title="[title]"><h1 class="home-title-bg">[title]</h1><br />
<div class="home-teaser-bg">[field_home_banner_teaser]</div><br />
<div class="more">Learn More</a>';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Banner Teaser  */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_teaser']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_teaser']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_teaser']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_teaser']['field_api_classes'] = 0;
  /* Field: Content: Image Upload */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'home_banners',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Speaker Links */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_link']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_separate';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'admin/workbench/sort-content/sliding-banners';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Sort Sliding Banner';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $export['sliding_banners'] = $view;

  return $export;
}
