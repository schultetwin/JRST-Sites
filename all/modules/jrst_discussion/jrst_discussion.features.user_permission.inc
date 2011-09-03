<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function jrst_discussion_user_default_permissions() {
  $permissions = array();

  // Exported permission: view field_discussion_article
  $permissions['view field_discussion_article'] = array(
    'name' => 'view field_discussion_article',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  return $permissions;
}
