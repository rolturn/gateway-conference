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
 
 /*
 * This is adding a comment
 */
?>


<div id="header-top-bg" class="clearfix">

  <div class="container-18">
    <div id="header-top" class="grid-18">
    
    	<div class="grid-2 spacer">&nbsp;</div>
      <section>
	      <?php print render($page['header_top']); ?>
      </section>
      <nav id="secondary-nav" class="grid-16" role="navigation">
        <?php //print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu', 'class' => array('links', 'clearfix')), 'heading' => array('text' => t('Secondary menu'), 'level' => 'h2', 'class' => array('element-invisible'))));  ?>
	      <?php print render($page['secondary_nav']); ?>
      </nav> <!-- /#secondary-menu -->
    </div><!-- #header-top -->
  </div><!-- .containter-18 -->   
              
</div><!-- #header-top-bg -->



<div class="container-18">

  <header id="branding" class="grid-18" role="banner">
    		<div class="grid-1 spacer">&nbsp;</div>
     
     
     
     
     
      <?php if ($site_name || $logo): ?>
        <div id="identity" class="grid-5">
        	<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
             <!-- <h1 id="site-name">
                <img src="<?php //print $logo; ?>" alt="<?php //print t('Home'); ?>" /><span><?php //print $site_name; ?></span>
              </h1>-->
            <?php if ($site_slogan): ?>
              <h2>
                <span><?php // print $site_slogan; ?></span>
              </h2>
            <?php endif; ?>
          </a>
     
     
     
     
     
     
     
    			<?php print render($page['header']); ?>
        </div> <!-- /#Identity -->
      <?php endif; ?>
    <?php if ($main_menu): ?>
      <p id="skip-link"><em><a href="#startcontent">Skip to Navigation</a></em> &darr;</p>
      <nav id="main-nav" class="grid-11 push-1" role="navigation">
        <section>
          <?php print render($page['main_nav']); ?>
        </section>
      </nav> <!-- /#main-nav -->
    <?php endif; ?>
  
       
        
      
        
    <div class="clearfix"></div>
		<?php if ($page['preface']): ?>
    <div class="grid-1 clearfix">&nbsp;</div>
		<section id="preface" class="grid-16">
        
   <div class="mobi-logo" style="display:none;"></div>
        
        
        <?php print render($page['preface']); ?>
		</section> <!-- #preface .grid-16 -->
		<?php endif; ?>
    
    
  
  </header> <!-- /#branding /.grid-18 -->
  
  </div><!-- end of top container 18-->
  
  
  <div class="content-bg" style="">
  <div class="container-18">



  <div id="main-wrap" class="grid-16 push-1 clearfix">

      <?php if ($breadcrumb || $page['highlighted'] || $messages || $page['help']): ?>
        <div id="helpers" class="<?php //print ($page['sidebar_first'])	? ('grid-14 push-4') : ('grid-13 push-1') ?>">

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
		<?php if ($page['content_top'] || $tabs): ?>
      <div id="content-top" class="grid-11 clearfix">
            <?php if ($tabs): ?>
              <?php print render($tabs); ?>
            <?php endif; ?>
      </div>
    <?php endif; ?>

		<div id="content-main" class="<?php print ($page['sidebar_last'])	? ('grid-11') : ('grid-16 ') ?> clearfix">
    
      
       			 <?php if(1==2): ?>
					<section id="content" class="<?php print ($page['sidebar_first']) ? ('grid-9 push-1 ') : ('grid-11 ') ?>" role="main">
				<?php endif; ?>
					
					<section id="content" class="<?php if(($page['sidebar_last']) && ($page['sidebar_first'])): print 'grid-9 push-1'; 
                                                             elseif ($page['sidebar_last']): print 'grid-11';
	                                                         else: print 'grid-16'; endif; ?>" role="main">
          	<a name="startcontent"></a>
						<?php if ($action_links): ?>
              <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
						<?php print render($title_prefix); ?>
          <?php print render($page['add_this']); ?>
          
          
          
              <?php if (!drupal_is_front_page()) { ?>
					<?php if ($title): ?>
          	<h1 class="page_title"><?php print $title ?></h1>
          <?php endif; ?>
				<?php } ?>   	
              
              
              
            <?php print render($title_suffix); ?>
        		<?php print render($page['content_top']); ?>
        		<?php print render($page['content']); ?>
        		<?php print render($page['content_bottom']); ?>
					</section> <!-- /#content /.grid-12 if sidebar-first is not present /.grid-9 if sidebarOne is present -->

				 <?php if ($page['sidebar_first']): ?>
          <aside id="sidebar-first" class="grid-3 pull-9 sidebar" role="complementary">
            <?php print render($page['sidebar_first']); ?>
          </aside> <!-- /#sidebar-first -->
        <?php endif; ?>        
          
          
    </div> <!-- /#content-main -->
      
      <?php if ($page['sidebar_last']): ?>
      	<aside id="sidebar-last" class="grid-4 push-1" role="complementary">
        <div class="tapertop" style="height:50px;"></div>
      		<?php print render($page['sidebar_last']); ?>
        <div class="taper" style="height:100px;"></div></aside> <!-- /#sidebar-last -->
			<?php endif; ?>

  </div> <!-- /#main-wrap -->
  
   </div><!-- end of mid container 18-->
<div style="clear:both;"></div>


     <div id="postscript-bottom" class="grid-18">    
        
     <?php if ($main_menu): ?>
            <a name="mobile-nav"></a>
            <nav id="main-nav-mobile" role="navigation">
              <section>
                <?php print render($page['main_nav']); ?>
              </section>
            </nav> <!-- /#main-nav -->
          <?php endif; ?>
          
         <?php print render($page['secondary_nav']); ?>
     </div><!--postscript-bottom-->
<div style="height:20px;dislplay:block;"></div>

</div> <!--end of content-bg--> 


  <div class="container-18">
 
  
		<?php if ($page['postscript_top']): ?>
		<section id="postscript-top" class="grid-16 push-1">
      <?php print render($page['postscript_top']); ?>
		</section> <!-- /#postscript-top -->
		<?php endif; ?>

   </div> <!-- /.container-18 -->
<div class="clearfix"></div>

    
<div id="site-info-bg" class="clearfix">
 
    
  <div class="container-18">
<!-- <div class="grid-1 spacer">&nbsp;</div>-->

<!-- <div class="footer-tagline" role="contentinfo"><img src="<?php //print base_path( )?><?php //print path_to_theme() ?>/images/footer-tagline.png" width="" height="" /></div>-->
   
<footer id="site-info" class="grid-16 push-1 " role="contentinfo">
    	<div class="grid-8 copyright">
    		&copy; <?php print date('Y'); ?> Gateway Church. All Rights Reserved. <?php print render($page['footer']); ?>
    	</div>
    	<div class="site-info-logos">
        <a href="http://gatewaypeople.com" target="_blank" class="logo-gateway-church"><span>Gateway Church logo</span></a>
       <!-- <a href="http://men.gatewaypeople.com" target="_blank" class="logo-gateway-men"><span>Gateway Men Ministry logo</span></a>-->
      </div>
    </footer> <!-- /#siteInfo -->
</div> <!-- /.container-18 -->
</div>
<script type="text/javascript">
<!-- content toggle for breakout speakers page -->
		jQuery(".bio-toggle").click(function() {

     jQuery(this).toggleClass('active');

});
</script>