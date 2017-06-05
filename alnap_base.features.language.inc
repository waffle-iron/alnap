<?php
/**
 * @file
 * alnap_base.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function alnap_base_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => -10,
  );
  // Exported language: es.
  $languages['es'] = array(
    'language' => 'es',
    'name' => 'Spanish',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'es',
    'weight' => -9,
  );
  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => -8,
  );
  return $languages;
}
