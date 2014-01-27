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
 //dsm($node);
// Set up an array to create the meta tag

 
?>


<!--[if lt IE 9]>
	<link type="text/css" rel="stylesheet" href="<?php print $base_path . path_to_theme() . '/css/fix-ie.css'; ?>" media="all" />
<![endif]-->


<div id="header-top-full-bg" class="clearfix">
<div id="mobile-nav">
	<div class="mobile-nav-wrapper">
		<?php print render($page['mobile_nav']); ?>
	</div>
</div>
	<div class="wrapper">
		<div id="header-top" class="clearfix">
			<section role="complementary">
				<?php print render($page['header_top']); ?>
			</section>
		</div><!-- #header-top -->
	</div><!-- .wrapper --> 
</div><!-- #header-top-bg -->


<div id="branding-full-bg" class="clearfix">
	<div class="wrapper">
		<div id="branding-bg">
			<header id="branding" role="banner">
			
				<div class="site-title">
					<a href="<?php print $front_page; ?>" class="img-fill" style="background-image:url(<?php print $logo; ?>);" title="<?php print t('Home'); ?>" rel="home">
						<?php if ($site_name): ?>
							<h1 id="site-name">
								<?php print $site_name; ?>
								<?php if ($site_slogan): ?>
									<div class="site-slogan"><?php print $site_slogan; ?></div>
								<?php endif; ?>
							</h1>
						<?php endif; ?>
					</a>
				</div><!-- /.site-title -->
					<a href="#" id="mobile-nav-trigger">
						<span class="icon-bar"></span>
						<span class="icon-bar"></span>
						<span class="icon-bar last"></span>
					</a>

				
				<p id="skip-link"><em><a href="#startcontent">Skip to Navigation</a></em> &darr;</p>
				<div class="navigation">
					<?php if ($page['sub_nav']): ?>
						<nav id="sub-nav" role="navigation">
							 <?php print render($page['sub_nav']); ?>
						</nav> <!-- /#sub-nav -->
					<?php endif; ?>
					<?php if ($main_menu): ?>
						<nav id="main-nav" role="navigation">
							 <?php print render($page['main_nav']); ?>
						</nav> <!-- /#main-nav -->
					<?php endif; ?>
				</div>
				
				<?php if ($page['header']): ?>
					<div class="clearfix"></div>
					<div class="header-elements">
						<?php print render($page['header']); ?>
					</div><!-- /.header-elements -->
				<?php endif; ?>
				
			</header> <!-- /#branding -->
		</div> <!-- #branding--bg -->
	</div> <!-- .wrapper -->
</div> <!-- #branding-full-bg -->


<?php if ($page['preface']): ?>
	<div id="preface-bg" class="clearfix">
		<section id="preface">
			<?php print render($page['preface']); ?>
		</section> <!-- #preface -->
	</div> <!-- #preface--bg -->
<?php endif; ?>


<div class="clearfix"></div>


