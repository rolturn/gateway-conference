<?php
/**
 * @file
 * conference_sessions.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function conference_sessions_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|session|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'session';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|session|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function conference_sessions_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|session|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'session';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        0 => 'field_session_image',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'body' => 'left',
      'field_session_image' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|session|full'] = $ds_layout;

  return $export;
}
