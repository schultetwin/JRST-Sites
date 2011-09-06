<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function jrst_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: bypass requirement that fields are unique
  $permissions['bypass requirement that fields are unique'] = array(
    'name' => 'bypass requirement that fields are unique',
    'roles' => array(),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
  );

  // Exported permission: designate fields as unique
  $permissions['designate fields as unique'] = array(
    'name' => 'designate fields as unique',
    'roles' => array(),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(),
  );

  return $permissions;
}
