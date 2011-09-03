<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function jrst_author_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function jrst_author_node_info() {
  $items = array(
    'podcast' => array(
      'name' => t('Podcast'),
      'module' => 'features',
      'description' => t('Podcast to allow authors to upload to attach to their articles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function jrst_author_views_api() {
  return array(
    'api' => '2',
  );
}
