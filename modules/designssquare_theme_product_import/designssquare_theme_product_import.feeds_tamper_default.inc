<?php
/**
 * @file
 * designssquare_product_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function designssquare_theme_product_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'themes_display_importer-product-explode';
  $feeds_tamper->importer = 'themes_display_importer';
  $feeds_tamper->source = 'Product';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode SKUs';
  $export['themes_display_importer-product-explode'] = $feeds_tamper;

  return $export;
}
