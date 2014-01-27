<?php
/**
 * @file
 * gateway_conference_registrations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gateway_conference_registrations_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'registrations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'registrations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Registration';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Field: Content: Is Childcare Available? */
  $handler->display->display_options['fields']['field_registations_child_avail']['id'] = 'field_registations_child_avail';
  $handler->display->display_options['fields']['field_registations_child_avail']['table'] = 'field_data_field_registations_child_avail';
  $handler->display->display_options['fields']['field_registations_child_avail']['field'] = 'field_registations_child_avail';
  $handler->display->display_options['fields']['field_registations_child_avail']['label'] = '';
  $handler->display->display_options['fields']['field_registations_child_avail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['text'] = 'Childcare Available';
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_registations_child_avail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_registations_child_avail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registations_child_avail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_registations_child_avail']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_registations_child_avail']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_registations_child_avail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_registations_child_avail']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_registations_child_avail']['field_api_classes'] = 0;
  /* Field: Content: Event Date / Time */
  $handler->display->display_options['fields']['field_registrations_event_date_1']['id'] = 'field_registrations_event_date_1';
  $handler->display->display_options['fields']['field_registrations_event_date_1']['table'] = 'field_data_field_registrations_event_date';
  $handler->display->display_options['fields']['field_registrations_event_date_1']['field'] = 'field_registrations_event_date';
  $handler->display->display_options['fields']['field_registrations_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_registrations_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_registrations_event_date_1']['settings'] = array(
    'format_type' => 'day_of_week',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_registrations_event_date_1']['field_api_classes'] = 0;
  /* Field: Content: Event Date / Time */
  $handler->display->display_options['fields']['field_registrations_event_date']['id'] = 'field_registrations_event_date';
  $handler->display->display_options['fields']['field_registrations_event_date']['table'] = 'field_data_field_registrations_event_date';
  $handler->display->display_options['fields']['field_registrations_event_date']['field'] = 'field_registrations_event_date';
  $handler->display->display_options['fields']['field_registrations_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_registrations_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registrations_event_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_registrations_event_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_registrations_event_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_registrations_event_date']['settings'] = array(
    'format_type' => 'start_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_registrations_event_date']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>
[field_registrations_event_date], [field_registrations_event_date_1]<br />
<em>[field_registations_child_avail]</em>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'registration-block-link';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
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
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
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
    'registrations' => 'registrations',
  );

  /* Display: Registration Options Block */
  $handler = $view->new_display('block', 'Registration Options Block', 'registration_options_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
    'registrations' => 'registrations',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Type (field_registrations_type) */
  $handler->display->display_options['filters']['field_registrations_type_value']['id'] = 'field_registrations_type_value';
  $handler->display->display_options['filters']['field_registrations_type_value']['table'] = 'field_data_field_registrations_type';
  $handler->display->display_options['filters']['field_registrations_type_value']['field'] = 'field_registrations_type_value';
  $handler->display->display_options['filters']['field_registrations_type_value']['value'] = array(
    'conference' => 'conference',
  );

  /* Display: Special Event Block */
  $handler = $view->new_display('block', 'Special Event Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<hgroup>
<h2>Pink Impact 2013</h2>
</hgroup>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<h2 class="registration-title">[title]</h2>';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'registration-block-link';
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'registration-block-link';
  $handler->display->display_options['fields']['view_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'registrations' => 'registrations',
  );
  $export['registrations'] = $view;

  return $export;
}
