<?php
/**
 * @file
 * gc_downloads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gc_downloads_ctools_plugin_api() {
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
function gc_downloads_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function gc_downloads_node_info() {
  $items = array(
    'downloads' => array(
      'name' => t('Downloads'),
      'base' => 'node_content',
      'description' => t('This is to upload items you would like to be download throughout the website.'),
      'has_title' => '1',
      'title_label' => t('Download Name'),
      'help' => t('Please only add one file at at time'),
    ),
  );
  return $items;
}
