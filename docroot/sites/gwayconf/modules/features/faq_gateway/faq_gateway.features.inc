<?php
/**
 * @file
 * faq_gateway.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function faq_gateway_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function faq_gateway_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function faq_gateway_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('A frequently asked question with a question and answer.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
