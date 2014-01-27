<div class="views-field-<?php print drupal_clean_css_identifier($view->field[$field]->field); ?>">
	<?php if ($view->field[$field]->label()) { ?>
		<label class="view-label-<?php print drupal_clean_css_identifier($view->field[$field]->field); ?>">
			<?php print $view->field[$field]->label(); ?>:
		</label>
	<?php } ?>
	<div class="views-content-<?php print drupal_clean_css_identifier($view->field[$field]->field); ?>">
		<div class="pager-item">
			<span class="img-fill" style="background-position: center center; background-image:url(<?php print $view->style_plugin->rendered_fields[$count]['field_image']; ?>);"></span>
<!--
			<div class="pager-body">
				<?php print $view->style_plugin->rendered_fields[$count]['title']; ?>
			</div>
-->
		</div>
	</div>
</div>

<?php //dsm($view); ?>
