<?php
/**
 * @file
 * gway_basic_page_ds_settings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gway_basic_page_ds_settings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'markup_basic_page' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function gway_basic_page_ds_settings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'markup_basic_page';
  $ds_field->label = 'Markup: Basic Page';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
$tpl_path = path_to_theme() . \'/templates/ds_markup_field_values/basic_page.tpl.php\';
if (file_exists($tpl_path)) include_once($tpl_path);
?>
',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['markup_basic_page'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gway_basic_page_ds_settings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'markup_basic_page',
      ),
    ),
    'fields' => array(
      'markup_basic_page' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|page|full'] = $ds_layout;

  return $export;
}
