<?php

/**
 * Implementation of hook_content_default_fields().
 */
function jrst_media_content_default_fields() {
  $fields = array();

  // Exported field: field_document_article
  $fields['document-field_document_article'] = array(
    'field_name' => 'field_document_article',
    'type_name' => 'document',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
    'advanced_view' => 'article_podcast_reference',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 0,
        'title' => 'Attach Document',
        'hover_title' => '',
        'destination' => 'default',
      ),
      'fallback' => 'select',
      'edit_fallback' => 0,
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
      'label' => 'Article',
      'weight' => '-4',
      'description' => 'If you would like to attach files to your article, you may do that here.',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Article');

  return $fields;
}
