<?php


function jrst_preprocess_node(&$vars) {
  $one = 1;
  if ($vars['node']->type == 'article') {
    unset($vars['submitted']);
  }
}
