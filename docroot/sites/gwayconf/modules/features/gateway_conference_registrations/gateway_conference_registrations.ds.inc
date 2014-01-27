<?php
/**
 * @file
 * gateway_conference_registrations.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gateway_conference_registrations_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|registrations|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'registrations';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'dynamic_block' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:2:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"block";s:7:"subtype";s:32:"views-speaker-speaker_list_event";}',
        'load_terms' => 0,
      ),
    ),
    'registration_header' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'registration_tables' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_registrations_disc' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'disclaimer',
      ),
    ),
  );
  $export['node|registrations|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function gateway_conference_registrations_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'registration_header';
  $ds_field->label = 'Code: Registration Header';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php 
$date_start = $entity->field_registrations_event_date[\'und\'][0][\'value\'];
$date_end = $entity->field_registrations_event_date[\'und\'][0][\'value2\']; 
?>

<header>
  <hgroup>
    <?php if($entity->field_registrations_type[\'und\'][0][\'value\']==\'special_event\'): ?>
      <h1 class="title" <?php print $title_attributes; ?>>[node:title]</h1>
      <?php if (!empty($entity->field_registrations_event_date[\'und\'][0][\'value\'])): ?>
        <h2 class="conference-date"><?php print format_date($date_start, \'day_full\'); ?> | <?php print format_date($date_start, \'hour_full\'); ?></h2>
      <?php endif; ?>
    <?php elseif($entity->field_registrations_type[\'und\'][0][\'value\']==\'conference\'): ?>
      <h1 class="title" <?php print $title_attributes; ?>>[node:title]</h1>
      <?php if (!empty($entity->field_registrations_event_date[\'und\'][0][\'value\'])): ?>
        <h2 class="conference-date"><?php print format_date($date_start, \'start_date\'); ?>&ndash;<?php print format_date($date_end, \'end_date\'); ?></h2>
      <?php endif; ?>    <?php endif; ?>
  </hgroup>
</header>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['registration_header'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'registration_tables';
  $ds_field->label = 'Code: Registration Tables';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
$tpl_path = path_to_theme() . \'/templates/ds_markup_field_values/gway_registrations.tpl.php\';
if (file_exists($tpl_path)) include_once($tpl_path);
?>
',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['registration_tables'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gateway_conference_registrations_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|registrations|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'registrations';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'registration_header',
        1 => 'field_registrations_childcare',
        2 => 'field_registrations_info',
        3 => 'group_horizontal_tabs',
        4 => 'registration_tables',
        5 => 'field_registrations_disc',
        6 => 'dynamic_block',
        7 => 'group_horz_tab_item_1',
        8 => 'group_venue_tab',
        9 => 'field_registrations_venue',
      ),
    ),
    'fields' => array(
      'registration_header' => 'ds_content',
      'field_registrations_childcare' => 'ds_content',
      'field_registrations_info' => 'ds_content',
      'group_horizontal_tabs' => 'ds_content',
      'registration_tables' => 'ds_content',
      'field_registrations_disc' => 'ds_content',
      'dynamic_block' => 'ds_content',
      'group_horz_tab_item_1' => 'ds_content',
      'group_venue_tab' => 'ds_content',
      'field_registrations_venue' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|registrations|full'] = $ds_layout;

  return $export;
}
