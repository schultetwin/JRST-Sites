<?php

/**
 * Implementation of hook_content_default_fields().
 */
function jrst_author_content_default_fields() {
  $fields = array();

  // Exported field: field_podcast_article
  $fields['podcast-field_podcast_article'] = array(
    'field_name' => 'field_podcast_article',
    'type_name' => 'podcast',
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
    'required' => '1',
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
        'title' => 'Upload Podcast',
        'hover_title' => '',
        'destination' => 'node',
      ),
      'fallback' => 'select',
      'edit_fallback' => 0,
      'roles' => array(
        '6' => 6,
        '7' => 7,
        '5' => 5,
        '1' => 0,
        '2' => 0,
        '3' => 0,
        '4' => 0,
        '8' => 0,
      ),
      'label' => 'Article',
      'weight' => '-4',
      'description' => 'Select article to reference',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_podcast_podcast
  $fields['podcast-field_podcast_podcast'] = array(
    'field_name' => 'field_podcast_podcast',
    'type_name' => 'podcast',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'video_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'video_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'video_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'video_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'video_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'video_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'filefield_private_downloads' => '',
    'filefield_private_content_disposition' => '',
    'widget' => array(
      'file_extensions' => 'mp4 mpeg avi mpg wmv flv mov',
      'file_path' => 'videos/podcast/[user]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'default_video_thumb' => NULL,
      'default_dimensions' => '1024x768',
      'default_player_dimensions' => '640x480',
      'autoconversion' => 1,
      'autothumbnail' => 'auto',
      'label' => 'Podcast',
      'weight' => '-3',
      'description' => 'Upload your podcast in any of the permitted formats (listed below)',
      'type' => 'uploadfield_widget',
      'module' => 'uploadfield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Article');
  t('Podcast');

  return $fields;
}
