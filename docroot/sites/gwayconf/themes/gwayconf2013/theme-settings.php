<?php
function gwayconf2013_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['typekit_settings'] = array(
  	'#type' => 'fieldset', 
  	'#title' => t('Typekit Settings'), 
  	'#weight' => 5, 
  	'#collapsible' => FALSE
  );
  
  $form['typekit_settings']['typekit_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Typekit Kit ID'),
    '#default_value' => theme_get_setting('typekit_id'),
    '#description' => t('Example: ice8cny'),
  );
}