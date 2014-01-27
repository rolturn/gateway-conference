<?php
/**
 * @file
 * gc_downloads.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gc_downloads_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'download';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Download';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Download';
  $handler->display->display_options['css_class'] = 'downloads';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
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
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Download Wallpaper Preview */
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['id'] = 'field_download_wallpaper_preview';
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['table'] = 'field_data_field_download_wallpaper_preview';
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['field'] = 'field_download_wallpaper_preview';
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_download_wallpaper_file']['id'] = 'field_download_wallpaper_file';
  $handler->display->display_options['fields']['field_download_wallpaper_file']['table'] = 'field_data_field_download_wallpaper_file';
  $handler->display->display_options['fields']['field_download_wallpaper_file']['field'] = 'field_download_wallpaper_file';
  $handler->display->display_options['fields']['field_download_wallpaper_file']['label'] = 'Wallpaper File Upload';
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_file']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'downloads' => 'downloads',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_download_wallpaper_file_fid']['id'] = 'field_download_wallpaper_file_fid';
  $handler->display->display_options['filters']['field_download_wallpaper_file_fid']['table'] = 'field_data_field_download_wallpaper_file';
  $handler->display->display_options['filters']['field_download_wallpaper_file_fid']['field'] = 'field_download_wallpaper_file_fid';
  $handler->display->display_options['filters']['field_download_wallpaper_file_fid']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
  );

  /* Display: Download Banner Block */
  $handler = $view->new_display('block', 'Download Banner Block', 'banners');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Add a banner to: Facebook, Twitter or Blog.';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Download Banner Description';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Just copy the embedded code under the image links below, and then paste the code into the appropriate place on your blog or webpage.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
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
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Banner';
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
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Width */
  $handler->display->display_options['fields']['field_download_banner_width']['id'] = 'field_download_banner_width';
  $handler->display->display_options['fields']['field_download_banner_width']['table'] = 'field_data_field_download_banner_width';
  $handler->display->display_options['fields']['field_download_banner_width']['field'] = 'field_download_banner_width';
  $handler->display->display_options['fields']['field_download_banner_width']['label'] = '';
  $handler->display->display_options['fields']['field_download_banner_width']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_banner_width']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_download_banner_width']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_banner_width']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_download_banner_width']['field_api_classes'] = 0;
  /* Field: Content: Height */
  $handler->display->display_options['fields']['field_download_banner_height']['id'] = 'field_download_banner_height';
  $handler->display->display_options['fields']['field_download_banner_height']['table'] = 'field_data_field_download_banner_height';
  $handler->display->display_options['fields']['field_download_banner_height']['field'] = 'field_download_banner_height';
  $handler->display->display_options['fields']['field_download_banner_height']['label'] = '';
  $handler->display->display_options['fields']['field_download_banner_height']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_banner_height']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_download_banner_height']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_banner_height']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_download_banner_height']['field_api_classes'] = 0;
  /* Field: Content: Image Upload */
  $handler->display->display_options['fields']['field_download_banner_image']['id'] = 'field_download_banner_image';
  $handler->display->display_options['fields']['field_download_banner_image']['table'] = 'field_data_field_download_banner_image';
  $handler->display->display_options['fields']['field_download_banner_image']['field'] = 'field_download_banner_image';
  $handler->display->display_options['fields']['field_download_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['text'] = '<img class="banner" width="[field_download_banner_width]" height="[field_download_banner_height]" alt="[title]" src="[field_download_banner_image]" alt="[title]" />';
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_banner_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download_banner_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_banner_image']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_download_banner_image']['field_api_classes'] = 0;
  /* Field: Content: Image Upload */
  $handler->display->display_options['fields']['field_download_banner_image_1']['id'] = 'field_download_banner_image_1';
  $handler->display->display_options['fields']['field_download_banner_image_1']['table'] = 'field_data_field_download_banner_image';
  $handler->display->display_options['fields']['field_download_banner_image_1']['field'] = 'field_download_banner_image';
  $handler->display->display_options['fields']['field_download_banner_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['text'] = '<pre><code>&lt;a href="http://www.thealphasummit.com">&lt;img height="[field_download_banner_width]" width="[field_download_banner_height]" alt="[title]" src="[field_download_banner_image_1]" />&lt;/a></code></pre>';
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_banner_image_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download_banner_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_banner_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_banner_image_1']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_download_banner_image_1']['field_api_classes'] = 0;
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
    'downloads' => 'downloads',
  );
  /* Filter criterion: Content: Image Upload (field_download_banner_image:fid) */
  $handler->display->display_options['filters']['field_download_banner_image_fid']['id'] = 'field_download_banner_image_fid';
  $handler->display->display_options['filters']['field_download_banner_image_fid']['table'] = 'field_data_field_download_banner_image';
  $handler->display->display_options['filters']['field_download_banner_image_fid']['field'] = 'field_download_banner_image_fid';
  $handler->display->display_options['filters']['field_download_banner_image_fid']['operator'] = 'not empty';

  /* Display: Download PDF Block */
  $handler = $view->new_display('block', 'Download PDF Block', 'downloads_pdf');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PDF Downloads';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
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
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'tabs';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'change this file';
  /* Field: Content: Download PDF File Upload */
  $handler->display->display_options['fields']['field_download_pdf_file']['id'] = 'field_download_pdf_file';
  $handler->display->display_options['fields']['field_download_pdf_file']['table'] = 'field_data_field_download_pdf_file';
  $handler->display->display_options['fields']['field_download_pdf_file']['field'] = 'field_download_pdf_file';
  $handler->display->display_options['fields']['field_download_pdf_file']['label'] = '';
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_pdf_file']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_download_pdf_file']['element_wrapper_class'] = 'pdf';
  $handler->display->display_options['fields']['field_download_pdf_file']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_pdf_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_pdf_file']['type'] = 'direct_download';
  $handler->display->display_options['fields']['field_download_pdf_file']['field_api_classes'] = 0;
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
    'downloads' => 'downloads',
  );
  /* Filter criterion: Content: Download PDF File Upload (field_download_pdf_file:fid) */
  $handler->display->display_options['filters']['field_download_pdf_file_fid']['id'] = 'field_download_pdf_file_fid';
  $handler->display->display_options['filters']['field_download_pdf_file_fid']['table'] = 'field_data_field_download_pdf_file';
  $handler->display->display_options['filters']['field_download_pdf_file_fid']['field'] = 'field_download_pdf_file_fid';
  $handler->display->display_options['filters']['field_download_pdf_file_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Which page would you like pdf displayed on? (field_download_pdf_page) */
  $handler->display->display_options['filters']['field_download_pdf_page_value']['id'] = 'field_download_pdf_page_value';
  $handler->display->display_options['filters']['field_download_pdf_page_value']['table'] = 'field_data_field_download_pdf_page';
  $handler->display->display_options['filters']['field_download_pdf_page_value']['field'] = 'field_download_pdf_page_value';
  $handler->display->display_options['filters']['field_download_pdf_page_value']['value'] = array(
    'downloads' => 'downloads',
  );

  /* Display: Download Video Block */
  $handler = $view->new_display('block', 'Download Video Block', 'block_2');
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
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video_nid']['id'] = 'field_video_nid';
  $handler->display->display_options['fields']['field_video_nid']['table'] = 'field_data_field_video_nid';
  $handler->display->display_options['fields']['field_video_nid']['field'] = 'field_video_nid';
  $handler->display->display_options['fields']['field_video_nid']['label'] = '';
  $handler->display->display_options['fields']['field_video_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_video_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_video_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_video_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_video_nid']['type'] = 'node_reference_node';
  $handler->display->display_options['fields']['field_video_nid']['settings'] = array(
    'node_reference_view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_video_nid']['field_api_classes'] = 0;
  /* Field: Content: video Description */
  $handler->display->display_options['fields']['field_video_description']['id'] = 'field_video_description';
  $handler->display->display_options['fields']['field_video_description']['table'] = 'field_data_field_video_description';
  $handler->display->display_options['fields']['field_video_description']['field'] = 'field_video_description';
  $handler->display->display_options['fields']['field_video_description']['label'] = '';
  $handler->display->display_options['fields']['field_video_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_video_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_video_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_video_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_video_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_video_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_video_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_video_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_video_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_video_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_video_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_video_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_video_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_video_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_video_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_video_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_video_description']['field_api_classes'] = 0;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_video']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_video']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_video']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_video']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_video']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video']['field_api_classes'] = 0;
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
    'downloads' => 'downloads',
  );
  /* Filter criterion: Content: Video (field_video:fid) */
  $handler->display->display_options['filters']['field_video_fid']['id'] = 'field_video_fid';
  $handler->display->display_options['filters']['field_video_fid']['table'] = 'field_data_field_video';
  $handler->display->display_options['filters']['field_video_fid']['field'] = 'field_video_fid';
  $handler->display->display_options['filters']['field_video_fid']['operator'] = 'not empty';

  /* Display: Download Wallpaper Block */
  $handler = $view->new_display('block', 'Download Wallpaper Block', 'wallpaper');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Wallpapers';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
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
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'tabs';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this Wallpaper';
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
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Download Wallpaper Preview */
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['id'] = 'field_download_wallpaper_preview';
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['table'] = 'field_data_field_download_wallpaper_preview';
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['field'] = 'field_download_wallpaper_preview';
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['label'] = '';
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['settings'] = array(
    'image_style' => 'adaptive',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_download_wallpaper_preview']['field_api_classes'] = 0;
  /* Field: Content: Desktop, 4:3 (example: 1920x1440) */
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['id'] = 'field_download_wallpaper_4x3';
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['table'] = 'field_data_field_download_wallpaper_4x3';
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['field'] = 'field_download_wallpaper_4x3';
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['label'] = '';
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['text'] = '1920 x 1440';
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['path'] = '[field_download_wallpaper_4x3]';
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['link_class'] = 'button';
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['type'] = 'direct_download';
  $handler->display->display_options['fields']['field_download_wallpaper_4x3']['field_api_classes'] = 0;
  /* Field: Content: Desktop, 5:4 (example: 1280x1024) */
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['id'] = 'field_download_wallpaper_5x4';
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['table'] = 'field_data_field_download_wallpaper_5x4';
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['field'] = 'field_download_wallpaper_5x4';
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['label'] = '';
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['type'] = 'direct_download';
  $handler->display->display_options['fields']['field_download_wallpaper_5x4']['field_api_classes'] = 0;
  /* Field: Content: Desktop, HD (example: 1920x1080) */
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['id'] = 'field_download_wallpaper_hd';
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['table'] = 'field_data_field_download_wallpaper_hd';
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['field'] = 'field_download_wallpaper_hd';
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['label'] = '';
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['type'] = 'direct_download';
  $handler->display->display_options['fields']['field_download_wallpaper_hd']['field_api_classes'] = 0;
  /* Field: Content: Desktop, Wide (example: 2560x1600) */
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['id'] = 'field_download_wallpaper_wide';
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['table'] = 'field_data_field_download_wallpaper_wide';
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['field'] = 'field_download_wallpaper_wide';
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['label'] = '';
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['type'] = 'direct_download';
  $handler->display->display_options['fields']['field_download_wallpaper_wide']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['id'] = 'field_download_wallpaper_phone';
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['table'] = 'field_data_field_download_wallpaper_phone';
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['field'] = 'field_download_wallpaper_phone';
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['label'] = '';
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['type'] = 'direct_download';
  $handler->display->display_options['fields']['field_download_wallpaper_phone']['field_api_classes'] = 0;
  /* Field: Content: Tablet */
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['id'] = 'field_download_wallpaper_tablet';
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['table'] = 'field_data_field_download_wallpaper_tablet';
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['field'] = 'field_download_wallpaper_tablet';
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['label'] = '';
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['type'] = 'direct_download';
  $handler->display->display_options['fields']['field_download_wallpaper_tablet']['field_api_classes'] = 0;
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
    'downloads' => 'downloads',
  );
  /* Filter criterion: Content: Download Wallpaper Preview (field_download_wallpaper_preview:fid) */
  $handler->display->display_options['filters']['field_download_wallpaper_preview_fid']['id'] = 'field_download_wallpaper_preview_fid';
  $handler->display->display_options['filters']['field_download_wallpaper_preview_fid']['table'] = 'field_data_field_download_wallpaper_preview';
  $handler->display->display_options['filters']['field_download_wallpaper_preview_fid']['field'] = 'field_download_wallpaper_preview_fid';
  $handler->display->display_options['filters']['field_download_wallpaper_preview_fid']['operator'] = 'not empty';
  $export['download'] = $view;

  return $export;
}
