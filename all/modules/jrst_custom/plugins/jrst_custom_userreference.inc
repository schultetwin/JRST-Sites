<?php

$plugin = array(
  'form' => 'jrst_custom_plugin_userreference_form',
  'callback' => 'jrst_custom_plugin_userreference_callback',
  'name' => 'JRST Custom User Reference',
  'multi' => 'loop',
  'category' => 'Other',
);

function jrst_custom_plugin_userreference_form($importer, $element_key, $settings) {
  $form = array();
  $form['filter_roles'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Include only the following roles'),
    '#description' => t('This field will limit the user search to the following roles'),
    '#options' => user_roles(TRUE),
    '#default_value' => isset($settings['filter_roles']) ? $settings['filter_roles'] : array(),
  );
  $result = db_query('SELECT * FROM {profile_fields}');
  while ($row = db_fetch_object($result)) {
    $options[$row->fid] = $row->title;
  }
  $form['match_fields'] = array(
    '#type' => 'select',
    '#title' => t('Profile Fields to Search'),
    '#description' => t('Select only the profile field you would like to search'),
    '#options' => $options,
    '#required' => TRUE,
    '#default_value' => isset($settings['match_fields']) ? $settings['match_fields'] : '',
  );

  return $form;
}

function jrst_custom_plugin_userreference_callback($result, $item_key, $element_key, &$field, $settings) {
  $fields = explode(' ', $field);
  foreach ($fields as $f) {
    $sql = "SELECT u.uid FROM {users} u LEFT JOIN {profile_values} p ON u.uid = p.uid LEFT JOIN {users_roles} r ON r.uid = u.uid WHERE p.fid = %d AND p.value LIKE '%s' AND u.uid IN (SELECT r.uid FROM {users_roles} r WHERE r.rid IN (%s))";
    $results = db_query($sql, $settings['match_fields'], $f, implode(',', $settings['filter_roles']));
    $f = db_fetch_object($results)->uid;
    if (!is_numeric($f) || $f == 0) {
      $field = null;
    }
    else {
      $field = $f;
      return;
    }
  }
}