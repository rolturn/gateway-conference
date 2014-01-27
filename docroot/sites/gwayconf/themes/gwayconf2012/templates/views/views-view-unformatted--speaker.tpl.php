<?php
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php //dsm($view); ?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="speaker-list clearfix">
	<?php foreach ($rows as $id => $row): ?>
      <div class="<?php print $classes_array[$id]; ?>">
          <?php print $row; ?>
      </div>
	<?php endforeach; ?>
</div>

