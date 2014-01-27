<?php
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
 //dsm($view);
?>
<?php if (!empty($title)): ?>
<div class="view-group view-group-<?php print $id; ?>">
  <h3><?php print $title; ?></h3>
<?php endif; ?>
	<div class="clearfix">
<?php foreach ($rows as $id => $row): ?>
  <div class="<?php print $classes_array[$id]; ?>">
    <?php //print $row; ?>
    <?php
    /**
    * Declaring all of the variables
    */
    $sTitle = $view->style_plugin->rendered_fields[$id]['title'];
    $sImage = $view->style_plugin->rendered_fields[$id]['field_image'];
    $sNodePath = $view->style_plugin->rendered_fields[$id]['path'];
    $sDescription = $view->result[$id]->field_body[0]['raw']['safe_value'];
    $sVideoPath = $view->result[$id]->field_field_video_url[0]['raw']['safe_value'];

    // Set the CDN Images Path
    $sCdnPath = substr($sVideoPath,0,strrpos($sVideoPath,'/'));
    $sCdnPath .= '/images/';

    // Set the CDN Image Name
    $sName = substr($sVideoPath,strrpos($sVideoPath,'/') + 1);
    $sName = substr($sName,0,strrpos($sName,'.m4v'));
    $sCdnImage = "$sName.jpg";

    // Set the CDN Image Full Path
    $sCdnImagePath = $sCdnPath.$sCdnImage;
     	

    ?>
	<div class="video-list">
		<a class="video-cover" href="<?php print $sNodePath; ?>">
			<?php if ($sImage): ?>
				<span class="img-fill" style="background-position: center center; background-image:url(<?php print $sImage; ?>);"></span>
			<?php else: ?>
				<span class="img-fill" style="background-position: center center; background-image:url(<?php print $sCdnImagePath; ?>);"></span>
			<?php endif; ?>
			<div class="video-info icon">
				<h4 class="video-title">
					<?php print $sTitle; ?>
				</h4>
			</div>
		</a>
	</div>
    
  </div>
<?php endforeach; ?>
  </div>
<?php if (!empty($title)): ?>
</div> <!--.view-wrapper-->
<?php endif; ?>
