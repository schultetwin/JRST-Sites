<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function jrst_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: access devel information
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: access site-wide contact form
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: access workflow summary views
  $permissions['access workflow summary views'] = array(
    'name' => 'access workflow summary views',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: administer chart
  $permissions['administer chart'] = array(
    'name' => 'administer chart',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: administer feeds
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: administer feeds_tamper
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: administer mailhandler
  $permissions['administer mailhandler'] = array(
    'name' => 'administer mailhandler',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: administer workflow
  $permissions['administer workflow'] = array(
    'name' => 'administer workflow',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: bypass requirement that fields are unique
  $permissions['bypass requirement that fields are unique'] = array(
    'name' => 'bypass requirement that fields are unique',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: designate fields as unique
  $permissions['designate fields as unique'] = array(
    'name' => 'designate fields as unique',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: display source code
  $permissions['display source code'] = array(
    'name' => 'display source code',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_poll_body
  $permissions['edit field_poll_body'] = array(
    'name' => 'edit field_poll_body',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: execute php code
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: force password change
  $permissions['force password change'] = array(
    'name' => 'force password change',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: schedule workflow transitions
  $permissions['schedule workflow transitions'] = array(
    'name' => 'schedule workflow transitions',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: tamper mail_impor
  $permissions['tamper mail_impor'] = array(
    'name' => 'tamper mail_impor',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: unblock expired accounts
  $permissions['unblock expired accounts'] = array(
    'name' => 'unblock expired accounts',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: upload files to comments
  $permissions['upload files to comments'] = array(
    'name' => 'upload files to comments',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: use PHP for title patterns
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: use default thumbnail
  $permissions['use default thumbnail'] = array(
    'name' => 'use default thumbnail',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: use realname
  $permissions['use realname'] = array(
    'name' => 'use realname',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view field_poll_body
  $permissions['view field_poll_body'] = array(
    'name' => 'view field_poll_body',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view files uploaded to comments
  $permissions['view files uploaded to comments'] = array(
    'name' => 'view files uploaded to comments',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view imagecache group_images_featured
  $permissions['view imagecache group_images_featured'] = array(
    'name' => 'view imagecache group_images_featured',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view imagecache group_images_medium
  $permissions['view imagecache group_images_medium'] = array(
    'name' => 'view imagecache group_images_medium',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  return $permissions;
}
