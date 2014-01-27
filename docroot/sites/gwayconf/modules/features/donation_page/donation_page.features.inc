<?php
/**
 * @file
 * donation_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function donation_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function donation_page_node_info() {
  $items = array(
    'donation_page' => array(
      'name' => t('Donation Page'),
      'base' => 'node_content',
      'description' => t('A general page to collect donations.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
