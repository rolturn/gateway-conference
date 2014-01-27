  <script src="<?php print $GLOBALS['base_url'] . '/' . drupal_get_path('module', 'gwp_smart_app') . '/js/gwp_smart_app.js'; ?>"></script>
  <script type="text/javascript">
	jQuery(function($) 
	{ 
		$.smartbanner({
		  title: "<?php print t('@title', array('@title' => $app_title)); ?>", // What the title of the app should be in the banner (defaults to <title>)
		  author: "<?php print t('@author', array('@author' => $app_author)); ?>", // What the author of the app should be in the banner (defaults to <meta name="author"> or hostname)
		  price: '<?php print t('@price', array('@price' => $app_price)); ?>', // Price of the app
		  appStoreLanguage: '<?php print t('@language', array('@language' => $app_language)); ?>', // Language code for App Store
<?php if ($ios_enabled == true):?>
		  inAppStore: '<?php print t('@price_text', array('@price_text' => $ios_price_text)) ?>', // Text of price for iOS
<?php endif; ?>
<?php if ($android_enabled == true):?>
		  inGooglePlay: '<?php print t('@price_text', array('@price_text' => $android_price_text)) ?>', // Text of price for Android
<?php endif; ?>
<?php if ($windows_enabled == true):?>
		  inWindowsPhone: '<?php print t('@price_text', array('@price_text' => $windows_price_text)) ?>', // Text of price for Windows Phone
<?php endif; ?>
		  icon: null, // The URL of the icon (defaults to <meta name="apple-touch-icon">)
		  iconGloss: null, // Force gloss effect for iOS even for precomposed
		  button: 'VIEW', // Text for the install button
		  scale: 'auto', // Scale based on viewport size (set to 1 to disable)
		  speedIn: 300, // Show animation speed of the banner
		  speedOut: 400, // Close animation speed of the banner
		  daysHidden: 15, // Duration to hide the banner after being closed (0 = always show banner)
		  daysReminder: 90, // Duration to hide the banner after "VIEW" is clicked *separate from when the close button is clicked* (0 = always show banner)
		  force: null // Choose 'ios', 'android' or 'windows phone'. Don't do a browser check, just always show this banner
		});
	});
</script>
