<?php
// $Id$

/**
 * @file
 * Content administration and module settings UI.
 */

/**
 * Menu callback, to display admin settings for jQuery Countdown module.
 *
 */
function gateway_twitter_admin() {

  $form = array();
  
/*  $form['gateway_twitter_feed_url'] = array(
    '#title' => t('Twitter feed URL'),
    '#description' => t('Input the Twitter feed URL, such as "http://twitter.com/statuses/user_timeline/gatewaypeople.json?callback=twitterCallback2&count=3"'),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_feed_url', '')),
    '#max_length' => 255,
    '#size' => 60,
    '#required' => TRUE
  );*/
  
  $form['gateway_twitter_block_title'] = array(
    '#title' => t('Block Title'),
    '#description' => t(''),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_block_title', '')),
    '#max_length' => 100,
    '#size' => 20,
    '#required' => TRUE
  );
  
  $form['gateway_twitter_search_string'] = array(
    '#title' => t('Twitter Search String'),
    '#description' => t('Any valid Twitter search string, such as "#summit from:gateway_men OR from:gatewaypeople" See details at https://twitter.com/#!/search-advanced and http://support.twitter.com/articles/71577-how-to-use-advanced-twitter-search for more details.'),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_search_string', '')),
    '#max_length' => 255,
    '#size' => 60,
    '#required' => TRUE
  );
  
  $form['gateway_twitter_interval'] = array(
    '#title' => t('Tweet Interval?'),
    '#description' => t('Tweet interval in milliseconds.'),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_interval', '30000')),
    '#max_length' => 10,
    '#size' => 20,
    '#required' => TRUE
  );
  
  $form['gateway_twitter_title'] = array(
    '#title' => t('Title'),
    '#description' => t(''),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_title', 'Latest Tweets')),
    '#max_length' => 100,
    '#size' => 20,
    '#required' => TRUE
  );
  
  $form['gateway_twitter_caption'] = array(
    '#title' => t('Caption'),
    '#description' => t(''),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_caption', 'GatewayPeople')),
    '#max_length' => 100,
    '#size' => 20,
    '#required' => TRUE
  );
  
  $form['gateway_twitter_width'] = array(
    '#title' => t('Width'),
    '#description' => t('Width in pixels. Use "auto" for a dynamic width.'),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_width', 'auto')),
    '#max_length' => 10,
    '#size' => 20,
    '#required' => TRUE
  );
  
  $form['gateway_twitter_height'] = array(
    '#title' => t('Height'),
    '#description' => t('Height in pixels.'),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_height', '300')),
    '#max_length' => 10,
    '#size' => 20,
    '#required' => TRUE
  );
  
  $form['gateway_twitter_shell_background'] = array(
    '#title' => t('Shell Background'),
    '#description' => t('Background such as "#8ec1da" or "lightblue".'),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_shell_background', '#8ec1da')),
    '#max_length' => 20,
    '#size' => 20,
    '#required' => TRUE
  );
  
  $form['gateway_twitter_shell_color'] = array(
    '#title' => t('Shell Color'),
    '#description' => t('Color such as "#ffffff" or "white".'),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_shell_color', '#ffffff')),
    '#max_length' => 20,
    '#size' => 20,
    '#required' => TRUE
  );
  
  $form['gateway_twitter_tweets_background'] = array(
    '#title' => t('Tweets Background'),
    '#description' => t('Background such as "#ffffff" or "white".'),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_tweets_background', '#ffffff')),
    '#max_length' => 20,
    '#size' => 20,
    '#required' => TRUE
  );
  
  $form['gateway_twitter_tweets_color'] = array(
    '#title' => t('Tweets Color'),
    '#description' => t('Color such as "#444444" or "grey".'),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_tweets_color', '#444444')),
    '#max_length' => 20,
    '#size' => 20,
    '#required' => TRUE
  );
  
  $form['gateway_twitter_tweets_links'] = array(
    '#title' => t('Tweets Links Color'),
    '#description' => t('Links color such as "#1985b5" or "blue".'),
    '#type' => 'textfield',
    '#default_value' => check_plain(variable_get('gateway_twitter_tweets_links', '#1985b5')),
    '#max_length' => 20,
    '#size' => 20,
    '#required' => TRUE
  );
  
/*  $form['jquery_countdown_title'] = array(
    '#title' => t('Display Title'),
    '#description' => t('Check to display a title of "<i>Event name</i>"'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('jquery_countdown_title', '')
  );
  
  $form['jquery_countdown_target'] = array(
    '#title' => t('Start countdown from'),
    '#description' => t(''),
    '#type' => 'date_popup',
    '#default_value' => variable_get('jquery_countdown_target', '')
  );
  
  $form['jquery_countdown_until'] = array(
    '#title' => t('Display Until'),
    '#description' => t('Check to display "Until <i>Event name</i>"'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('jquery_countdown_until', '')
  );
  
  $form['jquery_countdown_exp_txt'] = array(
    '#title' => t('Expiry Text'),
    '#description' => t('Enter the message that will be shown when the countdown reaches zero.'),
    '#type' => 'textarea',
    '#default_value' => check_plain(variable_get('jquery_countdown_exp_txt', ''))
  );
  
  $form['jquery_countdown_msg_format'] = array(
    '#title' => t('Message format'),
    '#description' => t('Enter time components seperated by spaces, each component will be included in the countdown block. For example: <strong>%years %months %weeks %days %hours %minutes %seconds</strong> will display <strong>Years Months Weeks Days Hours Minutes Seconds</strong> in countdown, <strong>%days %hours</strong> will display <strong>Days Hours</strong> in countdown. The order of component will not affect the countdown output i.e. <strong>%months %years</strong> will display <strong>Years Months</strong>.'),
    '#type' => 'textarea',
    '#default_value' => check_plain(variable_get('jquery_countdown_msg_format', ''))
  );*/
  
  return system_settings_form($form);
}// end function gateway_twitter_admin;
