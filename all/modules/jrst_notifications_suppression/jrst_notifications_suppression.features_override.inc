<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function jrst_notifications_suppression_default_features_overrides() {
  $export = array();
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
  return $export;
}
