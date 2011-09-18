<?php

/**
 * Implementation of hook_content_default_fields().
 */
function jrst_discussion_content_default_fields() {
  $fields = array();

  // Exported field: field_discussion_article
  $fields['discussion-field_discussion_article'] = array(
    'field_name' => 'field_discussion_article',
    'type_name' => 'discussion',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'article' => 'article',
      'blog' => 0,
      'discussion' => 0,
      'document' => 0,
      'event' => 0,
      'group' => 0,
      'issue' => 0,
      'notice' => 0,
      'page' => 0,
      'podcast' => 0,
      'poll' => 0,
      'wiki' => 0,
      'field' => 0,
      'node_type' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'roles' => array(
        '1' => 0,
        '2' => 0,
        '6' => 0,
        '3' => 0,
        '4' => 0,
        '7' => 0,
        '8' => 0,
        '5' => 0,
      ),
      'node_link' => array(
        'destination' => 'default',
        'full' => 1,
        'hover_title' => '',
        'teaser' => 0,
        'title' => 'Create Discussion',
      ),
      'fallback' => 'select',
      'edit_fallback' => 0,
      'label' => 'Article',
      'weight' => '-4',
      'description' => 'Select an article to create a discussion for. (Note, normally, no end user should see this.)',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Article');

  return $fields;
}
