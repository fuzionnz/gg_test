<?php
/**
 * @file
 * gg_test.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gg_test_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|news|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Related contacts',
    'weight' => '25',
    'children' => array(
      0 => 'field_civicrm_person_ref',
      1 => 'field_civicrm_party_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Related contacts',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-related field-group-tab',
        'description' => 'Type in the name of the person or party and the autocomplete should find them. If you want to reference more than one, use the "Add another item" button.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_related|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|node|news|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Country and Party/Fed',
    'weight' => '24',
    'children' => array(
      0 => 'taxonomy_vocabulary_9',
      1 => 'field_country',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Country and Party/Fed',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-tab1 field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_tab1|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab3|node|news|form';
  $field_group->group_name = 'group_tab3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '23',
    'children' => array(
      0 => 'field_taxonomy_tags',
      1 => 'taxonomy_vocabulary_11',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-tab3 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tab3|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab5|node|news|form';
  $field_group->group_name = 'group_tab5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Deprecated Tags',
    'weight' => '27',
    'children' => array(
      0 => 'taxonomy_vocabulary_1',
      1 => 'taxonomy_vocabulary_12',
      2 => 'taxonomy_vocabulary_10',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Deprecated Tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-tab5 field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_tab5|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|news|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags and Terms',
    'weight' => '6',
    'children' => array(
      0 => 'group_tab1',
      1 => 'group_tab3',
      2 => 'group_tab5',
      3 => 'group_related',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => NULL,
      'instance_settings' => array(
        'classes' => ' group-tags field-group-tabs',
      ),
    ),
  );
  $export['group_tags|node|news|form'] = $field_group;

  return $export;
}
