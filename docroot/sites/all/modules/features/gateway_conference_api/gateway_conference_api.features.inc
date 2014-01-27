<?php
/**
 * @file
 * gateway_conference_api.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gateway_conference_api_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gateway_conference_api_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_features_date_format_default().
 */
function gateway_conference_api_features_date_format_default() {
  $fdf_config = array();

  $fdf_config[] = array(
    'dfid' => 42,
    'format' => 'h:i',
    'type' => 'custom',
    'locked' => 0,
  );
  return $fdf_config;
}

/**
 * Implements hook_features_date_type_default().
 */
function gateway_conference_api_features_date_type_default() {
  $fdt_config = array();

  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'hour_military',
    'title' => 'Hour Military',
    'locked' => 0,
  );
  return $fdt_config;
}

/**
 * Implements hook_image_default_styles().
 */
function gateway_conference_api_image_default_styles() {
  $styles = array();

  // Exported image style: api_speaker_thumbnail.
  $styles['api_speaker_thumbnail'] = array(
    'name' => 'api_speaker_thumbnail',
    'effects' => array(
      16 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 148,
          'height' => 148,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function gateway_conference_api_node_info() {
  $items = array(
    'app' => array(
      'name' => t('App'),
      'base' => 'node_content',
      'description' => t('An <i>App</i> is used for the configuration and building of a native mobile app, leveraging dynamic content from the website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'app_banner' => array(
      'name' => t('App Banner'),
      'base' => 'node_content',
      'description' => t('An <i>App Banner</i> is used as a banner for a native mobile app.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'app_button' => array(
      'name' => t('App Button'),
      'base' => 'node_content',
      'description' => t('An <i>App Button</i> is used for a button for the conference app.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'app_style' => array(
      'name' => t('App Style'),
      'base' => 'node_content',
      'description' => t('An <i>App Style</i> record is used to providing styling details to the Conference App.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ar_target' => array(
      'name' => t('AR Target'),
      'base' => 'node_content',
      'description' => t('AR (Augmented Reality) target used to launch a video'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
