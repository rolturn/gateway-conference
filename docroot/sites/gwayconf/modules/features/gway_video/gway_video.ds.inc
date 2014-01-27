<?php
/**
 * @file
 * gway_video.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gway_video_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|video|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'video';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|video|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gway_video_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'body',
      ),
      'left' => array(
        0 => 'field_video_url',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'field_video_url' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|video|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|reference';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'reference';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_video_url',
      ),
    ),
    'fields' => array(
      'field_video_url' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|video|reference'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_video_url',
      ),
    ),
    'fields' => array(
      'field_video_url' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|video|teaser'] = $ds_layout;

  return $export;
}
