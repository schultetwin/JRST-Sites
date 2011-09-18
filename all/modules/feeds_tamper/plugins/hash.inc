<?php

/**
 * @file
 * Calculate a hash of a feed item.
 */

$plugin = array(
  'form' => 'feeds_tamper_hash_form',
  'callback' => 'feeds_tamper_hash_callback',
  'name' => 'Calculate hash',
  'multi' => 'direct',
  'category' => 'Other',
);

function feeds_tamper_hash_form($importer, $element_key, $settings) {
  return array(
    'help' => array(
      '#value' => t('Makes the value a hash of the values being imported. This allows for importing content that does not have a unique ID.')
    ),
  );
}

function feeds_tamper_hash_callback($source, $item_key, $element_key, &$field, $settings) {
  // Set to null so that the initial value of this field won't affect the hash.
  $field = NULL;
  $field = md5(serialize($source->batch->items[$item_key]));
}
