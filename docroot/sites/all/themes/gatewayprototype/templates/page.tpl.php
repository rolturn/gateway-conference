<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
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

<div id="header-top-full-bg" class="clearfix">
  
	<div class="container-18">

		<div id="header-top" class="grid-18">
      
    	<section class="header-stuff pull-1" role="complementary">
					<?php print render($page['header_top']); ?>
					<?php if ($page['search_bar']): ?>
              <?php print render($page['search_bar']); ?>
          <?php endif; ?>
      </section>
        
    </div><!-- #header-top -->
    
  </div><!-- .containter-18 -->   
                
</div><!-- #header-top-bg -->
  
<div id="branding-full-bg" class="clearfix">

  <div class="container-18">

		<div id="branding-bg" class="grid-18" class="clearfix">
  
      <header id="branding" class="grid-16 push-1" role="banner">
            
      	<div class="site-title grid-6">
      		<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
      			<?php if ($logo): ?>
            	<img src="<?php print $logo; ?>" class="adaptive-image" alt="<?php print t('Home'); ?>" />
            <?php endif; ?>
            <?php if ($site_name): ?>
            	<h1 id="site-name">
              	<?php print $site_name; ?>
                <?php if ($site_slogan): ?>
                	<br /><span class="site-slogan"><?php print $site_slogan; ?></span>
                <?php endif; ?>
              </h1>
            <?php endif; ?>
          </a>
        </div><!-- /.site-title -->
                
        <?php if ($page['header']): ?>
        	<div class="header-elements grid-11">
          	<?php print render($page['header']); ?>
          </div><!-- /.header-elements -->
        <?php endif; ?>
                              
      </header> <!-- /#branding -->
      
    </div> <!-- #branding--bg -->

  </div> <!-- .container-18 -->
  
</div> <!-- #branding-full-bg -->


<?php if ($main_menu): ?>
  <div class="clearfix"></div>
  
  <div id="main-nav-full-bg" class="clearfix">
  
    <div class="container-18">
  
      <div id="main-nav-bg" class="grid-18" class="clearfix">
    
        <p id="skip-link"><em><a href="#startcontent">Skip to Navigation</a></em> &darr;</p>
        <nav id="main-nav" class="grid-16 push-1" role="navigation">
          <?php print render($page['main_nav']); ?>
        </nav> <!-- /#main-nav -->
          
      </div> <!-- #main-nav--bg -->
  
    </div> <!-- .container-18 -->
    
  </div> <!-- #main-nav-full-bg -->
<?php endif; ?>

<?php if ($page['preface']): ?>
  <div class="clearfix"></div>
  
  <div id="preface-full-bg" class="clearfix">
  
    <div class="container-18">
  
      <div id="preface-bg" class="grid-18" class="clearfix">
    
      	<section id="preface">
        	<?php print render($page['preface']); ?>
        </section> <!-- #preface -->
          
      </div> <!-- #preface--bg -->
  
    </div> <!-- .container-18 -->
    
  </div> <!-- #preface-full-bg -->
<?php endif; ?>
  
<div class="clearfix"></div>

<div id="main-wrap-full-bg" class="clearfix">

	<div class="container-18">
  
	<div id="main-wrap-bg" class="grid-18 clearfix">
  
    <div id="main-wrap" class="grid-16 push-1 clearfix">
  
      <?php if ($breadcrumb || $page['highlighted'] || $messages || $page['help']): ?>
        <div id="helpers" class="<?php print ($page['sidebar_first'])	? ('grid-12 push-4') : ('grid-16') ?>">
  
          <?php if ($breadcrumb): ?>
            <div id="breadcrumb"><?php print $breadcrumb; ?></div>
          <?php endif; ?>
          <?php if ($page['highlighted']): ?>
            <div id="highlighted"><?php print render($page['highlighted']); ?></div>
          <?php endif; ?>
          <?php print $messages; ?>
          <?php print render($page['help']); ?>
              
        </div> <!-- /#helpers /.grid-12 if sidebar-first is not present /.grid-9 if sidebarOne is present -->
      <?php endif; ?>
  
      <section id="content-area" class="<?php if($page['sidebar_first'] && $page['sidebar_last']): print 'grid-8 push-4'; 
																							elseif ($page['sidebar_first']): print 'grid-12 push-4';
																							elseif ($page['sidebar_last']): print 'grid-12';
																							else: print 'grid-16'; endif; ?>" role="main">
        <a name="startcontent"></a>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php if ($tabs): ?>
        	<?php print render($tabs); ?>
        <?php endif; ?>
        <?php print render($page['content_top']); ?>
        
				<?php print render($page['content']); ?>
        <?php print render($page['content_bottom']); ?>
      </section> <!-- /#content-area -->
  
      <?php if ($page['sidebar_first']): ?>
        <aside id="sidebar-first" class="<?php if($page['sidebar_last']): print 'grid-4 pull-8'; 
																							else: print 'grid-4 pull-12'; endif; ?> sidebar" role="complementary">
		      <?php if ($page['sub_nav']): ?>
            <nav id="sub-nav" role="navigation">
              <?php print render($page['sub_nav']); ?>
            </nav> <!-- /#sub-menu -->
		      <?php endif; ?>        
          <?php print render($page['sidebar_first']); ?>
        </aside> <!-- /#sidebar-first -->
      <?php endif; ?>        
            
        
        <?php if ($page['sidebar_last']): ?>
          <aside id="sidebar-last" class="grid-4" role="complementary">
            <?php print render($page['sidebar_last']); ?>
          </aside> <!-- /#sidebar-last -->
        <?php endif; ?>
  
    </div> <!-- /#main-wrap -->
    
  </div> <!-- /#main-wrap-bg -->
  
  </div> <!-- /.container-18 -->
    
