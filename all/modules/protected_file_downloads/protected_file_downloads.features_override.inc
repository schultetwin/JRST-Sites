<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function protected_file_downloads_default_features_overrides() {
  $export = array();
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'custom_document_file';
  $features_override->description = '';
  $features_override->component_type = 'content';
  $features_override->component_id = 'document-field_file';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'filefield_private_content_disposition',
          ),
        ),
        'value' => 'attachment',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'filefield_private_downloads',
          ),
        ),
        'value' => 1,
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_Featured',
          ),
        ),
        'value' => 0,
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_Small',
          ),
        ),
        'value' => 0,
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_group_images_featured',
          ),
        ),
        'value' => 0,
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_group_images_medium',
          ),
        ),
        'value' => 0,
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_group_images_showcase',
          ),
        ),
        'value' => 0,
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
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_content_image_primary',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_content_image_secondary',
          ),
        ),
      ),
    ),
  );

  $export['custom_document_file'] = $features_override;
  return $export;
}
