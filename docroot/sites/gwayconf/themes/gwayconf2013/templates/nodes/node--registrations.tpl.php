<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<?php //dsm($node); ?>

<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($user_picture || $title || $display_submitted): ?>
    <header>
      <?php if ($user_picture): ?>
      	<?php print $user_picture; ?>
      <?php endif; ?>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
      	<hgroup>
					<?php if($node->field_registrations_type['und'][0]['value']=='special_event'): ?>
            <h1 class="title" <?php print $title_attributes; ?>><?php print $title; ?></h1>
            <h2 class="conference-date"><?php print render($content['field_registrations_date']); ?><?php if (!empty($node->field_registrations_time)): ?> | <?php print render($content['field_registrations_time']); ?><?php endif; ?></h2>
					<?php elseif($node->field_registrations_type['und'][0]['value']=='conference'): ?>
            <h1 class="title" <?php print $title_attributes; ?>><?php print $title; ?> (<?php print render($content['field_registrations_date']); ?>)</h2>
          <?php endif; ?>
					<?php if($node->field_registations_child_avail['und'][0]['value']=='1'): ?>
            <span class="childcare">Childcare is available for <?php print $title; ?> ONLY.</span>
          <?php endif; ?>
					<?php if($node->field_registations_child_avail['und'][0]['value']=='0'): ?>
            <span class="childcare">Childcare is NOT available for <?php print $title; ?>.</span>
					<?php endif; ?>
      	</hgroup>
      <?php endif; ?>

      <?php if ($display_submitted): ?>
        <p class="submitted">
          <?php
            print t('Submitted by !username on !datetime',
              array('!username' => $name, '!datetime' => $date));
          ?>
        </p>
      <?php endif; ?>
    </header>
  <?php endif; ?>
  <?php if (!empty($node->field_registrations_early_title) || !empty($node->field_registrations_title) || !empty($node->field_registrations_child_title)  || !empty($node->field_registrations_stdnt_title)  || !empty($node->field_registrations_vol_title) || !empty($node->field_registrations_late_title) || !empty($node->field_registrations_grp_title)): ?>
    <h3 class="">Rates*</h3>
    <?php if (!empty($node->field_registrations_early_title)): ?>
        <div class="registration-list-row regular-registration <?php if($node->field_registrations_early_sold['und'][0]['value']=='1'): print 'soldout'; else: print ''; endif; ?> clearfix">
          <div class="registration-title">
            <?php print render($content['field_registrations_early_title']); ?> <span class="registration-spec"><?php print render($content['field_registrations_early_spec']); ?></span>
          </div>
          <div class="registration-cost">
            <?php if($node->field_registrations_early_sold['und'][0]['value']=='1'): ?>
              <span>Free</span>
            <?php else: ?>
              <?php print render($content['field_registrations_early_cost']); ?>
            <?php endif; ?>
          </div>
          <div class="registration-link">
            <?php if($node->field_registrations_early_sold['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($node->field_registrations_early_link)): ?>
                <a href="<?php print render($content['field_registrations_early_link']); ?>" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
        <div class="clearfix"></div>
    <?php endif; ?>
    <?php if (!empty($node->field_registrations_title)): ?>
        <div class="registration-list-row regular-registration <?php if($node->field_registrations_soldout['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?> clearfix">
          <div class="registration-title">
            <?php print render($content['field_registrations_title']); ?> <span class="registration-spec"><?php print render($content['field_registrations_spec']); ?></span>
          </div>
          <div class="registration-cost">
            <?php if($node->field_registrations_free['und'][0]['value']=='1'): ?>
              <span>Free</span>
            <?php else: ?>
              <?php print render($content['field_registrations_cost']); ?>
            <?php endif; ?>
          </div>
          <div class="registration-link">
            <?php if($node->field_registrations_soldout['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($node->field_registrations_link)): ?>
                <a href="<?php print render($content['field_registrations_link']); ?>" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
        <div class="clearfix"></div>
    <?php endif; ?>
    <?php if (!empty($node->field_registrations_vol_title)): ?>
        <div class="registration-list-row regular-registration <?php if($node->field_registrations_vol_soldout['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?> clearfix">
          <div class="registration-title">
            <?php print render($content['field_registrations_vol_title']); ?> <span class="registration-spec"><?php print render($content['field_registrations_vol_spec']); ?></span>
          </div>
          <div class="registration-cost">
            <?php if($node->field_registrations_vol_free['und'][0]['value']=='1'): ?>
              <span>Free</span>
            <?php else: ?>
              <?php print render($content['field_registrations_vol_cost']); ?>
            <?php endif; ?>
          </div>
          <div class="registration-link">
            <?php if(($node->field_registrations_vol_free['und'][0]['value']=='1') && ($node->field_registrations_vol_soldout['und'][0]['value']=='1')): ?>
              <span class="not-available">Not Available</span>
            <?php elseif($node->field_registrations_vol_soldout['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($node->field_registrations_vol_link)): ?>
                <a href="<?php print render($content['field_registrations_vol_link']); ?>" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
        <div class="clearfix"></div>
    <?php endif; ?>
    <?php if (!empty($node->field_registrations_stdnt_title)): ?>
        <div class="registration-list-row regular-registration <?php if($node->field_registrations_stdnt_sold['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?> clearfix">
          <div class="registration-title">
            <?php print render($content['field_registrations_stdnt_title']); ?> <span class="registration-spec"><?php print render($content['field_registrations_stdnt_spec']); ?></span>
          </div>
          <div class="registration-cost">
            <?php print render($content['field_registrations_stdnt_cost']); ?>
          </div>
          <div class="registration-link">
            <?php if($node->field_registrations_stdnt_sold['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($node->field_registrations_stdnt_link)): ?>
                <a href="<?php print render($content['field_registrations_stdnt_link']); ?>" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
        <div class="clearfix"></div>
    <?php endif; ?>
    <?php if (!empty($node->field_registrations_grp_title)): ?>
        <div class="registration-list-row regular-registration <?php if($node->field_registrations_grp_soldout['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?> clearfix">
          <div class="registration-title">
            <?php print render($content['field_registrations_grp_title']); ?> <span class="registration-spec"><?php print render($content['field_registrations_grp_spec']); ?></span>
          </div>
          <div class="registration-cost">
            <?php print render($content['field_registrations_grp_cost']); ?>
          </div>
          <div class="registration-link">
            <?php if($node->field_registrations_grp_soldout['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($node->field_registrations_grp_link)): ?>
                <a href="<?php print render($content['field_registrations_grp_link']); ?>" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
        <div class="clearfix"></div>
    <?php endif; ?>
    <?php if (!empty($node->field_registrations_late_title)): ?>
        <div class="registration-list-row regular-registration <?php if($node->field_registrations_late_soldout['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?> clearfix">
          <div class="registration-title">
            <?php print render($content['field_registrations_late_title']); ?><span class="registration-spec"><?php print render($content['field_registrations_late_spec']); ?></span>
          </div>
          <div class="registration-cost">
            <?php print render($content['field_registrations_late_cost']); ?>
          </div>
          <div class="registration-link">
            <?php if($node->field_registrations_late_soldout['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($node->field_registrations_late_link)): ?>
                <a href="<?php print render($content['field_registrations_late_link']); ?>" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
        <div class="clearfix"></div>
    <?php endif; ?>
    <?php if (!empty($node->field_registrations_child_title)): ?>
        <div class="registration-list-row regular-registration <?php if($node->field_registrations_child_sold['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?> clearfix">
          <div class="registration-title">
            <?php print render($content['field_registrations_child_title']); ?> <span class="registration-spec"><?php print render($content['field_registrations_child_spec']); ?></span>
          </div>
          <div class="registration-cost">
            <?php if($node->field_registrations_child_free['und'][0]['value']=='1'): ?>
              <span>Free</span>
            <?php else: ?>
              <?php print render($content['field_registrations_child_cost']); ?>
            <?php endif; ?>
          </div>
          <div class="registration-link">
            <?php if($node->field_registations_child_avail['und'][0]['value']=='0'): ?>
              <span class="not-available">Not Available</span>
            <?php elseif(($node->field_registrations_child_free['und'][0]['value']=='1') && ($node->field_registrations_child_sold['und'][0]['value']=='1')): ?>
              <span class="not-available">Not Available</span>
            <?php elseif($node->field_registrations_child_sold['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($node->field_registrations_child_link)): ?>
                <a href="<?php print render($content['field_registrations_child_link']); ?>" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
        <div class="clearfix"></div>
    <?php endif; ?>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments, tags and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_tags']);
      hide($content['field_registrations_early_title']);
      hide($content['field_registrations_early_cost']);
      hide($content['field_registrations_early_link']);
      hide($content['field_registrations_early_spec']);
      hide($content['field_registrations_title']);
      hide($content['field_registrations_cost']);
      hide($content['field_registrations_link']);
      hide($content['field_registrations_spec']);
      hide($content['field_registrations_vol_title']);
      hide($content['field_registrations_vol_cost']);
      hide($content['field_registrations_vol_link']);
      hide($content['field_registrations_vol_spec']);
      hide($content['field_registrations_stdnt_title']);
      hide($content['field_registrations_stdnt_cost']);
      hide($content['field_registrations_stdnt_link']);
      hide($content['field_registrations_stdnt_spec']);
      hide($content['field_registrations_sch_title']);
      hide($content['field_registrations_sch_cost']);
      hide($content['field_registrations_sch_link']);
      hide($content['field_registrations_sch_spec']);
      hide($content['field_registrations_grp_title']);
      hide($content['field_registrations_grp_cost']);
      hide($content['field_registrations_grp_link']);
      hide($content['field_registrations_grp_spec']);
      hide($content['field_registrations_late_title']);
      hide($content['field_registrations_late_cost']);
      hide($content['field_registrations_late_link']);
      hide($content['field_registrations_late_spec']);
      hide($content['field_registrations_child_title']);
      hide($content['field_registrations_child_cost']);
      hide($content['field_registrations_child_link']);
      hide($content['field_registrations_child_spec']);
      hide($content['field_registrations_date']);
      hide($content['field_registrations_time']);
      print render($content);
    ?>
  </div> <!-- /.content -->

  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <footer>
      <?php print render($content['field_tags']); ?>
      <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>

  <?php print render($content['comments']); ?>

</article> <!-- /.node -->
