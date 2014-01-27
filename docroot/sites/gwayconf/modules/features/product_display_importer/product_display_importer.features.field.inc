<?php
/**
 * @file
 * product_display_importer.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function product_display_importer_field_default_fields() {
  $fields = array();

  // Exported field: 'node-product_display-body'.
  $fields['node-product_display-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'product_display',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Long descriptions should be used to full synopsis of products.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'product_display_references' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'slide' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '2',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Description',
      'required' => 1,
      'settings' => array(
        'display_summary' => 1,
        'mediafront' => array(
          'custom' => '',
          'field_type' => '0',
          'media_type' => 'media',
          'preview' => '0',
          'thumbnail' => '0',
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '10',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-product_display-field_featured'.
  $fields['node-product_display-field_featured'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_featured',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Remove from Homepage Slider',
          1 => 'Add to Homepage Slider',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'product_display',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'product_display_references' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'slide' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_featured',
      'label' => 'Featured Product',
      'required' => 0,
      'settings' => array(
        'mediafront' => array(
          'custom' => '',
          'field_type' => '0',
          'media_type' => 'media',
          'preview' => '0',
          'thumbnail' => '0',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-product_display-field_hidden'.
  $fields['node-product_display-field_hidden'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hidden',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '0',
          1 => '1',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'product_display',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Some "Products" do not need to be shown on the Resource page (ex... Donations)',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'product_display_references' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'slide' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_hidden',
      'label' => 'Hidden from Resource Page',
      'required' => 0,
      'settings' => array(
        'mediafront' => array(
          'custom' => '',
          'field_type' => '0',
          'media_type' => 'media',
          'preview' => '0',
          'thumbnail' => '0',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-product_display-field_product_series_xref'.
  $fields['node-product_display-field_product_series_xref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_product_series_xref',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'article' => 0,
          'blog' => 0,
          'book' => 0,
          'community_submissions' => 0,
          'episode' => 0,
          'local_listing' => 0,
          'offer' => 0,
          'offers_group' => 0,
          'page' => 0,
          'product_display' => 0,
          'series' => 'series',
          'slide' => 0,
          'webform' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'product_display',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '5',
        ),
        'product_display_references' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'slide' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_product_series_xref',
      'label' => 'Series',
      'required' => 0,
      'settings' => array(
        'mediafront' => array(
          'custom' => '',
          'field_type' => '0',
          'media_type' => 'media',
          'preview' => '0',
          'thumbnail' => '0',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-product_display-field_products'.
  $fields['node-product_display-field_products'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_products',
      'foreign keys' => array(
        'product_id' => array(
          'columns' => array(
            'product_id' => 'product_id',
          ),
          'table' => 'commerce_product',
        ),
      ),
      'indexes' => array(
        'product_id' => array(
          0 => 'product_id',
        ),
      ),
      'locked' => '0',
      'module' => 'commerce_product_reference',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_product_reference',
    ),
    'field_instance' => array(
      'bundle' => 'product_display',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'commerce_product_bundle',
          'settings' => array(
            'default_quantity' => '1',
            'show_fieldset' => 1,
            'show_quantity' => 1,
          ),
          'type' => 'commerce_bundle_product_add_to_cart_form',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'commerce_cart',
          'settings' => array(
            'combine' => 1,
            'default_quantity' => '1',
            'line_item_type' => 'product',
            'show_quantity' => 1,
          ),
          'type' => 'commerce_cart_add_to_cart_form',
          'weight' => '3',
        ),
        'product_display_references' => array(
          'label' => 'hidden',
          'module' => 'commerce_cart',
          'settings' => array(
            'combine' => 1,
            'default_quantity' => '1',
            'line_item_type' => 'product',
            'show_quantity' => 1,
          ),
          'type' => 'commerce_cart_add_to_cart_form',
          'weight' => '4',
        ),
        'slide' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'commerce_cart',
          'settings' => array(
            'combine' => 1,
            'default_quantity' => '1',
            'line_item_type' => 'product',
            'show_quantity' => 1,
          ),
          'type' => 'commerce_cart_add_to_cart_form',
          'weight' => '3',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_products',
      'label' => 'Add to Cart',
      'required' => 0,
      'settings' => array(
        'field_injection' => 1,
        'mediafront' => array(
          'custom' => '',
          'field_type' => '0',
          'media_type' => 'media',
          'preview' => '0',
          'thumbnail' => '0',
        ),
        'referenceable_types' => array(
          'bundle' => 'bundle',
          'product' => 'product',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'commerce_product_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'commerce_product/autocomplete',
          'size' => '60',
        ),
        'type' => 'commerce_product_reference_autocomplete',
        'weight' => '5',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add to Cart');
  t('Description');
  t('Featured Product');
  t('Hidden from Resource Page');
  t('Long descriptions should be used to full synopsis of products.');
  t('Series');
  t('Some "Products" do not need to be shown on the Resource page (ex... Donations)');

  return $fields;
}
