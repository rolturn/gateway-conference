<?php
/**
 * @file
 * local_listings_widget.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function local_listings_widget_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function local_listings_widget_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function local_listings_widget_node_info() {
  $items = array(
    'local_listing' => array(
      'name' => t('Local Listing'),
      'base' => 'node_content',
      'description' => t('Add a logo and link to top of pages to an off site local listings.'),
      'has_title' => '1',
      'title_label' => t('Network Name'),
      'help' => '',
    ),
  );
  return $items;
}
