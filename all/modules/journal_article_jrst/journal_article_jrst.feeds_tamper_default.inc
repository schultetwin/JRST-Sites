<?php

/**
 * Implementation of hook_feeds_tamper_default().
 */
function journal_article_jrst_feeds_tamper_default() {
  $export = array();
  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mail_impor-assoc_editor-jrst_custom_user_reference';
  $feeds_tamper->importer = 'mail_impor';
  $feeds_tamper->source = 'assoc_editor';
  $feeds_tamper->plugin_id = 'jrst_custom_userreference';
  $feeds_tamper->settings = array(
    'filter_roles' => array(
      6 => 6,
      2 => 0,
      3 => 0,
      4 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
    ),
    'match_fields' => '2',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'JRST Custom User Reference';

  $export['mail_impor-assoc_editor-jrst_custom_user_reference'] = $feeds_tamper;
  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mail_impor-conceptual_area-special_explode';
  $feeds_tamper->importer = 'mail_impor';
  $feeds_tamper->source = 'conceptual_area';
  $feeds_tamper->plugin_id = 'special_explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'start_ignore' => '(',
    'end_ignore' => ')',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Special Explode';

  $export['mail_impor-conceptual_area-special_explode'] = $feeds_tamper;
  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mail_impor-conceptual_area-trim';
  $feeds_tamper->importer = 'mail_impor';
  $feeds_tamper->source = 'conceptual_area';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';

  $export['mail_impor-conceptual_area-trim'] = $feeds_tamper;
  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mail_impor-editor-jrst_custom_user_reference';
  $feeds_tamper->importer = 'mail_impor';
  $feeds_tamper->source = 'editor';
  $feeds_tamper->plugin_id = 'jrst_custom_userreference';
  $feeds_tamper->settings = array(
    'filter_roles' => array(
      7 => 7,
      2 => 0,
      6 => 0,
      3 => 0,
      4 => 0,
      8 => 0,
      5 => 0,
    ),
    'match_fields' => '2',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'JRST Custom User Reference';

  $export['mail_impor-editor-jrst_custom_user_reference'] = $feeds_tamper;
  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mail_impor-grade_level-special_explode';
  $feeds_tamper->importer = 'mail_impor';
  $feeds_tamper->source = 'grade_level';
  $feeds_tamper->plugin_id = 'special_explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'start_ignore' => '(',
    'end_ignore' => ')',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Special Explode';

  $export['mail_impor-grade_level-special_explode'] = $feeds_tamper;
  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mail_impor-grade_level-trim';
  $feeds_tamper->importer = 'mail_impor';
  $feeds_tamper->source = 'grade_level';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';

  $export['mail_impor-grade_level-trim'] = $feeds_tamper;
  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mail_impor-methodology-special_explode';
  $feeds_tamper->importer = 'mail_impor';
  $feeds_tamper->source = 'methodology';
  $feeds_tamper->plugin_id = 'special_explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'start_ignore' => '(',
    'end_ignore' => ')',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Special Explode';

  $export['mail_impor-methodology-special_explode'] = $feeds_tamper;
  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mail_impor-methodology-trim';
  $feeds_tamper->importer = 'mail_impor';
  $feeds_tamper->source = 'methodology';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';

  $export['mail_impor-methodology-trim'] = $feeds_tamper;
  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mail_impor-science_content_area-seperate_by_commas';
  $feeds_tamper->importer = 'mail_impor';
  $feeds_tamper->source = 'science_content_area';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Separate by commas';

  $export['mail_impor-science_content_area-seperate_by_commas'] = $feeds_tamper;
  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mail_impor-science_content_area-trim';
  $feeds_tamper->importer = 'mail_impor';
  $feeds_tamper->source = 'science_content_area';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';

  $export['mail_impor-science_content_area-trim'] = $feeds_tamper;
  return $export;
}
