<?php
/**
 * @file
 * designssquare_com_ds_structure_data.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function designssquare_com_ds_structure_data_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'designssquare_com_commerce_ds_products';
  $view->description = '';
  $view->tag = 'default, designssquare_products_in_store';
  $view->base_table = 'commerce_product';
  $view->human_name = 'DesignsSquare.com: Commerce: DS Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'DesignsSquare.com.site.ds: DS Drupal Themes - Store';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ';
  $handler->display->display_options['pager']['options']['tags']['next'] = ' ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = ' »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_template' => 'basic_template',
  );

  /* Display: DS Drupal Themes */
  $handler = $view->new_display('block', 'DS Drupal Themes', 'block');
  $handler->display->display_options['display_description'] = 'designssquare.com drupal themes';
  $handler->display->display_options['block_description'] = 'DesignsSquare.com.site.ds: DS Themes - Store';
  $export['designssquare_com_commerce_ds_products'] = $view;

  return $export;
}
