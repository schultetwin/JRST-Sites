<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function jrst_custom_profile_default_features_overrides() {
  $export = array();
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'jrst_profile_customizations';
  $features_override->description = 'JRST Customizations to Commons Profile';
  $features_override->component_type = 'context';
  $features_override->component_id = 'profile-other';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'views-jrst_user_terms-block_1',
          ),
        ),
        'value' => array(
          'module' => 'views',
          'delta' => 'jrst_user_terms-block_1',
          'region' => 'sidebar_first',
          'weight' => 2,
        ),
      ),
    ),
    'deletions' => array(),
  );

  $export['jrst_profile_customizations'] = $features_override;
  return $export;
}
