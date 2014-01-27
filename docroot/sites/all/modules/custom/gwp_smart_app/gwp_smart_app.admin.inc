<?php
// $Id$

 /**
  * @file
  * Administration page callbacks for the gwp_smart_app module.
  */

 /**
  * Form builder
  *
  * @permissions 'configure gwp smart app'
  * @see system_settings_form().
  */
  function gwp_smart_app_settings() {
    //include javascript to make the form more intuitive.
    drupal_add_js($GLOBALS['base_url'] . '/' . drupal_get_path('module', 'gwp_smart_app') . '/js/gwp_smart_app.admin.js');
    
    $link = l( t('Blocks Configuration Page'), $GLOBALS['base_url'] . '/admin/structure/block');
    drupal_set_message(t('You must add the Gateway Smart App Banner block to a region, before it will be displayed. You can do this on the !link', array('!link' => $link)), 'warning');
    
    //this must be set since we are using the file upload
    $form['#attributes']['enctype'] = 'multipart/form-data';
    
    //GENEREAL SETTINGS
    //general settings fieldset
    $form['general'] = array(
      '#type' => 'fieldset', 
      '#title' => t('General App Settings'),
      '#collapsible' => true,
      '#collapsed' => false,
    );  
    $form['general']['gwp_smart_app__title'] = array(
      '#type' => 'textfield',
      '#title' => t('Title'),
      '#default_value' => variable_get('gwp_smart_app__title', ''),
      '#size' => '30',        
      '#required' => true,
    );
    $form['general']['gwp_smart_app__author'] = array(
      '#type' => 'textfield',
      '#title' => t('Author'),
      '#default_value' => variable_get('gwp_smart_app__author', ''),
      '#size' => '30',        
      '#required' => true,
    );
    $form['general']['gwp_smart_app__app_argument'] = array(
      '#type' => 'textfield',
      '#title' => t('App Argument'),
      '#description' => t('This is not needed if you want the app argument to be the same as the websites current base url, @base_url', array('@base_url', $GLOBALS['base_url'])),
      '#default_value' => variable_get('gwp_smart_app__app_argument', ''),
      '#size' => '30',        
    );
    $form['general']['gwp_smart_app__price'] = array(
      '#type' => 'textfield',
      '#title' => t('Price'),
      '#default_value' => variable_get('gwp_smart_app__price', 'Free'),
      '#size' => '30',        
      '#required' => true,        
    );
    $form['general']['gwp_smart_app__language'] = array(
      '#type' => 'textfield',
      '#title' => t('Language Code'),
      '#default_value' => variable_get('gwp_smart_app__language', 'us'),
      '#size' => '30',        
      '#required' => true,
    );
    
    //SYSTEM SPECIFIC SETTINGS
    //system specific fieldset
    $form['system_specific'] = array(
      '#type' => 'fieldset', 
      '#title' => t('Enable for:'),
      '#collapsible' => false,
      '#collapsed' => false,        
    );    
    //IOS Settings
    //ios enable (checkbox)
    $form['system_specific']['gwp_smart_app__ios_enabled'] = array(
      '#type' => 'checkbox',
      '#title' => t('IOS Devices'), 
      '#default_value' => variable_get('gwp_smart_app__ios_enabled', false),
      '#required' => false,
    );
    //ios main fieldset
    $form['system_specific']['ios'] = array(
      '#type' => 'fieldset', 
      '#title' => t('IOS Settings'),
      '#collapsible' => true,
      '#collapsed' => false,
    );
    //ios id (text)
    $form['system_specific']['ios']['gwp_smart_app__ios_id'] = array(
      '#type' => 'textfield',
      '#title' => t('App ID'),
      '#default_value' => variable_get('gwp_smart_app__ios_id', ''),
      '#size' => '30',
    );
    //ios icon (file upload)
    $form['system_specific']['ios']['gwp_smart_app__ios_icon'] = array(
      '#type' => 'file',
      '#title' => t('Icon (Upload New)'),
      '#description' => t('If you select a file to upload the Icon Path field will be updated.'),
      '#size' => 100,
      '#default_value' => variable_get('gwp_smart_app__ios_icon', ''),     
    );
    //ios icon path (textfield - auto-populated when uploading icon)
    $form['system_specific']['ios']['gwp_smart_app__ios_icon_path'] = array(
      '#type' => 'textfield',
      '#title' => t('Icon Path'),
      '#description' => t('This will be auto-populated, anytime you upload a new icon image.'),
      '#size' => 100,
      '#default_value' => variable_get('gwp_smart_app__ios_icon_path', ''),     
    );
    //ios text of price (text)
    $form['system_specific']['ios']['gwp_smart_app__ios_price'] = array(
      '#type' => 'textfield',
      '#title' => t('Text for Price'),
      '#default_value' => variable_get('gwp_smart_app__ios_price', 'On the App Store'),
      '#size' => '30',
    );
    
    //Android Settings
    //android enable (checkbox)
    $form['system_specific']['gwp_smart_app__android_enabled'] = array(
      '#type' => 'checkbox',
      '#title' => t('Android Devices'), 
      '#default_value' => variable_get('gwp_smart_app__android_enabled', false),
      '#required' => false,
    );
    //android main fieldset
    $form['system_specific']['android'] = array(
      '#type' => 'fieldset', 
      '#title' => t('Android Settings'),
      '#collapsible' => true,
      '#collapsed' => false,
    );
    //android id (text)
    $form['system_specific']['android']['gwp_smart_app__android_id'] = array(
      '#type' => 'textfield',
      '#title' => t('App ID'),
      '#default_value' => variable_get('gwp_smart_app__android_id', ''),
      '#size' => '30',
    );
    //android icon (file upload)
    $form['system_specific']['android']['gwp_smart_app__android_icon'] = array(
      '#type' => 'file',
      '#title' => t('Icon'),
      '#description' => t('If you select a file to upload the Icon Path field will be updated.'),
      '#size' => 100,
      '#default_value' => variable_get('gwp_smart_app__android_icon', ''),
    );
    //android icon path (textfield - auto-populated when uploading icon)
    $form['system_specific']['android']['gwp_smart_app__android_icon_path'] = array(
      '#type' => 'textfield',
      '#title' => t('Icon Path'),
      '#description' => t('This will be auto-populated, anytime you upload a new icon image.'),
      '#size' => 100,
      '#default_value' => variable_get('gwp_smart_app__android_icon_path', ''),
    );
    //android text of price (text)
    $form['system_specific']['android']['gwp_smart_app__android_price'] = array(
      '#type' => 'textfield',
      '#title' => t('Text for Price'),
      '#default_value' => variable_get('gwp_smart_app__android_price', 'In Google Play'),
      '#size' => '30',
    );
    
    //Windows Settings
    //enable (checkbox)
    $form['system_specific']['gwp_smart_app__windows_enabled'] = array(
      '#type' => 'checkbox',
      '#title' => t('Windows Devices'), 
      '#default_value' => variable_get('gwp_smart_app__windows_enabled', false),
      '#required' => false,
    );
    //windows main fieldset
    $form['system_specific']['windows'] = array(
      '#type' => 'fieldset', 
      '#title' => t('Windows Settings'),
      '#collapsible' => true,
      '#collapsed' => false,
    );
    //windows id (text)
    $form['system_specific']['windows']['gwp_smart_app__windows_id'] = array(
      '#type' => 'textfield',
      '#title' => t('App ID'),
      '#default_value' => variable_get('gwp_smart_app__windows_id', ''),
      '#size' => '30',
    );
    //windows icon (file upload)
    $form['system_specific']['windows']['gwp_smart_app__windows_icon'] = array(
      '#type' => 'file',
      '#title' => t('Icon'),
      '#size' => 100,
      '#default_value' => variable_get('gwp_smart_app__windows_icon', ''),     
    );
    //windows icon path (textfield - auto-populated when uploading icon)
    $form['system_specific']['windows']['gwp_smart_app__windows_icon_path'] = array(
      '#type' => 'textfield',
      '#title' => t('Icon Path'),
      '#description' => t('This will be auto-populated, anytime you upload a new icon image.'),
      '#size' => 100,
      '#default_value' => variable_get('gwp_smart_app__windows_icon_path', ''),
    );
    //windows text of price (text)
    $form['system_specific']['windows']['gwp_smart_app__windows_price'] = array(
      '#type' => 'textfield',
      '#title' => t('Text for Price'),
      '#default_value' => variable_get('gwp_smart_app__windows_price', 'Windows Phone Store'),
      '#size' => '30',
    );
        
    //Return Form
    return system_settings_form($form);
  }

