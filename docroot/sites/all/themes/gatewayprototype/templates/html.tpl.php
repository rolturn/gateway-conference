<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE tag.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 */
?><?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>" <?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
<!--  <meta name="viewport" content="width=device-width,initial-scale=1">-->
  <meta name="viewport" content="width=device-width,maximum-scale=1,initial-scale=1,user-scalable=no"> 
  <!-- iOS5+ fix maximum scale so orientation change will work properly: user-scalabler setting will prevent 3 fingers like cntl+scroll -->
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
	<noscript>
		<link type="text/css" rel="stylesheet" href="<?php print base_path().drupal_get_path('theme', 'gatewayprototype'); ?>/css/adapt_18/mobile.css" />
	</noscript>
	<script type="text/javascript">
		// Edit to suit your needs.
		var ADAPT_CONFIG = {
		  // Where is your CSS?
		  path: '<?php print base_path().drupal_get_path('theme', 'gatewayprototype'); ?>/css/adapt_18/',
		
		  // false = Only run once, when page first loads.
		  // true = Change on window resize and page tilt.
		  dynamic: true,
				
		  // First range entry is the minimum.
		  // Last range entry is the maximum.
		  // Separate ranges by "to" keyword.
		  range: [
			   '0px to  750px = mobile.css',
			 '750px to 1020px = 720.css',
			'1020px to 1200px = 990.css',
			'1200px to 1400px = 1170.css',
			'1400px to 1700px = 1350.css',
			'1700px to 3000px = 1530.css'
		  ]
		};
	</script>
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>

  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>

</body>
</html>