<?php
/**
 * @file
 * donation_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function donation_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_donation_page';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'menu-secondary',
    2 => 'user-menu',
  );
  $export['menu_options_donation_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_donation_page';
  $strongarm->value = 'menu-secondary:0';
  $export['menu_parent_donation_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_donation_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_donation_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_donation_page';
  $strongarm->value = '1';
  $export['node_preview_donation_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_donation_page';
  $strongarm->value = 0;
  $export['node_submitted_donation_page'] = $strongarm;

  return $export;
}