/**
 * Implementation of hook_validate
 * 
 * Validates the settings form for the gwp_smart_app module and called by gwp_smart_app_settings
 * 
 * @param type $form
 * @param type $form_state
 * @param type $form_id
 * @return boolean
 */  
function gwp_smart_app_settings_validate(&$form, &$form_state, $form_id = null) {
  $main_key = !empty($form_state['post']) ? 'post' : 'values';
  //display warning if the user has not enabled this for a device
  if (empty($form['system_specific']['gwp_smart_app__ios_enabled']['#value']) && empty($form['system_specific']['gwp_smart_app__android_enabled']['#value']) && empty($form['system_specific']['gwp_smart_app__windows_enabled']['#value'])) {
    drupal_set_message(t('You have not enabled the smart app banner for a device; therefore, it will not be used.'), 'warning');        
  }
  //loop through the possible devices, for any enabled, require the app id (display error message if not present), upload image file if available, and display warning if no icon specified.
  else {
    $ary_devices = array('ios' => 'IOS', 'android' => 'Android', 'windows' => 'Windows');
    //loop through possible devices
    foreach ($ary_devices as $str_device__machine => $str_device__message) {
      if (!empty($form['system_specific']['gwp_smart_app__' . $str_device__machine . '_enabled']['#value'])) {
        $str_element_name = 'gwp_smart_app__' . $str_device__machine . '_id';
        //display error message if app id is empty for the enabled device
        if (empty($form['system_specific'][$str_device__machine][$str_element_name]['#value'])) {
          form_set_error($str_element_name, t('You specified that you want to enable the smart app funtionality for @str_machine devices, but have not specified an app id.  Please either specify an @str_human App Id, or uncheck the @str_message Devices checkbox', array('@str_machine' => $str_device__machine, '@str_message' => $str_device__message)));
        }
        else {
          //check for icon file, if included, then upload
          $file_path = @$_FILES['files']['tmp_name']['gwp_smart_app__' . $str_device__machine . '_icon'];
          if (!empty($file_path)) {        
            $str_new_file = file_build_uri();
            $str_element_name = 'gwp_smart_app__' . $str_device__machine . '_icon';
            $str_file = file_save_upload($str_element_name, array('.gif', '.jpg', '.jpeg', '.png'), $str_new_file , FILE_EXISTS_REPLACE);
            if ($str_file) {
              $str_file->status = 1;
              file_save($str_file);
              $str_element_name = 'gwp_smart_app__' . $str_device__machine . '_icon_path';
              $form_state[$main_key][$str_element_name] = file_create_url($str_file->uri);
              $form['system_specific'][$str_device__machine][$str_element_name]['#value'] = $form_state[$main_key][$str_element_name];
            }
          }
        }
        //if there is no icon specified, then display warning message
        $str_element_name = 'gwp_smart_app__' . $str_device__machine . '_icon_path';
        if (empty($form_state[$main_key][$str_element_name])) {
          drupal_set_message(t('You specified that you want to enable the smart app funtionality for @str_machine devices, but have not specified an icon.  It would be beneficial to upload an icon.', array('@str_machine' => $str_device__machine, '@str_human' => $str_device__message)), 'warning');
        }        
      }      
    }    
  }
  return true;
}
