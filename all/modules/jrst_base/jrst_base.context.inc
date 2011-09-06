<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function jrst_base_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'jrst_front_page';
  $context->description = '';
  $context->tag = 'JRST';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-jrst_user_interesting-block_1' => array(
          'module' => 'views',
          'delta' => 'jrst_user_interesting-block_1',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('JRST');

  $export['jrst_front_page'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'jrst_front_page_all';
  $context->description = '';
  $context->tag = 'JRST';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-jrst_hot_discuscussions-block_1' => array(
          'module' => 'views',
          'delta' => 'jrst_hot_discuscussions-block_1',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('JRST');

  $export['jrst_front_page_all'] = $context;
  return $export;
}
