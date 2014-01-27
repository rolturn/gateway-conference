<?php
/**
 * @file
 * gway_slideshow_slider.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gway_slideshow_slider_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_home_banners';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_home_banners';
  $strongarm->value = 0;
  $export['comment_anonymous_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_home_banners';
  $strongarm->value = 1;
  $export['comment_default_mode_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_home_banners';
  $strongarm->value = '50';
  $export['comment_default_per_page_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_home_banners';
  $strongarm->value = 1;
  $export['comment_form_location_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_home_banners';
  $strongarm->value = '1';
  $export['comment_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_home_banners';
  $strongarm->value = '1';
  $export['comment_preview_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_home_banners';
  $strongarm->value = 1;
  $export['comment_subject_field_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_home_banners';
  $strongarm->value = 0;
  $export['enable_revisions_page_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_home_banners';
  $strongarm->value = array();
  $export['menu_options_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_home_banners';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_home_banners';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_home_banners';
  $strongarm->value = '0';
  $export['node_preview_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_home_banners';
  $strongarm->value = 0;
  $export['node_submitted_home_banners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_home_banners_pattern';
  $strongarm->value = '';
  $export['pathauto_node_home_banners_pattern'] = $strongarm;

  return $export;
}
