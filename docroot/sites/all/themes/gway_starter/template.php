<?php

/**
 * @file
 * Contains theme override functions and preprocess functions for the gway_starter theme.
 */

function gway_starter_css_alter(&$css) {
	$exclude = array(
		'modules/system/system.menus.css' => FALSE,
		'modules/user/user.css' => FALSE,
		'sites/all/modules/contrib/field_group/horizontal-tabs/horizontal-tabs.css' => FALSE,
		'sites/all/modules/contrib/field_collection/field_collection.theme.css' => FALSE,
		
		/* Other core css that could be neutralized, cut & paste above in alphabetical order */
		/*
		'sites/all/modules/nice_menus/nice_menus.css' => FALSE,
		'misc/vertical-tabs.css' => FALSE,
		'modules/aggregator/aggregator.css' => FALSE,
		'modules/block/block.css' => FALSE,
		'modules/book/book.css' => FALSE,
		'modules/comment/comment.css' => FALSE,		
		'modules/dblog/dblog.css' => FALSE,
		'modules/file/file.css' => FALSE,
		'modules/filter/filter.css' => FALSE,
		'modules/forum/forum.css' => FALSE,
		'modules/help/help.css' => FALSE,
		'modules/menu/menu.css' => FALSE,
		'modules/node/node.css' => FALSE,
		'modules/openid/openid.css' => FALSE,
		'modules/poll/poll.css' => FALSE,
		'modules/profile/profile.css' => FALSE,
		'modules/search/search.css' => FALSE,
		'modules/statistics/statistics.css' => FALSE,
		'modules/syslog/syslog.css' => FALSE,
		'modules/system/admin.css' => FALSE,
		'modules/system/maintenance.css' => FALSE,
		'modules/system/system.css' => FALSE,
		'modules/system/system.admin.css' => FALSE,
		'modules/system/system.base.css' => FALSE,
		'modules/system/system.maintenance.css' => FALSE,
		'modules/system/system.messages.css' => FALSE,
		'modules/system/system.theme.css' => FALSE,
		'modules/taxonomy/taxonomy.css' => FALSE,
		'modules/tracker/tracker.css' => FALSE,
		'modules/update/update.css' => FALSE,
		'modules/user/user.css' => FALSE,*/
	);
	$css = array_diff_key($css, $exclude);
	
}

function gway_starter_js_alter(&$javascript) {
	// this technique was taken from as an attempt to override the limitations of jQuery in drupal
	// it must be used with a separate admin theme to keep it from breaking drupal core
	// http://drupal.stackexchange.com/questions/28820/how-do-i-update-jquery-to-the-latest-version-i-can-download
	$javascript['misc/jquery.js']['data'] = drupal_get_path('theme', 'gwp_campus') . '/js/jquery-1.8.3.min.js';
	$javascript['misc/jquery.js']['version'] = '1.8.3';
}

