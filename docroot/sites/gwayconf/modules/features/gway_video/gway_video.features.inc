<?php
/**
 * @file
 * gway_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gway_video_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_mediafront_default_presets().
 */
function gway_video_mediafront_default_presets() {
  $items = array(
    'nodeplayer' => array(
      'name' => 'nodeplayer',
      'description' => 'Player used on the top of node pages',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => '0',
        ),
        'isplaylist' => array(
          0 => '0',
        ),
      ),
      'settings' => array(
        'id' => 'player',
        'debug' => 0,
        'volume' => '80',
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => '20',
        'showPlaylist' => 1,
        'vertical' => '1',
        'node' => array(),
        'playlist' => '',
        'pageLimit' => '10',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '',
        'swfplayer' => '/sites/all/modules/contrib/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => '',
        'width' => '100%',
        'height' => '476px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 0,
        'theme' => 'dark-hive',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function gway_video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
