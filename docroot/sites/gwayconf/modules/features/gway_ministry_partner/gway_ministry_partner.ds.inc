<?php
/**
 * @file
 * gway_ministry_partner.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gway_ministry_partner_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ministry_partner|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ministry_partner';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_ministry_partner_url' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'ministry-partner-url',
      ),
    ),
  );
  $export['node|ministry_partner|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gway_ministry_partner_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ministry_partner|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ministry_partner';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_ministry_partner_logo',
        1 => 'field_ministry_partner_url',
      ),
      'right' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'field_ministry_partner_logo' => 'left',
      'field_ministry_partner_url' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|ministry_partner|full'] = $ds_layout;

  return $export;
}
