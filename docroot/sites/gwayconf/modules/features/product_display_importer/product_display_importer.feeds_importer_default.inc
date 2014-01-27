<?php
/**
 * @file
 * product_display_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function product_display_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'product_display_importer';
  $feeds_importer->config = array(
    'name' => 'Product Display Importer',
    'description' => 'Imports a CSV file and creates Product Display nodes',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'product_display',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'SKU',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'SKU',
            'target' => 'field_products:sku',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['product_display_importer'] = $feeds_importer;

  return $export;
}
