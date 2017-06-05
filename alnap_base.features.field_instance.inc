<?php
/**
 * @file
 * alnap_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function alnap_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-country-field_country'.
  $field_instances['node-country-field_country'] = array(
    'bundle' => 'country',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_country',
    'label' => 'Country',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'taxonomy_hs',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-country-field_hero_nugget'.
  $field_instances['node-country-field_hero_nugget'] = array(
    'bundle' => 'country',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hero_nugget',
    'label' => 'Hero nugget',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'block' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'iframe' => -1,
        'links' => -1,
        'map_world' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => 2,
        'block' => 3,
        'faqs' => 4,
        'feed' => 5,
        'gallery' => 6,
        'iframe' => 7,
        'links' => 8,
        'map_world' => 9,
        'organisation_group' => 10,
        'q_a' => 11,
        'slider' => 12,
        'social_links' => 13,
        'tagged' => 14,
        'team' => 15,
        'team_member' => 16,
        'twitter' => 17,
        'video' => 18,
        'wysiwyg' => 19,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-country-field_image'.
  $field_instances['node-country-field_image'] = array(
    'bundle' => 'country',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => 1,
      'file_directory' => 'content/country/images/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '800x450',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_list' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-country-field_main_content'.
  $field_instances['node-country-field_main_content'] = array(
    'bundle' => 'country',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_content',
    'label' => 'Main content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'block' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'iframe' => -1,
        'links' => -1,
        'map_world' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => 2,
        'block' => 3,
        'faqs' => 4,
        'feed' => 5,
        'gallery' => 6,
        'iframe' => 7,
        'links' => 8,
        'map_world' => 9,
        'organisation_group' => 10,
        'q_a' => 11,
        'slider' => 12,
        'social_links' => 13,
        'tagged' => 14,
        'team' => 15,
        'team_member' => 16,
        'twitter' => 17,
        'video' => 18,
        'wysiwyg' => 19,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-country-field_related'.
  $field_instances['node-country-field_related'] = array(
    'bundle' => 'country',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Allows user to choose related pages, publications, news and events to display on the node.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-country-field_section'.
  $field_instances['node-country-field_section'] = array(
    'bundle' => 'country',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section',
    'label' => 'Postscript nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'block' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'iframe' => -1,
        'links' => -1,
        'map_world' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => 2,
        'block' => 3,
        'faqs' => 4,
        'feed' => 5,
        'gallery' => 6,
        'iframe' => 7,
        'links' => 8,
        'map_world' => 9,
        'organisation_group' => 10,
        'q_a' => 11,
        'slider' => 12,
        'social_links' => 13,
        'tagged' => 14,
        'team' => 15,
        'team_member' => 16,
        'twitter' => 17,
        'video' => 18,
        'wysiwyg' => 19,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-country-field_section_top'.
  $field_instances['node-country-field_section_top'] = array(
    'bundle' => 'country',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_top',
    'label' => 'Additional content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'block' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'iframe' => -1,
        'links' => -1,
        'map_world' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => 2,
        'block' => 3,
        'faqs' => 4,
        'feed' => 5,
        'gallery' => 6,
        'iframe' => 7,
        'links' => 8,
        'map_world' => 9,
        'organisation_group' => 10,
        'q_a' => 11,
        'slider' => 12,
        'social_links' => 13,
        'tagged' => 14,
        'team' => 15,
        'team_member' => 16,
        'twitter' => 17,
        'video' => 18,
        'wysiwyg' => 19,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-country-field_side_section'.
  $field_instances['node-country-field_side_section'] = array(
    'bundle' => 'country',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_side_section',
    'label' => 'Sidebar nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'block' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'iframe' => -1,
        'links' => -1,
        'map_world' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => 2,
        'block' => 3,
        'faqs' => 4,
        'feed' => 5,
        'gallery' => 6,
        'iframe' => 7,
        'links' => 8,
        'map_world' => 9,
        'organisation_group' => 10,
        'q_a' => 11,
        'slider' => 12,
        'social_links' => 13,
        'tagged' => 14,
        'team' => 15,
        'team_member' => 16,
        'twitter' => 17,
        'video' => 18,
        'wysiwyg' => 19,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-country-field_summary'.
  $field_instances['node-country-field_summary'] = array(
    'bundle' => 'country',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 'limited_html',
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-country-field_tag'.
  $field_instances['node-country-field_tag'] = array(
    'bundle' => 'country',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-country-title_field'.
  $field_instances['node-country-title_field'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-event-field_display_date'.
  $field_instances['node-event-field_display_date'] = array(
    'bundle' => 'event',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the event dates as you would like them to be displayed e.g. 01-12 Dec 2018',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_display_date',
    'label' => 'Display date as',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event-field_end_date'.
  $field_instances['node-event-field_end_date'] = array(
    'bundle' => 'event',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_end_date',
    'label' => 'End date',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'j M Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-event-field_hero_nugget'.
  $field_instances['node-event-field_hero_nugget'] = array(
    'bundle' => 'event',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hero_nugget',
    'label' => 'Hero nugget',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-event-field_image'.
  $field_instances['node-event-field_image'] = array(
    'bundle' => 'event',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => 1,
      'file_directory' => 'content/events/images/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '800x450',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_list' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-event-field_link'.
  $field_instances['node-event-field_link'] = array(
    'bundle' => 'event',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'External link for more information about the event ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'rel_remove_internal',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-event-field_location'.
  $field_instances['node-event-field_location'] = array(
    'bundle' => 'event',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 6,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-event-field_main_content'.
  $field_instances['node-event-field_main_content'] = array(
    'bundle' => 'event',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_content',
    'label' => 'Main content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-event-field_related'.
  $field_instances['node-event-field_related'] = array(
    'bundle' => 'event',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Allows user to choose related pages, publications, news and events to display on the node.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 0,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-event-field_section'.
  $field_instances['node-event-field_section'] = array(
    'bundle' => 'event',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section',
    'label' => 'Postscript nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-event-field_section_top'.
  $field_instances['node-event-field_section_top'] = array(
    'bundle' => 'event',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_top',
    'label' => 'Additional content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-event-field_side_section'.
  $field_instances['node-event-field_side_section'] = array(
    'bundle' => 'event',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_side_section',
    'label' => 'Sidebar nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-event-field_start_date'.
  $field_instances['node-event-field_start_date'] = array(
    'bundle' => 'event',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_start_date',
    'label' => 'Start date',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'j M Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-event-field_summary'.
  $field_instances['node-event-field_summary'] = array(
    'bundle' => 'event',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 5,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 'limited_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-event-field_tag'.
  $field_instances['node-event-field_tag'] = array(
    'bundle' => 'event',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-event-title_field'.
  $field_instances['node-event-title_field'] = array(
    'bundle' => 'event',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 4,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-footer-field_section_footer'.
  $field_instances['node-footer-field_section_footer'] = array(
    'bundle' => 'footer',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_footer',
    'label' => 'Nugget',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => 'attachments',
        'block' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'links' => -1,
        'organisation_group' => 'organisation_group',
        'q_a' => -1,
        'slider' => -1,
        'social_links' => 'social_links',
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => 'wysiwyg',
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'block' => 3,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-form-title_field'.
  $field_instances['node-form-title_field'] = array(
    'bundle' => 'form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-front-field_section'.
  $field_instances['node-front-field_section'] = array(
    'bundle' => 'front',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section',
    'label' => 'Nuggets',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-front-title_field'.
  $field_instances['node-front-title_field'] = array(
    'bundle' => 'front',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-news-field_date'.
  $field_instances['node-news-field_date'] = array(
    'bundle' => 'news',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'j M Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-news-field_hero_nugget'.
  $field_instances['node-news-field_hero_nugget'] = array(
    'bundle' => 'news',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hero_nugget',
    'label' => 'Hero nugget',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-news-field_image'.
  $field_instances['node-news-field_image'] = array(
    'bundle' => 'news',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'grid-6-wide',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => 1,
      'file_directory' => 'content/news-article/images/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '800x450',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_list' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-news-field_main_content'.
  $field_instances['node-news-field_main_content'] = array(
    'bundle' => 'news',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_content',
    'label' => 'Main content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-news-field_related'.
  $field_instances['node-news-field_related'] = array(
    'bundle' => 'news',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Allows user to choose related pages, publications, news and events to display on the node.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-news-field_section'.
  $field_instances['node-news-field_section'] = array(
    'bundle' => 'news',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section',
    'label' => 'Postscript nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-news-field_section_top'.
  $field_instances['node-news-field_section_top'] = array(
    'bundle' => 'news',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_top',
    'label' => 'Additional content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-news-field_side_section'.
  $field_instances['node-news-field_side_section'] = array(
    'bundle' => 'news',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_side_section',
    'label' => 'Sidebar nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-news-field_summary'.
  $field_instances['node-news-field_summary'] = array(
    'bundle' => 'news',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 'limited_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-news-field_tag'.
  $field_instances['node-news-field_tag'] = array(
    'bundle' => 'news',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-news-title_field'.
  $field_instances['node-news-title_field'] = array(
    'bundle' => 'news',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-organisation-field_hero_nugget'.
  $field_instances['node-organisation-field_hero_nugget'] = array(
    'bundle' => 'organisation',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hero_nugget',
    'label' => 'Hero nugget',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-organisation-field_link'.
  $field_instances['node-organisation-field_link'] = array(
    'bundle' => 'organisation',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => 'default',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'rel_remove_internal',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organisation-field_link_title'.
  $field_instances['node-organisation-field_link_title'] = array(
    'bundle' => 'organisation',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link_title',
    'label' => 'Link with title',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-organisation-field_logo'.
  $field_instances['node-organisation-field_logo'] = array(
    'bundle' => 'organisation',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'logo_16x9',
        ),
        'type' => 'picture',
        'weight' => 1,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'logo_16x9',
        ),
        'type' => 'picture',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'content/organisation/logos/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '480x480',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 1,
        'manualcrop_require_cropping' => array(
          'manualcrop' => 'manualcrop',
        ),
        'manualcrop_styles_list' => array(
          'manualcrop' => 'manualcrop',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organisation-field_main_content'.
  $field_instances['node-organisation-field_main_content'] = array(
    'bundle' => 'organisation',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_content',
    'label' => 'Main content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nugets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-organisation-field_section'.
  $field_instances['node-organisation-field_section'] = array(
    'bundle' => 'organisation',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nuggets',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section',
    'label' => 'Postscript nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-organisation-field_section_top'.
  $field_instances['node-organisation-field_section_top'] = array(
    'bundle' => 'organisation',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_top',
    'label' => 'Additional content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-organisation-field_side_section'.
  $field_instances['node-organisation-field_side_section'] = array(
    'bundle' => 'organisation',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_side_section',
    'label' => 'Sidebar nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-organisation-field_summary'.
  $field_instances['node-organisation-field_summary'] = array(
    'bundle' => 'organisation',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 'limited_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-organisation-field_tag'.
  $field_instances['node-organisation-field_tag'] = array(
    'bundle' => 'organisation',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-organisation-title_field'.
  $field_instances['node-organisation-title_field'] = array(
    'bundle' => 'organisation',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-organisation_group-field_hero_nugget'.
  $field_instances['node-organisation_group-field_hero_nugget'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'display_grid_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hero_nugget',
    'label' => 'Hero nugget',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-organisation_group-field_image'.
  $field_instances['node-organisation_group-field_image'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'display_grid_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 1,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => 1,
      'file_directory' => 'content/organisation-group/images/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '800x450',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_list' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-organisation_group-field_main_content'.
  $field_instances['node-organisation_group-field_main_content'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'display_grid_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_content',
    'label' => 'Main content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organisation_group-field_organisations'.
  $field_instances['node-organisation_group-field_organisations'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'display_grid_list' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'use_content_language' => 1,
          'view_mode' => 'teaser_link',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'search_index_reference',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'search_index_reference',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organisations',
    'label' => 'Organisations',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organisation_group-field_orgs_node_disp'.
  $field_instances['node-organisation_group-field_orgs_node_disp'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'display_grid_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_orgs_node_disp',
    'label' => 'Display',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organisation_group-field_row'.
  $field_instances['node-organisation_group-field_row'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Only applicable if selecting Grid layout above.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'display_grid_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_row',
    'label' => 'Items per row',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-organisation_group-field_section_top'.
  $field_instances['node-organisation_group-field_section_top'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'display_grid_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_top',
    'label' => 'Additional content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-organisation_group-field_summary'.
  $field_instances['node-organisation_group-field_summary'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'display_grid_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 'limited_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-organisation_group-field_tag'.
  $field_instances['node-organisation_group-field_tag'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'display_grid_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-organisation_group-title_field'.
  $field_instances['node-organisation_group-title_field'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'display_grid_list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-page-field_hero_nugget'.
  $field_instances['node-page-field_hero_nugget'] = array(
    'bundle' => 'page',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hero_nugget',
    'label' => 'Hero nugget',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-page-field_image'.
  $field_instances['node-page-field_image'] = array(
    'bundle' => 'page',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => 'content',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => 1,
      'file_directory' => 'content/page/images/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '800x450',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_list' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-page-field_main_content'.
  $field_instances['node-page-field_main_content'] = array(
    'bundle' => 'page',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_content',
    'label' => 'Main content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-page-field_related'.
  $field_instances['node-page-field_related'] = array(
    'bundle' => 'page',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Allows user to choose related pages, publications, news and events to display on the node.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-page-field_section'.
  $field_instances['node-page-field_section'] = array(
    'bundle' => 'page',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section',
    'label' => 'Postscript nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-page-field_section_top'.
  $field_instances['node-page-field_section_top'] = array(
    'bundle' => 'page',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_top',
    'label' => 'Additional content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-page-field_side_section'.
  $field_instances['node-page-field_side_section'] = array(
    'bundle' => 'page',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_side_section',
    'label' => 'Sidebar nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-page-field_summary'.
  $field_instances['node-page-field_summary'] = array(
    'bundle' => 'page',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 'limited_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-page-field_tag'.
  $field_instances['node-page-field_tag'] = array(
    'bundle' => 'page',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-page-title_field'.
  $field_instances['node-page-title_field'] = array(
    'bundle' => 'page',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-person-field_bio'.
  $field_instances['node-person-field_bio'] = array(
    'bundle' => 'person',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bio',
    'label' => 'Bio',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-person-field_first_name'.
  $field_instances['node-person-field_first_name'] = array(
    'bundle' => 'person',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_first_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-person-field_honorific_title'.
  $field_instances['node-person-field_honorific_title'] = array(
    'bundle' => 'person',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_honorific_title',
    'label' => 'Honorific title',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-person-field_job_title'.
  $field_instances['node-person-field_job_title'] = array(
    'bundle' => 'person',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_job_title',
    'label' => 'Job title',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-person-field_links'.
  $field_instances['node-person-field_links'] = array(
    'bundle' => 'person',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add any links to institutional profiles or social networks that you would like to share on the site for this individual',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_links',
    'label' => 'Profile links',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-person-field_main_content'.
  $field_instances['node-person-field_main_content'] = array(
    'bundle' => 'person',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_content',
    'label' => 'Main content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'events_view' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'news_events_view' => -1,
        'news_view' => -1,
        'organisation_group' => -1,
        'publications_view' => -1,
        'slider' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => 2,
        'events_view' => 3,
        'gallery' => 4,
        'image' => 5,
        'links' => 6,
        'news_events_view' => 7,
        'news_view' => 8,
        'organisation_group' => 9,
        'publications_view' => 10,
        'slider' => 11,
        'tagged' => 12,
        'team' => 13,
        'team_member' => 14,
        'twitter' => 15,
        'video' => 16,
        'wysiwyg' => 17,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-person-field_photo'.
  $field_instances['node-person-field_photo'] = array(
    'bundle' => 'person',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_3x4',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'grid-6-wide',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_3x4',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_3x4',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photo',
    'label' => 'Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'content/person/photos/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '480x640',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          'mc-480-3x4' => 'mc-480-3x4',
        ),
        'manualcrop_styles_list' => array(
          'mc-480-3x4' => 'mc-480-3x4',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-person-field_section'.
  $field_instances['node-person-field_section'] = array(
    'bundle' => 'person',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section',
    'label' => 'Postscript nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-person-field_section_top'.
  $field_instances['node-person-field_section_top'] = array(
    'bundle' => 'person',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_top',
    'label' => 'Additional content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-person-field_side_section'.
  $field_instances['node-person-field_side_section'] = array(
    'bundle' => 'person',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_side_section',
    'label' => 'Sidebar nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-person-field_suffix'.
  $field_instances['node-person-field_suffix'] = array(
    'bundle' => 'person',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_suffix',
    'label' => 'Suffix',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-person-field_summary'.
  $field_instances['node-person-field_summary'] = array(
    'bundle' => 'person',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 'limited_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-person-field_surname'.
  $field_instances['node-person-field_surname'] = array(
    'bundle' => 'person',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_surname',
    'label' => 'Surname',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-person-field_tag'.
  $field_instances['node-person-field_tag'] = array(
    'bundle' => 'person',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-person-title_field'.
  $field_instances['node-person-title_field'] = array(
    'bundle' => 'person',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-publication-field_abbr_authors'.
  $field_instances['node-publication-field_abbr_authors'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abbr_authors',
    'label' => 'Abbreviated authors',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-publication-field_abstract'.
  $field_instances['node-publication-field_abstract'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abstract',
    'label' => 'Abstract',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-publication-field_authors'.
  $field_instances['node-publication-field_authors'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_authors',
    'label' => 'Authors',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-publication-field_citation_date'.
  $field_instances['node-publication-field_citation_date'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 4,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_citation_date',
    'label' => 'Citation date',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-publication-field_date'.
  $field_instances['node-publication-field_date'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Published date',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'j M Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-publication-field_date_display_override'.
  $field_instances['node-publication-field_date_display_override'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_display_override',
    'label' => 'Display date override',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-publication-field_doi'.
  $field_instances['node-publication-field_doi'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 9,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_doi',
    'label' => 'DOI',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-publication-field_journal'.
  $field_instances['node-publication-field_journal'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 5,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_journal',
    'label' => 'Journal',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-publication-field_link'.
  $field_instances['node-publication-field_link'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_separate',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'rel_remove_internal',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-publication-field_main_content'.
  $field_instances['node-publication-field_main_content'] = array(
    'bundle' => 'publication',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_content',
    'label' => 'Main content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'events_view' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'news_events_view' => -1,
        'news_view' => -1,
        'organisation_group' => -1,
        'publications_view' => -1,
        'slider' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => 2,
        'events_view' => 3,
        'gallery' => 4,
        'image' => 5,
        'links' => 6,
        'news_events_view' => 7,
        'news_view' => 8,
        'organisation_group' => 9,
        'publications_view' => 10,
        'slider' => 11,
        'tagged' => 12,
        'team' => 13,
        'team_member' => 14,
        'twitter' => 15,
        'video' => 16,
        'wysiwyg' => 17,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-publication-field_pages'.
  $field_instances['node-publication-field_pages'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 7,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pages',
    'label' => 'Pages',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-publication-field_pubmedid'.
  $field_instances['node-publication-field_pubmedid'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pubmedid',
    'label' => 'PubMedID',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-publication-field_related'.
  $field_instances['node-publication-field_related'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Allows user to choose related pages, publications, news and events to display on the node.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-publication-field_resource_type'.
  $field_instances['node-publication-field_resource_type'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resource_type',
    'label' => 'Resource type',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-publication-field_section_top'.
  $field_instances['node-publication-field_section_top'] = array(
    'bundle' => 'publication',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_top',
    'label' => 'Additional content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-publication-field_side_section'.
  $field_instances['node-publication-field_side_section'] = array(
    'bundle' => 'publication',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_side_section',
    'label' => 'Sidebar nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'block' => -1,
        'faqs' => -1,
        'feed' => -1,
        'form' => -1,
        'gallery' => -1,
        'iframe' => -1,
        'links' => -1,
        'map_world' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => 2,
        'block' => 3,
        'faqs' => 4,
        'feed' => 5,
        'form' => 6,
        'gallery' => 7,
        'iframe' => 8,
        'links' => 9,
        'map_world' => 10,
        'organisation_group' => 11,
        'q_a' => 12,
        'slider' => 13,
        'social_links' => 14,
        'tagged' => 15,
        'team' => 16,
        'team_member' => 17,
        'twitter' => 18,
        'video' => 19,
        'wysiwyg' => 20,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-publication-field_source'.
  $field_instances['node-publication-field_source'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_source',
    'label' => 'Source',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-publication-field_summary'.
  $field_instances['node-publication-field_summary'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'limited_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 'limited_html',
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-publication-field_tag'.
  $field_instances['node-publication-field_tag'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 14,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-publication-field_volume'.
  $field_instances['node-publication-field_volume'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 6,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_volume',
    'label' => 'Volume',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-publication-title_field'.
  $field_instances['node-publication-title_field'] = array(
    'bundle' => 'publication',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-resource-field_authors'.
  $field_instances['node-resource-field_authors'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_authors',
    'label' => 'Authors',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-resource-field_date'.
  $field_instances['node-resource-field_date'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'field_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Published date',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'j M Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-resource-field_date_display_override'.
  $field_instances['node-resource-field_date_display_override'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_display_override',
    'label' => 'Display date override',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-resource-field_image'.
  $field_instances['node-resource-field_image'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => 1,
      'file_directory' => 'content/resources/images/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '800x450',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_list' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-resource-field_link'.
  $field_instances['node-resource-field_link'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-resource-field_main_content'.
  $field_instances['node-resource-field_main_content'] = array(
    'bundle' => 'resource',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 9,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_content',
    'label' => 'Main content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => 2,
        'faqs' => 3,
        'feed' => 4,
        'gallery' => 5,
        'image' => 6,
        'links' => 7,
        'organisation_group' => 8,
        'q_a' => 9,
        'slider' => 10,
        'tagged' => 11,
        'team' => 12,
        'team_member' => 13,
        'twitter' => 14,
        'video' => 15,
        'wysiwyg' => 16,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-resource-field_published_by'.
  $field_instances['node-resource-field_published_by'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 5,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_published_by',
    'label' => 'Published by',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-resource-field_related'.
  $field_instances['node-resource-field_related'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Allows user to choose related pages, publications, news and events to display on the node.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 13,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-resource-field_resource_type'.
  $field_instances['node-resource-field_resource_type'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resource_type',
    'label' => 'Resource type',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-resource-field_section'.
  $field_instances['node-resource-field_section'] = array(
    'bundle' => 'resource',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 12,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section',
    'label' => 'Postscript nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-resource-field_section_top'.
  $field_instances['node-resource-field_section_top'] = array(
    'bundle' => 'resource',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 10,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_top',
    'label' => 'Additional content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-resource-field_side_section'.
  $field_instances['node-resource-field_side_section'] = array(
    'bundle' => 'resource',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 11,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_side_section',
    'label' => 'Sidebar nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-resource-field_source'.
  $field_instances['node-resource-field_source'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_source',
    'label' => 'Source',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-resource-field_summary'.
  $field_instances['node-resource-field_summary'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 'limited_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-resource-field_tag'.
  $field_instances['node-resource-field_tag'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 14,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-resource-title_field'.
  $field_instances['node-resource-title_field'] = array(
    'bundle' => 'resource',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-slide-field_description'.
  $field_instances['node-slide-field_description'] = array(
    'bundle' => 'slide',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-slide-field_image'.
  $field_instances['node-slide-field_image'] = array(
    'bundle' => 'slide',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => 1,
      'file_directory' => 'content/slide/images/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '1920x540',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          '1920-32x9' => '1920-32x9',
          'mc-slide-mobile' => 'mc-slide-mobile',
        ),
        'manualcrop_styles_list' => array(
          '1920-32x9' => '1920-32x9',
          'mc-slide-mobile' => 'mc-slide-mobile',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-slide-field_slide_link'.
  $field_instances['node-slide-field_slide_link'] = array(
    'bundle' => 'slide',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'search_index_reference' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slide_link',
    'label' => 'Link slide to',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-slide-field_slide_title'.
  $field_instances['node-slide-field_slide_title'] = array(
    'bundle' => 'slide',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_index_reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slide_title',
    'label' => 'Slide title',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-slide-title_field'.
  $field_instances['node-slide-title_field'] = array(
    'bundle' => 'slide',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'search_index_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-system_page-field_main_content'.
  $field_instances['node-system_page-field_main_content'] = array(
    'bundle' => 'system_page',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_content',
    'label' => 'Main content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'events_view' => -1,
        'faqs' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'news_events_view' => -1,
        'news_view' => -1,
        'organisation_group' => -1,
        'publications_view' => -1,
        'q_a' => -1,
        'slider' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => 2,
        'events_view' => 3,
        'faqs' => 4,
        'gallery' => 5,
        'image' => 6,
        'links' => 7,
        'news_events_view' => 8,
        'news_view' => 9,
        'organisation_group' => 10,
        'publications_view' => 11,
        'q_a' => 12,
        'slider' => 13,
        'tagged' => 14,
        'team' => 15,
        'team_member' => 16,
        'twitter' => 17,
        'video' => 18,
        'wysiwyg' => 19,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nugget',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-system_page-title_field'.
  $field_instances['node-system_page-title_field'] = array(
    'bundle' => 'system_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-team-field_hero_nugget'.
  $field_instances['node-team-field_hero_nugget'] = array(
    'bundle' => 'team',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hero_nugget',
    'label' => 'Hero nugget',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-team-field_image'.
  $field_instances['node-team-field_image'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'grid_6_16x9',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => 1,
      'file_directory' => 'content/team/images/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '800x450',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_list' => array(
          '800-16x9' => '800-16x9',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-team-field_main_content'.
  $field_instances['node-team-field_main_content'] = array(
    'bundle' => 'team',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_content',
    'label' => 'Main content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-team-field_row'.
  $field_instances['node-team-field_row'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'row-max-4',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_row',
    'label' => 'Items per row',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-team-field_section_top'.
  $field_instances['node-team-field_section_top'] = array(
    'bundle' => 'team',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_top',
    'label' => 'Additional content nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'closed',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-team-field_side_section'.
  $field_instances['node-team-field_side_section'] = array(
    'bundle' => 'team',
    'custom_add_another' => 'Add another nugget',
    'custom_remove' => 'Remove nugget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_side_section',
    'label' => 'Sidebar nuggets',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -28,
        'faqs' => -27,
        'feed' => -26,
        'gallery' => -29,
        'image' => -31,
        'links' => -25,
        'organisation_group' => -24,
        'q_a' => -18,
        'slider' => -22,
        'social_links' => -17,
        'tagged' => -21,
        'team' => -20,
        'team_member' => -23,
        'twitter' => -19,
        'video' => -30,
        'wysiwyg' => -32,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Nugget',
      'title_multiple' => 'Nuggets',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-team-field_summary'.
  $field_instances['node-team-field_summary'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 'limited_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-team-field_tag'.
  $field_instances['node-team-field_tag'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-team-field_team_member'.
  $field_instances['node-team-field_team_member'] = array(
    'bundle' => 'team',
    'custom_add_another' => 'add another person',
    'custom_remove' => 'remove person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_team_member',
    'label' => 'People',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'block' => -1,
        'faqs' => -1,
        'feed' => -1,
        'form' => -1,
        'gallery' => -1,
        'iframe' => -1,
        'links' => -1,
        'map_world' => -1,
        'organisation_group' => -1,
        'q_a' => -1,
        'quote' => -1,
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => 'team_member',
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => -32,
        'block' => 3,
        'faqs' => 4,
        'feed' => 5,
        'form' => 17,
        'gallery' => -26,
        'iframe' => 19,
        'links' => -30,
        'map_world' => 21,
        'organisation_group' => -27,
        'q_a' => 9,
        'quote' => 23,
        'slider' => -24,
        'social_links' => 11,
        'tagged' => -23,
        'team' => -22,
        'team_member' => -21,
        'twitter' => -19,
        'video' => -18,
        'wysiwyg' => -20,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Team member',
      'title_multiple' => 'Team members',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-team-title_field'.
  $field_instances['node-team-title_field'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'teaser_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-attachments-field_attachments'.
  $field_instances['paragraphs_item-attachments-field_attachments'] = array(
    'bundle' => 'attachments',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_attachments',
    'label' => 'Attachments',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'description_field' => 1,
      'entity_translation_sync' => 0,
      'file_directory' => 'content/attachments/[current-date:custom:Y-m-d]',
      'file_extensions' => 'docx doc xlsx xls pptx ppt pdf rtf txt jpg png bmp gif zip rar 7z',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-attachments-field_description'.
  $field_instances['paragraphs_item-attachments-field_description'] = array(
    'bundle' => 'attachments',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-attachments-field_limit_text_width'.
  $field_instances['paragraphs_item-attachments-field_limit_text_width'] = array(
    'bundle' => 'attachments',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to reduce the width of this body of text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_limit_text_width',
    'label' => 'Limit text width',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-attachments-field_palette'.
  $field_instances['paragraphs_item-attachments-field_palette'] = array(
    'bundle' => 'attachments',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-attachments-field_section_description'.
  $field_instances['paragraphs_item-attachments-field_section_description'] = array(
    'bundle' => 'attachments',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-attachments-field_title'.
  $field_instances['paragraphs_item-attachments-field_title'] = array(
    'bundle' => 'attachments',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-block-field_block'.
  $field_instances['paragraphs_item-block-field_block'] = array(
    'bundle' => 'block',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'blockreference',
        'settings' => array(
          'show_empty_blocks' => FALSE,
        ),
        'type' => 'blockreference_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_block',
    'label' => 'Blocks',
    'required' => 1,
    'settings' => array(
      'blockreference_modules' => array(
        'backup_migrate' => 0,
        'block' => 'block',
        'context_ui' => 0,
        'devel' => 0,
        'locale' => 0,
        'menu' => 0,
        'menu_block' => 0,
        'node' => 0,
        'remora_highmaps_data' => 0,
        'search' => 0,
        'shortcut' => 0,
        'site_map' => 0,
        'system' => 0,
        'user' => 0,
        'views' => 'views',
        'webform' => 0,
        'webform_block' => 0,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'blockreference',
      'settings' => array(
        'apply_chosen' => '',
        'autocomplete_path' => 'blockreference/autocomplete',
        'size' => 60,
      ),
      'type' => 'blockreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-block-field_palette'.
  $field_instances['paragraphs_item-block-field_palette'] = array(
    'bundle' => 'block',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-block-field_section_description'.
  $field_instances['paragraphs_item-block-field_section_description'] = array(
    'bundle' => 'block',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-faqs-field_description'.
  $field_instances['paragraphs_item-faqs-field_description'] = array(
    'bundle' => 'faqs',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 0,
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-faqs-field_limit_text_width'.
  $field_instances['paragraphs_item-faqs-field_limit_text_width'] = array(
    'bundle' => 'faqs',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to reduce the width of this body of text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_limit_text_width',
    'label' => 'Limit text width',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-faqs-field_palette'.
  $field_instances['paragraphs_item-faqs-field_palette'] = array(
    'bundle' => 'faqs',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-faqs-field_qa'.
  $field_instances['paragraphs_item-faqs-field_qa'] = array(
    'bundle' => 'faqs',
    'custom_add_another' => 'Add another Q&A',
    'custom_remove' => 'Remove Q&A',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_qa',
    'label' => 'Q&A',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'attachments' => -1,
        'faqs' => -1,
        'feed' => -1,
        'gallery' => -1,
        'image' => -1,
        'links' => -1,
        'organisation_group' => -1,
        'q_a' => 'q_a',
        'slider' => -1,
        'social_links' => -1,
        'tagged' => -1,
        'team' => -1,
        'team_member' => -1,
        'twitter' => -1,
        'video' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'attachments' => 2,
        'faqs' => 4,
        'feed' => 24,
        'gallery' => 5,
        'image' => 6,
        'links' => 7,
        'organisation_group' => 10,
        'q_a' => 12,
        'slider' => 13,
        'social_links' => -32,
        'tagged' => 14,
        'team' => 15,
        'team_member' => 16,
        'twitter' => 17,
        'video' => 18,
        'wysiwyg' => 19,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_edit_mode' => 'preview',
      'default_edit_mode_override' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'Q&A',
      'title_multiple' => 'Q&As',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-faqs-field_section_description'.
  $field_instances['paragraphs_item-faqs-field_section_description'] = array(
    'bundle' => 'faqs',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 0,
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-faqs-field_title'.
  $field_instances['paragraphs_item-faqs-field_title'] = array(
    'bundle' => 'faqs',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-feed-field_description'.
  $field_instances['paragraphs_item-feed-field_description'] = array(
    'bundle' => 'feed',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-feed-field_equal_heights'.
  $field_instances['paragraphs_item-feed-field_equal_heights'] = array(
    'bundle' => 'feed',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_equal_heights',
    'label' => 'Equal heights',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'paragraphs_item-feed-field_feed_link'.
  $field_instances['paragraphs_item-feed-field_feed_link'] = array(
    'bundle' => 'feed',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_title_plain',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_feed_link',
    'label' => 'View more link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 1,
        'profile' => 'field_node',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-feed-field_latest'.
  $field_instances['paragraphs_item-feed-field_latest'] = array(
    'bundle' => 'feed',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_latest',
    'label' => 'Latest',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-feed-field_limit_text_width'.
  $field_instances['paragraphs_item-feed-field_limit_text_width'] = array(
    'bundle' => 'feed',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to reduce the width of this body of text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_limit_text_width',
    'label' => 'Limit text width',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'paragraphs_item-feed-field_palette'.
  $field_instances['paragraphs_item-feed-field_palette'] = array(
    'bundle' => 'feed',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'paragraphs_item-feed-field_row'.
  $field_instances['paragraphs_item-feed-field_row'] = array(
    'bundle' => 'feed',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row',
    'label' => 'Items per row',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-feed-field_section_description'.
  $field_instances['paragraphs_item-feed-field_section_description'] = array(
    'bundle' => 'feed',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-feed-field_select_feed'.
  $field_instances['paragraphs_item-feed-field_select_feed'] = array(
    'bundle' => 'feed',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'viewreference',
        'settings' => array(),
        'type' => 'viewreference_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_select_feed',
    'label' => 'Select feed',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewreference',
      'settings' => array(),
      'type' => 'viewreference_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-feed-field_title'.
  $field_instances['paragraphs_item-feed-field_title'] = array(
    'bundle' => 'feed',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-form-field_form'.
  $field_instances['paragraphs_item-form-field_form'] = array(
    'bundle' => 'form',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'blockreference',
        'settings' => array(
          'show_empty_blocks' => 0,
        ),
        'type' => 'blockreference_without_title',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_form',
    'label' => 'Form',
    'required' => 1,
    'settings' => array(
      'blockreference_modules' => array(
        'backup_migrate' => 0,
        'block' => 0,
        'context_ui' => 0,
        'devel' => 0,
        'locale' => 0,
        'menu' => 0,
        'menu_block' => 0,
        'node' => 0,
        'remora_highmaps_data' => 0,
        'search' => 0,
        'shortcut' => 0,
        'site_map' => 0,
        'system' => 0,
        'user' => 0,
        'views' => 0,
        'webform' => 'webform',
        'webform_block' => 0,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-form-field_palette'.
  $field_instances['paragraphs_item-form-field_palette'] = array(
    'bundle' => 'form',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-form-field_section_description'.
  $field_instances['paragraphs_item-form-field_section_description'] = array(
    'bundle' => 'form',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-form-field_title'.
  $field_instances['paragraphs_item-form-field_title'] = array(
    'bundle' => 'form',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-gallery-field_description'.
  $field_instances['paragraphs_item-gallery-field_description'] = array(
    'bundle' => 'gallery',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-gallery-field_limit_text_width'.
  $field_instances['paragraphs_item-gallery-field_limit_text_width'] = array(
    'bundle' => 'gallery',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to reduce the width of this body of text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_limit_text_width',
    'label' => 'Limit text width',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-gallery-field_palette'.
  $field_instances['paragraphs_item-gallery-field_palette'] = array(
    'bundle' => 'gallery',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-gallery-field_photos'.
  $field_instances['paragraphs_item-gallery-field_photos'] = array(
    'bundle' => 'gallery',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'nugget',
        ),
        'type' => 'picture',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_photos',
    'label' => 'Photos',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => 0,
      'file_directory' => 'content/paragraphs/gallery/photos/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '1600x1600',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-gallery-field_section_description'.
  $field_instances['paragraphs_item-gallery-field_section_description'] = array(
    'bundle' => 'gallery',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-gallery-field_title'.
  $field_instances['paragraphs_item-gallery-field_title'] = array(
    'bundle' => 'gallery',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-iframe-field_iframe'.
  $field_instances['paragraphs_item-iframe-field_iframe'] = array(
    'bundle' => 'iframe',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'iframe',
        'settings' => array(),
        'type' => 'iframe_formatter_asurl',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_iframe',
    'label' => 'IFrame',
    'required' => 1,
    'settings' => array(
      'class' => 'field-iframe-instance',
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'expose_class' => 0,
      'frameborder' => 0,
      'height' => 540,
      'scrolling' => 'auto',
      'tokensupport' => 0,
      'transparency' => 0,
      'user_register_form' => FALSE,
      'width' => '100%',
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'iframe',
      'settings' => array(
        'size' => 255,
      ),
      'type' => 'iframe_widget_urlheight',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-iframe-field_palette'.
  $field_instances['paragraphs_item-iframe-field_palette'] = array(
    'bundle' => 'iframe',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-iframe-field_section_description'.
  $field_instances['paragraphs_item-iframe-field_section_description'] = array(
    'bundle' => 'iframe',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-iframe-field_title'.
  $field_instances['paragraphs_item-iframe-field_title'] = array(
    'bundle' => 'iframe',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_description'.
  $field_instances['paragraphs_item-links-field_description'] = array(
    'bundle' => 'links',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_limit_text_width'.
  $field_instances['paragraphs_item-links-field_limit_text_width'] = array(
    'bundle' => 'links',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to reduce the width of this body of text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_limit_text_width',
    'label' => 'Limit text width',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_linked_page'.
  $field_instances['paragraphs_item-links-field_linked_page'] = array(
    'bundle' => 'links',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_linked_page',
    'label' => 'Linked page',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_more_link'.
  $field_instances['paragraphs_item-links-field_more_link'] = array(
    'bundle' => 'links',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_title_plain',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_more_link',
    'label' => 'More link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => 'default',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 1,
        'profile' => 'field_node',
      ),
      'rel_remove' => 'rel_remove_internal',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_palette'.
  $field_instances['paragraphs_item-links-field_palette'] = array(
    'bundle' => 'links',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_row'.
  $field_instances['paragraphs_item-links-field_row'] = array(
    'bundle' => 'links',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'row-max-4',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row',
    'label' => 'Items per row',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_section_description'.
  $field_instances['paragraphs_item-links-field_section_description'] = array(
    'bundle' => 'links',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links-field_title'.
  $field_instances['paragraphs_item-links-field_title'] = array(
    'bundle' => 'links',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-map_world-field_palette'.
  $field_instances['paragraphs_item-map_world-field_palette'] = array(
    'bundle' => 'map_world',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-map_world-field_section_description'.
  $field_instances['paragraphs_item-map_world-field_section_description'] = array(
    'bundle' => 'map_world',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-map_world-field_title'.
  $field_instances['paragraphs_item-map_world-field_title'] = array(
    'bundle' => 'map_world',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-map_world-field_world_map'.
  $field_instances['paragraphs_item-map_world-field_world_map'] = array(
    'bundle' => 'map_world',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_world_map',
    'label' => 'World map',
    'required' => 1,
    'settings' => array(
      'blockreference_modules' => array(
        'backup_migrate' => 0,
        'block' => 0,
        'context_ui' => 0,
        'devel' => 0,
        'locale' => 0,
        'menu' => 0,
        'menu_block' => 0,
        'node' => 0,
        'remora_highmaps_data' => 'remora_highmaps_data',
        'search' => 0,
        'shortcut' => 0,
        'site_map' => 0,
        'system' => 0,
        'user' => 0,
        'views' => 0,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-organisation_group-field_description'.
  $field_instances['paragraphs_item-organisation_group-field_description'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-organisation_group-field_limit_text_width'.
  $field_instances['paragraphs_item-organisation_group-field_limit_text_width'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to reduce the width of this body of text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_limit_text_width',
    'label' => 'Limit text width',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-organisation_group-field_organisation_group'.
  $field_instances['paragraphs_item-organisation_group-field_organisation_group'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'search_index',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_organisation_group',
    'label' => 'Organisation group',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-organisation_group-field_palette'.
  $field_instances['paragraphs_item-organisation_group-field_palette'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-organisation_group-field_row'.
  $field_instances['paragraphs_item-organisation_group-field_row'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'row-max-4',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row',
    'label' => 'Items per row',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-organisation_group-field_section_description'.
  $field_instances['paragraphs_item-organisation_group-field_section_description'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-organisation_group-field_title'.
  $field_instances['paragraphs_item-organisation_group-field_title'] = array(
    'bundle' => 'organisation_group',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-q_a-field_limit_text_width'.
  $field_instances['paragraphs_item-q_a-field_limit_text_width'] = array(
    'bundle' => 'q_a',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to reduce the width of this body of text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_limit_text_width',
    'label' => 'Limit text width',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-q_a-field_qa_answer'.
  $field_instances['paragraphs_item-q_a-field_qa_answer'] = array(
    'bundle' => 'q_a',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_qa_answer',
    'label' => 'Answer',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 0,
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-q_a-field_qa_question'.
  $field_instances['paragraphs_item-q_a-field_qa_question'] = array(
    'bundle' => 'q_a',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_qa_question',
    'label' => 'Question',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 0,
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-q_a-field_section_description'.
  $field_instances['paragraphs_item-q_a-field_section_description'] = array(
    'bundle' => 'q_a',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-quote-field_body'.
  $field_instances['paragraphs_item-quote-field_body'] = array(
    'bundle' => 'quote',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-quote-field_fullname'.
  $field_instances['paragraphs_item-quote-field_fullname'] = array(
    'bundle' => 'quote',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_fullname',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-quote-field_institution'.
  $field_instances['paragraphs_item-quote-field_institution'] = array(
    'bundle' => 'quote',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_institution',
    'label' => 'Institution',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-quote-field_job_title'.
  $field_instances['paragraphs_item-quote-field_job_title'] = array(
    'bundle' => 'quote',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_job_title',
    'label' => 'Job title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-quote-field_palette'.
  $field_instances['paragraphs_item-quote-field_palette'] = array(
    'bundle' => 'quote',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-quote-field_photo'.
  $field_instances['paragraphs_item-quote-field_photo'] = array(
    'bundle' => 'quote',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_photo',
    'label' => 'Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'content/paragraphs/quote/images/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '60x60',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'nugget-1x1' => 'nugget-1x1',
          'nugget-3x4' => 'nugget-3x4',
          'nugget-4x3' => 'nugget-4x3',
          'nugget-16x9' => 'nugget-16x9',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-quote-field_section_description'.
  $field_instances['paragraphs_item-quote-field_section_description'] = array(
    'bundle' => 'quote',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-slider-field_palette'.
  $field_instances['paragraphs_item-slider-field_palette'] = array(
    'bundle' => 'slider',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-slider-field_section_description'.
  $field_instances['paragraphs_item-slider-field_section_description'] = array(
    'bundle' => 'slider',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-slider-field_slides'.
  $field_instances['paragraphs_item-slider-field_slides'] = array(
    'bundle' => 'slider',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'search_index_reference',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_slides',
    'label' => 'Slides',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-social_links-field_follow_us_on'.
  $field_instances['paragraphs_item-social_links-field_follow_us_on'] = array(
    'bundle' => 'social_links',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_follow_us_on',
    'label' => 'Follow us on',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-social_links-field_section_description'.
  $field_instances['paragraphs_item-social_links-field_section_description'] = array(
    'bundle' => 'social_links',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-social_links-field_title'.
  $field_instances['paragraphs_item-social_links-field_title'] = array(
    'bundle' => 'social_links',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-tagged-field_palette'.
  $field_instances['paragraphs_item-tagged-field_palette'] = array(
    'bundle' => 'tagged',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-tagged-field_section_description'.
  $field_instances['paragraphs_item-tagged-field_section_description'] = array(
    'bundle' => 'tagged',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-tagged-field_tagged_view'.
  $field_instances['paragraphs_item-tagged-field_tagged_view'] = array(
    'bundle' => 'tagged',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'viewreference',
        'settings' => array(),
        'type' => 'viewreference_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_tagged_view',
    'label' => 'Tagged content',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewreference',
      'settings' => array(),
      'type' => 'viewreference_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-tagged-field_title'.
  $field_instances['paragraphs_item-tagged-field_title'] = array(
    'bundle' => 'tagged',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-team-field_description'.
  $field_instances['paragraphs_item-team-field_description'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-team-field_limit_text_width'.
  $field_instances['paragraphs_item-team-field_limit_text_width'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to reduce the width of this body of text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_limit_text_width',
    'label' => 'Limit text width',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-team-field_palette'.
  $field_instances['paragraphs_item-team-field_palette'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-team-field_row'.
  $field_instances['paragraphs_item-team-field_row'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row',
    'label' => 'Items per row',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-team-field_section_description'.
  $field_instances['paragraphs_item-team-field_section_description'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-team-field_slider'.
  $field_instances['paragraphs_item-team-field_slider'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_slider',
    'label' => 'Display as',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-team-field_team'.
  $field_instances['paragraphs_item-team-field_team'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'search_index',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_team',
    'label' => 'Team',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-team-field_title'.
  $field_instances['paragraphs_item-team-field_title'] = array(
    'bundle' => 'team',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-team_member-field_person'.
  $field_instances['paragraphs_item-team_member-field_person'] = array(
    'bundle' => 'team_member',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'search_index',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_person',
    'label' => 'Person',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-team_member-field_role'.
  $field_instances['paragraphs_item-team_member-field_role'] = array(
    'bundle' => 'team_member',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_role',
    'label' => 'Role',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-twitter-field_description'.
  $field_instances['paragraphs_item-twitter-field_description'] = array(
    'bundle' => 'twitter',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-twitter-field_limit_text_width'.
  $field_instances['paragraphs_item-twitter-field_limit_text_width'] = array(
    'bundle' => 'twitter',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to reduce the width of this body of text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_limit_text_width',
    'label' => 'Limit text width',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'paragraphs_item-twitter-field_palette'.
  $field_instances['paragraphs_item-twitter-field_palette'] = array(
    'bundle' => 'twitter',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-twitter-field_row'.
  $field_instances['paragraphs_item-twitter-field_row'] = array(
    'bundle' => 'twitter',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'row-max-4',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row',
    'label' => 'Items per row',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-twitter-field_section_description'.
  $field_instances['paragraphs_item-twitter-field_section_description'] = array(
    'bundle' => 'twitter',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-twitter-field_title'.
  $field_instances['paragraphs_item-twitter-field_title'] = array(
    'bundle' => 'twitter',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-twitter-field_twitter_user'.
  $field_instances['paragraphs_item-twitter-field_twitter_user'] = array(
    'bundle' => 'twitter',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_twitter_user',
    'label' => 'Twitter user',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-twitter-field_twitter_view'.
  $field_instances['paragraphs_item-twitter-field_twitter_view'] = array(
    'bundle' => 'twitter',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'viewreference',
        'settings' => array(),
        'type' => 'viewreference_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_twitter_view',
    'label' => 'Twitter feed',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewreference',
      'settings' => array(),
      'type' => 'viewreference_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_body'.
  $field_instances['paragraphs_item-video-field_body'] = array(
    'bundle' => 'video',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_description'.
  $field_instances['paragraphs_item-video-field_description'] = array(
    'bundle' => 'video',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_limit_text_width'.
  $field_instances['paragraphs_item-video-field_limit_text_width'] = array(
    'bundle' => 'video',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to reduce the width of this body of text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_limit_text_width',
    'label' => 'Limit text width',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_palette'.
  $field_instances['paragraphs_item-video-field_palette'] = array(
    'bundle' => 'video',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_section_description'.
  $field_instances['paragraphs_item-video-field_section_description'] = array(
    'bundle' => 'video',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_title'.
  $field_instances['paragraphs_item-video-field_title'] = array(
    'bundle' => 'video',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_video'.
  $field_instances['paragraphs_item-video-field_video'] = array(
    'bundle' => 'video',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(),
        'type' => 'video_embed_field_url',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video',
    'label' => 'Video',
    'required' => 1,
    'settings' => array(
      'allowed_providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'description_field' => 0,
      'description_length' => 128,
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_video_position'.
  $field_instances['paragraphs_item-video-field_video_position'] = array(
    'bundle' => 'video',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_position',
    'label' => 'Video position',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-wysiwyg-field_body'.
  $field_instances['paragraphs_item-wysiwyg-field_body'] = array(
    'bundle' => 'wysiwyg',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 0,
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-wysiwyg-field_image'.
  $field_instances['paragraphs_item-wysiwyg-field_image'] = array(
    'bundle' => 'wysiwyg',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'nugget',
        ),
        'type' => 'picture',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'entity_translation_sync' => 1,
      'file_directory' => 'content/paragraphs/text/images/[current-date:custom:Y-m-d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '60x60',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'manualcrop' => 'manualcrop',
          'nugget-1x1' => 'nugget-1x1',
          'nugget-3x4' => 'nugget-3x4',
          'nugget-4x3' => 'nugget-4x3',
          'nugget-16x9' => 'nugget-16x9',
          'nugget-70x99' => 'nugget-70x99',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-wysiwyg-field_image_position'.
  $field_instances['paragraphs_item-wysiwyg-field_image_position'] = array(
    'bundle' => 'wysiwyg',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image_position',
    'label' => 'Image position',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-wysiwyg-field_limit_text_width'.
  $field_instances['paragraphs_item-wysiwyg-field_limit_text_width'] = array(
    'bundle' => 'wysiwyg',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to reduce the width of this body of text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_limit_text_width',
    'label' => 'Limit text width',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'paragraphs_item-wysiwyg-field_link'.
  $field_instances['paragraphs_item-wysiwyg-field_link'] = array(
    'bundle' => 'wysiwyg',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_absolute',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link image to',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => 'default',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 1,
        'profile' => 'field_node',
      ),
      'rel_remove' => 'rel_remove_internal',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-wysiwyg-field_original'.
  $field_instances['paragraphs_item-wysiwyg-field_original'] = array(
    'bundle' => 'wysiwyg',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_original',
    'label' => 'Link to larger image',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-wysiwyg-field_palette'.
  $field_instances['paragraphs_item-wysiwyg-field_palette'] = array(
    'bundle' => 'wysiwyg',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'palette-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_palette',
    'label' => 'Palette',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-wysiwyg-field_section_description'.
  $field_instances['paragraphs_item-wysiwyg-field_section_description'] = array(
    'bundle' => 'wysiwyg',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Administrative title to help identify your nuggets while editing pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_description',
    'label' => 'Nugget name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-wysiwyg-field_title'.
  $field_instances['paragraphs_item-wysiwyg-field_title'] = array(
    'bundle' => 'wysiwyg',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'limited_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-countries-description_field'.
  $field_instances['taxonomy_term-countries-description_field'] = array(
    'bundle' => 'countries',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'description_field',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-countries-field_country_alpha_2'.
  $field_instances['taxonomy_term-countries-field_country_alpha_2'] = array(
    'bundle' => 'countries',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_country_alpha_2',
    'label' => 'Alpha 2',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 2,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-countries-field_country_alpha_3'.
  $field_instances['taxonomy_term-countries-field_country_alpha_3'] = array(
    'bundle' => 'countries',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_country_alpha_3',
    'label' => 'Alpha 3',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'title' => 'title',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'limited_html' => array(
              'weight' => -8,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'title' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 3,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-countries-field_country_code'.
  $field_instances['taxonomy_term-countries-field_country_code'] = array(
    'bundle' => 'countries',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_country_code',
    'label' => 'Country code',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-countries-field_country_region_code'.
  $field_instances['taxonomy_term-countries-field_country_region_code'] = array(
    'bundle' => 'countries',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_country_region_code',
    'label' => 'Region code',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-countries-field_country_subregion_code'.
  $field_instances['taxonomy_term-countries-field_country_subregion_code'] = array(
    'bundle' => 'countries',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_country_subregion_code',
    'label' => 'Subregion code',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-countries-name_field'.
  $field_instances['taxonomy_term-countries-name_field'] = array(
    'bundle' => 'countries',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'taxonomy_term-honorific_title-description_field'.
  $field_instances['taxonomy_term-honorific_title-description_field'] = array(
    'bundle' => 'honorific_title',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'description_field',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-honorific_title-name_field'.
  $field_instances['taxonomy_term-honorific_title-name_field'] = array(
    'bundle' => 'honorific_title',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-organisation_type-description_field'.
  $field_instances['taxonomy_term-organisation_type-description_field'] = array(
    'bundle' => 'organisation_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'description_field',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-organisation_type-name_field'.
  $field_instances['taxonomy_term-organisation_type-name_field'] = array(
    'bundle' => 'organisation_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'taxonomy_term-resource_type-description_field'.
  $field_instances['taxonomy_term-resource_type-description_field'] = array(
    'bundle' => 'resource_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'description_field',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-resource_type-name_field'.
  $field_instances['taxonomy_term-resource_type-name_field'] = array(
    'bundle' => 'resource_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-source-description_field'.
  $field_instances['taxonomy_term-source-description_field'] = array(
    'bundle' => 'source',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'description_field',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-source-name_field'.
  $field_instances['taxonomy_term-source-name_field'] = array(
    'bundle' => 'source',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-tags-description_field'.
  $field_instances['taxonomy_term-tags-description_field'] = array(
    'bundle' => 'tags',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'description_field',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-tags-name_field'.
  $field_instances['taxonomy_term-tags-name_field'] = array(
    'bundle' => 'tags',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abbreviated authors');
  t('Abstract');
  t('Add any links to institutional profiles or social networks that you would like to share on the site for this individual');
  t('Additional content nuggets');
  t('Administrative title to help identify your nuggets while editing pages.');
  t('Allows user to choose related pages, publications, news and events to display on the node.');
  t('Alpha 2');
  t('Alpha 3');
  t('Answer');
  t('Attachments');
  t('Authors');
  t('Bio');
  t('Blocks');
  t('Body');
  t('Check this box to reduce the width of this body of text');
  t('Citation date');
  t('Country');
  t('Country code');
  t('DOI');
  t('Date');
  t('Description');
  t('Display');
  t('Display as');
  t('Display date as');
  t('Display date override');
  t('End date');
  t('Enter the event dates as you would like them to be displayed e.g. 01-12 Dec 2018');
  t('Equal heights');
  t('External link for more information about the event ');
  t('First name');
  t('Follow us on');
  t('Form');
  t('Hero nugget');
  t('Honorific title');
  t('IFrame');
  t('Image');
  t('Image position');
  t('Institution');
  t('Items per row');
  t('Job title');
  t('Journal');
  t('Latest');
  t('Limit text width');
  t('Link');
  t('Link image to');
  t('Link slide to');
  t('Link to larger image');
  t('Link with title');
  t('Linked page');
  t('Location');
  t('Logo');
  t('Main content');
  t('Main content nuggets');
  t('More link');
  t('Name');
  t('Nugget');
  t('Nugget name');
  t('Nuggets');
  t('Only applicable if selecting Grid layout above.');
  t('Organisation group');
  t('Organisations');
  t('Pages');
  t('Palette');
  t('People');
  t('Person');
  t('Photo');
  t('Photos');
  t('Postscript nuggets');
  t('Profile links');
  t('PubMedID');
  t('Published by');
  t('Published date');
  t('Q&A');
  t('Question');
  t('Region code');
  t('Related');
  t('Resource type');
  t('Role');
  t('Select feed');
  t('Sidebar nuggets');
  t('Slide title');
  t('Slides');
  t('Source');
  t('Start date');
  t('Subregion code');
  t('Suffix');
  t('Summary');
  t('Surname');
  t('Tagged content');
  t('Tags');
  t('Team');
  t('Title');
  t('Twitter feed');
  t('Twitter user');
  t('Video');
  t('Video position');
  t('View more link');
  t('Volume');
  t('World map');

  return $field_instances;
}