<div id="main-wrap-full-bg" class="clearfix">
	<div class="wrapper">
		<div id="main-wrap-bg" class="clearfix">
			<div id="main-wrap" class="clearfix">
			
				<?php if ($page['sidebar_first'] || $page['content'] || $page['sidebar_last']): ?>
				
					<section role="main">
					
						<div id="content-area" class="<?php if ($page['sidebar_first'] && $page['sidebar_last'] ? print 'include-side-first-last' : ($page['sidebar_last'] ? print 'include-side-last' : print 'full')); ?>">
						
							<?php if ($page['highlighted'] || $messages || $page['help']): ?>
								<div id="helpers">
									<?php if ($page['highlighted']): ?>
										<div id="highlighted"><?php print render($page['highlighted']); ?></div>
									<?php endif; ?>
									<?php print $messages; ?>
									<?php print render($page['help']); ?>
								</div> <!-- /#helpers -->
							<?php endif; ?>
							
							<a name="startcontent"></a>
							<?php if ($action_links): ?>
								<ul class="action-links"><?php print render($action_links); ?></ul>
							<?php endif; ?>
							<?php print render($title_prefix); ?>
							<?php print render($title_suffix); ?>
							<?php if ($tabs): ?>
								<?php print render($tabs); ?>
							<?php endif; ?>
							
							<?php if ($page['content_preface']): ?>
								<div class="clearfix"></div>
								<div id="content-preface" class="clearfix">
									<?php print render($page['content_preface']); ?>
								</div> <!-- /#content-preface -->
							<?php endif; ?>
							
							<?php print render($page['content']); ?>
							
							<?php if ($page['content_postscript']): ?>
								<div class="clearfix"></div>
								<div id="content-postscript" class="clearfix">
									<?php print render($page['content_postscript']); ?>
								</div> <!-- /#content-postscript -->
							<?php endif; ?>
							
							<?php if ($page['content_footer']): ?>
								<div class="clearfix"></div>
								<div id="content-footer" class="clearfix">
									<?php print render($page['content_footer']); ?>
								</div> <!-- /#content-footer -->
							<?php endif; ?>
							
						</div> <!-- /#content-area -->
						
					</section> <!-- role:main -->
					
					<?php if ($page['sidebar_first']): ?>
						<aside id="sidebar-first" role="complementary">
							<?php if ($page['sub_nav']): ?>
								<nav id="sub-nav" role="navigation">
									<?php print render($page['sub_nav']); ?>
								</nav> <!-- /#sub-menu -->
							<?php endif; ?>
							<?php print render($page['sidebar_first']); ?>
						</aside> <!-- /#sidebar-first -->
					<?php endif; ?>
					
					<?php if ($page['sidebar_last']): ?>
						<aside id="sidebar-last" role="complementary">
							<?php print render($page['sidebar_last']); ?>
						</aside> <!-- /#sidebar-last -->
					<?php endif; ?>
					
				<?php endif; ?>
				
			</div> <!-- /#main-wrap -->
		</div> <!-- /#main-wrap-bg -->
	</div> <!-- /.wrapper -->
</div> <!-- /#main-wrap-full-bg -->


<?php if ($page['postscript_top']): ?>
	<div class="clearfix"></div>
	<div id="postscript-top-full-top-bg" class="clearfix"></div>
	<div class="clearfix"></div>
	<div id="postscript-top-full-bg" class="clearfix">
		<div class="wrapper">
			<div id="postscript-top-bg">
				<section id="postscript-top">
					<?php print render($page['postscript_top']); ?>
				</section> <!-- /#postscript-top -->
			</div> <!-- /#postscript-top-bg -->
		</div> <!-- /.wrapper -->
	</div> <!-- /#postscript-top-bg -->
<?php endif; ?>


<?php if ($page['postscript_bottom'] || $page['postscript_bottom_col_one'] || $page['postscript_bottom_col_two']): ?>
	<div class="clearfix"></div>
	<div id="postscript-bottom-full-bg" class="clearfix">
		<div class="wrapper">
			<div id="postscript-bottom-bg">
				<?php if ($page['postscript_bottom']): ?>
					<section id="postscript-bottom">
						<?php print render($page['postscript_bottom']); ?>
					</section> <!-- /#postscript-bottom -->
				<div class="clearfix"></div>
				<?php endif; ?>
				<?php if ($page['postscript_bottom_col_one'] && $page['postscript_bottom_col_two']): ?>
					<section id="postscript-bottom-col-one">
						<?php print render($page['postscript_bottom_col_one']); ?>
					</section> <!-- /#postscript-bottom-col-one -->
					<section id="postscript-bottom-col-two">
						<?php print render($page['postscript_bottom_col_two']); ?>
					</section> <!-- /#postscript-bottom-col-two -->
				<div class="clearfix"></div>
				<?php endif; ?>
			</div> <!-- /#postscript-bottom-bg -->
		</div> <!-- /.wrapper -->
	</div> <!-- /#postscript-bottom-bg -->
<?php endif; ?>


<div id="site-info-full-bg" class="clearfix">
	<div class="wrapper">
		<div id="site-info-bg">
			<footer id="site-info" role="contentinfo">
				<div class="copyright">
					&copy; <?php print date('Y'); ?> <a href="http://gatewaypeople.com/" target="_blank">Gateway Church</a>. All Rights Reserved. 
				</div>
				<div class="affiliate-group">
					<ul class="affilliates">
						<li><a class="logo-gateway-church" target="_blank" href="http://gatewaypeople.com"></a>
					</ul>
				</div>
				<?php print render($page['footer']); ?>
			</footer> <!-- /#site-info -->
		</div> <!-- /#site-info-bg -->
	</div> <!-- /.wrapper -->
</div> <!-- /#site-info-full-bg -->


