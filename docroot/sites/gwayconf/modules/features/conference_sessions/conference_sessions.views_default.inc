<?php
/**
 * @file
 * conference_sessions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function conference_sessions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  /* Field: Content: Cover Image */
  $handler->display->display_options['fields']['field_session_image']['id'] = 'field_session_image';
  $handler->display->display_options['fields']['field_session_image']['table'] = 'field_data_field_session_image';
  $handler->display->display_options['fields']['field_session_image']['field'] = 'field_session_image';
  $handler->display->display_options['fields']['field_session_image']['label'] = '';
  $handler->display->display_options['fields']['field_session_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_session_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_session_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_session_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_session_image']['settings'] = array(
    'image_style' => 'adaptive_no_resize',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Session Day */
  $handler->display->display_options['fields']['field_session_day']['id'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['fields']['field_session_day']['field'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['label'] = '';
  $handler->display->display_options['fields']['field_session_day']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_day']['element_type'] = '0';
  $handler->display->display_options['fields']['field_session_day']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_session_day']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_day']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_day']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_day']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_day']['settings'] = array(
    'format_type' => 'day_of_week',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Session Time */
  $handler->display->display_options['fields']['field_session_time']['id'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['label'] = '';
  $handler->display->display_options['fields']['field_session_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_time']['element_type'] = '0';
  $handler->display->display_options['fields']['field_session_time']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_session_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_time']['settings'] = array(
    'format_type' => 'hour_full',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this Activity';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Session Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_value']['id'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_value']['field'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['value'] = array(
    'Activity' => 'Activity',
  );

  /* Display: Activities List */
  $handler = $view->new_display('block', 'Activities List', 'activities_list');

  /* Display: Sort Activities List */
  $handler = $view->new_display('page', 'Sort Activities List', 'sort_activities_lists');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sort Activities List';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'draggableviews' => 'draggableviews',
    'title' => 'title',
    'field_session_day' => 'field_session_day',
    'field_session_time' => 'field_session_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'draggableviews' => array(
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
    'field_session_day' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_time' => array(
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Session Day */
  $handler->display->display_options['fields']['field_session_day']['id'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['fields']['field_session_day']['field'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['settings'] = array(
    'format_type' => 'day_of_week',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Session Time */
  $handler->display->display_options['fields']['field_session_time']['id'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['settings'] = array(
    'format_type' => 'hour_full',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['path'] = 'admin/workbench/sort-activities-list';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Sort Activity List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['activities'] = $view;

  $view = new view();
  $view->name = 'schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Schedule';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'schedule';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_session_which_conf',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    1 => array(
      'field' => 'field_session_day',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'schedule-event clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Session Day */
  $handler->display->display_options['fields']['field_session_day']['id'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['fields']['field_session_day']['field'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['label'] = '';
  $handler->display->display_options['fields']['field_session_day']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_day']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_session_day']['element_class'] = 'session-day';
  $handler->display->display_options['fields']['field_session_day']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_day']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_day']['settings'] = array(
    'format_type' => 'day_full',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Session Time */
  $handler->display->display_options['fields']['field_session_time']['id'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['label'] = '';
  $handler->display->display_options['fields']['field_session_time']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_session_time']['element_class'] = 'session-time';
  $handler->display->display_options['fields']['field_session_time']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_session_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_time']['settings'] = array(
    'format_type' => 'hour_full',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'session-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Additional Information */
  $handler->display->display_options['fields']['field_session_additional']['id'] = 'field_session_additional';
  $handler->display->display_options['fields']['field_session_additional']['table'] = 'field_data_field_session_additional';
  $handler->display->display_options['fields']['field_session_additional']['field'] = 'field_session_additional';
  $handler->display->display_options['fields']['field_session_additional']['label'] = '';
  $handler->display->display_options['fields']['field_session_additional']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_session_additional']['element_class'] = 'session-additional';
  $handler->display->display_options['fields']['field_session_additional']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_session_additional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_additional']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_additional']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_additional']['hide_empty'] = TRUE;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['label'] = '';
  $handler->display->display_options['fields']['field_session_room']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_session_room']['element_class'] = 'session-room';
  $handler->display->display_options['fields']['field_session_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_room']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_room']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_room']['hide_alter_empty'] = FALSE;
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_session_speakers']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_session_speakers']['element_class'] = 'session-speakers';
  $handler->display->display_options['fields']['field_session_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_speakers']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_speakers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_speakers']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="clearfix"></div>
[edit_node]';
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'more clearfix';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this Session';
  /* Sort criterion: Content: Session Day (field_session_day) */
  $handler->display->display_options['sorts']['field_session_day_value']['id'] = 'field_session_day_value';
  $handler->display->display_options['sorts']['field_session_day_value']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['sorts']['field_session_day_value']['field'] = 'field_session_day_value';
  /* Sort criterion: Content: Session Time (field_session_time) */
  $handler->display->display_options['sorts']['field_session_time_value']['id'] = 'field_session_time_value';
  $handler->display->display_options['sorts']['field_session_time_value']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['sorts']['field_session_time_value']['field'] = 'field_session_time_value';
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
    'schedule_item' => 'schedule_item',
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Session Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_value']['id'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_value']['field'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_session_type_value']['value'] = array(
    'Activity' => 'Activity',
  );

  /* Display: Schedule Block */
  $handler = $view->new_display('block', 'Schedule Block', 'conference_schedule');
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
    'schedule_item' => 'schedule_item',
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Session Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_value']['id'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_value']['field'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_session_type_value']['value'] = array(
    'Pre-Conference' => 'Pre-Conference',
    'Activity' => 'Activity',
  );

  /* Display: Special Events Schedule Block */
  $handler = $view->new_display('block', 'Special Events Schedule Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    1 => array(
      'field' => 'field_session_day',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'schedule-event clearfix';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'session-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Regular Registration Description */
  $handler->display->display_options['fields']['field_registrations_description']['id'] = 'field_registrations_description';
  $handler->display->display_options['fields']['field_registrations_description']['table'] = 'field_data_field_registrations_description';
  $handler->display->display_options['fields']['field_registrations_description']['field'] = 'field_registrations_description';
  $handler->display->display_options['fields']['field_registrations_description']['label'] = '';
  $handler->display->display_options['fields']['field_registrations_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_registrations_description']['element_class'] = 'session-additional-special';
  $handler->display->display_options['fields']['field_registrations_description']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_registrations_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registrations_description']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'more';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this Session';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Event Type (field_registrations_type) */
  $handler->display->display_options['filters']['field_registrations_type_value']['id'] = 'field_registrations_type_value';
  $handler->display->display_options['filters']['field_registrations_type_value']['table'] = 'field_data_field_registrations_type';
  $handler->display->display_options['filters']['field_registrations_type_value']['field'] = 'field_registrations_type_value';
  $handler->display->display_options['filters']['field_registrations_type_value']['value'] = array(
    'special_event' => 'special_event',
  );
  $handler->display->display_options['filters']['field_registrations_type_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'registrations' => 'registrations',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['schedule'] = $view;

  $view = new view();
  $view->name = 'sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_session_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_speakers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Session Time */
  $handler->display->display_options['fields']['field_session_time']['id'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['label'] = '';
  $handler->display->display_options['fields']['field_session_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'session' => 'session',
  );

  /* Display: Block: All Sessions */
  $handler = $view->new_display('block', 'Block: All Sessions', 'block');

  /* Display: Block: BKS1 - Leadership */
  $handler = $view->new_display('block', 'Block: BKS1 - Leadership', 'block_1');
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Session Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_value']['id'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_value']['field'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['value'] = array(
    'Workshop' => 'Workshop',
  );
  /* Filter criterion: Content: Track (field_track) */
  $handler->display->display_options['filters']['field_track_nid']['id'] = 'field_track_nid';
  $handler->display->display_options['filters']['field_track_nid']['table'] = 'field_data_field_track';
  $handler->display->display_options['filters']['field_track_nid']['field'] = 'field_track_nid';
  $handler->display->display_options['filters']['field_track_nid']['value'] = array(
    1981 => '1981',
  );

  /* Display: Block: BKS1 - Worship */
  $handler = $view->new_display('block', 'Block: BKS1 - Worship', 'block_2');
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Session Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_value']['id'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_value']['field'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['value'] = array(
    'Workshop' => 'Workshop',
  );
  /* Filter criterion: Content: Track (field_track) */
  $handler->display->display_options['filters']['field_track_nid']['id'] = 'field_track_nid';
  $handler->display->display_options['filters']['field_track_nid']['table'] = 'field_data_field_track';
  $handler->display->display_options['filters']['field_track_nid']['field'] = 'field_track_nid';
  $handler->display->display_options['filters']['field_track_nid']['value'] = array(
    1986 => '1986',
  );

  /* Display: App: Session Track 2 */
  $handler = $view->new_display('block', 'App: Session Track 2', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_session_time',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = 'Teachers';
  $handler->display->display_options['fields']['field_session_speakers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Session Time */
  $handler->display->display_options['fields']['field_session_time']['id'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['label'] = '';
  $handler->display->display_options['fields']['field_session_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time']['settings'] = array(
    'format_type' => 'hour_full',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Track (old) (field_session_track) */
  $handler->display->display_options['filters']['field_session_track_value']['id'] = 'field_session_track_value';
  $handler->display->display_options['filters']['field_session_track_value']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['filters']['field_session_track_value']['field'] = 'field_session_track_value';
  $handler->display->display_options['filters']['field_session_track_value']['value'] = array(
    'Track 2' => 'Track 2',
  );
  /* Filter criterion: Content: Session Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_value']['id'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_value']['field'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['value'] = array(
    'Activity' => 'Activity',
  );

  /* Display: App: Session Track 1 */
  $handler = $view->new_display('block', 'App: Session Track 1', 'block_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_session_time',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = 'Teachers';
  $handler->display->display_options['fields']['field_session_speakers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Session Time */
  $handler->display->display_options['fields']['field_session_time']['id'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['label'] = '';
  $handler->display->display_options['fields']['field_session_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time']['settings'] = array(
    'format_type' => 'hour_full',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Track (old) (field_session_track) */
  $handler->display->display_options['filters']['field_session_track_value']['id'] = 'field_session_track_value';
  $handler->display->display_options['filters']['field_session_track_value']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['filters']['field_session_track_value']['field'] = 'field_session_track_value';
  $handler->display->display_options['filters']['field_session_track_value']['value'] = array(
    'Track 1' => 'Track 1',
  );
  /* Filter criterion: Content: Session Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_value']['id'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_value']['field'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['value'] = array(
    'Activity' => 'Activity',
  );

  /* Display: Block: BKS2 - Leadership */
  $handler = $view->new_display('block', 'Block: BKS2 - Leadership', 'block_5');
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Session Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_value']['id'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_value']['field'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['value'] = array(
    'Workshop' => 'Workshop',
  );
  /* Filter criterion: Content: Track (field_track) */
  $handler->display->display_options['filters']['field_track_nid']['id'] = 'field_track_nid';
  $handler->display->display_options['filters']['field_track_nid']['table'] = 'field_data_field_track';
  $handler->display->display_options['filters']['field_track_nid']['field'] = 'field_track_nid';
  $handler->display->display_options['filters']['field_track_nid']['value'] = array(
    1996 => '1996',
  );

  /* Display: Block: BKS2 - Worship */
  $handler = $view->new_display('block', 'Block: BKS2 - Worship', 'block_6');
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Session Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_value']['id'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_value']['field'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['value'] = array(
    'Workshop' => 'Workshop',
  );
  /* Filter criterion: Content: Track (field_track) */
  $handler->display->display_options['filters']['field_track_nid']['id'] = 'field_track_nid';
  $handler->display->display_options['filters']['field_track_nid']['table'] = 'field_data_field_track';
  $handler->display->display_options['filters']['field_track_nid']['field'] = 'field_track_nid';
  $handler->display->display_options['filters']['field_track_nid']['value'] = array(
    1991 => '1991',
  );
  $export['sessions'] = $view;

  return $export;
}
