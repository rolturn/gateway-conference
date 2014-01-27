<?php
/**
 * @file
 * conference_sessions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function conference_sessions_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_div_one|node|session|full';
  $field_group->group_name = 'group_div_one';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Activity Time',
    'weight' => '3',
    'children' => array(
      0 => 'field_session_day',
      1 => 'field_session_time',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Activity Time',
      'instance_settings' => array(
        'classes' => 'activity-time',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_div_one|node|session|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_location|node|session|form';
  $field_group->group_name = 'group_session_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '7',
    'children' => array(
      0 => 'field_session_room',
      1 => 'field_session_venue',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_session_location|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_organization|node|session|form';
  $field_group->group_name = 'group_session_organization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Track or Suggested level',
    'weight' => '8',
    'children' => array(
      0 => 'field_session_level',
      1 => 'field_session_track',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_session_organization|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_time_slot|node|session|form';
  $field_group->group_name = 'group_session_time_slot';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Session Day & Time',
    'weight' => '2',
    'children' => array(
      0 => 'field_session_type',
      1 => 'field_session_which_conf',
      2 => 'field_session_day',
      3 => 'field_session_time',
      4 => 'field_event_xref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_session_time_slot|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sessions_details|node|session|form';
  $field_group->group_name = 'group_sessions_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Session Details',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_session_slides',
      2 => 'field_session_speakers',
      3 => 'field_session_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sessions_details|node|session|form'] = $field_group;

  return $export;
}
