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
<ul class="pdf-list clearfix">
	<?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?> pdf">
          <?php print $row; ?>
      </li>
	<?php endforeach; ?>
</ul>

