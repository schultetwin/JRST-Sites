<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function jrst_feedback_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'jrst_sitewide';
  $context->description = 'Sitewide Context for JRSt';
  $context->tag = 'JRST';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'feedback-form' => array(
          'module' => 'feedback',
          'delta' => 'form',
          'region' => 'footer',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('JRST');
  t('Sitewide Context for JRSt');

  $export['jrst_sitewide'] = $context;
  return $export;
}
