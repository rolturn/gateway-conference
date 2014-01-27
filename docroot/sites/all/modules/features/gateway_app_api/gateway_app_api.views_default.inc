<?php
/**
 * @file
 * gateway_app_api.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gateway_app_api_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'api_apps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'API Apps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'API Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'appstyles';
  $handler->display->display_options['style_options']['top_child_object'] = 'appstyle';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'app_style' => 'app_style',
  );

  /* Display: API Style Page */
  $handler = $view->new_display('page', 'API Style Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: arEnabled */
  $handler->display->display_options['fields']['field_arenabled']['id'] = 'field_arenabled';
  $handler->display->display_options['fields']['field_arenabled']['table'] = 'field_data_field_arenabled';
  $handler->display->display_options['fields']['field_arenabled']['field'] = 'field_arenabled';
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
    'app_style' => 'app_style',
  );
  $handler->display->display_options['path'] = 'api/style';

  /* Display: API AR Targets Page */
  $handler = $view->new_display('page', 'API AR Targets Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'artargets';
  $handler->display->display_options['style_options']['top_child_object'] = 'artarget';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_ar_target_type']['id'] = 'field_ar_target_type';
  $handler->display->display_options['fields']['field_ar_target_type']['table'] = 'field_data_field_ar_target_type';
  $handler->display->display_options['fields']['field_ar_target_type']['field'] = 'field_ar_target_type';
  $handler->display->display_options['fields']['field_ar_target_type']['label'] = 'type';
  /* Field: Content: Video Height */
  $handler->display->display_options['fields']['field_ar_target_video_height']['id'] = 'field_ar_target_video_height';
  $handler->display->display_options['fields']['field_ar_target_video_height']['table'] = 'field_data_field_ar_target_video_height';
  $handler->display->display_options['fields']['field_ar_target_video_height']['field'] = 'field_ar_target_video_height';
  $handler->display->display_options['fields']['field_ar_target_video_height']['label'] = 'video_height';
  $handler->display->display_options['fields']['field_ar_target_video_height']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Video Raw */
  $handler->display->display_options['fields']['field_ar_target_video_raw']['id'] = 'field_ar_target_video_raw';
  $handler->display->display_options['fields']['field_ar_target_video_raw']['table'] = 'field_data_field_ar_target_video_raw';
  $handler->display->display_options['fields']['field_ar_target_video_raw']['field'] = 'field_ar_target_video_raw';
  $handler->display->display_options['fields']['field_ar_target_video_raw']['label'] = 'video_raw';
  /* Field: Content: Video Scale */
  $handler->display->display_options['fields']['field_ar_target_video_scale']['id'] = 'field_ar_target_video_scale';
  $handler->display->display_options['fields']['field_ar_target_video_scale']['table'] = 'field_data_field_ar_target_video_scale';
  $handler->display->display_options['fields']['field_ar_target_video_scale']['field'] = 'field_ar_target_video_scale';
  $handler->display->display_options['fields']['field_ar_target_video_scale']['label'] = 'video_scale';
  $handler->display->display_options['fields']['field_ar_target_video_scale']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_ar_target_video']['id'] = 'field_ar_target_video';
  $handler->display->display_options['fields']['field_ar_target_video']['table'] = 'field_data_field_ar_target_video';
  $handler->display->display_options['fields']['field_ar_target_video']['field'] = 'field_ar_target_video';
  $handler->display->display_options['fields']['field_ar_target_video']['label'] = 'video';
  $handler->display->display_options['fields']['field_ar_target_video']['click_sort_column'] = 'url';
  /* Field: Content: Video Width */
  $handler->display->display_options['fields']['field_ar_target_video_width']['id'] = 'field_ar_target_video_width';
  $handler->display->display_options['fields']['field_ar_target_video_width']['table'] = 'field_data_field_ar_target_video_width';
  $handler->display->display_options['fields']['field_ar_target_video_width']['field'] = 'field_ar_target_video_width';
  $handler->display->display_options['fields']['field_ar_target_video_width']['label'] = 'video_width';
  $handler->display->display_options['fields']['field_ar_target_video_width']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
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
    'ar_target' => 'ar_target',
  );
  $handler->display->display_options['path'] = 'api/artargets';
  $export['api_apps'] = $view;

  return $export;
}
