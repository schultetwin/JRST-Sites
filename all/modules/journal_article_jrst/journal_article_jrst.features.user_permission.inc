<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function journal_article_jrst_user_default_permissions() {
  $permissions = array();

  // Exported permission: create article content
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(),
  );

  // Exported permission: create issue content
  $permissions['create issue content'] = array(
    'name' => 'create issue content',
    'roles' => array(),
  );

  // Exported permission: delete any article content
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(),
  );

  // Exported permission: delete any issue content
  $permissions['delete any issue content'] = array(
    'name' => 'delete any issue content',
    'roles' => array(),
  );

  // Exported permission: delete own article content
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(),
  );

  // Exported permission: delete own issue content
  $permissions['delete own issue content'] = array(
    'name' => 'delete own issue content',
    'roles' => array(),
  );

  // Exported permission: edit any article content
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(),
  );

  // Exported permission: edit any issue content
  $permissions['edit any issue content'] = array(
    'name' => 'edit any issue content',
    'roles' => array(),
  );

  // Exported permission: edit field_article_author
  $permissions['edit field_article_author'] = array(
    'name' => 'edit field_article_author',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_documents
  $permissions['edit field_article_documents'] = array(
    'name' => 'edit field_article_documents',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_issue
  $permissions['edit field_article_issue'] = array(
    'name' => 'edit field_article_issue',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_wiley_link
  $permissions['edit field_article_wiley_link'] = array(
    'name' => 'edit field_article_wiley_link',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_contact_author
  $permissions['edit field_contact_author'] = array(
    'name' => 'edit field_contact_author',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_issue_cover
  $permissions['edit field_issue_cover'] = array(
    'name' => 'edit field_issue_cover',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_issue_issue
  $permissions['edit field_issue_issue'] = array(
    'name' => 'edit field_issue_issue',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_issue_pub_date
  $permissions['edit field_issue_pub_date'] = array(
    'name' => 'edit field_issue_pub_date',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_issue_volume
  $permissions['edit field_issue_volume'] = array(
    'name' => 'edit field_issue_volume',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit own article content
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(),
  );

  // Exported permission: edit own issue content
  $permissions['edit own issue content'] = array(
    'name' => 'edit own issue content',
    'roles' => array(),
  );

  // Exported permission: view field_article_author
  $permissions['view field_article_author'] = array(
    'name' => 'view field_article_author',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_documents
  $permissions['view field_article_documents'] = array(
    'name' => 'view field_article_documents',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_issue
  $permissions['view field_article_issue'] = array(
    'name' => 'view field_article_issue',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_wiley_link
  $permissions['view field_article_wiley_link'] = array(
    'name' => 'view field_article_wiley_link',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_contact_author
  $permissions['view field_contact_author'] = array(
    'name' => 'view field_contact_author',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_issue_cover
  $permissions['view field_issue_cover'] = array(
    'name' => 'view field_issue_cover',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view field_issue_issue
  $permissions['view field_issue_issue'] = array(
    'name' => 'view field_issue_issue',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view field_issue_pub_date
  $permissions['view field_issue_pub_date'] = array(
    'name' => 'view field_issue_pub_date',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view field_issue_volume
  $permissions['view field_issue_volume'] = array(
    'name' => 'view field_issue_volume',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  return $permissions;
}
