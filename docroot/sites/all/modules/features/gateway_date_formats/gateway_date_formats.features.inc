<?php
/**
 * @file
 * gateway_date_formats.features.inc
 */

/**
 * Implements hook_features_date_format_default().
 */
function gateway_date_formats_features_date_format_default() {
  $fdf_config = array();

  $fdf_config[] = array(
    'dfid' => '36',
    'format' => 'M j, Y',
    'type' => 'custom',
    'locked' => '0',
  );
  $fdf_config[] = array(
    'dfid' => '37',
    'format' => 'l, F j',
    'type' => 'custom',
    'locked' => '0',
  );
  $fdf_config[] = array(
    'dfid' => '38',
    'format' => 'g:i a',
    'type' => 'custom',
    'locked' => '0',
  );
  return $fdf_config;
}

/**
 * Implements hook_features_date_type_default().
 */
function gateway_date_formats_features_date_type_default() {
  $fdt_config = array();

  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'date_without_time',
    'title' => 'Date without Time',
    'locked' => '0',
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'day_and_date',
    'title' => 'Day and Date',
    'locked' => '0',
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'time',
    'title' => 'Time',
    'locked' => '0',
  );
  return $fdt_config;
}
