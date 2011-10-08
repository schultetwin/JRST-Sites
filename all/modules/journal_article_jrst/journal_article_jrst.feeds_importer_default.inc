<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function journal_article_jrst_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mail_impor';
  $feeds_importer->config = array(
    'name' => 'Mail Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'MailhandlerFetcher',
      'config' => array(
        'filter' => 'nodes',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'MailhandlerParser',
      'config' => array(
        'if_auth_fails' => 'remove',
        'default_commands' => 'status: 1
document_status: Editorial Review
special_issue_flag: 0
resubmit: 0',
        'available_commands' => 'status
document_id
wiley_manuscript_type
document_title
author_name
author_country
date_submitted
document_status
editor
assoc_editor
special_issue_flag
special_issue_name
conceptual_area
methodology
grade_level
science_content_area
number_pages
wiley_number_tables
editor_rec
resubmit
prev_id
decision
decision_date',
        'command_plugin' => array(
          'MailhandlerCommandsHeaders' => 'MailhandlerCommandsHeaders',
          'MailhandlerCommandsJRST' => 'MailhandlerCommandsJRST',
          'MailhandlerCommandsFiles' => 'MailhandlerCommandsFiles',
        ),
        'authenticate_plugin' => 'MailhandlerAuthenticateDefault',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'article',
        'input_format' => '0',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'origbody',
            'target' => 'body',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'document_id',
            'target' => 'field_article_scholarone_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'document_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'status',
            'target' => 'status',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'wiley_manuscript_type',
            'target' => 'field_article_type',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'document_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'author_name',
            'target' => 'field_article_preprod_author',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'author_country',
            'target' => 'field_article_country',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'date_submitted',
            'target' => 'field_article_submitted_date:start',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'document_status',
            'target' => 'field_article_status',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'special_issue_flag',
            'target' => 'field_article_special_issue',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'conceptual_area',
            'target' => 'taxonomy:features_concept_area',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'methodology',
            'target' => 'taxonomy:features_methodology',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'grade_level',
            'target' => 'taxonomy:features_grade_level',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'science_content_area',
            'target' => 'taxonomy:features_science_topic',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'editor_rec',
            'target' => 'field_article_editor_projection',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'resubmit',
            'target' => 'field_article_resubmit',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'prev_id',
            'target' => 'field_article_previous_article:guid',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'decision',
            'target' => 'field_article_decision',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'decision_date',
            'target' => 'field_article_decision_date:start',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'editor',
            'target' => 'field_article_editor:uid',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'assoc_editor',
            'target' => 'field_article_assoc_editor:uid',
            'unique' => FALSE,
          ),
        ),
        'author' => '1',
        'authorize' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['mail_impor'] = $feeds_importer;
  return $export;
}
