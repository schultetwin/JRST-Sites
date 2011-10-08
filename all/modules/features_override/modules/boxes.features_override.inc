<?php

/**
 * Implementation of hook_default_box_alter().
 */
function features_override_default_box_alter(&$items) {
  features_override_features_default_alter($items, "box");
}
