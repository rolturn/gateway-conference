<?php
/**
 * @file
 * gway_ministry_partner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gway_ministry_partner_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
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
function gway_ministry_partner_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gway_ministry_partner_node_info() {
  $items = array(
    'ministry_partner' => array(
      'name' => t('Ministry Partner'),
      'base' => 'node_content',
      'description' => t('Ministry Partner'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
