<?php
/**
 * @file
 * place.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function place_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function place_node_info() {
  $items = array(
    'place' => array(
      'name' => t('Place'),
      'base' => 'node_content',
      'description' => t('Place, such as a place of interest or hotel.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
