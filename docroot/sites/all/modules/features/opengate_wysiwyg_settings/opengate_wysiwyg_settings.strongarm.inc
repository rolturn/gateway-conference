<?php
/**
 * @file
 * opengate_wysiwyg_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function opengate_wysiwyg_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pasteformat_cleanup_format';
  $strongarm->value = 'filtered_html';
  $export['pasteformat_cleanup_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pasteformat_message_success';
  $strongarm->value = '';
  $export['pasteformat_message_success'] = $strongarm;

  return $export;
}
