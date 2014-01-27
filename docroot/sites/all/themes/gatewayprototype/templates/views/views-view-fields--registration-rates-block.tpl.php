<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<!--This block is set up via views field tpl unlike other blocks due to the fact that this content is from only one type.
		If additional elements are needed to be added you will need to add them by hand to the list below.
    The field will also need to be adjusted similar to the others here. -->
    
<?php dsm($fields); ?>

<?php //foreach ($fields as $id => $field): ?>
  <?php //if (!empty($field->separator)): ?>
    <?php //print $field->separator; ?>
  <?php //endif; ?>

  <?php //print $field->wrapper_prefix; ?>
    <?php //print $field->label_html; ?>
    <?php //hide($field->content); ?>
  <?php //print $field->wrapper_suffix; ?>
<?php //endforeach; ?>


<?php if (!empty($row->field_field_registrations_link[0]['rendered'])): ?>
<div class="regis-block-views-row regis-block-regular clearfix">
	<?php if (!empty($fields['field_registrations_desc']->content)): ?>
    <a href="registration"><?php print render($fields['field_registrations_title']->content); ?></a>
  <?php else: ?>
		<?php print render($fields['field_registrations_title']->content); ?>
  <?php endif; ?>
	<?php print render($fields['field_registrations_cost']->content); ?>
	<?php print render($fields['field_registrations_link']->content); ?>
	<?php print render($fields['field_registrations_spec']->content); ?>
</div>
<?php endif; ?>


<?php if (!empty($row->field_field_registrations_early_cost[0]['rendered']) || ($row->field_field_registrations_early_link[0]['rendered'])): ?>
<div class="regis-block-views-row regis-block-early clearfix">
	<?php print render($fields['field_registrations_early_title']->content); ?>
	<?php print render($fields['field_registrations_early_cost']->content); ?>
	<?php print render($fields['field_registrations_early_link']->content); ?>
</div>
<?php endif; ?>

<?php if (!empty($row->field_field_registrations_late_cost[0]['rendered']) || ($row->field_field_registrations_late_link[0]['rendered'])): ?>
<div class="regis-block-views-row regis-block-late clearfix">
	<?php print render($fields['field_registrations_late_title']->content); ?>
	<?php print render($fields['field_registrations_late_cost']->content); ?>
	<?php print render($fields['field_registrations_late_link']->content); ?>
</div>
<?php endif; ?>

<?php if (!empty($row->field_field_registrations_vol_cost[0]['rendered']) || ($row->field_field_registrations_vol_link[0]['rendered'])): ?>
<div class="regis-block-views-row regis-block-vol clearfix">
	<?php print render($fields['field_registrations_vol_title']->content); ?>
	<?php print render($fields['field_registrations_vol_cost']->content); ?>
	<?php print render($fields['field_registrations_vol_link']->content); ?>
</div>
<?php endif; ?>

<?php if (!empty($row->field_field_registrations_sch_cost[0]['rendered']) || ($row->field_field_registrations_sch_link[0]['rendered'])): ?>
<div class="regis-block-views-row regis-block-sch clearfix">
	<?php print render($fields['field_registrations_sch_title']->content); ?>
	<?php print render($fields['field_registrations_sch_cost']->content); ?>
	<?php print render($fields['field_registrations_sch_link']->content); ?>
</div>
<?php endif; ?>

<?php if (!empty($row->field_field_registrations_stdnt_cost[0]['rendered']) || ($row->field_field_registrations_stdnt_link[0]['rendered'])): ?>
<div class="regis-block-views-row regis-block-stdnt clearfix">
	<?php print render($fields['field_registrations_stdnt_title']->content); ?>
	<?php print render($fields['field_registrations_stdnt_cost']->content); ?>
	<?php print render($fields['field_registrations_stdnt_link']->content); ?>
</div>
<?php endif; ?>
