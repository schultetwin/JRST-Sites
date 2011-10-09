<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function jrst_admin_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'jrst_misc';
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
        'community manager' => 'community manager',
        'content manager' => 'content manager',
        'site admin' => 'site admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
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

  $export['jrst_misc'] = $context;
  return $export;
}
