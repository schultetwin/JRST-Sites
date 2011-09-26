<?php

/**
 * @file
 * Break up text on every specified delimeter.
 */

$plugin = array(
  'form' => 'jrst_custom_plugin_special_explode_form',
  'callback' => 'jrst_custom_plugin_special_explode_callback',
  'validate' => 'jrst_custom_plugin_special_explode_validate',
  'name' => 'Special Explode',
  'multi' => 'direct',
  'category' => 'List',
);

function jrst_custom_plugin_special_explode_form($importer, $element_key, $settings) {
  $form = array();
  $form['separator'] = array(
    '#type' => 'textfield',
    '#title' => t('String separator'),
    '#default_value' => isset($settings['separator']) ? $settings['separator'] : ',',
    '#description' => t('This will break up sequenced data into an array. For example, "a, b, c" would get broken up into the array(\'a\', \'b\', \'c\').
                        A space can be represented by %s, tabs by %t, and newlines by %n.'),
  );
  $form['start_ignore'] = array(
    '#type' => 'textfield',
    '#title' => t('Start Ignore Character'),
    '#default_value' => isset($settings['start_ignore']) ? $settings['start_ignore'] : '',
    '#description' => t('After this character, we will ignore any seperators until the "end ignore" value is reached.'),
  );
  $form['end_ignore'] = array(
    '#type' => 'textfield',
    '#title' => t('End Ignore Character'),
    '#default_value' => isset($settings['end_ignore']) ? $settings['end_ignore'] : '',
    '#description' => t('After this character, we will start seperating again'),
  );
  $form['limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Limit'),
    '#default_value' => isset($settings['limit']) ? $settings['limit'] : '',
    '#description' => t('If limit is set and positive, the returned items will contain a maximum of limit with the last item containing the rest of string.
                        If limit is negative, all components except the last -limit are returned. If the limit parameter is zero, then this is treated as 1. If limit is not set, then there will be no limit on the number of items returned.'),
  );
  return $form;
}

function jrst_custom_plugin_special_explode_validate(&$settings) {
  $settings['real_separator'] = str_replace(array('%s', '%t', '%n'), array(' ', "\t", "\n"), $settings['separator']);
  $settings['limit'] = trim($settings['limit']);
  if ($settings['limit'] === '0') {
    $settings['limit'] = 1;
  }
  if (!empty($settings['limit']) && !ctype_digit($settings['limit'])) {
    form_set_error('settings][limit', t('Limit must be an integer or blank.'));
  }
  if (isset($start_ignore) && (strlen($start_ignore) != 1)) {
    form_set_error('settings][start_ignore', t('Ignore value must be single'));
  }
  if (isset($start_ignore) && (strlen($end_ignore) != 1)) {
    form_set_error('settings][end_ignore', t('Ignore value must be single'));
  }
}

function jrst_custom_plugin_special_explode_callback($source, $item_key, $element_key, &$field, $settings) {
  $out = array();
  if (!is_array($field)) {
    $field = array($field);
  }
  foreach ($field as $f) {
    if (strpos($f, $settings['real_separator']) === FALSE) {
      $out[] = $f;
    }
    elseif (empty($settings['limit'])) {
      $value = special_explode($settings['real_separator'], $f, $settings['start_ignore'], $settings['end_ignore']);
      $out = array_merge($out, $value);
    }
    else {
      $value = special_explode($settings['real_separator'], $f, $settings['start_ignore'], $settings['end_ignore'], $settings['limit']);
      $out = array_merge($out, $value);
    }
  }
  $field = $out;
}

/**
 *
 * @param string $seperator
 *   Character or string the you want to explode on
 * @param string $string
 *   String you would like to explode
 * @param char $start_ignore
 *   Character after which you would like to escape exploding. The safe zone.
 * @param char $end_ignore
 *   Character that ends the safe zone, when it will explode again on a seperator
 * @param int $limit
 *   Limit, to limit the number of explodes, like the explode function.
 * @return array
 *   Returns an array, like the explode function
 */
function special_explode($seperator, $string, $start_ignore = '\'', $end_ignore = '\'', $limit = -1) {
  $index = 0;
  $newstring = '';
  $ignore = FALSE;
  $limit_counter = 0;
  if ($limit == -1) {
    $limit_counter = -2;
  }
  if ($limit == 0) {
    $limit = 1;
  }


  while (isset($string{$index}) && ($limit_counter < $limit)) {
    $piece = $string{$index};
    if ($ignore == FALSE) {
      if ($piece == $start_ignore) {
        $ignore = TRUE;
      }
    }
    else {
      if ($piece == $end_ignore) {
        $ignore = FALSE;
      }
    }
    if ($piece == $seperator && !$ignore){
      $piece = '///<><>';
    }
    $newstring .= $piece;
    $index++;
    if ($limit != -1) {
      $limit_counter++;
    }
  }
  $array = explode('///<><>', $newstring);
  return $array;
}