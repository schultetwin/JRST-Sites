<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function journal_article_jrst_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear mail_impor feeds
  $permissions['clear mail_impor feeds'] = array(
    'name' => 'clear mail_impor feeds',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: create article content
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: create issue content
  $permissions['create issue content'] = array(
    'name' => 'create issue content',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: delete any article content
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: delete any issue content
  $permissions['delete any issue content'] = array(
    'name' => 'delete any issue content',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: delete own article content
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: delete own issue content
  $permissions['delete own issue content'] = array(
    'name' => 'delete own issue content',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit any article content
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit any issue content
  $permissions['edit any issue content'] = array(
    'name' => 'edit any issue content',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_assoc_editor
  $permissions['edit field_article_assoc_editor'] = array(
    'name' => 'edit field_article_assoc_editor',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_author
  $permissions['edit field_article_author'] = array(
    'name' => 'edit field_article_author',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_available_date
  $permissions['edit field_article_available_date'] = array(
    'name' => 'edit field_article_available_date',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_coauthor
  $permissions['edit field_article_coauthor'] = array(
    'name' => 'edit field_article_coauthor',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_country
  $permissions['edit field_article_country'] = array(
    'name' => 'edit field_article_country',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_decision
  $permissions['edit field_article_decision'] = array(
    'name' => 'edit field_article_decision',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_decision_date
  $permissions['edit field_article_decision_date'] = array(
    'name' => 'edit field_article_decision_date',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_editor
  $permissions['edit field_article_editor'] = array(
    'name' => 'edit field_article_editor',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_editor_projection
  $permissions['edit field_article_editor_projection'] = array(
    'name' => 'edit field_article_editor_projection',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_issue
  $permissions['edit field_article_issue'] = array(
    'name' => 'edit field_article_issue',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_preprod_author
  $permissions['edit field_article_preprod_author'] = array(
    'name' => 'edit field_article_preprod_author',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_previous_article
  $permissions['edit field_article_previous_article'] = array(
    'name' => 'edit field_article_previous_article',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_resubmit
  $permissions['edit field_article_resubmit'] = array(
    'name' => 'edit field_article_resubmit',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_scholarone_id
  $permissions['edit field_article_scholarone_id'] = array(
    'name' => 'edit field_article_scholarone_id',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_special_issue
  $permissions['edit field_article_special_issue'] = array(
    'name' => 'edit field_article_special_issue',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_status
  $permissions['edit field_article_status'] = array(
    'name' => 'edit field_article_status',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_submitted_date
  $permissions['edit field_article_submitted_date'] = array(
    'name' => 'edit field_article_submitted_date',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_type
  $permissions['edit field_article_type'] = array(
    'name' => 'edit field_article_type',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_article_wiley_id
  $permissions['edit field_article_wiley_id'] = array(
    'name' => 'edit field_article_wiley_id',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_discussion_article
  $permissions['edit field_discussion_article'] = array(
    'name' => 'edit field_discussion_article',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit field_issue_cover
  $permissions['edit field_issue_cover'] = array(
    'name' => 'edit field_issue_cover',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_issue_issue
  $permissions['edit field_issue_issue'] = array(
    'name' => 'edit field_issue_issue',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_issue_pub_date
  $permissions['edit field_issue_pub_date'] = array(
    'name' => 'edit field_issue_pub_date',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_issue_special
  $permissions['edit field_issue_special'] = array(
    'name' => 'edit field_issue_special',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit field_issue_volume
  $permissions['edit field_issue_volume'] = array(
    'name' => 'edit field_issue_volume',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit own article content
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: edit own issue content
  $permissions['edit own issue content'] = array(
    'name' => 'edit own issue content',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: import mail_impor feeds
  $permissions['import mail_impor feeds'] = array(
    'name' => 'import mail_impor feeds',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view comments for: article
  $permissions['view comments for: article'] = array(
    'name' => 'view comments for: article',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site admin',
    ),
  );

  // Exported permission: view field_article_assoc_editor
  $permissions['view field_article_assoc_editor'] = array(
    'name' => 'view field_article_assoc_editor',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'reviewer',
      '3' => 'site admin',
    ),
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

  // Exported permission: view field_article_available_date
  $permissions['view field_article_available_date'] = array(
    'name' => 'view field_article_available_date',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_coauthor
  $permissions['view field_article_coauthor'] = array(
    'name' => 'view field_article_coauthor',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_country
  $permissions['view field_article_country'] = array(
    'name' => 'view field_article_country',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_decision
  $permissions['view field_article_decision'] = array(
    'name' => 'view field_article_decision',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_decision_date
  $permissions['view field_article_decision_date'] = array(
    'name' => 'view field_article_decision_date',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_editor
  $permissions['view field_article_editor'] = array(
    'name' => 'view field_article_editor',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_editor_projection
  $permissions['view field_article_editor_projection'] = array(
    'name' => 'view field_article_editor_projection',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
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

  // Exported permission: view field_article_preprod_author
  $permissions['view field_article_preprod_author'] = array(
    'name' => 'view field_article_preprod_author',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_previous_article
  $permissions['view field_article_previous_article'] = array(
    'name' => 'view field_article_previous_article',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_resubmit
  $permissions['view field_article_resubmit'] = array(
    'name' => 'view field_article_resubmit',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view field_article_scholarone_id
  $permissions['view field_article_scholarone_id'] = array(
    'name' => 'view field_article_scholarone_id',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_special_issue
  $permissions['view field_article_special_issue'] = array(
    'name' => 'view field_article_special_issue',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_status
  $permissions['view field_article_status'] = array(
    'name' => 'view field_article_status',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_submitted_date
  $permissions['view field_article_submitted_date'] = array(
    'name' => 'view field_article_submitted_date',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_type
  $permissions['view field_article_type'] = array(
    'name' => 'view field_article_type',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_article_wiley_id
  $permissions['view field_article_wiley_id'] = array(
    'name' => 'view field_article_wiley_id',
    'roles' => array(
      '0' => 'associate editor',
      '1' => 'editor',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_issue_cover
  $permissions['view field_issue_cover'] = array(
    'name' => 'view field_issue_cover',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_issue_issue
  $permissions['view field_issue_issue'] = array(
    'name' => 'view field_issue_issue',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_issue_pub_date
  $permissions['view field_issue_pub_date'] = array(
    'name' => 'view field_issue_pub_date',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  // Exported permission: view field_issue_special
  $permissions['view field_issue_special'] = array(
    'name' => 'view field_issue_special',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view field_issue_volume
  $permissions['view field_issue_volume'] = array(
    'name' => 'view field_issue_volume',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site admin',
    ),
  );

  return $permissions;
}
