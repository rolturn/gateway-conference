<?php
/**
 * @file
 * gway_ministry_partner.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gway_ministry_partner_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ministry_partner';
  $strongarm->value = 0;
  $export['comment_anonymous_ministry_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ministry_partner';
  $strongarm->value = 1;
  $export['comment_default_mode_ministry_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ministry_partner';
  $strongarm->value = '50';
  $export['comment_default_per_page_ministry_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ministry_partner';
  $strongarm->value = 1;
  $export['comment_form_location_ministry_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ministry_partner';
  $strongarm->value = '0';
  $export['comment_ministry_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ministry_partner';
  $strongarm->value = '0';
  $export['comment_preview_ministry_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ministry_partner';
  $strongarm->value = 1;
  $export['comment_subject_field_ministry_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ministry_partner';
  $strongarm->value = array();
  $export['menu_options_ministry_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ministry_partner';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ministry_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ministry_partner';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ministry_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ministry_partner';
  $strongarm->value = '0';
  $export['node_preview_ministry_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ministry_partner';
  $strongarm->value = 0;
  $export['node_submitted_ministry_partner'] = $strongarm;

  return $export;
}
