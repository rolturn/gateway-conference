<?php
/**
 * @file
 * venue.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function venue_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function venue_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function venue_node_info() {
  $items = array(
    'venue' => array(
      'name' => t('Venue'),
      'base' => 'node_content',
      'description' => t('Use this content type to add information about where the conference or event is going to be held.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
