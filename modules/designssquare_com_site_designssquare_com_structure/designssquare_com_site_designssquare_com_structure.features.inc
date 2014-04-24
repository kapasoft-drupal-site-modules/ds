<?php
/**
 * @file
 * designssquare_com_site_designssquare_com_structure.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function designssquare_com_site_designssquare_com_structure_commerce_product_default_types() {
  $items = array(
    'basic_template' => array(
      'type' => 'basic_template',
      'name' => 'Product - Theme',
      'description' => 'product type of Theme',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function designssquare_com_site_designssquare_com_structure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function designssquare_com_site_designssquare_com_structure_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function designssquare_com_site_designssquare_com_structure_node_info() {
  $items = array(
    'template_display' => array(
      'name' => t('Theme Display'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
