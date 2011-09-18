<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function jrst_base_default_features_overrides() {
  $export = array();
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'discussion_change_article_reference';
  $features_override->description = 'Article Reference from Discussions';
  $features_override->component_type = '0';
  $features_override->component_id = 'discussion-field_discussion_article';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default_value_php',
          ),
        ),
        'value' => NULL,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'edit_fallback',
          ),
        ),
        'value' => 0,
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'fallback',
          ),
        ),
        'value' => 'select',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'module',
          ),
        ),
        'value' => 'nodereference_url',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'node_link',
          ),
        ),
        'value' => array(
          'destination' => 'default',
          'full' => 1,
          'hover_title' => '',
          'teaser' => 0,
          'title' => 'Create Discussion',
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'type',
          ),
        ),
        'value' => 'nodereference_url',
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default_value_php',
          ),
        ),
      ),
    ),
  );

  $export['discussion_change_article_reference'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'related_discussions_view_not_sure';
  $features_override->description = '';
  $features_override->component_type = 'views';
  $features_override->component_id = 'related_discussions';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'footer',
          ),
        ),
        'value' => '<?php
global $user;
if (isset($user->uid)) {
if (arg(0) == \'node\' && is_numeric(arg(1))) {
$node = node_load(arg(1));
}
print \'<a href="/node/add/discussion/\' . $node->nid . \'">Create New Discussion</a>\';
}
?>',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'footer',
          ),
        ),
        'value' => '<?php
global $user;
if (isset($user->uid)) {
if (arg(0) == \'node\' && is_numeric(arg(1))) {
$node = node_load(arg(1));
}
print \'<a href="/node/add/discussion/\' . $node->nid . \'">Create New Discussion</a>\';
}
?>',
      ),
    ),
    'deletions' => array(),
  );

  $export['related_discussions_view_not_sure'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'theme_variables';
  $features_override->description = 'Theme Variables';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'theme_settings';
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
            'key' => 'toggle_node_user_picture',
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
            'key' => 'toggle_node_info_article',
          ),
        ),
        'value' => 1,
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'toggle_node_info_issue',
          ),
        ),
        'value' => 1,
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'toggle_node_info_podcast',
          ),
        ),
        'value' => 1,
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'toggle_node_info_field',
          ),
        ),
        'value' => 1,
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'toggle_node_info_node_type',
          ),
        ),
        'value' => 1,
      ),
    ),
    'deletions' => array(),
  );

  $export['theme_variables'] = $features_override;
  return $export;
}
