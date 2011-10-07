<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function jrst_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: bypass conversion video
  $permissions['bypass conversion video'] = array(
    'name' => 'bypass conversion video',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: convert on submission
  $permissions['convert on submission'] = array(
    'name' => 'convert on submission',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: create podcast content
  $permissions['create podcast content'] = array(
    'name' => 'create podcast content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site admin',
    ),
  );

  // Exported permission: delete any podcast content
  $permissions['delete any podcast content'] = array(
    'name' => 'delete any podcast content',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: delete own podcast content
  $permissions['delete own podcast content'] = array(
    'name' => 'delete own podcast content',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit any podcast content
  $permissions['edit any podcast content'] = array(
    'name' => 'edit any podcast content',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_document_article
  $permissions['edit field_document_article'] = array(
    'name' => 'edit field_document_article',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_podcast_article
  $permissions['edit field_podcast_article'] = array(
    'name' => 'edit field_podcast_article',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site admin',
    ),
  );

  // Exported permission: edit field_podcast_podcast
  $permissions['edit field_podcast_podcast'] = array(
    'name' => 'edit field_podcast_podcast',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site admin',
    ),
  );

  // Exported permission: edit own podcast content
  $permissions['edit own podcast content'] = array(
    'name' => 'edit own podcast content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site admin',
    ),
  );

  // Exported permission: override player dimensions
  $permissions['override player dimensions'] = array(
    'name' => 'override player dimensions',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: use default thumb
  $permissions['use default thumb'] = array(
    'name' => 'use default thumb',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view field_document_article
  $permissions['view field_document_article'] = array(
    'name' => 'view field_document_article',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view field_podcast_article
  $permissions['view field_podcast_article'] = array(
    'name' => 'view field_podcast_article',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_podcast_podcast
  $permissions['view field_podcast_podcast'] = array(
    'name' => 'view field_podcast_podcast',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: zencoder postback
  $permissions['zencoder postback'] = array(
    'name' => 'zencoder postback',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  return $permissions;
}
