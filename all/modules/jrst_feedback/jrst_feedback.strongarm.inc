<?php

/**
 * Implementation of hook_strongarm().
 */
function jrst_feedback_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'browscap_monitor';
  $strongarm->value = 1;

  $export['browscap_monitor'] = $strongarm;
  return $export;
}
