<?php

function path_to_child_theme() {
	// By default path_to_theme() doesn't work for child themes,
	// this function gives you the path to the child theme without
	// the leading '/'.
	return drupal_get_path('theme', variable_get('theme_default', NULL));
}

function path_to_base_theme() {
	// This shouldn't be necessary because of the path_to_theme() function
	return drupal_get_path('base', variable_get('theme_default', NULL));
}

/**
 * @file
 * Contains theme override functions and preprocess functions for the gway_bootstraptype theme.
 */


/**
 * Changes the default meta content-type tag to the shorter HTML5 version
 */
function gway_bootstrap_html_head_alter(&$head_elements) {
	$head_elements['system_meta_content_type']['#attributes'] = array(
		'charset' => 'utf-8'
	);
}


/**
 * Uses RDFa attributes if the RDF module is enabled
 * Lifted from Adaptivetheme for D7, full credit to Jeff Burnz
 * ref: http://drupal.org/node/887600
 */
function gway_bootstrap_preprocess_html(&$vars) {
/*
	if (module_exists('rdf')) {
		$vars['doctype'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD HTML+RDFa 1.1//EN">' . "\n";
		$vars['rdf']->version = 'version=HTML+RDFa 1.1';
		$vars['rdf']->namespaces = $vars['rdf_namespaces'];
		$vars['rdf']->profile = ' profile="' . $vars['grddl_profile'] . '"';
	} else {
		$vars['doctype'] = '<!DOCTYPE html>' . "\n";
		$vars['rdf']->version = '';
		$vars['rdf']->namespaces = '';
		$vars['rdf']->profile = '';
	}
*/
	//Add conditional stylsheet for IE 9 and lower
	drupal_add_css(drupal_get_path('theme', 'gway_bootstrap') .'/css/fix-ie.css', array('weight' => CSS_THEME, 'browsers' => array('IE' => 'lt IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
}



/**
 * Override Core CSS, borrowed from Tao, contribe modules should be placed here too if they 
 * create more code to override than it is benefitting us.
 */
function gway_bootstrap_css_alter(&$css) {
	$exclude = array(
		'modules/system/system.menus.css' => FALSE,
	);
	$css = array_diff_key($css, $exclude);
	
}

function gway_bootstrap_menu_tree($variables) {
	// Adjusted the output of this to nav rather than div the following line was
	// return '<ul class="menu">' . $variables['tree'] . '</ul>';
	return '<nav class="menu"><ul>' . $variables['tree'] . '</ul></nav>';
}

function gway_bootstrap_item_list($variables) {
	$items = $variables['items'];
	$title = $variables['title'];
	$type = $variables['type'];
	$attributes = $variables['attributes'];
	// Adjusted the output of this to nav rather than div. If it is found that
	// this outputs more than just navigation items the following should be changed back to
	// $output = '<div class="item-list">'; and the closing nav too.
	$output = '<nav class="item-list">';
	if (isset($title)) {
		$output .= '<h3>' . $title . '</h3>';
	}
	
	if (!empty($items)) {
		$output .= "<$type" . drupal_attributes($attributes) . '>';
		$num_items = count($items);
		foreach ($items as $i => $item) {
			$attributes = array();
			$children = array();
			$data = '';
			if (is_array($item)) {
				foreach ($item as $key => $value) {
					if ($key == 'data') {
						$data = $value;
					}
					elseif ($key == 'children') {
						$children = $value;
					}
					else {
						$attributes[$key] = $value;
					}
				}
			}
			else {
				$data = $item;
			}
			if (count($children) > 0) {
				// Render nested list.
				$data .= theme_item_list(array('items' => $children, 'title' => NULL, 'type' => $type, 'attributes' => $attributes));
			}
			if ($i == 0) {
				$attributes['class'][] = 'first';
			}
			if ($i == $num_items - 1) {
				$attributes['class'][] = 'last';
			}
			$output .= '<li' . drupal_attributes($attributes) . '>' . $data . "</li>\n";
		}
		$output .= "</$type>";
	}
	$output .= '</nav>';
	return $output;
}

function gway_bootstrap_date_display_range($variables) {
	
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
