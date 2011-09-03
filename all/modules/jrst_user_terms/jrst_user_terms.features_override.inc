<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function jrst_user_terms_default_features_overrides() {
  $export = array();
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'jrst_user_terms';
  $features_override->description = 'User Terms Override';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'user_terms_vocabs';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 4,
          ),
        ),
        'value' => '4',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 5,
          ),
        ),
        'value' => '5',
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 6,
          ),
        ),
        'value' => '6',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 7,
          ),
        ),
        'value' => '7',
      ),
    ),
    'deletions' => array(),
  );

  $export['jrst_user_terms'] = $features_override;
  return $export;
}
