<?php
/**
 * @file
 * designssquare_com_site_designssquare_com_structure.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function designssquare_com_site_designssquare_com_structure_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'no',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '03510908-d72d-402e-ae79-464f7645dcfd',
    'vocabulary_machine_name' => 'hide_demo_header',
  );
  $terms[] = array(
    'name' => 'yes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '05f468b6-9059-41b7-ac73-1d52d0997b9d',
    'vocabulary_machine_name' => 'hide_demo_header',
  );
  $terms[] = array(
    'name' => 'Admin - Hosting',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0f469ad4-b20c-4889-9e4c-d09f40158d7b',
    'vocabulary_machine_name' => 'product_category',
  );
  $terms[] = array(
    'name' => 'Responsive',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '11af85a2-857d-43c4-a8b6-cff71da87515',
    'vocabulary_machine_name' => 'responsive',
  );
  $terms[] = array(
    'name' => 'Hotel - Bed & Breakfast',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '152f2670-95cf-4d6b-be70-f3d56f03c432',
    'vocabulary_machine_name' => 'product_category',
  );
  $terms[] = array(
    'name' => 'Basic',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1f1c63e4-f831-4865-bca1-598697780d87',
    'vocabulary_machine_name' => 'template_package',
  );
  $terms[] = array(
    'name' => 'False',
    'description' => 'Products not on sale',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2051e100-105a-4c33-ad24-17a91ab30fe5',
    'vocabulary_machine_name' => 'is_on_sale',
  );
  $terms[] = array(
    'name' => 'False',
    'description' => 'design that is not the one featured from the variation of the designs',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2981ffb9-7887-4b8c-b204-ec9b7ffe10b8',
    'vocabulary_machine_name' => 'featured',
  );
  $terms[] = array(
    'name' => 'None Responsive',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '37ed48d7-268a-405e-be01-63ae75ef2475',
    'vocabulary_machine_name' => 'responsive',
  );
  $terms[] = array(
    'name' => 'Not Applicable',
    'description' => 'there is no need for partnership',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4ce29e5a-2a2a-4fac-962a-067058c9eb28',
    'vocabulary_machine_name' => 'design_partnership',
  );
  $terms[] = array(
    'name' => 'Bag',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '542278b7-58bc-4201-9c54-8b39017c6b1e',
    'vocabulary_machine_name' => 'product_category',
  );
  $terms[] = array(
    'name' => 'Personal - Creative',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '549f7cdf-45a6-4f85-9458-d3480e09d024',
    'vocabulary_machine_name' => 'product_category',
  );
  $terms[] = array(
    'name' => 'True',
    'description' => 'product is new',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '613c3c49-e8fa-4133-87c0-c3161a0592c0',
    'vocabulary_machine_name' => 'is_new_product',
  );
  $terms[] = array(
    'name' => 'Twitter Bootstrap',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '67815b3e-fb59-4e25-9f70-c3e4c176e7e6',
    'vocabulary_machine_name' => 'design_framework',
  );
  $terms[] = array(
    'name' => 'Ultimate',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '704e94b0-2dc7-4a44-a256-a4bd4ce44059',
    'vocabulary_machine_name' => 'template_package',
  );
  $terms[] = array(
    'name' => 'Landing Page',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8121d843-5bf7-4592-8e3d-1963883b86ce',
    'vocabulary_machine_name' => 'product_category',
  );
  $terms[] = array(
    'name' => 'Plus',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '8df6ef28-4f8e-47ab-a533-e3311cc4a48b',
    'vocabulary_machine_name' => 'template_package',
  );
  $terms[] = array(
    'name' => 'False',
    'description' => 'Product is not new',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9d351649-a126-45fa-8942-21c662bab20c',
    'vocabulary_machine_name' => 'is_new_product',
  );
  $terms[] = array(
    'name' => 'True',
    'description' => 'true for design that is being displayed',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9d960a86-1105-4a7e-ad67-3bf527c17767',
    'vocabulary_machine_name' => 'featured',
  );
  $terms[] = array(
    'name' => 'True',
    'description' => 'for products on sale',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b69f4768-92cb-45e3-92ac-5e0ab3dacaa1',
    'vocabulary_machine_name' => 'is_on_sale',
  );
  $terms[] = array(
    'name' => 'Yes',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cb10c094-594d-4d26-b32f-333615dd4526',
    'vocabulary_machine_name' => 'design_partnership',
  );
  $terms[] = array(
    'name' => 'Magazine - News',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cb5c16ee-ea57-4cc8-97ad-a4f401adf6fc',
    'vocabulary_machine_name' => 'product_category',
  );
  $terms[] = array(
    'name' => 'D8',
    'description' => 'Drupal Ver 7',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cdb491d6-fefa-4dd5-8caa-3911b2879c28',
    'vocabulary_machine_name' => 'version',
  );
  $terms[] = array(
    'name' => 'Commerce - Retail',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dadd8808-81c7-4ed9-b98e-7b5d62a88be5',
    'vocabulary_machine_name' => 'product_category',
  );
  $terms[] = array(
    'name' => 'D7',
    'description' => 'Drupal Ver 7',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dc538967-7a34-4d0b-9d18-e6b32f8d2660',
    'vocabulary_machine_name' => 'version',
  );
  $terms[] = array(
    'name' => 'Clothes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e1808f66-44d1-4451-9a5f-d41550cb8a83',
    'vocabulary_machine_name' => 'product_category',
  );
  $terms[] = array(
    'name' => 'Business - Corporate',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e7fab300-266a-47dd-9817-5996eb9d7c81',
    'vocabulary_machine_name' => 'product_category',
  );
  $terms[] = array(
    'name' => 'No',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ea7309ba-2e08-4ba2-8ce9-92bdc8b7ec9a',
    'vocabulary_machine_name' => 'design_partnership',
  );
  $terms[] = array(
    'name' => 'None Framework',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ed07ab53-624e-4b38-b1c7-c821003808ab',
    'vocabulary_machine_name' => 'design_framework',
  );
  return $terms;
}
