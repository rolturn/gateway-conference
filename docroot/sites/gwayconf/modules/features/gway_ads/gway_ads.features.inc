<?php
/**
 * @file
 * gway_ads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gway_ads_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gway_ads_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gway_ads_node_info() {
  $items = array(
    'ad' => array(
      'name' => t('Ad'),
      'base' => 'node_content',
      'description' => t('Ad or banner for the website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
