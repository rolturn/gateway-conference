<?php
/**
 * @file
 * opengate_default_admin_ui.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opengate_default_admin_ui_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
