<?php
/**
 * @file
 * room.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function room_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function room_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function room_node_info() {
  $items = array(
    'room' => array(
      'name' => t('Room'),
      'base' => 'node_content',
      'description' => t('Room for a conference session.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
