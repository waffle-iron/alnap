<?php
/**
 * @file
 * alnap_base.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function alnap_base_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'description_field'.
  $field_bases['description_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'description_field',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_abbr_authors'.
  $field_bases['field_abbr_authors'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_abbr_authors',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_abstract'.
  $field_bases['field_abstract'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_abstract',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_attachments'.
  $field_bases['field_attachments'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_attachments',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'file',
  );

  // Exported field_base: 'field_authors'.
  $field_bases['field_authors'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_authors',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_bio'.
  $field_bases['field_bio'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bio',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_block'.
  $field_bases['field_block'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block',
    'indexes' => array(
      'moddelta' => array(
        0 => 'moddelta',
      ),
    ),
    'locked' => 0,
    'module' => 'blockreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_modules' => array(),
    ),
    'translatable' => 0,
    'type' => 'blockreference',
  );

  // Exported field_base: 'field_body'.
  $field_bases['field_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_citation_date'.
  $field_bases['field_citation_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_citation_date',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_country'.
  $field_bases['field_country'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'countries',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_country_alpha_2'.
  $field_bases['field_country_alpha_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country_alpha_2',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_country_alpha_3'.
  $field_bases['field_country_alpha_3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country_alpha_3',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_country_code'.
  $field_bases['field_country_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country_code',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_country_region_code'.
  $field_bases['field_country_region_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country_region_code',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_country_subregion_code'.
  $field_bases['field_country_subregion_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country_subregion_code',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_date'.
  $field_bases['field_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_date_display_override'.
  $field_bases['field_date_display_override'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date_display_override',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_description'.
  $field_bases['field_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_display_date'.
  $field_bases['field_display_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_display_date',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_doi'.
  $field_bases['field_doi'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_doi',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_end_date'.
  $field_bases['field_end_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_end_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_equal_heights'.
  $field_bases['field_equal_heights'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_equal_heights',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => 'equal-heights',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_feed_link'.
  $field_bases['field_feed_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_feed_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_first_name'.
  $field_bases['field_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_first_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_follow_us_on'.
  $field_bases['field_follow_us_on'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_follow_us_on',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 1,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_form'.
  $field_bases['field_form'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form',
    'indexes' => array(
      'moddelta' => array(
        0 => 'moddelta',
      ),
    ),
    'locked' => 0,
    'module' => 'blockreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_modules' => array(),
    ),
    'translatable' => 0,
    'type' => 'blockreference',
  );

  // Exported field_base: 'field_fullname'.
  $field_bases['field_fullname'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fullname',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_hero_nugget'.
  $field_bases['field_hero_nugget'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hero_nugget',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_honorific_title'.
  $field_bases['field_honorific_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_honorific_title',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'honorific_title' => 'honorific_title',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_iframe'.
  $field_bases['field_iframe'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_iframe',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'iframe',
    'settings' => array(
      'class' => 'field-iframe',
      'entity_translation_sync' => FALSE,
      'frameborder' => 0,
      'scrolling' => 'auto',
      'tokensupport' => 0,
      'transparency' => 0,
    ),
    'translatable' => 0,
    'type' => 'iframe',
  );

  // Exported field_base: 'field_image'.
  $field_bases['field_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'image',
  );

  // Exported field_base: 'field_image_position'.
  $field_bases['field_image_position'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image_position',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'img-centre' => 'Centre',
        'img-left' => 'Left',
        'img-right' => 'Right',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_institution'.
  $field_bases['field_institution'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_institution',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_job_title'.
  $field_bases['field_job_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_job_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_journal'.
  $field_bases['field_journal'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_journal',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_latest'.
  $field_bases['field_latest'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_latest',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'markup' => array(
        'format' => 'php_code',
        'value' => '<div class="form-item">
<label for="view-display">Number to display</label>
<select name="view-display" class="form-select">
<option value="latest2">2</option>
<option value="latest3">3</option>
<option value="latest4">4</option>
<option value="latest6">6</option>
</select>
</div>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_limit_text_width'.
  $field_bases['field_limit_text_width'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_limit_text_width',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => 'limited-text-width',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_link'.
  $field_bases['field_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 1,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_link_title'.
  $field_bases['field_link_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link_title',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_linked_page'.
  $field_bases['field_linked_page'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_linked_page',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'box_links',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_links'.
  $field_bases['field_links'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_links',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 1,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_location'.
  $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_logo'.
  $field_bases['field_logo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_logo',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_main_content'.
  $field_bases['field_main_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_content',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_more_link'.
  $field_bases['field_more_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_more_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 1,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_organisation_group'.
  $field_bases['field_organisation_group'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_group',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'organisation_group' => 'organisation_group',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_organisations'.
  $field_bases['field_organisations'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisations',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'organisation' => 'organisation',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_orgs_node_disp'.
  $field_bases['field_orgs_node_disp'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_orgs_node_disp',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'grid' => 'Grid',
        'list' => 'List',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_original'.
  $field_bases['field_original'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_original',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_pages'.
  $field_bases['field_pages'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pages',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_palette'.
  $field_bases['field_palette'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_palette',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'palette-default' => 'Default',
        'palette-highlight' => 'Highlight',
        'palette-alt-1' => 'Alt 1',
        'palette-alt-2' => 'Alt 2',
        'palette-alt-3' => 'Alt 3',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_person'.
  $field_bases['field_person'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_person',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'person' => 'person',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_photo'.
  $field_bases['field_photo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_photo',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_photos'.
  $field_bases['field_photos'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_photos',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'image',
  );

  // Exported field_base: 'field_published_by'.
  $field_bases['field_published_by'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_published_by',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_pubmedid'.
  $field_bases['field_pubmedid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pubmedid',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'markup' => array(
        'format' => 'php_code',
        'value' => '<div class="form-item form-type-textfield form-item-field-pmid-und-0-value">
  <label for="edit-field-pmid-und-0-value">PMID </label>
 <input type="text" id="edit-field-pmid-und-0-value" name="field_pmid[und][0][value]" value="" size="12" maxlength="10" class="form-text">
</div>
<div class="form-actions form-wrapper">
  <input type="submit" id="pubmedid-submit" value="Load" class="form-submit">
</div>
',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_qa'.
  $field_bases['field_qa'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_qa',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_qa_answer'.
  $field_bases['field_qa_answer'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_qa_answer',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_qa_question'.
  $field_bases['field_qa_question'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_qa_question',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_related'.
  $field_bases['field_related'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'related_reference_exclusions',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_resource_type'.
  $field_bases['field_resource_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_resource_type',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'resource_type',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_role'.
  $field_bases['field_role'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_role',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_row'.
  $field_bases['field_row'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_row',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'row-max-6' => 'Six',
        'row-max-4' => 'Four',
        'row-max-3' => 'Three',
        'row-max-2' => 'Two',
        'row-max-1' => 'One',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_section'.
  $field_bases['field_section'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_section',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_section_description'.
  $field_bases['field_section_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_section_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_section_footer'.
  $field_bases['field_section_footer'] = array(
    'active' => 1,
    'cardinality' => 4,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_section_footer',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_section_top'.
  $field_bases['field_section_top'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_section_top',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_select_feed'.
  $field_bases['field_select_feed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_select_feed',
    'indexes' => array(
      'view_id' => array(
        0 => 'view_id',
      ),
    ),
    'locked' => 0,
    'module' => 'viewreference',
    'settings' => array(
      'append_id' => 0,
      'arguments' => array(
        'delimiter' => '/',
        'dsv_arguments' => 0,
        'label' => '!field_label arguments',
        'php_arguments' => 0,
        'rows' => 1,
      ),
      'entity_translation_sync' => FALSE,
      'referenceable_tags' => array(
        'allow' => 'feed',
        'deny' => '',
      ),
      'referenceable_views' => array(
        'admin_views_node:default' => 0,
        'admin_views_node:system_1' => 0,
        'admin_views_taxonomy_term:default' => 0,
        'admin_views_taxonomy_term:system_1' => 0,
        'admin_views_user:default' => 0,
        'admin_views_user:system_1' => 0,
        'archive:block' => 0,
        'archive:default' => 0,
        'archive:page' => 0,
        'attachments:attachments' => 0,
        'attachments:default' => 0,
        'backlinks:block' => 0,
        'backlinks:default' => 0,
        'backlinks:page' => 0,
        'events:all' => 0,
        'events:default' => 0,
        'events:latest2' => 0,
        'events:latest3' => 0,
        'events:latest4' => 0,
        'events:latest6' => 0,
        'events:past' => 0,
        'footer:contact_us' => 0,
        'footer:default' => 0,
        'footer:social' => 0,
        'footer_sections:default' => 0,
        'footer_sections:orgs' => 0,
        'frontpage:default' => 0,
        'frontpage:feed' => 0,
        'frontpage:page' => 0,
        'glossary:attachment' => 0,
        'glossary:default' => 0,
        'glossary:page' => 0,
        'links:block' => 0,
        'links:default' => 0,
        'news:all' => 0,
        'news:default' => 0,
        'news:latest2' => 0,
        'news:latest3' => 0,
        'news:latest4' => 0,
        'news:latest6' => 0,
        'news_events:all' => 0,
        'news_events:default' => 0,
        'news_events:events_all_att' => 0,
        'news_events:events_att' => 0,
        'news_events:news' => 0,
        'organisations:all_teaser' => 0,
        'organisations:custom_link' => 0,
        'organisations:default' => 0,
        'organisations:footer' => 0,
        'organisations:grid' => 0,
        'organisations:grid_node' => 0,
        'organisations:list' => 0,
        'organisations:list_node' => 0,
        'organisations:node' => 0,
        'organisations_group:block' => 0,
        'organisations_group:default' => 0,
        'publications:all' => 0,
        'publications:default' => 0,
        'publications:latest2' => 0,
        'publications:latest3' => 0,
        'publications:latest4' => 0,
        'publications:latest6' => 0,
        'referencing:default' => 0,
        'referencing:sliders' => 0,
        'related:default' => 0,
        'related:referenced' => 0,
        'sections:content' => 0,
        'sections:content_top' => 0,
        'sections:default' => 0,
        'sections:hero' => 0,
        'sections:main_content' => 0,
        'sections:sidebar' => 0,
        'slider:block' => 0,
        'slider:default' => 0,
        'social_links:default' => 0,
        'social_links:desktop' => 0,
        'social_links:mobile' => 0,
        'tagged:default' => 0,
        'tagged:tagged' => 0,
        'taxonomy_term:default' => 0,
        'taxonomy_term:feed' => 0,
        'taxonomy_term:page' => 0,
        'team:block' => 0,
        'team:default' => 0,
        'team_section:block' => 0,
        'team_section:block_1' => 0,
        'team_section:default' => 0,
        'tweets:block' => 0,
        'tweets:default' => 0,
        'tweets:page_2' => 0,
        'tweets:page_all_tweets' => 0,
        'twitter:block' => 0,
        'twitter:default' => 0,
      ),
      'skip_default' => 1,
      'skip_disabled' => 0,
      'skip_empty' => 0,
      'sort_views' => 1,
    ),
    'translatable' => 0,
    'type' => 'viewreference',
  );

  // Exported field_base: 'field_side_section'.
  $field_bases['field_side_section'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_side_section',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_slide_link'.
  $field_bases['field_slide_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_slide_link',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'event' => 'event',
          'landing' => 'landing',
          'news' => 'news',
          'organisation_group' => 'organisation_group',
          'page' => 'page',
          'person' => 'person',
          'publication' => 'publication',
          'system_page' => 'system_page',
          'team' => 'team',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_slide_title'.
  $field_bases['field_slide_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_slide_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_slider'.
  $field_bases['field_slider'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_slider',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'view-type-slider' => 'Slider',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_slides'.
  $field_bases['field_slides'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_slides',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'slide' => 'slide',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_source'.
  $field_bases['field_source'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_source',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'source',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_start_date'.
  $field_bases['field_start_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_start_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_suffix'.
  $field_bases['field_suffix'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_suffix',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_summary'.
  $field_bases['field_summary'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_summary',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_surname'.
  $field_bases['field_surname'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_surname',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_tag'.
  $field_bases['field_tag'] = array(
    'active' => 1,
    'cardinality' => 6,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tag',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'tags',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_tagged_view'.
  $field_bases['field_tagged_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tagged_view',
    'indexes' => array(
      'view_id' => array(
        0 => 'view_id',
      ),
    ),
    'locked' => 0,
    'module' => 'viewreference',
    'settings' => array(
      'append_id' => 0,
      'arguments' => array(
        'delimiter' => '/',
        'dsv_arguments' => 0,
        'label' => '!field_label arguments',
        'php_arguments' => 0,
        'rows' => 1,
      ),
      'entity_translation_sync' => FALSE,
      'referenceable_tags' => array(
        'allow' => 'tagged',
        'deny' => '',
      ),
      'referenceable_views' => array(
        'admin_views_node:default' => 0,
        'admin_views_node:system_1' => 0,
        'admin_views_taxonomy_term:default' => 0,
        'admin_views_taxonomy_term:system_1' => 0,
        'admin_views_user:default' => 0,
        'admin_views_user:system_1' => 0,
        'archive:block' => 0,
        'archive:default' => 0,
        'archive:page' => 0,
        'attachments:attachments' => 0,
        'attachments:default' => 0,
        'backlinks:block' => 0,
        'backlinks:default' => 0,
        'backlinks:page' => 0,
        'box_links:default' => 0,
        'box_links:entityreference_1' => 0,
        'events:all' => 0,
        'events:default' => 0,
        'events:latest2' => 0,
        'events:latest3' => 0,
        'events:latest4' => 0,
        'events:latest6' => 0,
        'events:past' => 0,
        'faqs:default' => 0,
        'faqs:qa_additional' => 0,
        'faqs:qa_main' => 0,
        'faqs:qa_postcript' => 0,
        'faqs:qa_sidebar' => 0,
        'footer:contact_us' => 0,
        'footer:default' => 0,
        'footer:social' => 0,
        'footer_sections:default' => 0,
        'footer_sections:orgs' => 0,
        'frontpage:default' => 0,
        'frontpage:feed' => 0,
        'frontpage:page' => 0,
        'glossary:attachment' => 0,
        'glossary:default' => 0,
        'glossary:page' => 0,
        'links:block' => 0,
        'links:default' => 0,
        'news:all' => 0,
        'news:default' => 0,
        'news:latest2' => 0,
        'news:latest3' => 0,
        'news:latest4' => 0,
        'news:latest6' => 0,
        'news_events:all' => 0,
        'news_events:default' => 0,
        'news_events:events_all_att' => 0,
        'news_events:events_att' => 0,
        'news_events:news' => 0,
        'organisations:all_teaser' => 0,
        'organisations:block_1' => 0,
        'organisations:custom_link' => 0,
        'organisations:default' => 0,
        'organisations:footer' => 0,
        'organisations:grid' => 0,
        'organisations:grid_node' => 0,
        'organisations:list' => 0,
        'organisations:list_node' => 0,
        'organisations:node' => 0,
        'organisations_group:block' => 0,
        'organisations_group:default' => 0,
        'publication_node:default' => 0,
        'publication_node:details' => 0,
        'publications:all' => 0,
        'publications:default' => 0,
        'publications:latest2' => 0,
        'publications:latest3' => 0,
        'publications:latest4' => 0,
        'publications:latest6' => 0,
        'referencing:default' => 0,
        'referencing:sliders' => 0,
        'related:default' => 0,
        'related:referenced' => 0,
        'resource_node:default' => 0,
        'resource_node:details' => 0,
        'resources:all' => 0,
        'resources:default' => 0,
        'resources:latest2' => 0,
        'resources:latest3' => 0,
        'resources:latest4' => 0,
        'resources:latest6' => 0,
        'resources_publications:all' => 0,
        'resources_publications:default' => 0,
        'resources_publications:latest2' => 0,
        'resources_publications:latest3' => 0,
        'resources_publications:latest4' => 0,
        'resources_publications:latest6' => 0,
        'sections:additional' => 0,
        'sections:default' => 0,
        'sections:hero' => 0,
        'sections:main' => 0,
        'sections:postscript' => 0,
        'sections:sidebar' => 0,
        'slider:block' => 0,
        'slider:default' => 0,
        'social_links:default' => 0,
        'social_links:desktop' => 0,
        'social_links:mobile' => 0,
        'tagged:all' => 0,
        'tagged:default' => 0,
        'tagged:events' => 0,
        'tagged:news' => 0,
        'tagged:org' => 0,
        'tagged:orggrp' => 0,
        'tagged:pages' => 0,
        'tagged:people' => 0,
        'tagged:teams' => 0,
        'tagged_publications:default' => 0,
        'tagged_publications:publications' => 0,
        'taxonomy_term:default' => 0,
        'taxonomy_term:feed' => 0,
        'taxonomy_term:page' => 0,
        'team:block' => 0,
        'team:default' => 0,
        'team_section:block' => 0,
        'team_section:block_1' => 0,
        'team_section:default' => 0,
        'tweets:block' => 0,
        'tweets:default' => 0,
        'tweets:page_2' => 0,
        'tweets:page_all_tweets' => 0,
        'twitter:block' => 0,
        'twitter:default' => 0,
      ),
      'skip_default' => 1,
      'skip_disabled' => 1,
      'skip_empty' => 0,
      'sort_views' => 1,
    ),
    'translatable' => 0,
    'type' => 'viewreference',
  );

  // Exported field_base: 'field_team'.
  $field_bases['field_team'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_team',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'team' => 'team',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_team_member'.
  $field_bases['field_team_member'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_team_member',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_title'.
  $field_bases['field_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_twitter_user'.
  $field_bases['field_twitter_user'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_twitter_user',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_twitter_view'.
  $field_bases['field_twitter_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_twitter_view',
    'indexes' => array(
      'view_id' => array(
        0 => 'view_id',
      ),
    ),
    'locked' => 0,
    'module' => 'viewreference',
    'settings' => array(
      'append_id' => 0,
      'arguments' => array(
        'delimiter' => '/',
        'dsv_arguments' => 0,
        'label' => '!field_label arguments',
        'php_arguments' => 0,
        'rows' => 1,
      ),
      'entity_translation_sync' => FALSE,
      'referenceable_tags' => array(
        'allow' => '',
        'deny' => '',
      ),
      'referenceable_views' => array(
        'admin_views_node:default' => 0,
        'admin_views_node:system_1' => 0,
        'admin_views_taxonomy_term:default' => 0,
        'admin_views_taxonomy_term:system_1' => 0,
        'admin_views_user:default' => 0,
        'admin_views_user:system_1' => 0,
        'archive:block' => 0,
        'archive:default' => 0,
        'archive:page' => 0,
        'attachments:attachments' => 0,
        'attachments:default' => 0,
        'backlinks:block' => 0,
        'backlinks:default' => 0,
        'backlinks:page' => 0,
        'events:default' => 0,
        'events:past_all' => 0,
        'events:upcoming_5' => 0,
        'events:upcoming_all' => 0,
        'footer:contact_us' => 0,
        'footer:default' => 0,
        'footer:social' => 0,
        'footer_sections:default' => 0,
        'footer_sections:orgs' => 0,
        'frontpage:default' => 0,
        'frontpage:feed' => 0,
        'frontpage:page' => 0,
        'glossary:attachment' => 0,
        'glossary:default' => 0,
        'glossary:page' => 0,
        'links:block' => 0,
        'links:default' => 0,
        'news:all' => 0,
        'news:default' => 0,
        'news:latest' => 0,
        'news_events:default' => 0,
        'news_events:events_all_att' => 0,
        'news_events:events_att' => 0,
        'news_events:news' => 0,
        'news_events:news_all' => 0,
        'organisations:all_teaser' => 0,
        'organisations:custom_link' => 0,
        'organisations:default' => 0,
        'publications:all' => 0,
        'publications:default' => 0,
        'publications:latest' => 0,
        'referencing:default' => 0,
        'referencing:sliders' => 0,
        'related:default' => 0,
        'related:referenced' => 0,
        'related:tagged' => 0,
        'sections:content' => 0,
        'sections:default' => 0,
        'sections:sidebar' => 0,
        'slider:block' => 0,
        'slider:default' => 0,
        'social_links:default' => 0,
        'social_links:desktop' => 0,
        'social_links:mobile' => 0,
        'taxonomy_term:default' => 0,
        'taxonomy_term:feed' => 0,
        'taxonomy_term:page' => 0,
        'tweets:block' => 0,
        'tweets:default' => 0,
        'tweets:page_2' => 0,
        'tweets:page_all_tweets' => 0,
        'twitter:block' => 'twitter:block',
        'twitter:default' => 0,
      ),
      'skip_default' => 1,
      'skip_disabled' => 0,
      'skip_empty' => 0,
      'sort_views' => 1,
    ),
    'translatable' => 0,
    'type' => 'viewreference',
  );

  // Exported field_base: 'field_video'.
  $field_bases['field_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'video_embed_field',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'video_embed_field',
  );

  // Exported field_base: 'field_video_position'.
  $field_bases['field_video_position'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video_position',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'vid-centre' => 'Centre',
        'vid-left' => 'Left',
        'vid-right' => 'Right',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_volume'.
  $field_bases['field_volume'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_volume',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_world_map'.
  $field_bases['field_world_map'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_world_map',
    'indexes' => array(
      'moddelta' => array(
        0 => 'moddelta',
      ),
    ),
    'locked' => 0,
    'module' => 'blockreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_modules' => array(),
    ),
    'translatable' => 0,
    'type' => 'blockreference',
  );

  // Exported field_base: 'name_field'.
  $field_bases['name_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'name_field',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'title_field'.
  $field_bases['title_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'title_field',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  return $field_bases;
}
