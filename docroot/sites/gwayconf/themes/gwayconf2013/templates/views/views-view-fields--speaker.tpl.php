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

<?php //dsm($fields); 

$path = (!empty($fields['path']->content)) ? $fields['path']->content : false;
	
$speaker_image = (!empty($fields['field_speaker_image_thumbnail']->content)) ? $fields['field_speaker_image_thumbnail']->content : false;
$speaker_org = (!empty($fields['field_speaker_organization']->content)) ? $fields['field_speaker_organization']->content : false;
?>



<a class="speaker" href="<?php print $path; ?>">
	<span class="speaker-image-single" style="background-image:url(<?php print $speaker_image; ?>);"></span>
	<div class="speaker-title">
		<h2><?php print $row->node_title; ?></h2>
		<h3><?php print $speaker_org; ?></h3>
	</div>
</a>

<?php if (1==2): ?>
<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php print $field->content; ?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>
<?php endif; ?>