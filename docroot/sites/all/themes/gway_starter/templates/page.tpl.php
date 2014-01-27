<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 * least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 * or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 * when linking to the front page. This includes the language domain or
 * prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 * in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 * in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 * site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 * the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 * modules, intended to be displayed in front of the main title tag that
 * appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 * modules, intended to be displayed after the main title tag that appears in
 * the template.
 * - $messages: HTML for status and error messages. Should be displayed
 * prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 * (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 * menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 * associated with the page, and the node ID is the second argument
 * in the page's path (e.g. node/12345 and node/12345/revisions, but not
 * comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_one']: Items for the first sidebar.
 * - $page['sidebar_two']: Items for the second sidebar.
 * - $page['header_top']: Top items for the header region.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>

<?php if ($page['mobile_nav']): ?>
	<div id="mobile-nav">
		<div class="mobile-nav-wrapper">
			<?php print render($page['mobile_nav']); ?>
		</div>
	</div>
<?php endif; ?>

<div id="header-top-full-bg" class="clearfix">
	<div id="header-top" class="clearfix">
		<div class="wrapper">
		<?php if ($page['mobile_nav']): ?>
			<a href="#" id="mobile-nav-trigger">Mobile Menu</a>
		<?php endif; ?>
			
			<div id="site-slogan"><?php print $site_slogan; ?></div>
			<section role="complementary">
				<?php print render($page['header_top']); ?>
			</section>
		</div>
	</div><!-- #header-top -->
</div><!-- #header-top-full-bg -->

<div id="branding-full-bg" class="clearfix">
	<div class="wrapper">
		<header id="branding" role="banner">
			<?php if ($page['main_nav']): ?>
				<nav id="main-nav" role="navigation">
					 <?php print render($page['main_nav']); ?>
				</nav> <!-- /#main-nav -->
			<?php endif; ?>
			<?php if ($page['header']): ?>
				<div class="header-elements">
					<?php print render($page['header']); ?>
				</div><!-- /.header-elements -->
			<?php endif; ?>
		</header> <!-- /#branding -->
	</div> <!-- /.wrapper -->
</div> <!-- #branding-full-bg -->

<div class="clearfix"></div>

<?php if ($page['preface']): ?>
	<div id="preface-bg" class="clearfix">
		<section id="preface">
			<?php print render($page['preface']); ?>
		</section> <!-- #preface -->
	</div> <!-- #preface--bg -->
<div class="clearfix"></div>
<?php endif; ?>

<div id="main-wrap-full-bg" class="clearfix">
	<div class="wrapper">
		<section id="main-wrap" role="main">
			
			<a name="startcontent"></a>
			<?php if ($action_links): ?>
				<ul class="action-links"><?php print render($action_links); ?></ul>
			<?php endif; ?>
			<?php print render($title_prefix); ?>
			<?php print render($title_suffix); ?>
			
			
			<?php if ($breadcrumb) : ?><ul id="breadcrumbs"><?php print $breadcrumb; ?></ul><?php endif; ?>
			
			<div id="content-area" class="clearfix">
				
				<?php if ($tabs): ?>
				<div class="page-status">
					<div id="tabs-container">
						<?php print render($tabs); ?>
					</div>
					<div class="clearfix"></div>
				</div>
				<?php endif; ?>
				
				<?php if ($page['highlighted'] || $messages || $page['help']): ?>
					<div id="helpers">
						<?php if ($page['highlighted']): ?>
							<div id="highlighted"><?php print render($page['highlighted']); ?></div>
						<?php endif; ?>
						<?php print $messages; ?>
						<?php print render($page['help']); ?>
					</div> <!-- /#helpers -->
				<?php endif; ?>
			
				<?php if ($page['content_preface']): ?>
					<div id="content-preface" class="clearfix">
						<?php print render($page['content_preface']); ?>
					</div>
				<?php endif; ?>
				<?php if ($page['content']): ?>
					<div id="node-content" class="<?php 
						if (($page['sidebar_first']) && ($page['sidebar_last'])) {
							print 'include-aside-first-last ';
						} elseif ($page['sidebar_first']) {
							print 'include-aside-first ';
						} elseif ($page['sidebar_last']) {
							print 'include-aside-last ';
						} else {
							print 'full ';
						} ?>clearfix">
						<?php print render($page['content']); ?>
					</div>
				<?php endif; ?>
				<?php if ($page['content_footer']): ?>
					<div id="content-footer" class="clearfix">
						<?php print render($page['content_footer']); ?>
					</div>
				<?php endif; ?>
				<?php if ($page['sidebar_first']): ?>
					<aside id="sidebar-first" class="clearfix">
						<?php print render($page['sidebar_first']); ?>
					</aside>
				<?php endif; ?>
			</div>
			<?php if ($page['sidebar_last']): ?>
				<aside id="sidebar-last" class="clearfix">
					<?php print render($page['sidebar_last']); ?>
				</aside>
			<?php endif; ?>
		</section> <!-- /#main-wrap -->
	</div><!-- /.wrapper -->
</div> <!-- /#main-wrap-full-bg -->

<div class="clearfix"></div>

<?php if ($page['postscript_top']): ?>
	<div id="postscript-top-full-bg" class="clearfix">
		<div class="wrapper">
			<div id="postscript-top-bg">
				<section id="postscript-top">
					<?php print render($page['postscript_top']); ?>
				</section> <!-- /#postscript-top -->
			</div> <!-- /#postscript-top-bg -->
		</div> <!-- /.wrapper -->
	</div> <!-- /#postscript-top-bg -->
<div class="clearfix"></div>
<?php endif; ?>


<?php if ($page['postscript_bottom']): ?>
<div id="postscript-bottom-full-bg" class="clearfix">
	<div class="wrapper">
		<section id="postscript-bottom">
			<?php print render($page['postscript_bottom']); ?>
		</section> <!-- /#postscript-bottom -->
	</div> <!-- /.wrapper -->
</div> <!-- /#postscript-bottom-full-bg -->
<div class="clearfix"></div>
<?php endif; ?>

<div id="footer-full-bg" class="clearfix">
	<div class="wrapper">
		<footer id="site-info" class="clearfix footer-bg" role="contentinfo">
			<div class="copyright">
				&copy; <?php print date('Y'); ?> <?php print $site_name; ?>. All Rights Reserved. 
			</div>
			<?php print render($page['footer']); ?>
		</footer> <!-- /#footer -->
	</div> <!-- /.wrapper -->
</div> <!-- /#footer-full-bg -->

