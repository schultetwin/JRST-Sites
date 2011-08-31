<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function jrst_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: bypass conversion video
  $permissions['bypass conversion video'] = array(
    'name' => 'bypass conversion video',
    'roles' => array(),
  );

  // Exported permission: convert on submission
  $permissions['convert on submission'] = array(
    'name' => 'convert on submission',
    'roles' => array(),
  );

  // Exported permission: override player dimensions
  $permissions['override player dimensions'] = array(
    'name' => 'override player dimensions',
    'roles' => array(),
  );

  // Exported permission: use default thumb
  $permissions['use default thumb'] = array(
    'name' => 'use default thumb',
    'roles' => array(),
  );

  // Exported permission: zencoder postback
  $permissions['zencoder postback'] = array(
    'name' => 'zencoder postback',
    'roles' => array(),
  );

  return $permissions;
}
