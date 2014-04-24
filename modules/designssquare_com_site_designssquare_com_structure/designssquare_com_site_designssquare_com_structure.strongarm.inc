<?php
/**
 * @file
 * designssquare_com_site_designssquare_com_structure.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function designssquare_com_site_designssquare_com_structure_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__template_display';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'product:field_category' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
        ),
        'product:field_demo_url' => array(
          'default' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
        ),
        'product:field_description' => array(
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
        ),
        'product:field_design_framework' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'product:field_design_owner' => array(
          'default' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
        ),
        'product:field_design_price' => array(
          'default' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
        ),
        'product:field_featured_image' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
        ),
        'product:field_featured_image_magnified' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
        ),
        'product:field_hide_demo_header' => array(
          'default' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
        ),
        'product:field_is_featured_design' => array(
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
        ),
        'product:field_is_new_product' => array(
          'default' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
        ),
        'product:field_is_on_sale' => array(
          'default' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
        ),
        'product:field_mobile_support' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'product:field_other_images' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'product:field_template_color' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'product:field_template_type' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:field_drupal_version' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'product:field_is_featured_product' => array(
          'default' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
        ),
        'product:field_product_category' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
        ),
        'product:field_prior_sales_price' => array(
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__template_display'] = $strongarm;

  return $export;
}
