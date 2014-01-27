<?php
/**
 * @file
 * opengate_developer_tools.features_plumber_records.inc
 */

/**
 * Implements hook_features_plumber_defaults().
 */
function opengate_developer_tools_features_plumber_defaults() {
  $export = array();

  $features_plumber_record = new stdClass();
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'opengate_developer_tools__dependencies__strongarm';
  $features_plumber_record->feature = 'opengate_developer_tools';
  $features_plumber_record->component = 'dependencies';
  $features_plumber_record->component_val = 'strongarm';
  $export['opengate_developer_tools__dependencies__strongarm'] = $features_plumber_record;

  return $export;
}
