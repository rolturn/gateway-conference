<?php
/**
 * @file
 * product_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function product_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'product_import_csv';
  $feeds_importer->config = array(
    'name' => 'Product Importer',
    'description' => 'Imports a CSV file and creates products',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommerceProductProcessor',
      'config' => array(
        'product_type' => 'product',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'SKU',
            'target' => 'sku',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Image',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Price',
            'target' => 'commerce_price:amount',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Description',
            'target' => 'field_product_description',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Media',
            'target' => 'field_media_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'tax_rate' => '',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['product_import_csv'] = $feeds_importer;

  return $export;
}
