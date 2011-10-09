<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function jrst_feedback_user_default_permissions() {
  $permissions = array();

  // Exported permission: access feedback form
  $permissions['access feedback form'] = array(
    'name' => 'access feedback form',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site admin',
    ),
  );

  // Exported permission: view feedback messages
  $permissions['view feedback messages'] = array(
    'name' => 'view feedback messages',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  return $permissions;
}
