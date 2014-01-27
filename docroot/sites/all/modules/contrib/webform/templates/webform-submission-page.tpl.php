<?php

/**
 * @file
 * Customize the navigation shown when editing or viewing submissions.
 *
 * Available variables:
 * - $node: The node object for this webform.
 * - $mode: Either "form" or "display". May be other modes provided by other
 *          modules, such as "print" or "pdf".
 * - $submission: The Webform submission array.
 * - $submission_content: The contents of the webform submission.
 * - $submission_navigation: The previous submission ID.
 * - $submission_information: The next submission ID.
 */
?>

<?php
//echo '<pre>';
//print_r($submission);
if (module_exists('fillpdf')) {
	// Depending on wether or not the graduate app was filled out
	// we need to load a different pdf for filling.
	$form_id = 251; // Should match the nid of the undergrad app
	if ($submission->data[235]['value'][0] == 'graduate') {
		$form_id = 252; // Should match the nid of the grad app
	}
	echo l("Download Filled PDF", fillpdf_pdf_link($form_id, null, $webform = array('nid'=>184,'sid'=>$submission->sid)));
}
?>
<?php if ($mode == 'display' || $mode == 'form'): ?>
  <div class="clearfix">
    <?php print $submission_actions; ?>
    <?php print $submission_navigation; ?>
  </div>
<?php endif; ?>

<?php print $submission_information; ?>

<div class="webform-submission">
  <?php print render($submission_content); ?>
</div>

<?php if ($mode == 'display' || $mode == 'form'): ?>
  <div class="clearfix">
    <?php print $submission_navigation; ?>
  </div>
<?php endif; ?>
