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
      
    	<section class="grid-16 push-1" role="complementary">
					<?php print render($page['header_top']); ?>
      </section>
        
    </div><!-- #header-top -->
    
  </div><!-- .containter-18 -->   
                
</div><!-- #header-top-bg -->
  
<div id="branding-full-bg" class="clearfix">

  <div class="container-18">

		<div id="branding-bg" class="grid-18">
  
      <header id="branding" class="grid-16 push-1" role="banner">
            
      	<div class="site-title">
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
				<?php if ($main_menu): ?>
            <p id="skip-link"><em><a href="#startcontent">Skip to Navigation</a></em> &darr;</p>
            <nav id="main-nav" role="navigation">
               <?php print render($page['main_nav']); ?>
            </nav> <!-- /#main-nav -->
        <?php endif; ?>
                        
        <?php if ($page['header']): ?>
        <div class="clearfix"></div>
        	<div class="header-elements grid-11">
          	<?php print render($page['header']); ?>
          </div><!-- /.header-elements -->
        <?php endif; ?>
                              
      </header> <!-- /#branding -->
      
      
    </div> <!-- #branding--bg -->

  </div> <!-- .container-18 -->
  
</div> <!-- #branding-full-bg -->

  
<div class="clearfix"></div>

<div id="main-wrap-full-bg" class="clearfix">
<?php if ($page['preface']): ?>
  <div class="clearfix"></div>
  
  
      <div id="preface-bg" class="clearfix">
    
      	<section id="preface">
        	<?php print render($page['preface']); ?>
        </section> <!-- #preface -->
          
      </div> <!-- #preface--bg -->
  
<?php endif; ?>

	<div class="container-18">
  
	<div id="main-wrap-bg" class="grid-18 clearfix">
  
    <div id="main-wrap" class="grid-16 push-1 clearfix">

