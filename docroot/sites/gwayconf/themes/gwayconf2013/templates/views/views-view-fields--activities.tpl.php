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

<?php //dsm($fields); ?>

<div class="activity">
	<hgroup>
		<h2 class="activity-title"><?php print render($fields['title']->content); ?></h2>
	</hgroup>
	<?php if($fields['field_session_image']->content): ?>
	<span class="img-fill <?php if (($fields['field_session_image']->content) == '') print 'no-image'; ?>" style="background-position: center center; background-image:url(<?php print $fields['field_session_image']->content; ?>);"></span>
	<?php endif; ?>
	<div class="content <?php if (($fields['field_session_image']->content) == '') print 'no-image'; ?>">
		<?php if($fields['field_session_time']->content): ?>
			<div class="activity-time">
				<span class="label">Happens On: </span>
				<?php if ($fields['field_session_day'] !== '') print render($fields['field_session_day']->content); ?>
				<?php if ($fields['field_session_time'] !== '') print render($fields['field_session_time']->content); ?>
			</div>
		<?php endif; ?>
		<div class="body">
			<?php print render($fields['body']->content); ?>
		</div>
		<div class="more"><?php print render($fields['edit_node']->content); ?></div>
	</div>
</div>
<div class="clearfix"></div>