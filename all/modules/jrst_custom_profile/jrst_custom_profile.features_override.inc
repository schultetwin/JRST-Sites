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
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'profile_about_me_override';
  $features_override->description = 'Override block';
  $features_override->component_type = 'context';
  $features_override->component_id = 'profile-about-me';
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
            'key' => 'views-jrst_user_terms_profile-block_1',
          ),
        ),
        'value' => array(
          'module' => 'views',
          'delta' => 'jrst_user_terms_profile-block_1',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
      ),
    ),
    'deletions' => array(),
  );

  $export['profile_about_me_override'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'profile_about_other_block';
  $features_override->description = 'Block Location Override';
  $features_override->component_type = 'context';
  $features_override->component_id = 'profile-about-other';
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
            'key' => 'views-jrst_user_terms_profile-block_1',
          ),
        ),
        'value' => array(
          'module' => 'views',
          'delta' => 'jrst_user_terms_profile-block_1',
          'region' => 'sidebar_first',
          'weight' => 2,
        ),
      ),
    ),
    'deletions' => array(),
  );

  $export['profile_about_other_block'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'profile_me_block_override';
  $features_override->description = 'Override block for Profile Me';
  $features_override->component_type = 'context';
  $features_override->component_id = 'profile-me';
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
            'key' => 'views-profile_following-block_1',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => 1,
      ),
      1 => array(
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
            'key' => 'views-profile_user_groups-block_1',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => 2,
      ),
      2 => array(
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
            'key' => 'views-jrst_user_terms_profile-block_1',
          ),
        ),
        'value' => array(
          'module' => 'views',
          'delta' => 'jrst_user_terms_profile-block_1',
          'region' => 'sidebar_last',
          'weight' => 3,
        ),
      ),
    ),
    'deletions' => array(),
  );

  $export['profile_me_block_override'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'profile_other_context';
  $features_override->description = 'Block Override';
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
            'key' => 'views-jrst_user_terms_profile-block_1',
          ),
        ),
        'value' => array(
          'module' => 'views',
          'delta' => 'jrst_user_terms_profile-block_1',
          'region' => 'sidebar_last',
          'weight' => 2,
        ),
      ),
      1 => array(
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
            'key' => 'views-profile_user_groups-block_2',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => 3,
      ),
      2 => array(
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
            'key' => 'views-profile_following-block_1',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => 4,
      ),
    ),
    'deletions' => array(
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
      ),
    ),
  );

  $export['profile_other_context'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'user_terms_override';
  $features_override->description = 'User Terms Override 2';
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
            'key' => 3,
          ),
        ),
        'value' => '3',
      ),
      1 => array(
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
      2 => array(
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
      3 => array(
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
    ),
    'deletions' => array(),
  );

  $export['user_terms_override'] = $features_override;
  return $export;
}
