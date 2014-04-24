<?php
/**
 * @file
 * designssquare_com_ds_structure_data.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function designssquare_com_ds_structure_data_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bazar_theme-bazar_another_widget'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'bazar_another_widget',
    'module' => 'bazar_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bazar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bazar',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bazar_theme-bazar_customer_support'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'bazar_customer_support',
    'module' => 'bazar_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bazar' => array(
        'region' => 'header_sidebar_top_right',
        'status' => 1,
        'theme' => 'bazar',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bazar_theme-bazar_love_is_sharing'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'bazar_love_is_sharing',
    'module' => 'bazar_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bazar' => array(
        'region' => 'header_sidebar_bottom',
        'status' => 1,
        'theme' => 'bazar',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bazar_theme-contact_form'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'contact_form',
    'module' => 'bazar_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bazar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bazar',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bazar_theme-contact_form_horizon'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'contact_form_horizon',
    'module' => 'bazar_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bazar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bazar',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bazar_theme-contact_info'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'contact_info',
    'module' => 'bazar_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'bazar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bazar',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bazar_theme-contact_info2'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'contact_info2',
    'module' => 'bazar_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bazar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bazar',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bazar_theme-search_form_small'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'search_form_small',
    'module' => 'bazar_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bazar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bazar',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bazar_theme-slider_swap'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'slider_swap',
    'module' => 'bazar_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bazar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bazar',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['designssquare_com_ds-ds_chat'] = array(
    'cache' => 0,
    'custom' => 0,
    'delta' => 'ds_chat',
    'module' => 'designssquare_com_ds',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bazar' => array(
        'region' => 'header_sidebar_top_left',
        'status' => 1,
        'theme' => 'bazar',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
