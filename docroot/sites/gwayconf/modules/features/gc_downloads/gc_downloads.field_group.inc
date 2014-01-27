<?php
/**
 * @file
 * gc_downloads.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gc_downloads_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_download_banner|node|downloads|form';
  $field_group->group_name = 'group_download_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'downloads';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Download Banners',
    'weight' => '4',
    'children' => array(
      0 => 'field_download_banner_height',
      1 => 'field_download_banner_width',
      2 => 'field_download_banner_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_download_banner|node|downloads|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_download_pdfs|node|downloads|form';
  $field_group->group_name = 'group_download_pdfs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'downloads';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Download PDFs',
    'weight' => '2',
    'children' => array(
      0 => 'field_download_pdf_file',
      1 => 'field_download_pdf_page',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_download_pdfs|node|downloads|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_download_video|node|downloads|form';
  $field_group->group_name = 'group_download_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'downloads';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Download Video',
    'weight' => '5',
    'children' => array(
      0 => 'field_video',
      1 => 'field_video_nid',
      2 => 'field_video_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_download_video|node|downloads|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_download_wallpaper_info|node|downloads|form';
  $field_group->group_name = 'group_download_wallpaper_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'downloads';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_download_wallpapers';
  $field_group->data = array(
    'label' => 'Wallpaper File Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_download_wallpaper_4x3',
      1 => 'field_download_wallpaper_5x4',
      2 => 'field_download_wallpaper_hd',
      3 => 'field_download_wallpaper_phone',
      4 => 'field_download_wallpaper_tablet',
      5 => 'field_download_wallpaper_wide',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_download_wallpaper_info|node|downloads|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_download_wallpapers|node|downloads|form';
  $field_group->group_name = 'group_download_wallpapers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'downloads';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Download Wallpapers',
    'weight' => '3',
    'children' => array(
      0 => 'field_download_wallpaper_preview',
      1 => 'group_download_wallpaper_info',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_download_wallpapers|node|downloads|form'] = $field_group;

  return $export;
}
