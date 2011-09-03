<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function jrst_discussion_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "features_override" && $api == "features_override") {
    return array("version" => 1);
  }
}
