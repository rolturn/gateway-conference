<?php
function path_to_child_theme() {
	return drupal_get_path('theme', variable_get('theme_default', NULL));
}

function path_to_base_theme() {
	return drupal_get_path('base', variable_get('theme_default', NULL));
}

function gwayconf2013_css_alter(&$css) {
  $exclude = array(
    '/modules/system/system.menus.css' => FALSE,
    '/modules/user/user.css' => FALSE,
    '/all/modules/contrib/field_group/horizontal-tabs/horizontal-tabs.css' => FALSE,
    'misc/ui/jquery.ui.accordion.css' => FALSE,
    'misc/ui/jquery.ui.theme.css' => FALSE,
		
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

function gwayconf2013_preprocess_image(&$variables) {
  $attributes = &$variables['attributes'];

  foreach (array('width', 'height') as $key) {
    unset($attributes[$key]);
    unset($variables[$key]);
  }
}


function gwayconf2013_date_display_range($variables) {
	
	$date1 = $variables['date1'];
  $date2 = $variables['date2'];
  $timezone = $variables['timezone'];
  $attributes_start = $variables['attributes_start'];
  $attributes_end = $variables['attributes_end'];
	
	// Grab the year from both fields to see if they match, only show the 2nd if so
	$date1_year = preg_match('/20(\d{2})/',$date1,$matches);
	$date1_year = $matches[0];
	
	$date2_year = preg_match('/20(\d{2})/',$date2,$matches);
	$date2_year = $matches[0];
	
	// Only display the year if it's not the current year
	$current_year = date("Y");
	if ($date1_year == $current_year) $date1 = preg_replace('/'.$current_year.'|, '.$current_year.'/','',$date1);
	if ($date2_year == $current_year) $date2 = preg_replace('/'.$current_year.'|, '.$current_year.'/','',$date2);
	
	// We don't want to display the year for both dates if they're the same
	if ($date1_year == $date2_year) {
		$date1 = preg_replace('/'.$date1_year.'|, '.$date1_year.'/','',$date1);
	}
	
	$month_names = array("January","February","March","April","May","June","July","August","September","October","November","December");
  $is_month = false;
	foreach ($month_names as $month) {
		if (preg_match('/('.$month.')/',$date1,$matches)) {
			$is_month = true;
			$date1_month = $month;
		}
		if (preg_match('/('.$month.')/',$date2,$matches)) {
			$date2_month = $month;
		}
	}

	if ($is_month && ($date2_month == $date1_month)) {
		// We're working with month names
			$date2 = trim(str_replace($date1_month, '',$date2));
	} else if (strpos($date1,'am') || strpos($date1, 'pm')) {
		// If the date has a time in it then we're
		// wanting to format the time.
		if (strpos($date2,'am') && strpos($date1, 'am')) {
			$date1 = trim(str_replace('am', '',$date1));
		} else if (strpos($date2,'pm') && strpos($date1, 'pm')) {
			$date1 = trim(str_replace('pm', '',$date1));
		}
	}
	
  // Wrap the result with the attributes.
  return t('!start-date&ndash;!end-date', array(
    '!start-date' => '<span class="date-display-start"' . drupal_attributes($attributes_start) . '>' . $date1 . '</span>', 
    '!end-date' => '<span class="date-display-end"' . drupal_attributes($attributes_end) . '>' . $date2 . $timezone . '</span>',
  ));
	
}


function gwayconf2013_js_alter(&$javascript) {
	// this technique was taken from as an attempt to override the limitations of jQuery in drupal
	// it must be used with a separate admin theme to keep it from breaking drupal core
	// http://drupal.stackexchange.com/questions/28820/how-do-i-update-jquery-to-the-latest-version-i-can-download
	$javascript['misc/jquery.js']['data'] = drupal_get_path('theme', 'gwayconf2013') . '/js/jquery-1.8.3.min.js';
	$javascript['misc/jquery.js']['version'] = '1.8.3';
}

function gwayconf2013_preprocess_html(&$vars) {
		//Add conditional stylsheet for IE 7
		$css_options = array(
			'group' => CSS_THEME, 
			'weight' => 50,
			'browsers' => array(
				'IE' => 'lt IE 9', 
				'!IE' => FALSE
			), 
			'preprocess' => FALSE
		);
	  drupal_add_css(drupal_get_path('theme', 'gwayconf2013') . '/css/fix-ie.css', $css_options);
	  drupal_add_js(drupal_get_path('theme', 'gwayconf2013') . '/js/waypoints.min.js');
	  drupal_add_js(drupal_get_path('theme', 'gwayconf2013') . '/js/waypoints-sticky.min.js');
}

/*function tkug2012_preprocess_node(&$vars) {
	$regions = array(
		'node_preface_col_one',
		'node_preface_col_two',
		'node_preface_col_three',
		'node_postscript_col_one',
		'node_postscript_col_two',
		'node_postscript_col_three',
		'node_footer_col_one',
		'node_footer_col_two',
		'node_footer_col_three'
	);
	
	foreach ($regions as $r) {
		if ($blocks  = block_get_blocks_by_region($r)) {
			$vars[$r] = $blocks;
		}
		if ($layout  = block_get_blocks_by_region($r)) {
			$vars[$r] = $layout;
		}
	}
}

*/