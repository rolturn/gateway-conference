<?php
/**
 * @file
 * alpha_summit_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alpha_summit_core_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ad_non_home_page';
  $context->description = 'Context for ads for non home page';
  $context->tag = 'ad';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ad-block_1' => array(
          'module' => 'views',
          'delta' => 'ad-block_1',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for ads for non home page');
  t('ad');
  $export['ad_non_home_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'alpha_home';
  $context->description = 'General home page context';
  $context->tag = 'home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ad-block' => array(
          'module' => 'views',
          'delta' => 'ad-block',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'webform-client-block-8' => array(
          'module' => 'webform',
          'delta' => 'client-block-8',
          'region' => 'postscript_top',
          'weight' => '-10',
        ),
        'views-speaker-block_2' => array(
          'module' => 'views',
          'delta' => 'speaker-block_2',
          'region' => 'postscript_top',
          'weight' => '-9',
        ),
        'views-ad-block_2' => array(
          'module' => 'views',
          'delta' => 'ad-block_2',
          'region' => 'postscript_top',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('General home page context');
  t('home');
  $export['alpha_home'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'downloads';
  $context->description = 'Context for the downloads page.';
  $context->tag = 'downloads';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'downloads' => 'downloads',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-download-block_3' => array(
          'module' => 'views',
          'delta' => 'download-block_3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-download-block_2' => array(
          'module' => 'views',
          'delta' => 'download-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-download-block_1' => array(
          'module' => 'views',
          'delta' => 'download-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-download-block' => array(
          'module' => 'views',
          'delta' => 'download-block',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for the downloads page.');
  t('downloads');
  $export['downloads'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'general';
  $context->description = 'General context for all pages';
  $context->tag = 'general';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'header_top',
          'weight' => '-10',
        ),
        'menu-menu-secondary-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-secondary-menu',
          'region' => 'secondary_nav',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'header',
          'weight' => '-10',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => 1,
          'region' => 'main_nav',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('General context for all pages');
  t('general');
  $export['general'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'general_non_home_page';
  $context->description = 'General context for all pages but the home page';
  $context->tag = 'general';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~<front>' => '~<front>',
        '~speaker' => '~speaker',
        '~speaker/*' => '~speaker/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'gateway_addthis-gateway_addthis' => array(
          'module' => 'gateway_addthis',
          'delta' => 'gateway_addthis',
          'region' => 'add_this',
          'weight' => '-10',
        ),
        'views-speaker-block' => array(
          'module' => 'views',
          'delta' => 'speaker-block',
          'region' => 'sidebar_last',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('General context for all pages but the home page');
  t('general');
  $export['general_non_home_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page';
  $context->description = 'Context for the home page';
  $context->tag = 'home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-speaker-block_1' => array(
          'module' => 'views',
          'delta' => 'speaker-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for the home page');
  t('home');
  $export['home_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media';
  $context->description = 'Context for media';
  $context->tag = 'media';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media' => 'media',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-video-block' => array(
          'module' => 'views',
          'delta' => 'video-block',
          'region' => 'content',
          'weight' => '-29',
        ),
        'views-image_gallery-block' => array(
          'module' => 'views',
          'delta' => 'image_gallery-block',
          'region' => 'content',
          'weight' => '-28',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for media');
  t('media');
  $export['media'] = $context;

  return $export;
}
