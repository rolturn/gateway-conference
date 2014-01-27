<?php
/**
 * @file
 * gway_slideshow_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gway_slideshow_slider_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gway_slideshow_slider_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gway_slideshow_slider_image_default_styles() {
  $styles = array();

  // Exported image style: home_banners.
  $styles['home_banners'] = array(
    'name' => 'home_banners',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '1200',
          'height' => '475',
        ),
        'weight' => '-10',
      ),
      1 => array(
        'label' => 'Adaptive',
        'help' => 'Adaptive image scale according to client resolution.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'adaptive_image_scale_form',
        'summary theme' => 'adaptive_image_scale_summary',
        'module' => 'adaptive_image',
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1200, 1024, 768, 480',
          'mobile_first' => 0,
          'height' => '',
          'width' => '1600',
          'upscale' => '',
        ),
        'weight' => '-9',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function gway_slideshow_slider_node_info() {
  $items = array(
    'home_banners' => array(
      'name' => t('Banners'),
      'base' => 'node_content',
      'description' => t('This is used to create the special home rotators '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
