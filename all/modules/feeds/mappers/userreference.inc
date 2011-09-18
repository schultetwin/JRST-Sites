<?php
// $Id$

/**
 * @file
 * Implementation of Feeds API for mapping userreference.module fields (CCK).
 */

/**
 * Implementation of hook_feeds_node_processor_targets_alter().
 *
 * @see FeedsNodeProcessor::getMappingTargets()
 */
function userreference_feeds_node_processor_targets_alter(&$targets, $content_type) {
  $info = content_types($content_type);
  if (isset($info['fields']) && count($info['fields'])) {
    foreach ($info['fields'] as $field_name => $field) {
      if (in_array($field['type'], array('userreference'))) {
        $field_label = isset($field['widget']['label']) ? $field['widget']['label'] : $field_name;
        $targets[$field_name . ':username'] = array(
          'name' => $field_label . ' (User by username)',
          'callback' => 'userreference_feeds_set_target',
          'description' => t('The CCK user reference !name of the user matched by username.', array('!name' => $field_label)),
          'real_target' => $field_name,
        );
        $targets[$field_name . ':uid'] = array(
          'name' => $field_label . ' (User by ID)',
          'callback' => 'userreference_feeds_set_target',
          'description' => t('The CCK user reference !name of the user matched by user ID.', array('!name' => $field_label)),
          'real_target' => $field_name,
        );
      }
    }
  }
}

/**
 * Implementation of hook_feeds_set_target().
 *
 * The actual field mapping happens in this callback function.
 *
 * @param obj $target_user
 *   The user to to be created or updated.
 * @param str $target_element
 *   The name of the field on the user to be mapped.
 * @param array $value
 *   The value(s) of the source feed item element to be mapped.
 */
function userreference_feeds_set_target($target_user, $target_element, $value) {
  // Determine on which key to match the node reference.
  list($target_element, $match_key) = split(':', $target_element);

  // Load field definition.
  $field_info = content_fields($target_element, $target_user->type);

  // Store all values for this target element across different sources.
  if (empty($target_user->feeds_userreference_map->{$target_element}->values)) {
    $target_user->feeds_userreference_map->{$target_element}->values = array();
  }
  if (empty($target_user->feeds_userreference_map->{$target_element}->uids)) {
    $target_user->feeds_userreference_map->{$target_element}->uids = array();
  }

  // Allow for multiple-value fields.
  if (!is_array($value)) {
    $value = array($value);
  }

  // Match values against nodes and add to field.
  foreach ($value as $v) {
    $uid = NULL;

    switch ($match_key) {
      case 'username':
        // Validate username.
        if ((is_string($v) && $v !== '') || is_numeric($v)) {
          // Lookup potential exact matches for the value (limit to one result).
          $matches = _userreference_potential_references($field_info, $v, 'equals', array(), 1);
          // Use the first element of the potential matches.
          $uid = key($matches);
        }
        break;

      case 'uid':
        $uid = $v;
        break;
    }

    if (isset($uid)) {
      // Validate nid.
      if (is_numeric($uid) && $uid > 0 && !isset($target_user->feeds_userreference_map->{$target_element}->uids[$uid])) {
        // Store so reference isn't added twice.
        $target_user->feeds_userreference_map->{$target_element}->uids[$uid] = TRUE;
        // Add userreference to field.
        $target_user->feeds_userreference_map->{$target_element}->values[] = array('uid' => $uid);
      }
    }
  }

  $target_user->{$target_element} = $target_user->feeds_userreference_map->{$target_element}->values;
}