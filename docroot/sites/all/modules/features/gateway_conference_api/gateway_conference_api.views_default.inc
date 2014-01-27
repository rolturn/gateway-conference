<?php
/**
 * @file
 * gateway_conference_api.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gateway_conference_api_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'api_conferences';
  $view->description = 'API for conference data';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'API Conferences';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'API Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'speakers';
  $handler->display->display_options['style_options']['top_child_object'] = 'speaker';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Group Image */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = 'group_image';
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_speaker_image']['id'] = 'field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['table'] = 'field_data_field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['field'] = 'field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_speaker_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['id'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['table'] = 'field_data_field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['field'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['label'] = 'image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_speaker_location']['id'] = 'field_speaker_location';
  $handler->display->display_options['fields']['field_speaker_location']['table'] = 'field_data_field_speaker_location';
  $handler->display->display_options['fields']['field_speaker_location']['field'] = 'field_speaker_location';
  $handler->display->display_options['fields']['field_speaker_location']['label'] = 'location';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_speaker_organization']['id'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['table'] = 'field_data_field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['field'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['label'] = 'organization';
  /* Field: Content: Organization Title / Position */
  $handler->display->display_options['fields']['field_speaker_position']['id'] = 'field_speaker_position';
  $handler->display->display_options['fields']['field_speaker_position']['table'] = 'field_data_field_speaker_position';
  $handler->display->display_options['fields']['field_speaker_position']['field'] = 'field_speaker_position';
  $handler->display->display_options['fields']['field_speaker_position']['label'] = 'organization_title';
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_speaker_quote']['id'] = 'field_speaker_quote';
  $handler->display->display_options['fields']['field_speaker_quote']['table'] = 'field_data_field_speaker_quote';
  $handler->display->display_options['fields']['field_speaker_quote']['field'] = 'field_speaker_quote';
  $handler->display->display_options['fields']['field_speaker_quote']['label'] = 'quote';
  /* Field: Content: Session Name */
  $handler->display->display_options['fields']['field_speaker_session_name']['id'] = 'field_speaker_session_name';
  $handler->display->display_options['fields']['field_speaker_session_name']['table'] = 'field_data_field_speaker_session_name';
  $handler->display->display_options['fields']['field_speaker_session_name']['field'] = 'field_speaker_session_name';
  $handler->display->display_options['fields']['field_speaker_session_name']['label'] = 'session_name';
  /* Field: Content: Session Summary */
  $handler->display->display_options['fields']['field_speaker_session_summary']['id'] = 'field_speaker_session_summary';
  $handler->display->display_options['fields']['field_speaker_session_summary']['table'] = 'field_data_field_speaker_session_summary';
  $handler->display->display_options['fields']['field_speaker_session_summary']['field'] = 'field_speaker_session_summary';
  $handler->display->display_options['fields']['field_speaker_session_summary']['label'] = 'session_summary';
  /* Field: Content: Banner Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = 'speaker_links';
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['delta_offset'] = '0';
  /* Field: Content: Speaker Type */
  $handler->display->display_options['fields']['field_speaker_type']['id'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['table'] = 'field_data_field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['field'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['label'] = 'speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['delta_offset'] = '0';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_speaker_twitter']['id'] = 'field_speaker_twitter';
  $handler->display->display_options['fields']['field_speaker_twitter']['table'] = 'field_data_field_speaker_twitter';
  $handler->display->display_options['fields']['field_speaker_twitter']['field'] = 'field_speaker_twitter';
  $handler->display->display_options['fields']['field_speaker_twitter']['label'] = 'twitter';
  /* Field: Content: Which Event is this Speaker speaking at? */
  $handler->display->display_options['fields']['field_speaker_conf_xref']['id'] = 'field_speaker_conf_xref';
  $handler->display->display_options['fields']['field_speaker_conf_xref']['table'] = 'field_data_field_speaker_conf_xref';
  $handler->display->display_options['fields']['field_speaker_conf_xref']['field'] = 'field_speaker_conf_xref';
  $handler->display->display_options['fields']['field_speaker_conf_xref']['label'] = 'speaker_event';
  $handler->display->display_options['fields']['field_speaker_conf_xref']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'speaker' => 'speaker',
  );

  /* Display: API Speaker Page */
  $handler = $view->new_display('page', 'API Speaker Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_speaker_facebook']['id'] = 'field_speaker_facebook';
  $handler->display->display_options['fields']['field_speaker_facebook']['table'] = 'field_data_field_speaker_facebook';
  $handler->display->display_options['fields']['field_speaker_facebook']['field'] = 'field_speaker_facebook';
  $handler->display->display_options['fields']['field_speaker_facebook']['label'] = 'facebook';
  /* Field: Content: Group Image */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = 'group_image';
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_speaker_image']['id'] = 'field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['table'] = 'field_data_field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['field'] = 'field_speaker_image';
  $handler->display->display_options['fields']['field_speaker_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_speaker_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['id'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['table'] = 'field_data_field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['field'] = 'field_speaker_image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['label'] = 'image_thumbnail';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image_thumbnail']['settings'] = array(
    'image_style' => 'api_speaker_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: API Image Thumbnail */
  $handler->display->display_options['fields']['field_api_image_thumbnail']['id'] = 'field_api_image_thumbnail';
  $handler->display->display_options['fields']['field_api_image_thumbnail']['table'] = 'field_data_field_api_image_thumbnail';
  $handler->display->display_options['fields']['field_api_image_thumbnail']['field'] = 'field_api_image_thumbnail';
  $handler->display->display_options['fields']['field_api_image_thumbnail']['label'] = 'image_api_thumbnail';
  $handler->display->display_options['fields']['field_api_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_api_image_thumbnail']['settings'] = array(
    'image_style' => 'api_speaker_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Image Banner */
  $handler->display->display_options['fields']['field_speaker_image_banner']['id'] = 'field_speaker_image_banner';
  $handler->display->display_options['fields']['field_speaker_image_banner']['table'] = 'field_data_field_speaker_image_banner';
  $handler->display->display_options['fields']['field_speaker_image_banner']['field'] = 'field_speaker_image_banner';
  $handler->display->display_options['fields']['field_speaker_image_banner']['label'] = 'image_banner';
  $handler->display->display_options['fields']['field_speaker_image_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_image_banner']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_speaker_image_banner']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_speaker_location']['id'] = 'field_speaker_location';
  $handler->display->display_options['fields']['field_speaker_location']['table'] = 'field_data_field_speaker_location';
  $handler->display->display_options['fields']['field_speaker_location']['field'] = 'field_speaker_location';
  $handler->display->display_options['fields']['field_speaker_location']['label'] = 'location';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_speaker_organization']['id'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['table'] = 'field_data_field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['field'] = 'field_speaker_organization';
  $handler->display->display_options['fields']['field_speaker_organization']['label'] = 'organization';
  /* Field: Content: Organization Title / Position */
  $handler->display->display_options['fields']['field_speaker_position']['id'] = 'field_speaker_position';
  $handler->display->display_options['fields']['field_speaker_position']['table'] = 'field_data_field_speaker_position';
  $handler->display->display_options['fields']['field_speaker_position']['field'] = 'field_speaker_position';
  $handler->display->display_options['fields']['field_speaker_position']['label'] = 'organization_title';
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_speaker_quote']['id'] = 'field_speaker_quote';
  $handler->display->display_options['fields']['field_speaker_quote']['table'] = 'field_data_field_speaker_quote';
  $handler->display->display_options['fields']['field_speaker_quote']['field'] = 'field_speaker_quote';
  $handler->display->display_options['fields']['field_speaker_quote']['label'] = 'quote';
  /* Field: Content: Session Name */
  $handler->display->display_options['fields']['field_speaker_session_name']['id'] = 'field_speaker_session_name';
  $handler->display->display_options['fields']['field_speaker_session_name']['table'] = 'field_data_field_speaker_session_name';
  $handler->display->display_options['fields']['field_speaker_session_name']['field'] = 'field_speaker_session_name';
  $handler->display->display_options['fields']['field_speaker_session_name']['label'] = 'session_name';
  /* Field: Content: Session Summary */
  $handler->display->display_options['fields']['field_speaker_session_summary']['id'] = 'field_speaker_session_summary';
  $handler->display->display_options['fields']['field_speaker_session_summary']['table'] = 'field_data_field_speaker_session_summary';
  $handler->display->display_options['fields']['field_speaker_session_summary']['field'] = 'field_speaker_session_summary';
  $handler->display->display_options['fields']['field_speaker_session_summary']['label'] = 'session_summary';
  /* Field: Content: Banner Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = 'speaker_links';
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_link']['delta_offset'] = '0';
  /* Field: Content: Speaker Type */
  $handler->display->display_options['fields']['field_speaker_type']['id'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['table'] = 'field_data_field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['field'] = 'field_speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['label'] = 'speaker_type';
  $handler->display->display_options['fields']['field_speaker_type']['delta_offset'] = '0';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_speaker_twitter']['id'] = 'field_speaker_twitter';
  $handler->display->display_options['fields']['field_speaker_twitter']['table'] = 'field_data_field_speaker_twitter';
  $handler->display->display_options['fields']['field_speaker_twitter']['field'] = 'field_speaker_twitter';
  $handler->display->display_options['fields']['field_speaker_twitter']['label'] = 'twitter';
  /* Field: Content: Which Event is this Speaker speaking at? */
  $handler->display->display_options['fields']['field_speaker_conf_xref']['id'] = 'field_speaker_conf_xref';
  $handler->display->display_options['fields']['field_speaker_conf_xref']['table'] = 'field_data_field_speaker_conf_xref';
  $handler->display->display_options['fields']['field_speaker_conf_xref']['field'] = 'field_speaker_conf_xref';
  $handler->display->display_options['fields']['field_speaker_conf_xref']['label'] = 'speaker_event';
  $handler->display->display_options['fields']['field_speaker_conf_xref']['delta_offset'] = '0';
  /* Field: Content: Banner Link */
  $handler->display->display_options['fields']['field_link_1']['id'] = 'field_link_1';
  $handler->display->display_options['fields']['field_link_1']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link_1']['field'] = 'field_link';
  /* Field: Content: url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'speaker:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['path'] = 'api/speakers';

  /* Display: API Schedule Page */
  $handler = $view->new_display('page_with_page_title', 'API Schedule Page', 'page_with_page_title_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'sessions';
  $handler->display->display_options['style_options']['top_child_object'] = 'session';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Room (field_session_room) */
  $handler->display->display_options['relationships']['field_session_room_nid']['id'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['relationships']['field_session_room_nid']['field'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['delta'] = '-1';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Additional Information */
  $handler->display->display_options['fields']['field_session_additional']['id'] = 'field_session_additional';
  $handler->display->display_options['fields']['field_session_additional']['table'] = 'field_data_field_session_additional';
  $handler->display->display_options['fields']['field_session_additional']['field'] = 'field_session_additional';
  $handler->display->display_options['fields']['field_session_additional']['label'] = 'additional_information';
  /* Field: Content: Session Day */
  $handler->display->display_options['fields']['field_session_day_1']['id'] = 'field_session_day_1';
  $handler->display->display_options['fields']['field_session_day_1']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['fields']['field_session_day_1']['field'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_day_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Session Time */
  $handler->display->display_options['fields']['field_session_time_1']['id'] = 'field_session_time_1';
  $handler->display->display_options['fields']['field_session_time_1']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time_1']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time_1']['label'] = 'datetime';
  $handler->display->display_options['fields']['field_session_time_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_time_1']['alter']['text'] = '[field_session_day_1] [field_session_time_1]';
  $handler->display->display_options['fields']['field_session_time_1']['settings'] = array(
    'format_type' => 'hour_military',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Session Day */
  $handler->display->display_options['fields']['field_session_day']['id'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['fields']['field_session_day']['field'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['label'] = 'session_day';
  $handler->display->display_options['fields']['field_session_day']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Session Time */
  $handler->display->display_options['fields']['field_session_time']['id'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['label'] = 'session_time';
  $handler->display->display_options['fields']['field_session_time']['settings'] = array(
    'format_type' => 'hour_full',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = 'speakers';
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'room_nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'room_title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['body_1']['label'] = 'room_body';
  /* Field: Content: Floor Plan */
  $handler->display->display_options['fields']['field_room_floor_plan']['id'] = 'field_room_floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['table'] = 'field_data_field_room_floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['field'] = 'field_room_floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['field_room_floor_plan']['label'] = 'room_floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_floor_plan']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_room_photo']['id'] = 'field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['table'] = 'field_data_field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['field'] = 'field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['field_room_photo']['label'] = 'room_image';
  $handler->display->display_options['fields']['field_room_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Survey URL */
  $handler->display->display_options['fields']['field_survey_url']['id'] = 'field_survey_url';
  $handler->display->display_options['fields']['field_survey_url']['table'] = 'field_data_field_survey_url';
  $handler->display->display_options['fields']['field_survey_url']['field'] = 'field_survey_url';
  $handler->display->display_options['fields']['field_survey_url']['label'] = 'survey';
  $handler->display->display_options['fields']['field_survey_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_survey_url']['type'] = 'link_plain';
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_track']['id'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['table'] = 'field_data_field_track';
  $handler->display->display_options['fields']['field_track']['field'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['label'] = 'track';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Session Day (field_session_day) */
  $handler->display->display_options['sorts']['field_session_day_value']['id'] = 'field_session_day_value';
  $handler->display->display_options['sorts']['field_session_day_value']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['sorts']['field_session_day_value']['field'] = 'field_session_day_value';
  /* Sort criterion: Content: Session Time (field_session_time) */
  $handler->display->display_options['sorts']['field_session_time_value']['id'] = 'field_session_time_value';
  $handler->display->display_options['sorts']['field_session_time_value']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['sorts']['field_session_time_value']['field'] = 'field_session_time_value';
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
    'Conference' => 'Conference',
    'PseudoTrack' => 'PseudoTrack',
  );
  $handler->display->display_options['path'] = 'api/schedule';

  /* Display: API Places Page */
  $handler = $view->new_display('page', 'API Places Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'places';
  $handler->display->display_options['style_options']['top_child_object'] = 'place';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Links */
  $handler->display->display_options['fields']['field_links']['id'] = 'field_links';
  $handler->display->display_options['fields']['field_links']['table'] = 'field_data_field_links';
  $handler->display->display_options['fields']['field_links']['field'] = 'field_links';
  $handler->display->display_options['fields']['field_links']['label'] = 'links';
  $handler->display->display_options['fields']['field_links']['delta_offset'] = '0';
  /* Field: Content: Place Category */
  $handler->display->display_options['fields']['field_taxonomy_nid']['id'] = 'field_taxonomy_nid';
  $handler->display->display_options['fields']['field_taxonomy_nid']['table'] = 'field_data_field_taxonomy_nid';
  $handler->display->display_options['fields']['field_taxonomy_nid']['field'] = 'field_taxonomy_nid';
  $handler->display->display_options['fields']['field_taxonomy_nid']['label'] = 'category';
  $handler->display->display_options['fields']['field_taxonomy_nid']['delta_offset'] = '0';
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = 'address';
  $handler->display->display_options['fields']['address']['hide'] = array(
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'country' => 0,
    'locpick' => 0,
    'phone' => 0,
    'province_name' => 0,
    'country_name' => 0,
    'map_link' => 0,
    'coords' => 0,
  );
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = 'street';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = 'city';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = 'state';
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = 'zip';
  /* Field: Location: Phone */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'location_phone';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  $handler->display->display_options['fields']['phone']['label'] = 'phone';
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'place' => 'place',
    'venue' => 'venue',
  );
  $handler->display->display_options['path'] = 'api/places';

  /* Display: API Place Term Page */
  $handler = $view->new_display('page', 'API Place Term Page', 'page_2');
  $handler->display->display_options['display_description'] = 'Feed of places matching the given tid (term id)';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'places';
  $handler->display->display_options['style_options']['top_child_object'] = 'place';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Links */
  $handler->display->display_options['fields']['field_links']['id'] = 'field_links';
  $handler->display->display_options['fields']['field_links']['table'] = 'field_data_field_links';
  $handler->display->display_options['fields']['field_links']['field'] = 'field_links';
  $handler->display->display_options['fields']['field_links']['label'] = 'links';
  $handler->display->display_options['fields']['field_links']['delta_offset'] = '0';
  /* Field: Content: Place Category */
  $handler->display->display_options['fields']['field_taxonomy_nid']['id'] = 'field_taxonomy_nid';
  $handler->display->display_options['fields']['field_taxonomy_nid']['table'] = 'field_data_field_taxonomy_nid';
  $handler->display->display_options['fields']['field_taxonomy_nid']['field'] = 'field_taxonomy_nid';
  $handler->display->display_options['fields']['field_taxonomy_nid']['label'] = 'category';
  $handler->display->display_options['fields']['field_taxonomy_nid']['delta_offset'] = '0';
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = 'address';
  $handler->display->display_options['fields']['address']['hide'] = array(
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'country' => 0,
    'locpick' => 0,
    'phone' => 0,
    'province_name' => 0,
    'country_name' => 0,
    'map_link' => 0,
    'coords' => 0,
  );
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = 'city';
  /* Field: Location: Phone */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'location_phone';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  $handler->display->display_options['fields']['phone']['label'] = 'phone';
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = 'zip';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = 'state';
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = 'street';
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Place Category (field_taxonomy_nid) */
  $handler->display->display_options['arguments']['field_taxonomy_nid_tid']['id'] = 'field_taxonomy_nid_tid';
  $handler->display->display_options['arguments']['field_taxonomy_nid_tid']['table'] = 'field_data_field_taxonomy_nid';
  $handler->display->display_options['arguments']['field_taxonomy_nid_tid']['field'] = 'field_taxonomy_nid_tid';
  $handler->display->display_options['arguments']['field_taxonomy_nid_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxonomy_nid_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_taxonomy_nid_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_taxonomy_nid_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_nid_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_nid_tid']['summary_options']['items_per_page'] = '25';
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
    'place' => 'place',
    'venue' => 'venue',
  );
  $handler->display->display_options['path'] = 'api/places/%';

  /* Display: API Room Page */
  $handler = $view->new_display('page_with_page_title', 'API Room Page', 'page_with_page_title_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'rooms';
  $handler->display->display_options['style_options']['top_child_object'] = 'room';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_room_photo']['id'] = 'field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['table'] = 'field_data_field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['field'] = 'field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['label'] = 'image';
  $handler->display->display_options['fields']['field_room_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_photo']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_room_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Floor Plan */
  $handler->display->display_options['fields']['field_room_floor_plan']['id'] = 'field_room_floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['table'] = 'field_data_field_room_floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['field'] = 'field_room_floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['label'] = 'floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_floor_plan']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_room_venue']['id'] = 'field_room_venue';
  $handler->display->display_options['fields']['field_room_venue']['table'] = 'field_data_field_room_venue';
  $handler->display->display_options['fields']['field_room_venue']['field'] = 'field_room_venue';
  $handler->display->display_options['fields']['field_room_venue']['label'] = 'venue_id';
  $handler->display->display_options['fields']['field_room_venue']['type'] = 'node_reference_nid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'room' => 'room',
  );
  $handler->display->display_options['path'] = 'api/rooms';

  /* Display: API Videos Page */
  $handler = $view->new_display('page_with_page_title', 'API Videos Page', 'page_with_page_title_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'videos';
  $handler->display->display_options['style_options']['top_child_object'] = 'video';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Video Categorization */
  $handler->display->display_options['fields']['field_video_tags']['id'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['table'] = 'field_data_field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['field'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['label'] = 'categorization';
  /* Field: Content: Image Upload */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Video Runtime */
  $handler->display->display_options['fields']['field_video_runtime']['id'] = 'field_video_runtime';
  $handler->display->display_options['fields']['field_video_runtime']['table'] = 'field_data_field_video_runtime';
  $handler->display->display_options['fields']['field_video_runtime']['field'] = 'field_video_runtime';
  $handler->display->display_options['fields']['field_video_runtime']['label'] = 'length';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['label'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'video' => 'video',
  );
  /* Filter criterion: Content: Video URL (field_video_url) */
  $handler->display->display_options['filters']['field_video_url_value']['id'] = 'field_video_url_value';
  $handler->display->display_options['filters']['field_video_url_value']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['filters']['field_video_url_value']['field'] = 'field_video_url_value';
  $handler->display->display_options['filters']['field_video_url_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'api/videos';

  /* Display: API Ministry Partners Page */
  $handler = $view->new_display('page_with_page_title', 'API Ministry Partners Page', 'page_with_page_title_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'partners';
  $handler->display->display_options['style_options']['top_child_object'] = 'partner';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_ministry_partner_logo']['id'] = 'field_ministry_partner_logo';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['table'] = 'field_data_field_ministry_partner_logo';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['field'] = 'field_ministry_partner_logo';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['label'] = 'logo';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_ministry_partner_url']['id'] = 'field_ministry_partner_url';
  $handler->display->display_options['fields']['field_ministry_partner_url']['table'] = 'field_data_field_ministry_partner_url';
  $handler->display->display_options['fields']['field_ministry_partner_url']['field'] = 'field_ministry_partner_url';
  $handler->display->display_options['fields']['field_ministry_partner_url']['label'] = 'url';
  $handler->display->display_options['fields']['field_ministry_partner_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ministry_partner_url']['type'] = 'link_plain';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = 'twitter';
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = 'facebook';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'ministry_partner' => 'ministry_partner',
  );
  $handler->display->display_options['path'] = 'api/partners';

  /* Display: API Activities Page */
  $handler = $view->new_display('page_with_page_title', 'API Activities Page', 'page_with_page_title_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'activities';
  $handler->display->display_options['style_options']['top_child_object'] = 'activity';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Cover Image */
  $handler->display->display_options['fields']['field_session_image']['id'] = 'field_session_image';
  $handler->display->display_options['fields']['field_session_image']['table'] = 'field_data_field_session_image';
  $handler->display->display_options['fields']['field_session_image']['field'] = 'field_session_image';
  $handler->display->display_options['fields']['field_session_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_session_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_session_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'activities:sort_activities_lists';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Session Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_value']['id'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_value']['field'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['value'] = array(
    'Activity' => 'Activity',
  );
  $handler->display->display_options['filters']['field_session_type_value']['group'] = 1;
  $handler->display->display_options['path'] = 'api/activities';

  /* Display: API Venues Page */
  $handler = $view->new_display('page_with_page_title', 'API Venues Page', 'page_with_page_title_6');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'venues';
  $handler->display->display_options['style_options']['top_child_object'] = 'venue';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Floor Plan */
  $handler->display->display_options['fields']['field_venue_floor_plan']['id'] = 'field_venue_floor_plan';
  $handler->display->display_options['fields']['field_venue_floor_plan']['table'] = 'field_data_field_venue_floor_plan';
  $handler->display->display_options['fields']['field_venue_floor_plan']['field'] = 'field_venue_floor_plan';
  $handler->display->display_options['fields']['field_venue_floor_plan']['label'] = 'floor_plan';
  $handler->display->display_options['fields']['field_venue_floor_plan']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_venue_floor_plan']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_venue_floor_plan']['delta_offset'] = '0';
  /* Field: Content: Venue Building Image */
  $handler->display->display_options['fields']['field_venue_building']['id'] = 'field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['table'] = 'field_data_field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['field'] = 'field_venue_building';
  $handler->display->display_options['fields']['field_venue_building']['label'] = 'image';
  $handler->display->display_options['fields']['field_venue_building']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_venue_building']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Venue Phone Number */
  $handler->display->display_options['fields']['field_venue_phone']['id'] = 'field_venue_phone';
  $handler->display->display_options['fields']['field_venue_phone']['table'] = 'field_data_field_venue_phone';
  $handler->display->display_options['fields']['field_venue_phone']['field'] = 'field_venue_phone';
  $handler->display->display_options['fields']['field_venue_phone']['label'] = 'phone';
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = 'street';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = 'city';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = 'state';
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = 'zip';
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'venue' => 'venue',
  );
  $handler->display->display_options['path'] = 'api/venues';

  /* Display: API Sponsors Page */
  $handler = $view->new_display('page', 'API Sponsors Page', 'page_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'sponsors';
  $handler->display->display_options['style_options']['top_child_object'] = 'sponsor';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = 'facebook';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_ministry_partner_logo']['id'] = 'field_ministry_partner_logo';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['table'] = 'field_data_field_ministry_partner_logo';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['field'] = 'field_ministry_partner_logo';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['label'] = 'logo';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_ministry_partner_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Ministry Partner Level */
  $handler->display->display_options['fields']['field_ministry_partner_level']['id'] = 'field_ministry_partner_level';
  $handler->display->display_options['fields']['field_ministry_partner_level']['table'] = 'field_data_field_ministry_partner_level';
  $handler->display->display_options['fields']['field_ministry_partner_level']['field'] = 'field_ministry_partner_level';
  $handler->display->display_options['fields']['field_ministry_partner_level']['label'] = 'level';
  $handler->display->display_options['fields']['field_ministry_partner_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = 'twitter';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_ministry_partner_url']['id'] = 'field_ministry_partner_url';
  $handler->display->display_options['fields']['field_ministry_partner_url']['table'] = 'field_data_field_ministry_partner_url';
  $handler->display->display_options['fields']['field_ministry_partner_url']['field'] = 'field_ministry_partner_url';
  $handler->display->display_options['fields']['field_ministry_partner_url']['label'] = 'url';
  $handler->display->display_options['fields']['field_ministry_partner_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ministry_partner_url']['type'] = 'link_plain';
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
    'ministry_partner' => 'ministry_partner',
  );
  $handler->display->display_options['path'] = 'api/sponsors';

  /* Display: API AR Targets Page */
  $handler = $view->new_display('page', 'API AR Targets Page', 'page_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['fields']['title']['label'] = 'name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_ar_target_type']['id'] = 'field_ar_target_type';
  $handler->display->display_options['fields']['field_ar_target_type']['table'] = 'field_data_field_ar_target_type';
  $handler->display->display_options['fields']['field_ar_target_type']['field'] = 'field_ar_target_type';
  $handler->display->display_options['fields']['field_ar_target_type']['label'] = 'type';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_ar_target_video']['id'] = 'field_ar_target_video';
  $handler->display->display_options['fields']['field_ar_target_video']['table'] = 'field_data_field_ar_target_video';
  $handler->display->display_options['fields']['field_ar_target_video']['field'] = 'field_ar_target_video';
  $handler->display->display_options['fields']['field_ar_target_video']['label'] = 'video';
  $handler->display->display_options['fields']['field_ar_target_video']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ar_target_video']['type'] = 'link_plain';
  /* Field: Content: Video Height */
  $handler->display->display_options['fields']['field_ar_target_video_height']['id'] = 'field_ar_target_video_height';
  $handler->display->display_options['fields']['field_ar_target_video_height']['table'] = 'field_data_field_ar_target_video_height';
  $handler->display->display_options['fields']['field_ar_target_video_height']['field'] = 'field_ar_target_video_height';
  $handler->display->display_options['fields']['field_ar_target_video_height']['label'] = 'video_height';
  $handler->display->display_options['fields']['field_ar_target_video_height']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_ar_target_video_height']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Video Width */
  $handler->display->display_options['fields']['field_ar_target_video_width']['id'] = 'field_ar_target_video_width';
  $handler->display->display_options['fields']['field_ar_target_video_width']['table'] = 'field_data_field_ar_target_video_width';
  $handler->display->display_options['fields']['field_ar_target_video_width']['field'] = 'field_ar_target_video_width';
  $handler->display->display_options['fields']['field_ar_target_video_width']['label'] = 'video_width';
  $handler->display->display_options['fields']['field_ar_target_video_width']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_ar_target_video_width']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Video Scale */
  $handler->display->display_options['fields']['field_ar_target_video_scale']['id'] = 'field_ar_target_video_scale';
  $handler->display->display_options['fields']['field_ar_target_video_scale']['table'] = 'field_data_field_ar_target_video_scale';
  $handler->display->display_options['fields']['field_ar_target_video_scale']['field'] = 'field_ar_target_video_scale';
  $handler->display->display_options['fields']['field_ar_target_video_scale']['label'] = 'video_scale';
  $handler->display->display_options['fields']['field_ar_target_video_scale']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Video Raw */
  $handler->display->display_options['fields']['field_ar_target_video_raw']['id'] = 'field_ar_target_video_raw';
  $handler->display->display_options['fields']['field_ar_target_video_raw']['table'] = 'field_data_field_ar_target_video_raw';
  $handler->display->display_options['fields']['field_ar_target_video_raw']['field'] = 'field_ar_target_video_raw';
  $handler->display->display_options['fields']['field_ar_target_video_raw']['label'] = 'video_raw';
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

  /* Display: API FAQ Page */
  $handler = $view->new_display('page', 'API FAQ Page', 'page_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'faqs';
  $handler->display->display_options['style_options']['top_child_object'] = 'faq';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
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
    'faq' => 'faq',
  );
  $handler->display->display_options['path'] = 'api/faq';

  /* Display: API Style Page */
  $handler = $view->new_display('page', 'API Style Page', 'page_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
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
  $handler->display->display_options['fields']['title']['label'] = '';
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

  /* Display: API Schedule-Full Page */
  $handler = $view->new_display('page_with_page_title', 'API Schedule-Full Page', 'page_with_page_title_7');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'sessions';
  $handler->display->display_options['style_options']['top_child_object'] = 'session';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Room (field_session_room) */
  $handler->display->display_options['relationships']['field_session_room_nid']['id'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['relationships']['field_session_room_nid']['field'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['delta'] = '-1';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Additional Information */
  $handler->display->display_options['fields']['field_session_additional']['id'] = 'field_session_additional';
  $handler->display->display_options['fields']['field_session_additional']['table'] = 'field_data_field_session_additional';
  $handler->display->display_options['fields']['field_session_additional']['field'] = 'field_session_additional';
  $handler->display->display_options['fields']['field_session_additional']['label'] = 'additional_information';
  /* Field: Content: Session Day */
  $handler->display->display_options['fields']['field_session_day_1']['id'] = 'field_session_day_1';
  $handler->display->display_options['fields']['field_session_day_1']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['fields']['field_session_day_1']['field'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_day_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Session Time */
  $handler->display->display_options['fields']['field_session_time_1']['id'] = 'field_session_time_1';
  $handler->display->display_options['fields']['field_session_time_1']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time_1']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time_1']['label'] = 'datetime';
  $handler->display->display_options['fields']['field_session_time_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_time_1']['alter']['text'] = '[field_session_day_1] [field_session_time_1]';
  $handler->display->display_options['fields']['field_session_time_1']['settings'] = array(
    'format_type' => 'hour_military',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Session Day */
  $handler->display->display_options['fields']['field_session_day']['id'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['fields']['field_session_day']['field'] = 'field_session_day';
  $handler->display->display_options['fields']['field_session_day']['label'] = 'session_day';
  $handler->display->display_options['fields']['field_session_day']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Session Time */
  $handler->display->display_options['fields']['field_session_time']['id'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['label'] = 'session_time';
  $handler->display->display_options['fields']['field_session_time']['settings'] = array(
    'format_type' => 'hour_full',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = 'speakers';
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'room_nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'room_title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['body_1']['label'] = 'room_body';
  /* Field: Content: Floor Plan */
  $handler->display->display_options['fields']['field_room_floor_plan']['id'] = 'field_room_floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['table'] = 'field_data_field_room_floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['field'] = 'field_room_floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['field_room_floor_plan']['label'] = 'room_floor_plan';
  $handler->display->display_options['fields']['field_room_floor_plan']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_floor_plan']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_room_photo']['id'] = 'field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['table'] = 'field_data_field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['field'] = 'field_room_photo';
  $handler->display->display_options['fields']['field_room_photo']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['field_room_photo']['label'] = 'room_image';
  $handler->display->display_options['fields']['field_room_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Survey URL */
  $handler->display->display_options['fields']['field_survey_url']['id'] = 'field_survey_url';
  $handler->display->display_options['fields']['field_survey_url']['table'] = 'field_data_field_survey_url';
  $handler->display->display_options['fields']['field_survey_url']['field'] = 'field_survey_url';
  $handler->display->display_options['fields']['field_survey_url']['label'] = 'survey';
  $handler->display->display_options['fields']['field_survey_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_survey_url']['type'] = 'link_plain';
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_track']['id'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['table'] = 'field_data_field_track';
  $handler->display->display_options['fields']['field_track']['field'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['label'] = 'track';
  $handler->display->display_options['fields']['field_track']['type'] = 'node_reference_nid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Session Day (field_session_day) */
  $handler->display->display_options['sorts']['field_session_day_value']['id'] = 'field_session_day_value';
  $handler->display->display_options['sorts']['field_session_day_value']['table'] = 'field_data_field_session_day';
  $handler->display->display_options['sorts']['field_session_day_value']['field'] = 'field_session_day_value';
  /* Sort criterion: Content: Session Time (field_session_time) */
  $handler->display->display_options['sorts']['field_session_time_value']['id'] = 'field_session_time_value';
  $handler->display->display_options['sorts']['field_session_time_value']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['sorts']['field_session_time_value']['field'] = 'field_session_time_value';
  /* Sort criterion: Content: Track (field_track) */
  $handler->display->display_options['sorts']['field_track_nid']['id'] = 'field_track_nid';
  $handler->display->display_options['sorts']['field_track_nid']['table'] = 'field_data_field_track';
  $handler->display->display_options['sorts']['field_track_nid']['field'] = 'field_track_nid';
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
  $handler->display->display_options['filters']['field_session_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_session_type_value']['value'] = array(
    'PseudoTrack' => 'PseudoTrack',
  );
  $handler->display->display_options['path'] = 'api/schedule/full';

  /* Display: API Track Page */
  $handler = $view->new_display('page_with_page_title', 'API Track Page', 'page_with_page_title_8');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'tracks';
  $handler->display->display_options['style_options']['top_child_object'] = 'track';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Room (field_session_room) */
  $handler->display->display_options['relationships']['field_session_room_nid']['id'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['relationships']['field_session_room_nid']['field'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['delta'] = '-1';
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Survey URL */
  $handler->display->display_options['fields']['field_survey_url']['id'] = 'field_survey_url';
  $handler->display->display_options['fields']['field_survey_url']['table'] = 'field_data_field_survey_url';
  $handler->display->display_options['fields']['field_survey_url']['field'] = 'field_survey_url';
  $handler->display->display_options['fields']['field_survey_url']['label'] = 'survey';
  $handler->display->display_options['fields']['field_survey_url']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'track' => 'track',
  );
  $handler->display->display_options['path'] = 'api/tracks';
  $export['api_conferences'] = $view;

  $view = new view();
  $view->name = 'api_conferences_taxonomy';
  $view->description = 'API for conference taxonomy terms';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'API Conferences Taxonomy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'API Conferences Taxonomy';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'places_categories';
  $handler->display->display_options['style_options']['top_child_object'] = 'category';
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
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'tid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'place_category' => 'place_category',
  );

  /* Display: API Places Categories Page */
  $handler = $view->new_display('page', 'API Places Categories Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'api/places-categories';

  /* Display: API Venues Page */
  $handler = $view->new_display('page', 'API Venues Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'venues';
  $handler->display->display_options['style_options']['top_child_object'] = 'venue';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'venue' => 'venue',
  );
  $handler->display->display_options['path'] = 'api/places/venues';
  $export['api_conferences_taxonomy'] = $view;

  return $export;
}
