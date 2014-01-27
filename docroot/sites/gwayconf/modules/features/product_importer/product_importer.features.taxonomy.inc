<?php
/**
 * @file
 * product_importer.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function product_importer_taxonomy_default_vocabularies() {
  return array(
    'media_type' => array(
      'name' => 'Media Type',
      'machine_name' => 'media_type',
      'description' => 'Media Type specification for resources (DVD, CD, etc)',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
