<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function journal_article_jrst_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_article_basic
  $groups['article-group_article_basic'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_article_basic',
    'label' => 'Document Information',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '32',
        'label' => 'above',
        'teaser' => array(
          'format' => 'simple',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '32',
    'fields' => array(
      '0' => 'field_article_scholarone_id',
      '1' => 'field_article_previous_article',
      '2' => 'field_article_wiley_id',
      '3' => 'field_article_special_issue',
      '4' => 'field_article_type',
      '5' => 'field_article_submitted_date',
      '6' => 'field_article_preprod_author',
      '7' => 'field_article_country',
    ),
  );

  // Exported group: group_article_editor
  $groups['article-group_article_editor'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_article_editor',
    'label' => 'Editor Information',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '33',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '33',
    'fields' => array(
      '0' => 'field_article_editor',
      '1' => 'field_article_editor_projection',
      '2' => 'field_article_assoc_editor',
      '3' => 'field_article_available_date',
    ),
  );

  // Exported group: group_article_publish
  $groups['article-group_article_publish'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_article_publish',
    'label' => 'Published Information',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '35',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '35',
    'fields' => array(
      '0' => 'field_article_issue',
      '1' => 'field_article_author',
      '2' => 'field_article_coauthor',
    ),
  );

  // Exported group: group_article_status
  $groups['article-group_article_status'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_article_status',
    'label' => 'Document Status',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '34',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '34',
    'fields' => array(
      '0' => 'field_article_decision',
      '1' => 'field_article_resubmit',
      '2' => 'field_article_status',
      '3' => 'field_article_decision_date',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Document Information');
  t('Document Status');
  t('Editor Information');
  t('Published Information');

  return $groups;
}
