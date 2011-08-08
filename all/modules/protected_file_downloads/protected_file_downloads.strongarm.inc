<?php

/**
 * Implementation of hook_strongarm().
 */
function protected_file_downloads_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filefield_private_directory_path';
  $strongarm->value = '/home/jrsteds/jrst_private_files';

  $export['filefield_private_directory_path'] = $strongarm;
  return $export;
}
