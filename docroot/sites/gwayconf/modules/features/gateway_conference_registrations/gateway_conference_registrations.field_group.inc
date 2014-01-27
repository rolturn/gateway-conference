<?php
/**
 * @file
 * gateway_conference_registrations.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gateway_conference_registrations_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal_tabs|node|registrations|full';
  $field_group->group_name = 'group_horizontal_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'registrations';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Tabs',
    'weight' => '3',
    'children' => array(
      0 => 'group_horz_tab_item_1',
      1 => 'group_venue_tab',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_horizontal_tabs|node|registrations|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horz_tab_item_1|node|registrations|full';
  $field_group->group_name = 'group_horz_tab_item_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'registrations';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Rates & Registration Links',
    'weight' => '7',
    'children' => array(
      0 => 'field_registrations_disc',
      1 => 'registration_tables',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Rates & Registration Links',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_horz_tab_item_1|node|registrations|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrations_childcare|node|registrations|form';
  $field_group->group_name = 'group_registrations_childcare';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'registrations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Childcare',
    'weight' => '13',
    'children' => array(
      0 => 'field_registrations_childcare',
      1 => 'field_registrations_child_link',
      2 => 'field_registrations_child_title',
      3 => 'field_registations_child_avail',
      4 => 'field_registrations_child_spec',
      5 => 'field_registrations_child_free',
      6 => 'field_registrations_child_cost',
      7 => 'field_registations_child_sold',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registrations_childcare|node|registrations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrations_early|node|registrations|form';
  $field_group->group_name = 'group_registrations_early';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'registrations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Early Registration',
    'weight' => '7',
    'children' => array(
      0 => 'field_registrations_early_cost',
      1 => 'field_registrations_early_desc',
      2 => 'field_registrations_early_form',
      3 => 'field_registrations_early_link',
      4 => 'field_registrations_early_req',
      5 => 'field_registrations_early_title',
      6 => 'field_registrations_early_video',
      7 => 'field_registrations_early_spec',
      8 => 'field_registrations_early_sold',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Early Registration',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_registrations_early|node|registrations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrations_group|node|registrations|form';
  $field_group->group_name = 'group_registrations_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'registrations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Registrations',
    'weight' => '12',
    'children' => array(
      0 => 'field_registrations_grp_title',
      1 => 'field_registrations_grp_cost',
      2 => 'field_registrations_grp_desc',
      3 => 'field_registrations_grp_spec',
      4 => 'field_registrations_grp_link',
      5 => 'field_registrations_grp_soldout',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registrations_group|node|registrations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrations_late|node|registrations|form';
  $field_group->group_name = 'group_registrations_late';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'registrations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Late Registration',
    'weight' => '8',
    'children' => array(
      0 => 'field_registrations_late_cost',
      1 => 'field_registrations_late_descr',
      2 => 'field_registrations_late_form',
      3 => 'field_registrations_late_link',
      4 => 'field_registrations_late_req',
      5 => 'field_registrations_late_title',
      6 => 'field_registrations_late_video',
      7 => 'field_registrations_late_spec',
      8 => 'field_registrations_late_soldout',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registrations_late|node|registrations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrations_registration|node|registrations|form';
  $field_group->group_name = 'group_registrations_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'registrations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registration',
    'weight' => '6',
    'children' => array(
      0 => 'field_registrations_cost',
      1 => 'field_registrations_description',
      2 => 'field_registrations_form',
      3 => 'field_registrations_link',
      4 => 'field_registrations_requirements',
      5 => 'field_registrations_title',
      6 => 'field_registrations_video',
      7 => 'field_registrations_spec',
      8 => 'field_registrations_soldout',
      9 => 'field_registrations_free',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registrations_registration|node|registrations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrations_scholarship|node|registrations|form';
  $field_group->group_name = 'group_registrations_scholarship';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'registrations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scholarship Registration',
    'weight' => '9',
    'children' => array(
      0 => 'field_registrations_sch_cost',
      1 => 'field_registrations_sch_desc',
      2 => 'field_registrations_sch_form',
      3 => 'field_registrations_sch_link',
      4 => 'field_registrations_sch_req',
      5 => 'field_registrations_sch_title',
      6 => 'field_registrations_sch_video',
      7 => 'field_registrations_sch_spec',
      8 => 'field_registrations_sch_soldout',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Scholarship Registration',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_registrations_scholarship|node|registrations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrations_student|node|registrations|form';
  $field_group->group_name = 'group_registrations_student';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'registrations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Registration',
    'weight' => '10',
    'children' => array(
      0 => 'field_registrations_stdnt_cost',
      1 => 'field_registrations_stdnt_desc',
      2 => 'field_registrations_stdnt_form',
      3 => 'field_registrations_stdnt_link',
      4 => 'field_registrations_stdnt_req',
      5 => 'field_registrations_stdnt_title',
      6 => 'field_registrations_stdnt_video',
      7 => 'field_registrations_stdnt_spec',
      8 => 'field_registrations_stdnt_sold',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registrations_student|node|registrations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrations_volunteer|node|registrations|form';
  $field_group->group_name = 'group_registrations_volunteer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'registrations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volunteer Registrations',
    'weight' => '11',
    'children' => array(
      0 => 'field_registrations_vol_cost',
      1 => 'field_registrations_vol_desc',
      2 => 'field_registrations_vol_form',
      3 => 'field_registrations_vol_link',
      4 => 'field_registrations_vol_req',
      5 => 'field_registrations_vol_title',
      6 => 'field_registrations_vol_video',
      7 => 'field_registrations_vol_spec',
      8 => 'field_registrations_vol_soldout',
      9 => 'field_registrations_vol_free',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Volunteer Registrations',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_registrations_volunteer|node|registrations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venue_tab|node|registrations|full';
  $field_group->group_name = 'group_venue_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'registrations';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Venue',
    'weight' => '8',
    'children' => array(
      0 => 'field_registrations_venue',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_venue_tab|node|registrations|full'] = $field_group;

  return $export;
}
