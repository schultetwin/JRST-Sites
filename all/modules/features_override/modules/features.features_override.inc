<?php

/**
 * Implementation of hook_filter_default_formats_alter().
 */
function features_override_filter_default_formats_alter(&$items) {
  features_override_features_default_alter($items, "filter");
}

/**
 * Implementation of hook_menu_default_menu_custom_alter().
 */
function features_override_menu_default_menu_custom_alter(&$items) {
  features_override_features_default_alter($items, "menu_custom");
}

/**
 * Implementation of hook_menu_default_menu_links_alter().
 */
function features_override_menu_default_menu_links_alter(&$items) {
  features_override_features_default_alter($items, "menu_links");
}

/**
 * Implementation of hook_menu_default_items_alter().
 */
function features_override_menu_default_items_alter(&$items) {
  features_override_features_default_alter($items, "menu");
}

/**
 * Implementation of hook_taxonomy_default_vocabularies_alter().
 */
function features_override_taxonomy_default_vocabularies_alter(&$items) {
  features_override_features_default_alter($items, "taxonomy");
}

/**
 * Implementation of hook_user_default_roles_alter().
 */
function features_override_user_default_roles_alter(&$items) {
  features_override_features_default_alter($items, "user_role");
}

/**
 * Implementation of hook_user_default_permissions_alter().
 */
function features_override_user_default_permissions_alter(&$items) {
  features_override_features_default_alter($items, "user_permission");
}

/**
 * Implementation of hook_content_default_fields_alter().
 */
function features_override_content_default_fields_alter(&$items) {
  features_override_features_default_alter($items, "content");
}

/**
 * Implementation of hook_imagecache_default_presets_alter().
 */
function features_override_imagecache_default_presets_alter(&$items) {
  features_override_features_default_alter($items, "imagecache");
}

/**
 * Implementation of hook_fieldgroup_default_groups_alter().
 */
function features_override_fieldgroup_default_groups_alter(&$items) {
  features_override_features_default_alter($items, "fieldgroup");
}

/**
 * Implementation of hook_conditional_fields_default_fields_alter().
 */
function features_override_conditional_fields_default_fields_alter(&$items) {
  features_override_features_default_alter($items, "conditional_fields");
}

/**
 * Implementation of hook_rules_defaults_alter().
 */
function features_override_rules_defaults_alter(&$items) {
  features_override_features_default_alter($items, "rules_categories");
}

/**
 * Implementation of hook_heartbeat_message_info_alter().
 */
function features_override_heartbeat_message_info_alter(&$items) {
  features_override_features_default_alter($items, "heartbeat");
}
