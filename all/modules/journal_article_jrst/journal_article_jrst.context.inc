<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function journal_article_jrst_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'journal_author';
  $context->description = 'Journal Author';
  $context->tag = 'JRST';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-related_discussions-block_1' => array(
          'module' => 'views',
          'delta' => 'related_discussions-block_1',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'views-d417dc26ef4f00703cd929d70152344e' => array(
          'module' => 'views',
          'delta' => 'd417dc26ef4f00703cd929d70152344e',
          'region' => 'sidebar_last',
          'weight' => 2,
        ),
        'views-bfa85ba52095ab45032ff9964a23dc85' => array(
          'module' => 'views',
          'delta' => 'bfa85ba52095ab45032ff9964a23dc85',
          'region' => 'sidebar_last',
          'weight' => 3,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('JRST');
  t('Journal Author');

  $export['journal_author'] = $context;
  return $export;
}
