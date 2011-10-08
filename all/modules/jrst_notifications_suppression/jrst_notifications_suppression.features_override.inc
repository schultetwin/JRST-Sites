<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function jrst_notifications_suppression_default_features_overrides() {
  $export = array();
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'notifications_content_type_override';
  $features_override->description = 'Override for Notifications';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'notifications_content_type';
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
            'key' => 'grouptype',
          ),
        ),
        'value' => 0,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'thread',
          ),
        ),
        'value' => 0,
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'nodetype',
          ),
        ),
        'value' => 0,
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'author',
          ),
        ),
        'value' => 0,
      ),
    ),
    'deletions' => array(),
  );

  $export['notifications_content_type_override'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'notifications_ui_account_options_override';
  $features_override->description = 'More Notifications UI overrides';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'notifications_ui_account_options';
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
            'key' => 'links',
          ),
        ),
        'value' => 0,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
        ),
        'value' => 0,
      ),
    ),
    'deletions' => array(),
  );

  $export['notifications_ui_account_options_override'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'notifications_ui_links_override';
  $features_override->description = 'Disables most of the notifcations_ui';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'notifications_ui_per_type';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
        ),
        'value' => '1',
      ),
    ),
    'deletions' => array(),
  );

  $export['notifications_ui_links_override'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'notifications_ui_node_override';
  $features_override->description = 'More Notifications UI overrides 2';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'notifications_ui_node';
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
            'key' => 'form',
          ),
        ),
        'value' => 0,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'comment',
          ),
        ),
        'value' => 0,
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'links',
          ),
        ),
        'value' => 0,
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'teaserlinks',
          ),
        ),
        'value' => 0,
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
        ),
        'value' => 0,
      ),
    ),
    'deletions' => array(),
  );

  $export['notifications_ui_node_override'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'notifications_ui_type_override';
  $features_override->description = 'Notifications ui Override';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'notifications_ui_types';
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
            'key' => 'author',
          ),
        ),
        'value' => 0,
      ),
    ),
    'deletions' => array(),
  );

  $export['notifications_ui_type_override'] = $features_override;
  return $export;
}
