<?php
/**
 * @file
 * gg_test.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gg_test_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gg_test_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('For News items that are created for the GG. GG Statements need to be Categorised as Statements.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
