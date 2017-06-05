<?php
/**
 * @file
 * alnap_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function alnap_base_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attributuon|paragraphs_item|quote|form';
  $field_group->group_name = 'group_attributuon';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'quote';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attribution',
    'weight' => '2',
    'children' => array(
      0 => 'field_job_title',
      1 => 'field_fullname',
      2 => 'field_photo',
      3 => 'field_institution',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-attributuon field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_attributuon|paragraphs_item|quote|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card|node|country|form';
  $field_group->group_name = 'group_card';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview';
  $field_group->data = array(
    'label' => 'Card content',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Card content',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-card field-group-fieldset',
        'description' => 'The content you enter in these fields won’t appear on this page, it populates summary \'cards\' that appear on other pages (to link users to this page).',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_card|node|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_layout|node|organisation_group|form';
  $field_group->group_name = 'group_layout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisation_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Layout',
    'weight' => '10',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_layout|node|organisation_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nuggets|node|footer|form';
  $field_group->group_name = 'group_nuggets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'footer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Footer first',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Footer first',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-nuggets field-group-tab',
        'description' => 'Add an organisation group to display in the footer throughout your site.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_nuggets|node|footer|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attribution');
  t('Card content');
  t('Footer first');
  t('Layout');

  return $field_groups;
}
