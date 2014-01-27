<?php
/**
 * @file
 * gway_conference_speakers.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gway_conference_speakers_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|speaker|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'speaker';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'social_sharing' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'title',
      ),
    ),
    'field_speaker_image' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'indiv-image',
      ),
    ),
    'field_speaker_location' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'speaker-info',
      ),
    ),
    'field_speaker_organization' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'speaker-info',
      ),
    ),
    'field_speaker_position' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'speaker-info',
      ),
    ),
    'field_group_image' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'grp-image',
      ),
    ),
  );
  $export['node|speaker|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gway_conference_speakers_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speaker|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speaker';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_speaker_image',
        1 => 'field_group_image',
        2 => 'social_sharing',
      ),
      'right' => array(
        0 => 'title',
        1 => 'group_div_one',
        2 => 'field_speaker_position',
        3 => 'body',
        4 => 'field_speaker_organization',
        5 => 'field_link',
        6 => 'field_speaker_location',
      ),
    ),
    'fields' => array(
      'field_speaker_image' => 'left',
      'field_group_image' => 'left',
      'social_sharing' => 'left',
      'title' => 'right',
      'group_div_one' => 'right',
      'field_speaker_position' => 'right',
      'body' => 'right',
      'field_speaker_organization' => 'right',
      'field_link' => 'right',
      'field_speaker_location' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|speaker|full'] = $ds_layout;

  return $export;
}