</div> <!-- /#main-wrap-full-bg -->

<?php if ($page['postscript_top']): ?>

  <div id="postscript-top-full-bg" class="clearfix">
  
    <div class="container-18">
    
      <div id="postscript-top-bg" class="grid-18">

        <section id="postscript-top" class="grid-16 push-1">
          <?php print render($page['postscript_top']); ?>
        </section> <!-- /#postscript-top -->
    
    	</div> <!-- /#postscript-top-bg .grid-18 -->
    
    </div> <!-- /.container-18 -->

	</div> <!-- /#postscript-top-bg -->

<?php endif; ?>

<div class="clearfix"></div>

<?php if (($page['postscript_bottom_col_one']) || ($page['postscript_bottom_col_two']) || ($page['postscript_bottom_col_three'])): ?>

  <div id="postscript-bottom-full-bg" class="clearfix">
  
    <div class="container-18">
    
      <div id="postscript-bottom-bg" class="grid-18">
      
        <div id="postscript-bottom" class="grid-16 push-1">
            
          <section id="postscript-bottom-col-one" class="<?php print ($page['postscript_bottom_col_three'])	? ('grid-6 post') : ('grid-8 post') ?>" role="complementary">
            <?php print render($page['postscript_bottom_col_one']); ?>
          </section> <!-- /#postscript-bottom-col-one .grid-6 -->
      
          <section id="postscript-bottom-col-two" class="<?php print ($page['postscript_bottom_col_three'])	? ('grid-6 post') : ('grid-8 post') ?>" role="complementary">
            <?php print render($page['postscript_bottom_col_two']); ?>
          </section> <!-- /#postscript-bottom-col-two .grid-6 -->
    
          <section id="postscript-bottom-col-three" class="grid-4 post sidebar" role="complementary">
            <?php print render($page['postscript_bottom_col_three']); ?>
            <?php if ($bottom_main_menu): ?>
              <a name="mobile-nav"></a>
              <nav id="main-nav-mobile" role="navigation">
                <section>
                  <?php print render($page['bottom_main_nav']); ?>
                </section>
              </nav> <!-- /#bottom-main-nav -->
            <?php endif; ?>
          </section> <!-- /#postscript-bottom-col-three .grid-4 -->
            
        </div> <!-- /#postscript-bottom .grid-16 -->

      </div> <!-- /#postscript-bottom-bg .grid-18 -->
  
    </div> <!-- /.container-18 -->
    
  </div> <!-- /#postscript-bottom-full-bg -->
  
<?php endif; ?>  
    
<div id="site-info-full-bg" class="clearfix">

  <div class="container-18">
  	
    <div id="site-info-bg" class="grid-18">
    
      <footer id="site-info" class="grid-16 push-1" role="contentinfo">
        <div class="grid-6 copyright">
          &copy; <?php print date('Y'); ?> <a href="http://gatewaypeople.com/" target="_blank">Gateway Church</a>. All Rights Reserved.
          <ul class="affiliates">
            <li><a class="gateway-church" title="Gateway Church" href="http://gatewaypeople.com/" target="_blank"><span>Gateway Church</span></a></li>
            <li><a class="kings-university" title="The Kings University" href="http://kingsuniversity.edu/" target="_blank"><span>The Kings University</span></a></li>
          </ul>
        </div>
        <div class="grid-10 footer-links">
          <?php print render($page['footer']); ?>
        </div>
    	</footer> <!-- /#site-info -->
      
    </div> <!-- /#site-info-bg -->
    
	</div> <!-- /.container-18 -->
  
</div> <!-- /#site-info-full-bg -->
