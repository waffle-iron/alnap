<?php
/**
 * @file
 * alnap_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function alnap_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access flood unblock'.
  $permissions['access flood unblock'] = array(
    'name' => 'access flood unblock',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flood_unblock',
  );

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access users overview'.
  $permissions['access users overview'] = array(
    'name' => 'access users overview',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'add authenticated twitter accounts'.
  $permissions['add authenticated twitter accounts'] = array(
    'name' => 'add authenticated twitter accounts',
    'roles' => array(),
    'module' => 'twitter',
  );

  // Exported permission: 'add terms in countries'.
  $permissions['add terms in countries'] = array(
    'name' => 'add terms in countries',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in honorific_title'.
  $permissions['add terms in honorific_title'] = array(
    'name' => 'add terms in honorific_title',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in organisation_type'.
  $permissions['add terms in organisation_type'] = array(
    'name' => 'add terms in organisation_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in resource_type'.
  $permissions['add terms in resource_type'] = array(
    'name' => 'add terms in resource_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in source'.
  $permissions['add terms in source'] = array(
    'name' => 'add terms in source',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in tags'.
  $permissions['add terms in tags'] = array(
    'name' => 'add terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add twitter accounts'.
  $permissions['add twitter accounts'] = array(
    'name' => 'add twitter accounts',
    'roles' => array(),
    'module' => 'twitter',
  );

  // Exported permission: 'admin node search exlusions'.
  $permissions['admin node search exlusions'] = array(
    'name' => 'admin node search exlusions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer breakpoints'.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'breakpoints',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer devel menu items'.
  $permissions['administer devel menu items'] = array(
    'name' => 'administer devel menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer features menu items'.
  $permissions['administer features menu items'] = array(
    'name' => 'administer features menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer fitvids'.
  $permissions['administer fitvids'] = array(
    'name' => 'administer fitvids',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fitvids',
  );

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer management menu items'.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer manualcrop settings'.
  $permissions['administer manualcrop settings'] = array(
    'name' => 'administer manualcrop settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu positions'.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'menu_position',
  );

  // Exported permission: 'administer menu-footer menu items'.
  $permissions['administer menu-footer menu items'] = array(
    'name' => 'administer menu-footer menu items',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-header menu items'.
  $permissions['administer menu-header menu items'] = array(
    'name' => 'administer menu-header menu items',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer navigation menu items'.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer pictures'.
  $permissions['administer pictures'] = array(
    'name' => 'administer pictures',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'picture',
  );

  // Exported permission: 'administer rh_node'.
  $permissions['administer rh_node'] = array(
    'name' => 'administer rh_node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer rh_taxonomy'.
  $permissions['administer rh_taxonomy'] = array(
    'name' => 'administer rh_taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer rh_user'.
  $permissions['administer rh_user'] = array(
    'name' => 'administer rh_user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer twitter'.
  $permissions['administer twitter'] = array(
    'name' => 'administer twitter',
    'roles' => array(),
    'module' => 'twitter',
  );

  // Exported permission: 'administer twitter accounts'.
  $permissions['administer twitter accounts'] = array(
    'name' => 'administer twitter accounts',
    'roles' => array(),
    'module' => 'twitter',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user-menu menu items'.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer video styles'.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign editor role'.
  $permissions['assign editor role'] = array(
    'name' => 'assign editor role',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass maxlength'.
  $permissions['bypass maxlength'] = array(
    'name' => 'bypass maxlength',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'maxlength',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rh_node'.
  $permissions['bypass rh_node'] = array(
    'name' => 'bypass rh_node',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass rh_taxonomy'.
  $permissions['bypass rh_taxonomy'] = array(
    'name' => 'bypass rh_taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass rh_user'.
  $permissions['bypass rh_user'] = array(
    'name' => 'bypass rh_user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel users with role 2'.
  $permissions['cancel users with role 2'] = array(
    'name' => 'cancel users with role 2',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role 4'.
  $permissions['cancel users with role 4'] = array(
    'name' => 'cancel users with role 4',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'configure chart decorations'.
  $permissions['configure chart decorations'] = array(
    'name' => 'configure chart decorations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'highcharttable',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create country content'.
  $permissions['create country content'] = array(
    'name' => 'create country content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create footer content'.
  $permissions['create footer content'] = array(
    'name' => 'create footer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create form content'.
  $permissions['create form content'] = array(
    'name' => 'create form content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create front content'.
  $permissions['create front content'] = array(
    'name' => 'create front content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create organisation content'.
  $permissions['create organisation content'] = array(
    'name' => 'create organisation content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create organisation_group content'.
  $permissions['create organisation_group content'] = array(
    'name' => 'create organisation_group content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create publication content'.
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create resource content'.
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create slide content'.
  $permissions['create slide content'] = array(
    'name' => 'create slide content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create system_page content'.
  $permissions['create system_page content'] = array(
    'name' => 'create system_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create team content'.
  $permissions['create team content'] = array(
    'name' => 'create team content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create users'.
  $permissions['create users'] = array(
    'name' => 'create users',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any country content'.
  $permissions['delete any country content'] = array(
    'name' => 'delete any country content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any footer content'.
  $permissions['delete any footer content'] = array(
    'name' => 'delete any footer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any form content'.
  $permissions['delete any form content'] = array(
    'name' => 'delete any form content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any front content'.
  $permissions['delete any front content'] = array(
    'name' => 'delete any front content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any organisation content'.
  $permissions['delete any organisation content'] = array(
    'name' => 'delete any organisation content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any organisation_group content'.
  $permissions['delete any organisation_group content'] = array(
    'name' => 'delete any organisation_group content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any person content'.
  $permissions['delete any person content'] = array(
    'name' => 'delete any person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any publication content'.
  $permissions['delete any publication content'] = array(
    'name' => 'delete any publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resource content'.
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any slide content'.
  $permissions['delete any slide content'] = array(
    'name' => 'delete any slide content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any system_page content'.
  $permissions['delete any system_page content'] = array(
    'name' => 'delete any system_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any team content'.
  $permissions['delete any team content'] = array(
    'name' => 'delete any team content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own country content'.
  $permissions['delete own country content'] = array(
    'name' => 'delete own country content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own footer content'.
  $permissions['delete own footer content'] = array(
    'name' => 'delete own footer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own form content'.
  $permissions['delete own form content'] = array(
    'name' => 'delete own form content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own front content'.
  $permissions['delete own front content'] = array(
    'name' => 'delete own front content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own organisation content'.
  $permissions['delete own organisation content'] = array(
    'name' => 'delete own organisation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own organisation_group content'.
  $permissions['delete own organisation_group content'] = array(
    'name' => 'delete own organisation_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own person content'.
  $permissions['delete own person content'] = array(
    'name' => 'delete own person content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own publication content'.
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own resource content'.
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own slide content'.
  $permissions['delete own slide content'] = array(
    'name' => 'delete own slide content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own system_page content'.
  $permissions['delete own system_page content'] = array(
    'name' => 'delete own system_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own team content'.
  $permissions['delete own team content'] = array(
    'name' => 'delete own team content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in countries'.
  $permissions['delete terms in countries'] = array(
    'name' => 'delete terms in countries',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in honorific_title'.
  $permissions['delete terms in honorific_title'] = array(
    'name' => 'delete terms in honorific_title',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organisation_type'.
  $permissions['delete terms in organisation_type'] = array(
    'name' => 'delete terms in organisation_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in resource_type'.
  $permissions['delete terms in resource_type'] = array(
    'name' => 'delete terms in resource_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in source'.
  $permissions['delete terms in source'] = array(
    'name' => 'delete terms in source',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any country content'.
  $permissions['edit any country content'] = array(
    'name' => 'edit any country content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any footer content'.
  $permissions['edit any footer content'] = array(
    'name' => 'edit any footer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any form content'.
  $permissions['edit any form content'] = array(
    'name' => 'edit any form content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any front content'.
  $permissions['edit any front content'] = array(
    'name' => 'edit any front content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any organisation content'.
  $permissions['edit any organisation content'] = array(
    'name' => 'edit any organisation content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any organisation_group content'.
  $permissions['edit any organisation_group content'] = array(
    'name' => 'edit any organisation_group content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any person content'.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any publication content'.
  $permissions['edit any publication content'] = array(
    'name' => 'edit any publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any resource content'.
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any slide content'.
  $permissions['edit any slide content'] = array(
    'name' => 'edit any slide content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any system_page content'.
  $permissions['edit any system_page content'] = array(
    'name' => 'edit any system_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any team content'.
  $permissions['edit any team content'] = array(
    'name' => 'edit any team content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own country content'.
  $permissions['edit own country content'] = array(
    'name' => 'edit own country content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own footer content'.
  $permissions['edit own footer content'] = array(
    'name' => 'edit own footer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own form content'.
  $permissions['edit own form content'] = array(
    'name' => 'edit own form content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own front content'.
  $permissions['edit own front content'] = array(
    'name' => 'edit own front content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own organisation content'.
  $permissions['edit own organisation content'] = array(
    'name' => 'edit own organisation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own organisation_group content'.
  $permissions['edit own organisation_group content'] = array(
    'name' => 'edit own organisation_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own person content'.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own publication content'.
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own resource content'.
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own slide content'.
  $permissions['edit own slide content'] = array(
    'name' => 'edit own slide content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own system_page content'.
  $permissions['edit own system_page content'] = array(
    'name' => 'edit own system_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own team content'.
  $permissions['edit own team content'] = array(
    'name' => 'edit own team content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in countries'.
  $permissions['edit terms in countries'] = array(
    'name' => 'edit terms in countries',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in honorific_title'.
  $permissions['edit terms in honorific_title'] = array(
    'name' => 'edit terms in honorific_title',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organisation_type'.
  $permissions['edit terms in organisation_type'] = array(
    'name' => 'edit terms in organisation_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in resource_type'.
  $permissions['edit terms in resource_type'] = array(
    'name' => 'edit terms in resource_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in source'.
  $permissions['edit terms in source'] = array(
    'name' => 'edit terms in source',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit users with role 2'.
  $permissions['edit users with role 2'] = array(
    'name' => 'edit users with role 2',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 4'.
  $permissions['edit users with role 4'] = array(
    'name' => 'edit users with role 4',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'enter country revision log entry'.
  $permissions['enter country revision log entry'] = array(
    'name' => 'enter country revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter event revision log entry'.
  $permissions['enter event revision log entry'] = array(
    'name' => 'enter event revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter footer revision log entry'.
  $permissions['enter footer revision log entry'] = array(
    'name' => 'enter footer revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter form revision log entry'.
  $permissions['enter form revision log entry'] = array(
    'name' => 'enter form revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter front revision log entry'.
  $permissions['enter front revision log entry'] = array(
    'name' => 'enter front revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter news revision log entry'.
  $permissions['enter news revision log entry'] = array(
    'name' => 'enter news revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter organisation revision log entry'.
  $permissions['enter organisation revision log entry'] = array(
    'name' => 'enter organisation revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter organisation_group revision log entry'.
  $permissions['enter organisation_group revision log entry'] = array(
    'name' => 'enter organisation_group revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter page revision log entry'.
  $permissions['enter page revision log entry'] = array(
    'name' => 'enter page revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter person revision log entry'.
  $permissions['enter person revision log entry'] = array(
    'name' => 'enter person revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter publication revision log entry'.
  $permissions['enter publication revision log entry'] = array(
    'name' => 'enter publication revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter resource revision log entry'.
  $permissions['enter resource revision log entry'] = array(
    'name' => 'enter resource revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter slide revision log entry'.
  $permissions['enter slide revision log entry'] = array(
    'name' => 'enter slide revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter system_page revision log entry'.
  $permissions['enter system_page revision log entry'] = array(
    'name' => 'enter system_page revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter team revision log entry'.
  $permissions['enter team revision log entry'] = array(
    'name' => 'enter team revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'override country authored by option'.
  $permissions['override country authored by option'] = array(
    'name' => 'override country authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override country authored on option'.
  $permissions['override country authored on option'] = array(
    'name' => 'override country authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override country promote to front page option'.
  $permissions['override country promote to front page option'] = array(
    'name' => 'override country promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override country published option'.
  $permissions['override country published option'] = array(
    'name' => 'override country published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override country revision option'.
  $permissions['override country revision option'] = array(
    'name' => 'override country revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override country sticky option'.
  $permissions['override country sticky option'] = array(
    'name' => 'override country sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event authored by option'.
  $permissions['override event authored by option'] = array(
    'name' => 'override event authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event authored on option'.
  $permissions['override event authored on option'] = array(
    'name' => 'override event authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event promote to front page option'.
  $permissions['override event promote to front page option'] = array(
    'name' => 'override event promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event published option'.
  $permissions['override event published option'] = array(
    'name' => 'override event published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event revision option'.
  $permissions['override event revision option'] = array(
    'name' => 'override event revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event sticky option'.
  $permissions['override event sticky option'] = array(
    'name' => 'override event sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override footer authored by option'.
  $permissions['override footer authored by option'] = array(
    'name' => 'override footer authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override footer authored on option'.
  $permissions['override footer authored on option'] = array(
    'name' => 'override footer authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override footer promote to front page option'.
  $permissions['override footer promote to front page option'] = array(
    'name' => 'override footer promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override footer published option'.
  $permissions['override footer published option'] = array(
    'name' => 'override footer published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override footer revision option'.
  $permissions['override footer revision option'] = array(
    'name' => 'override footer revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override footer sticky option'.
  $permissions['override footer sticky option'] = array(
    'name' => 'override footer sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override form authored by option'.
  $permissions['override form authored by option'] = array(
    'name' => 'override form authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override form authored on option'.
  $permissions['override form authored on option'] = array(
    'name' => 'override form authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override form promote to front page option'.
  $permissions['override form promote to front page option'] = array(
    'name' => 'override form promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override form published option'.
  $permissions['override form published option'] = array(
    'name' => 'override form published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override form revision option'.
  $permissions['override form revision option'] = array(
    'name' => 'override form revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override form sticky option'.
  $permissions['override form sticky option'] = array(
    'name' => 'override form sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override front authored by option'.
  $permissions['override front authored by option'] = array(
    'name' => 'override front authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override front authored on option'.
  $permissions['override front authored on option'] = array(
    'name' => 'override front authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override front promote to front page option'.
  $permissions['override front promote to front page option'] = array(
    'name' => 'override front promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override front published option'.
  $permissions['override front published option'] = array(
    'name' => 'override front published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override front revision option'.
  $permissions['override front revision option'] = array(
    'name' => 'override front revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override front sticky option'.
  $permissions['override front sticky option'] = array(
    'name' => 'override front sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news authored by option'.
  $permissions['override news authored by option'] = array(
    'name' => 'override news authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news authored on option'.
  $permissions['override news authored on option'] = array(
    'name' => 'override news authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news promote to front page option'.
  $permissions['override news promote to front page option'] = array(
    'name' => 'override news promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news published option'.
  $permissions['override news published option'] = array(
    'name' => 'override news published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news revision option'.
  $permissions['override news revision option'] = array(
    'name' => 'override news revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news sticky option'.
  $permissions['override news sticky option'] = array(
    'name' => 'override news sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation authored by option'.
  $permissions['override organisation authored by option'] = array(
    'name' => 'override organisation authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation authored on option'.
  $permissions['override organisation authored on option'] = array(
    'name' => 'override organisation authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation promote to front page option'.
  $permissions['override organisation promote to front page option'] = array(
    'name' => 'override organisation promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation published option'.
  $permissions['override organisation published option'] = array(
    'name' => 'override organisation published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation revision option'.
  $permissions['override organisation revision option'] = array(
    'name' => 'override organisation revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation sticky option'.
  $permissions['override organisation sticky option'] = array(
    'name' => 'override organisation sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation_group authored by option'.
  $permissions['override organisation_group authored by option'] = array(
    'name' => 'override organisation_group authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation_group authored on option'.
  $permissions['override organisation_group authored on option'] = array(
    'name' => 'override organisation_group authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation_group promote to front page option'.
  $permissions['override organisation_group promote to front page option'] = array(
    'name' => 'override organisation_group promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation_group published option'.
  $permissions['override organisation_group published option'] = array(
    'name' => 'override organisation_group published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation_group revision option'.
  $permissions['override organisation_group revision option'] = array(
    'name' => 'override organisation_group revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organisation_group sticky option'.
  $permissions['override organisation_group sticky option'] = array(
    'name' => 'override organisation_group sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored by option'.
  $permissions['override page authored by option'] = array(
    'name' => 'override page authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored on option'.
  $permissions['override page authored on option'] = array(
    'name' => 'override page authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page promote to front page option'.
  $permissions['override page promote to front page option'] = array(
    'name' => 'override page promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page published option'.
  $permissions['override page published option'] = array(
    'name' => 'override page published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page revision option'.
  $permissions['override page revision option'] = array(
    'name' => 'override page revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page sticky option'.
  $permissions['override page sticky option'] = array(
    'name' => 'override page sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override person authored by option'.
  $permissions['override person authored by option'] = array(
    'name' => 'override person authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override person authored on option'.
  $permissions['override person authored on option'] = array(
    'name' => 'override person authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override person promote to front page option'.
  $permissions['override person promote to front page option'] = array(
    'name' => 'override person promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override person published option'.
  $permissions['override person published option'] = array(
    'name' => 'override person published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override person revision option'.
  $permissions['override person revision option'] = array(
    'name' => 'override person revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override person sticky option'.
  $permissions['override person sticky option'] = array(
    'name' => 'override person sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication authored by option'.
  $permissions['override publication authored by option'] = array(
    'name' => 'override publication authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication authored on option'.
  $permissions['override publication authored on option'] = array(
    'name' => 'override publication authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication promote to front page option'.
  $permissions['override publication promote to front page option'] = array(
    'name' => 'override publication promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication published option'.
  $permissions['override publication published option'] = array(
    'name' => 'override publication published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication revision option'.
  $permissions['override publication revision option'] = array(
    'name' => 'override publication revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication sticky option'.
  $permissions['override publication sticky option'] = array(
    'name' => 'override publication sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource authored by option'.
  $permissions['override resource authored by option'] = array(
    'name' => 'override resource authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource authored on option'.
  $permissions['override resource authored on option'] = array(
    'name' => 'override resource authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource promote to front page option'.
  $permissions['override resource promote to front page option'] = array(
    'name' => 'override resource promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource published option'.
  $permissions['override resource published option'] = array(
    'name' => 'override resource published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource revision option'.
  $permissions['override resource revision option'] = array(
    'name' => 'override resource revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource sticky option'.
  $permissions['override resource sticky option'] = array(
    'name' => 'override resource sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slide authored by option'.
  $permissions['override slide authored by option'] = array(
    'name' => 'override slide authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slide authored on option'.
  $permissions['override slide authored on option'] = array(
    'name' => 'override slide authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slide promote to front page option'.
  $permissions['override slide promote to front page option'] = array(
    'name' => 'override slide promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slide published option'.
  $permissions['override slide published option'] = array(
    'name' => 'override slide published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slide revision option'.
  $permissions['override slide revision option'] = array(
    'name' => 'override slide revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slide sticky option'.
  $permissions['override slide sticky option'] = array(
    'name' => 'override slide sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override system_page authored by option'.
  $permissions['override system_page authored by option'] = array(
    'name' => 'override system_page authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override system_page authored on option'.
  $permissions['override system_page authored on option'] = array(
    'name' => 'override system_page authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override system_page promote to front page option'.
  $permissions['override system_page promote to front page option'] = array(
    'name' => 'override system_page promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override system_page published option'.
  $permissions['override system_page published option'] = array(
    'name' => 'override system_page published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override system_page revision option'.
  $permissions['override system_page revision option'] = array(
    'name' => 'override system_page revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override system_page sticky option'.
  $permissions['override system_page sticky option'] = array(
    'name' => 'override system_page sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override team authored by option'.
  $permissions['override team authored by option'] = array(
    'name' => 'override team authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override team authored on option'.
  $permissions['override team authored on option'] = array(
    'name' => 'override team authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override team promote to front page option'.
  $permissions['override team promote to front page option'] = array(
    'name' => 'override team promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override team published option'.
  $permissions['override team published option'] = array(
    'name' => 'override team published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override team revision option'.
  $permissions['override team revision option'] = array(
    'name' => 'override team revision option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override team sticky option'.
  $permissions['override team sticky option'] = array(
    'name' => 'override team sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'php redirect rh_node'.
  $permissions['php redirect rh_node'] = array(
    'name' => 'php redirect rh_node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'php redirect rh_taxonomy'.
  $permissions['php redirect rh_taxonomy'] = array(
    'name' => 'php redirect rh_taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'php redirect rh_user'.
  $permissions['php redirect rh_user'] = array(
    'name' => 'php redirect rh_user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search all content'.
  $permissions['search all content'] = array(
    'name' => 'search all content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search all excluded entities'.
  $permissions['search all excluded entities'] = array(
    'name' => 'search all excluded entities',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'search country content'.
  $permissions['search country content'] = array(
    'name' => 'search country content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search event content'.
  $permissions['search event content'] = array(
    'name' => 'search event content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search footer content'.
  $permissions['search footer content'] = array(
    'name' => 'search footer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search front content'.
  $permissions['search front content'] = array(
    'name' => 'search front content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search news content'.
  $permissions['search news content'] = array(
    'name' => 'search news content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search organisation content'.
  $permissions['search organisation content'] = array(
    'name' => 'search organisation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search organisation_group content'.
  $permissions['search organisation_group content'] = array(
    'name' => 'search organisation_group content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search page content'.
  $permissions['search page content'] = array(
    'name' => 'search page content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search person content'.
  $permissions['search person content'] = array(
    'name' => 'search person content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search publication content'.
  $permissions['search publication content'] = array(
    'name' => 'search publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search resource content'.
  $permissions['search resource content'] = array(
    'name' => 'search resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search slide content'.
  $permissions['search slide content'] = array(
    'name' => 'search slide content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search system_page content'.
  $permissions['search system_page content'] = array(
    'name' => 'search system_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search team content'.
  $permissions['search team content'] = array(
    'name' => 'search team content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set block title links'.
  $permissions['set block title links'] = array(
    'name' => 'set block title links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_titlelink',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for paragraphs_item'.
  $permissions['show format selection for paragraphs_item'] = array(
    'name' => 'show format selection for paragraphs_item',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'use PHP for label patterns'.
  $permissions['use PHP for label patterns'] = array(
    'name' => 'use PHP for label patterns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'auto_entitylabel',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use manualcrop'.
  $permissions['use manualcrop'] = array(
    'name' => 'use manualcrop',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format limited_html'.
  $permissions['use text format limited_html'] = array(
    'name' => 'use text format limited_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format title'.
  $permissions['use text format title'] = array(
    'name' => 'use text format title',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished country content'.
  $permissions['view any unpublished country content'] = array(
    'name' => 'view any unpublished country content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished event content'.
  $permissions['view any unpublished event content'] = array(
    'name' => 'view any unpublished event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished footer content'.
  $permissions['view any unpublished footer content'] = array(
    'name' => 'view any unpublished footer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished front content'.
  $permissions['view any unpublished front content'] = array(
    'name' => 'view any unpublished front content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished news content'.
  $permissions['view any unpublished news content'] = array(
    'name' => 'view any unpublished news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished organisation content'.
  $permissions['view any unpublished organisation content'] = array(
    'name' => 'view any unpublished organisation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished organisation_group content'.
  $permissions['view any unpublished organisation_group content'] = array(
    'name' => 'view any unpublished organisation_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished page content'.
  $permissions['view any unpublished page content'] = array(
    'name' => 'view any unpublished page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished person content'.
  $permissions['view any unpublished person content'] = array(
    'name' => 'view any unpublished person content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished resource content'.
  $permissions['view any unpublished resource content'] = array(
    'name' => 'view any unpublished resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished slide content'.
  $permissions['view any unpublished slide content'] = array(
    'name' => 'view any unpublished slide content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished system_page content'.
  $permissions['view any unpublished system_page content'] = array(
    'name' => 'view any unpublished system_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished team content'.
  $permissions['view any unpublished team content'] = array(
    'name' => 'view any unpublished team content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
