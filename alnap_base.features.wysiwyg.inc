<?php
/**
 * @file
 * alnap_base.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function alnap_base_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_html.
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'HorizontalRule' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
      ),
      'theme' => '',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 1,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_theme' => 'remadmin',
      'css_path' => '',
      'stylesSet' => 'Smaller text=p.smaller-text
Larger text=p.larger-text
Button=a.button',
      'block_formats' => 'p,a',
      'forcePasteAsPlainText' => 1,
      'pasteFromWordPromptCleanup' => 0,
      'pasteFromWordRemoveFontStyles' => 1,
    ),
    'preferences' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'add_to_summaries' => 0,
      'version' => '4.6.2.20af917',
    ),
    'name' => 'formatfiltered_html',
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html.
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'Paste' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
          'Format' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Replace' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
        'linkit' => array(
          'linkit' => 1,
        ),
      ),
      'theme' => '',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 1,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_theme' => 'wyiswyg_theme_default',
      'css_path' => '',
      'stylesSet' => 'Table > Column Chart=table.chart-column
Table > Line Chart=table.chart-line
Table > Spline Chart=table.chart-spline
Table > Area Chart=table.chart-area
Smaller paragraph text=p.smaller-text
Larger paragraph text=p.larger-text
Smaller unordered bullets=ul.smaller-text
Larger unordered bullets=ul.larger-text
Smaller ordered bullets=ol.smaller-text
Larger ordered bullets=ol.larger-text
Button=a.button',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div,dl,dt,dd,a',
      'forcePasteAsPlainText' => 1,
      'pasteFromWordPromptCleanup' => 1,
      'pasteFromWordRemoveFontStyles' => 1,
    ),
    'preferences' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'add_to_summaries' => 0,
      'version' => '4.6.2.20af917',
    ),
    'name' => 'formatfull_html',
    'rdf_mapping' => array(),
  );

  // Exported profile: limited_html.
  $profiles['limited_html'] = array(
    'format' => 'limited_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
        ),
      ),
      'theme' => '',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 1,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_theme' => 'remadmin',
      'css_path' => '',
      'stylesSet' => 'Smaller text=p.smaller-text
Larger text=p.larger-text
Button=a.button',
      'block_formats' => 'p,a',
      'forcePasteAsPlainText' => 1,
      'pasteFromWordPromptCleanup' => 0,
      'pasteFromWordRemoveFontStyles' => 1,
    ),
    'preferences' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'add_to_summaries' => 0,
      'version' => '4.6.2.20af917',
    ),
    'name' => 'formatlimited_html',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
