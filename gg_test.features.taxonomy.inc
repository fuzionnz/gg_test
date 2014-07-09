<?php
/**
 * @file
 * gg_test.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gg_test_taxonomy_default_vocabularies() {
  return array(
    'country' => array(
      'name' => 'Country',
      'machine_name' => 'country',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
    'vocabulary_1' => array(
      'name' => 'News & Press (old)',
      'machine_name' => 'vocabulary_1',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
    'vocabulary_10' => array(
      'name' => 'Menu',
      'machine_name' => 'vocabulary_10',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
    'vocabulary_11' => array(
      'name' => 'News types',
      'machine_name' => 'vocabulary_11',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
    'vocabulary_12' => array(
      'name' => 'Language',
      'machine_name' => 'vocabulary_12',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
    'vocabulary_9' => array(
      'name' => 'Green Federations / National Parties',
      'machine_name' => 'vocabulary_9',
      'description' => '',
      'hierarchy' => '2',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
  );
}
