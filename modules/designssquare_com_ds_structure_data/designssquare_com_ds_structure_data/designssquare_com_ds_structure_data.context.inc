<?php
/**
 * @file
 * designssquare_com_ds_structure_data.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function designssquare_com_ds_structure_data_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ds_front';
  $context->description = 'front for DesignsSquare.com site';
  $context->tag = 'designssquare.com';
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
        'views-dc6adcdd9674a9346e78b31aaaa2ecb3' => array(
          'module' => 'views',
          'delta' => 'dc6adcdd9674a9346e78b31aaaa2ecb3',
          'region' => 'slider',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('designssquare.com');
  t('front for DesignsSquare.com site');
  $export['ds_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ds_theme_store';
  $context->description = 'designssquare.com theme products in store';
  $context->tag = 'designssquare.com';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'premium-drupal-themes' => 'premium-drupal-themes',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ff58796db7547c8d527da911bc53c119' => array(
          'module' => 'views',
          'delta' => 'ff58796db7547c8d527da911bc53c119',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-8403abc57c4eec5cf1db71982e974cf0' => array(
          'module' => 'views',
          'delta' => '8403abc57c4eec5cf1db71982e974cf0',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-3dd2adb25c3fe06b324e91c255de053d' => array(
          'module' => 'views',
          'delta' => '3dd2adb25c3fe06b324e91c255de053d',
          'region' => 'shop_space',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('designssquare.com');
  t('designssquare.com theme products in store');
  $export['ds_theme_store'] = $context;

  return $export;
}
