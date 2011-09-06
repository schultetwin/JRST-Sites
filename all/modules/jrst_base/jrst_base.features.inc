<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function jrst_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "features_override" && $api == "features_override") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function jrst_base_views_api() {
  return array(
    'api' => '2',
  );
}
