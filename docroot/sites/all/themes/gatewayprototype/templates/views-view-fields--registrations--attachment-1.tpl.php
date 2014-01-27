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
<?php 
  $registration_page = arg(1);
  if (empty($registration_page) OR empty($fields['field_registrations_description']->content)):
    $fields['field_registrations_title']->content = '';
    $fields['field_registrations_description']->content = '';
    $fields['field_registrations_title_1']->content = '';
    $fields['field_registrations_cost']->content = '';
  endif;
  if ($registration_page == 'early' OR empty($fields['field_registrations_early_desc']->content)):
    $fields['field_registrations_early_title']->content = '';
    $fields['field_registrations_early_desc']->content = '';
    $fields['field_registrations_early_title_1']->content = '';
    $fields['field_registrations_early_cost']->content = '';
  endif;
  if ($registration_page == 'late' OR empty($fields['field_registrations_late_descr']->content)):
    $fields['field_registrations_late_title']->content = '';
    $fields['field_registrations_late_descr']->content = '';
    $fields['field_registrations_late_title_1']->content = '';
    $fields['field_registrations_late_cost']->content = '';
  endif;
  if ($registration_page == 'scholarship' OR empty($fields['field_registrations_sch_desc']->content)):
    $fields['field_registrations_sch_title']->content = '';
    $fields['field_registrations_sch_desc']->content = '';
    $fields['field_registrations_sch_title_1']->content = '';
    $fields['field_registrations_sch_cost']->content = '';
  endif;
  if ($registration_page == 'student' OR empty($fields['field_registrations_stdnt_desc']->content)):
    $fields['field_registrations_stdnt_title']->content = '';
    $fields['field_registrations_stdnt_desc']->content = '';
    $fields['field_registrations_stdnt_title_1']->content = '';
    $fields['field_registrations_stdnt_cost']->content = '';
  endif;
  if ($registration_page == 'volunteer' OR empty($fields['field_registrations_vol_desc']->content)):
    $fields['field_registrations_vol_title']->content = '';
    $fields['field_registrations_vol_desc']->content = '';
    $fields['field_registrations_vol_title_1']->content = '';
    $fields['field_registrations_vol_cost']->content = '';
  endif;

 ?>
<?php //foreach ($fields as $id => $field): ?>
  <?php //if (!empty($field->separator)): ?>
    <?php //print $field->separator; ?>
  <?php //endif; ?>

  <?php //print $field->wrapper_prefix; ?>
    <?php //print $field->label_html; ?>
    <?php //print $field->content; ?>
  <?php //print $field->wrapper_suffix; ?>
<?php //endforeach; ?>