<?php if ($page['sidebar_first'] || $page['content'] || $page['sidebar_last']): ?>

      <section class="<?php if($page['sidebar_first'] && $page['sidebar_last']): print 'grid-8 push-4 sidebar-both'; 
																							elseif ($page['sidebar_first']): print 'grid-10 push-6 sidebar-left';
																							elseif ($page['sidebar_last']): print 'grid-10 sidebar-right';
                                              elseif ($page['preface']): print 'grid-16'; 
																							else: print 'grid-16 full'; endif; ?>" role="main">
       
       <div id="content-area">
  
      <?php if ($breadcrumb || $page['highlighted'] || $messages || $page['help']): ?>
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
        
							<?php if (($page['content_preface_col_one']) || ($page['content_preface_col_two']) || ($page['content_preface_col_three'])): ?>
        <div class="clearfix"></div>
        <div id="content-preface" class="clearfix">
          <?php if ($page['content_preface_col_one']): ?>
            <div id="content-preface-col-one" class="<?php if(($page['content_preface_col_two']) && ($page['content_preface_col_three'])): print 'desk-3 horz-tabt-3 vert-tabt-2 mobile-1'; 
                                                              elseif ($page['content_preface_col_two']): print 'desk-2 horz-tabt-2 vert-tabt-1 mobile-1';
																															else: print 'desk-1 horz-tabt-1 vert-tabt-1 mobile-1'; endif; ?>" role="complementary">
              <?php print render($page['content_preface_col_one']); ?>
            </div> <!-- /#content-preface-col-one -->
          <?php endif; ?>
          <?php if ($page['content_preface_col_two']): ?>
            <div id="content-preface-col-two" class="<?php print render($page['content_preface_col_three']) ? ('desk-3 horz-tabt-3 vert-tabt-2 mobile-1') : ('desk-2 horz-tabt-2 vert-tabt-1 mobile-1') ?>" role="complementary">
              <?php print render($page['content_preface_col_two']); ?>
            </div> <!-- /#content-preface-col-two -->
          <?php endif; ?>
          <?php if ($page['content_preface_col_three']): ?>
            <div id="content-preface-col-three" class="desk-3 horz-tabt-3 vert-tabt-2 mobile-1" role="complementary">
              <?php print render($page['content_preface_col_three']); ?>
            </div> <!-- /#content-preface-col-two -->
          <?php endif; ?>
        </div> <!-- /#content-preface -->
      <?php endif; ?>
    
        <!-- Plucked this from http://drupal.stackexchange.com/questions/12908/how-to-remove-add-new-content-from-the-main-page to remove drupal home page content -->
				<?php  if(drupal_is_front_page())
        	{	unset($page['content']); } 
        print render($page['content']); 
    		?>

        <?php if (($page['content_postscript_col_one']) || ($page['content_postscript_col_two']) || ($page['content_postscript_col_three'])): ?>
          <div class="clearfix"></div>
          <div id="content-postscript" class="clearfix">
            <?php if ($page['content_postscript_col_one']): ?>
              <div id="content-postscript-col-one" class="<?php if(($page['content_postscript_col_two']) && ($page['content_postscript_col_three'])): print 'desk-3 horz-tabt-3 vert-tabt-2 mobile-1'; 
                                                                elseif ($page['content_postscript_col_two']): print 'desk-2 horz-tabt-2 vert-tabt-1 mobile-1';
                                                                else: print 'desk-1 horz-tabt-1 vert-tabt-1 mobile-1'; endif; ?>" role="complementary">
                <?php print render($page['content_postscript_col_one']); ?>
              </div> <!-- /#content-postscript-col-one -->
            <?php endif; ?>
            <?php if ($page['content_postscript_col_two']): ?>
              <div id="content-postscript-col-two" class="<?php print render($page['content_postscript_col_three'])	? ('desk-3 horz-tabt-3 vert-tabt-2 mobile-1') : ('desk-2 horz-tabt-2 vert-tabt-1 mobile-1') ?>" role="complementary">
                <?php print render($page['content_postscript_col_two']); ?>
              </div> <!-- /#content-postscript-col-two -->
            <?php endif; ?>
            <?php if ($page['content_postscript_col_three']): ?>
              <div id="content-postscript-col-three" class="desk-3 horz-tabt-3 vert-tabt-1 mobile-1" role="complementary">
                <?php print render($page['content_postscript_col_three']); ?>
              </div> <!-- /#content-postscript-col-two -->
            <?php endif; ?>
          </div> <!-- /#content-postscript -->
        <?php endif; ?>
      
        <?php if (($page['content_footer_col_one']) || ($page['content_footer_col_two']) || ($page['content_footer_col_three'])): ?>
          <div class="clearfix"></div>
          <div id="content-footer" class="clearfix">
            <?php if ($page['content_footer_col_one']): ?>
              <div id="content-footer-col-one" class="<?php if(($page['content_footer_col_two']) && ($page['content_footer_col_three'])): print 'desk-3 horz-tabt-3 vert-tabt-2 mobile-1'; 
                                                                elseif ($page['content_footer_col_two']): print 'desk-2 horz-tabt-2 vert-tabt-1 mobile-1';
                                                                else: print 'desk-1 horz-tabt-1 vert-tabt-1 mobile-1'; endif; ?>" role="complementary">
                <?php print render($page['content_footer_col_one']); ?>
              </div> <!-- /#content-footer-col-one -->
            <?php endif; ?>
            <?php if ($page['content_footer_col_two']): ?>
              <div id="content-footer-col-two" class="<?php print render($page['content_footer_col_three'])	? ('desk-3 horz-tabt-3 vert-tabt-2 mobile-1') : ('desk-2 horz-tabt-2 vert-tabt-1 mobile-1') ?>" role="complementary">
                <?php print render($page['content_footer_col_two']); ?>
              </div> <!-- /#content-footer-col-two -->
            <?php endif; ?>
            <?php if ($page['content_footer_col_three']): ?>
              <div id="content-footer-col-three" class="desk-3 horz-tabt-3 vert-tabt-2 mobile-1" role="complementary">
                <?php print render($page['content_footer_col_three']); ?>
              </div> <!-- /#content-footer-col-two -->
            <?php endif; ?>
          </div> <!-- /#content-footer -->
        <?php endif; ?>
        <?php if ($breadcrumb): ?>
            <div id="breadcrumb"><?php print $breadcrumb; ?></div>
          <?php endif; ?>
			</div> <!-- /#content-area -->
      
      </section> 
  
      <?php if ($page['sidebar_first']): ?>
        <aside id="sidebar-first" class="<?php if($page['sidebar_last']): print 'grid-4 pull-8'; 
																							else: print 'grid-6 pull-10'; endif; ?> sidebar" role="complementary">
		      <?php if ($page['sub_nav']): ?>
            <nav id="sub-nav" role="navigation">
              <?php print render($page['sub_nav']); ?>
            </nav> <!-- /#sub-menu -->
		      <?php endif; ?>        
          <?php print render($page['sidebar_first']); ?>
        </aside> <!-- /#sidebar-first -->
      <?php endif; ?>        
            
        
      <?php if ($page['sidebar_last']): ?>
        <aside id="sidebar-last" class="grid-6" role="complementary">
          <?php print render($page['sidebar_last']); ?>
        </aside> <!-- /#sidebar-last -->
      <?php endif; ?>
      
