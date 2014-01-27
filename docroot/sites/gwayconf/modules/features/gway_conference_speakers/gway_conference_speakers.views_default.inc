<?php
/**
 * @file
 * gway_conference_speakers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gway_conference_speakers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'speaker';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Speaker';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Focus Session Speakers | Worship Track';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['id'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['table'] = 'field_data_field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['field'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['settings'] = array(
    'image_style' => 'bio_thumb',
    'image_link' => '',
  );
  /* Field: Content: Group Image */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_group_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => 'bio_thumb',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'speaker-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_speaker_organization']['id'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['table'] = 'field_data_field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['field'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_speaker_organization']['element_wrapper_class'] = 'speaker-org';
  $handler->display->display_options['fields']['field_speaker_organization']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['hide_alter_empty'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'speaker:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'speaker' => 'speaker',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Speakers List */
  $handler = $view->new_display('block', 'Speakers List', 'speaker_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['path']['hide_empty'] = TRUE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['id'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['table'] = 'field_data_field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['field'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_wrapper_class'] = 'speaker-image';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['settings'] = array(
    'image_style' => 'bio_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Group Image */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_group_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'speaker-image-group';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => 'group_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_speaker_organization']['id'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['table'] = 'field_data_field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['field'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_organization']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_organization']['alter']['text'] = '| [field_speaker_organization]';
  $handler->display->display_options['fields']['field_speaker_organization']['element_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_organization']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_organization']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'speaker-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_speaker_location']['id'] = 'field_speaker_location';
  $handler->display->display_options['fields']['field_speaker_location']['table'] = 'field_data_field_speaker_location';
  $handler->display->display_options['fields']['field_speaker_location']['field'] = 'field_speaker_location';
  $handler->display->display_options['fields']['field_speaker_location']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_location']['alter']['text'] = '| [field_speaker_location]';
  $handler->display->display_options['fields']['field_speaker_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_speaker_location']['element_class'] = 'speaker-location';
  $handler->display->display_options['fields']['field_speaker_location']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_location']['element_default_classes'] = FALSE;
  /* Field: Content: Organization Title / Position */
  $handler->display->display_options['fields']['field_speaker_position']['id'] = 'field_speaker_position';
  $handler->display->display_options['fields']['field_speaker_position']['table'] = 'field_data_field_speaker_position';
  $handler->display->display_options['fields']['field_speaker_position']['field'] = 'field_speaker_position';
  $handler->display->display_options['fields']['field_speaker_position']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_position']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_position']['alter']['text'] = '[field_speaker_position] <span class="speaker-organization">[field_speaker_organization]</span> <span class="speaker-location">[field_speaker_location]</span>';
  $handler->display->display_options['fields']['field_speaker_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_position']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_speaker_position']['element_wrapper_class'] = 'speaker-position';
  $handler->display->display_options['fields']['field_speaker_position']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Speaker Links */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_link']['separator'] = ' ';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_class'] = 'more';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Speaker Information';
  /* Field: Content: Speaker Type */
  $handler->display->display_options['fields']['field_speaker_type']['id'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['table'] = 'field_data_field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['field'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_type']['alter']['text'] = '[field_speaker_type]';
  $handler->display->display_options['fields']['field_speaker_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_type']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_type']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_speaker_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_speaker_type']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'speaker' => 'speaker',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Speaker Slideshow Block */
  $handler = $view->new_display('block', 'Speaker Slideshow Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Speakers';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
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
    'title' => 0,
    'field_speaker_image_thumbnail' => 0,
    'field_speaker_links' => 0,
    'field_speaker_location' => 0,
    'field_speaker_organization' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_speaker_image_thumbnail' => 0,
    'field_speaker_links' => 0,
    'field_speaker_location' => 0,
    'field_speaker_organization' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['id'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['table'] = 'field_data_field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['field'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_wrapper_class'] = 'speaker-image';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['settings'] = array(
    'image_style' => 'bio_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'speaker-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_speaker_organization']['id'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['table'] = 'field_data_field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['field'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_speaker_organization']['element_wrapper_class'] = 'speaker-org';
  $handler->display->display_options['fields']['field_speaker_organization']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['hide_alter_empty'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Speaker Type */
  $handler->display->display_options['fields']['field_speaker_type']['id'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['table'] = 'field_data_field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['field'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_type']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_type']['delta_limit'] = '7';
  $handler->display->display_options['fields']['field_speaker_type']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'speaker' => 'speaker',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Speaker List Home (Conference Host) */
  $handler = $view->new_display('block', 'Speaker List Home (Conference Host)', 'speaker_list_host');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['id'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['table'] = 'field_data_field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['field'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['alter']['path'] = 'speakers';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_wrapper_class'] = 'speaker-image';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Group Image */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'speaker-image-group';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="speaker-image">[field_speaker_image_thumbnail]</div>
<h2 class="speaker-name">[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'speakers';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'speaker-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_speaker_organization']['id'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['table'] = 'field_data_field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['field'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_speaker_organization']['element_wrapper_class'] = 'speaker-org';
  $handler->display->display_options['fields']['field_speaker_organization']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['hide_alter_empty'] = FALSE;
  /* Field: Content: Speaker Type */
  $handler->display->display_options['fields']['field_speaker_type']['id'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['table'] = 'field_data_field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['field'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_type']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'speaker' => 'speaker',
  );
  /* Filter criterion: Content: Speaker Type (field_speaker_type) */
  $handler->display->display_options['filters']['field_speaker_type_value']['id'] = 'field_speaker_type_value';
  $handler->display->display_options['filters']['field_speaker_type_value']['table'] = 'field_data_field_speaker_type';
  $handler->display->display_options['filters']['field_speaker_type_value']['field'] = 'field_speaker_type_value';
  $handler->display->display_options['filters']['field_speaker_type_value']['value'] = array(
    'leadership_session' => 'leadership_session',
    'worship_session' => 'worship_session',
  );

  /* Display: Speaker List Home (Featured) */
  $handler = $view->new_display('block', 'Speaker List Home (Featured)', 'speaker_list_featured');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Speakers';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['id'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['table'] = 'field_data_field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['field'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['alter']['path'] = 'speakers';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['settings'] = array(
    'image_style' => 'bio_thumb',
    'image_link' => '',
  );
  /* Field: Content: Group Image */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_group_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'speaker-image-group';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'speakers';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'speaker-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_speaker_organization']['id'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['table'] = 'field_data_field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['field'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_organization']['element_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_organization']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_organization']['element_wrapper_class'] = 'speaker-org';
  $handler->display->display_options['fields']['field_speaker_organization']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_organization']['hide_alter_empty'] = FALSE;
  /* Field: Content: Speaker Type */
  $handler->display->display_options['fields']['field_speaker_type']['id'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['table'] = 'field_data_field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['field'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_type']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_type']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'speaker' => 'speaker',
  );
  /* Filter criterion: Content: Speaker Type (field_speaker_type) */
  $handler->display->display_options['filters']['field_speaker_type_value']['id'] = 'field_speaker_type_value';
  $handler->display->display_options['filters']['field_speaker_type_value']['table'] = 'field_data_field_speaker_type';
  $handler->display->display_options['filters']['field_speaker_type_value']['field'] = 'field_speaker_type_value';
  $handler->display->display_options['filters']['field_speaker_type_value']['value'] = array(
    'featured' => 'featured',
  );

  /* Display: Speakers List for Registration Pages */
  $handler = $view->new_display('block', 'Speakers List for Registration Pages', 'speaker_list_event');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_speaker_type',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'desk-4 horz-tabt-4 vert-tabt-3 mobile-2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Conference Guests</h2>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Group Image */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_group_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'speaker-image-group';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['id'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['table'] = 'field_data_field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['field'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_wrapper_class'] = 'speaker-image';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'speaker-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Speaker Type */
  $handler->display->display_options['fields']['field_speaker_type']['id'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['table'] = 'field_data_field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['field'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_type']['alter']['text'] = '[field_speaker_type]';
  $handler->display->display_options['fields']['field_speaker_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_type']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_type']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_speaker_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_speaker_type']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Which Event is this Speaker speaking at? (field_speaker_conf_xref) */
  $handler->display->display_options['arguments']['field_speaker_conf_xref_nid']['id'] = 'field_speaker_conf_xref_nid';
  $handler->display->display_options['arguments']['field_speaker_conf_xref_nid']['table'] = 'field_data_field_speaker_conf_xref';
  $handler->display->display_options['arguments']['field_speaker_conf_xref_nid']['field'] = 'field_speaker_conf_xref_nid';
  $handler->display->display_options['arguments']['field_speaker_conf_xref_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_speaker_conf_xref_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_speaker_conf_xref_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_speaker_conf_xref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_speaker_conf_xref_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'speaker' => 'speaker',
  );

  /* Display: Sort Conference Speakers */
  $handler = $view->new_display('page', 'Sort Conference Speakers', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sort Conference Speakers';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'draggableviews' => 'draggableviews',
    'field_speaker_image_thumbnail' => 'field_speaker_image_thumbnail',
    'field_group_image' => 'field_group_image',
    'title' => 'title',
    'field_speaker_organization' => 'field_speaker_organization',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speaker_image_thumbnail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_group_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speaker_organization' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Save this Order';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['id'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['table'] = 'field_data_field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['field'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_wrapper_class'] = 'speaker-image';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Group Image */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'speaker-image-group';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'speaker-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_speaker_organization']['id'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['table'] = 'field_data_field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['field'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_speaker_organization']['element_wrapper_class'] = 'speaker-org';
  $handler->display->display_options['fields']['field_speaker_organization']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_organization']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'speaker' => 'speaker',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/workbench/sort-speakers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Sort Conference Speakers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Worship Track */
  $handler = $view->new_display('block', 'Worship Track', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'speaker' => 'speaker',
  );
  /* Filter criterion: Content: Speaker Type (field_speaker_type) */
  $handler->display->display_options['filters']['field_speaker_type_value']['id'] = 'field_speaker_type_value';
  $handler->display->display_options['filters']['field_speaker_type_value']['table'] = 'field_data_field_speaker_type';
  $handler->display->display_options['filters']['field_speaker_type_value']['field'] = 'field_speaker_type_value';
  $handler->display->display_options['filters']['field_speaker_type_value']['value'] = array(
    'worship_session' => 'worship_session',
  );

  /* Display: Leadership Track */
  $handler = $view->new_display('block', 'Leadership Track', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Focus Session Speakers | Leadership Track';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'speaker' => 'speaker',
  );
  /* Filter criterion: Content: Speaker Type (field_speaker_type) */
  $handler->display->display_options['filters']['field_speaker_type_value']['id'] = 'field_speaker_type_value';
  $handler->display->display_options['filters']['field_speaker_type_value']['table'] = 'field_data_field_speaker_type';
  $handler->display->display_options['filters']['field_speaker_type_value']['field'] = 'field_speaker_type_value';
  $handler->display->display_options['filters']['field_speaker_type_value']['value'] = array(
    'leadership_session' => 'leadership_session',
  );
  $export['speaker'] = $view;

  return $export;
}
