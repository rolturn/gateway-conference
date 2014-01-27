<?php
/**
 * @file
 * gateway_conference_registrations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gateway_conference_registrations_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gateway_conference_registrations_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gateway_conference_registrations_node_info() {
  $items = array(
    'registrations' => array(
      'name' => t('Registered Event'),
      'base' => 'node_content',
      'description' => t('Enter the various registration types, their cost, link to register, and additional information. (all values for all types in one node).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
