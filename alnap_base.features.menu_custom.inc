<?php
/**
 * @file
 * alnap_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function alnap_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer.
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-header.
  $menus['menu-header'] = array(
    'menu_name' => 'menu-header',
    'title' => 'Header',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('Header');

  return $menus;
}
