<?php
/**
 * @file
 * commerce_kickstart_app.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commerce_kickstart_app_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function commerce_kickstart_app_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function commerce_kickstart_app_flag_default_flags() {
  $flags = array();
  // Exported flag: "Wishlist".
  $flags['wishlist'] = array(
    'content_type' => 'node',
    'title' => 'Wishlist',
    'global' => '0',
    'types' => array(
      0 => 'bags_cases',
      1 => 'books',
      2 => 'drinks',
      3 => 'hats',
      4 => 'shoes',
      5 => 'storage_devices',
      6 => 'tops',
    ),
    'flag_short' => 'Add to wishlist',
    'flag_long' => '',
    'flag_message' => 'Successfully added to wishlist',
    'unflag_short' => 'Remove from wishlist',
    'unflag_long' => '',
    'unflag_message' => 'Successfully removed from wishlist',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'commerce_kickstart_app',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}
