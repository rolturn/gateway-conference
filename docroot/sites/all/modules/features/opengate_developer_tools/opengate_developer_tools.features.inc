<?php
/**
 * @file
 * opengate_developer_tools.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opengate_developer_tools_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
