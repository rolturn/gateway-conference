<?php
/**
 * @file
 * gateway_devotional_api.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gateway_devotional_api_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function gateway_devotional_api_views_api() {
  return array("version" => "3.0");
}
