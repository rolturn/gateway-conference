<?php
/**
 * @file
 * gway_conference_speakers.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gway_conference_speakers_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_div_one|node|speaker|full';
  $field_group->group_name = 'group_div_one';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speaker';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Div Group One',
    'weight' => '4',
    'children' => array(
      0 => 'field_speaker_location',
      1 => 'field_speaker_organization',
      2 => 'field_speaker_position',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Div Group One',
      'instance_settings' => array(
        'classes' => 'speaker-info-grp',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_div_one|node|speaker|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_categorization|node|speaker|form';
  $field_group->group_name = 'group_speaker_categorization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speaker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speaker Categorization',
    'weight' => '5',
    'children' => array(
      0 => 'field_speaker_type',
      1 => 'field_speaker_conf_xref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_speaker_categorization|node|speaker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_extras|node|speaker|form';
  $field_group->group_name = 'group_speaker_extras';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speaker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speaker Extras',
    'weight' => '10',
    'children' => array(
      0 => 'field_speaker_quote',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Speaker Extras',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_speaker_extras|node|speaker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_image|node|speaker|form';
  $field_group->group_name = 'group_speaker_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speaker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speaker Image',
    'weight' => '6',
    'children' => array(
      0 => 'field_speaker_image',
      1 => 'field_speaker_image_thumbnail',
      2 => 'field_group_image',
      3 => 'field_speaker_image_banner',
      4 => 'field_api_image_thumbnail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Speaker Image',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_speaker_image|node|speaker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_session|node|speaker|form';
  $field_group->group_name = 'group_speaker_session';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speaker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speaker Session Optional',
    'weight' => '9',
    'children' => array(
      0 => 'field_speaker_session_name',
      1 => 'field_speaker_session_summary',
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
  $export['group_speaker_session|node|speaker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_social|node|speaker|form';
  $field_group->group_name = 'group_speaker_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speaker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speaker Social Info',
    'weight' => '7',
    'children' => array(
      0 => 'field_speaker_facebook',
      1 => 'field_speaker_twitter',
      2 => 'field_link',
      3 => 'field_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Speaker Social Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_speaker_social|node|speaker|form'] = $field_group;

  return $export;
}
