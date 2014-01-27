<?php
/**
 * @file
 * gway_conference_speakers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gway_conference_speakers_ctools_plugin_api() {
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
function gway_conference_speakers_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gway_conference_speakers_node_info() {
  $items = array(
    'speaker' => array(
      'name' => t('Speaker'),
      'base' => 'node_content',
      'description' => t('Speaker for the conference'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