<?php endif; ?>
  
    </div> <!-- /#main-wrap -->
    
  </div> <!-- /#main-wrap-bg -->
  
  </div> <!-- /.container-18 -->
    
</div> <!-- /#main-wrap-full-bg -->

<div class="clearfix"></div>

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

<div class="clearfix"></div>

<?php endif; ?>

<?php if ($page['bottom_main_nav']): ?>

  <div id="bottom-main-nav-full-bg" class="clearfix">
  
    <div class="container-18">
    
      <div id="bottom-main-nav-bg" class="grid-16 push-1">

        	<div id="bottom-main-nav">
        		<?php print render($page['bottom_main_nav']); ?>
          </div>

    	</div> <!-- /#bottom-main-nav-bg -->
    
    </div> <!-- /.container-18 -->

	</div> <!-- /#bottom-main-nav-full-bg -->

<div class="clearfix"></div>

<?php endif; ?>

<?php if (($page['postscript_bottom_col_one']) || ($page['postscript_bottom_col_two']) || ($page['postscript_bottom_col_three'])): ?>

  <div id="postscript-bottom-full-bg" class="clearfix">
  
    <div class="container-18">
    
      <div id="postscript-bottom-bg" class="grid-18">
      
        <div id="postscript-bottom" class="grid-16 push-1">
            
          <div id="postscript-bottom-col-one" class="<?php if(($page['postscript_bottom_col_two']) && ($page['postscript_bottom_col_three'])): print 'desk-3 horz-tabt-3 vert-tabt-2 mobile-1'; 
                                                                elseif ($page['postscript_bottom_col_two']): print 'desk-2 horz-tabt-2 vert-tabt-1 mobile-1';
                                                                else: print 'desk-1 horz-tabt-1 vert-tabt-1 mobile-1'; endif; ?>" role="complementary">
            <?php print render($page['postscript_bottom_col_one']); ?>
          </div> <!-- /#postscript-bottom-col-one .grid-6 -->
      
          <div id="postscript-bottom-col-two" class="<?php print render($page['postscript_bottom_col_three'])	? ('desk-3 horz-tabt-3 vert-tabt-2 mobile-1') : ('desk-2 horz-tabt-2 vert-tabt-1 mobile-1') ?>" role="complementary">
            <?php print render($page['postscript_bottom_col_two']); ?>
          </div> <!-- /#postscript-bottom-col-two .grid-6 -->
    
          <div id="postscript-bottom-col-three" class="desk-3 horz-tabt-3 vert-tabt-2 mobile-1" role="complementary">
            <?php print render($page['postscript_bottom_col_three']); ?>
            <?php if ($bottom_main_nav): ?>
              <nav id="main-nav-mobile" role="navigation">
                <section>
                  <?php print render($page['bottom_main_nav']); ?>
                </section>
              </nav> <!-- /#main-nav-mobile -->
            <?php endif; ?>
          </div> <!-- /#postscript-bottom-col-three .grid-4 -->
            
        </div> <!-- /#postscript-bottom .grid-16 -->

      </div> <!-- /#postscript-bottom-bg .grid-18 -->
  
    </div> <!-- /.container-18 -->
    
  </div> <!-- /#postscript-bottom-full-bg -->

<div class="clearfix"></div>
  
<?php endif; ?>  
    
<div id="site-info-full-bg" class="clearfix">

  <div class="container-18">
  	
    <div id="site-info-bg" class="grid-18">
    
      <footer id="site-info" class="grid-16 push-1" role="contentinfo">
    	<div class="copyright">
    		&copy; <?php print date('Y'); ?> <a href="http://gatewaypeople.com/" target="_blank">Gateway Church</a>. All Rights Reserved. <?php print render($page['footer']); ?>
    	</div>
          <ul class="affiliates">
            <li><a class="gateway-church" title="Gateway Church Logo" href="http://gatewaypeople.com/" target="_blank"><span>Gateway Church</span></a></li>
          </ul>
    	</footer> <!-- /#site-info -->
      
    </div> <!-- /#site-info-bg -->
    
	</div> <!-- /.container-18 -->
  
</div> <!-- /#site-info-full-bg -->


<div id="footer-links-full-bg" class="clearfix">

  <div class="container-18">
  	
    <div id="footer-links-bg" class="grid-18">
    
      <footer id="footer-links" class="grid-16 push-1" role="contentinfo">
          <?php print render($page['footer']); ?>
    	</footer> <!-- /#footer-links -->
      
    </div> <!-- /#footer-links-bg -->
    
	</div> <!-- /.container-18 -->
  
</div> <!-- /#footer-links-full-bg -->
