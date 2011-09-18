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
 * Implementation of hook_rules_defaults().
 */
function jrst_base_rules_defaults() {
  return array(
    'rules' => array(
      'rules_article_approval' => array(
        '#type' => 'rule',
        '#set' => 'event_workflow_state_changed',
        '#label' => 'Article Approval',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'JRST',
          'jrst_base' => 'jrst_base',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#info' => array(
              'label' => 'Check if content workflow state is Approved',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Node',
                ),
              ),
              'module' => 'Workflow',
            ),
            '#name' => 'workflow_check_state',
            '#settings' => array(
              'state' => array(
                '3' => '3',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
            '#weight' => 0,
          ),
          '1' => array(
            '#type' => 'condition',
            '#settings' => array(
              'from_state' => array(
                '2' => '2',
              ),
              'to_state' => array(
                '3' => '3',
              ),
              '#argument map' => array(
                'old_state' => 'old_state',
                'new_state' => 'new_state',
              ),
            ),
            '#name' => 'workflow_check_transition',
            '#info' => array(
              'label' => 'Check workflow transition from Review to Approved',
              'arguments' => array(
                'old_state' => array(
                  'type' => 'workflow_state',
                  'label' => 'Old workflow state',
                ),
                'new_state' => array(
                  'type' => 'workflow_state',
                  'label' => 'New workflow state',
                ),
              ),
              'module' => 'Workflow',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Publish Updated content',
              'module' => 'Node',
              'arguments' => array(
                'node' => array(
                  'label' => 'Content',
                  'type' => 'node',
                ),
              ),
              'base' => 'rules_core_action_execute',
              'action_name' => 'node_publish_action',
              'configurable' => FALSE,
              'label callback' => 'rules_core_node_label_callback',
              'label_skeleton' => 'Publish @node',
            ),
            '#name' => 'rules_core_node_publish_action',
            '#settings' => array(
              'auto_save' => 1,
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'action',
          ),
          '1' => array(
            '#type' => 'action',
            '#settings' => array(
              'title' => 'Discussion for [node:title]',
              'type' => 'discussion',
              'node_access' => 0,
              '#argument map' => array(
                'author' => 'author',
                'node_added' => 'node_added',
              ),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'title' => array(
                    '0' => 'node',
                    '1' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_add_node',
            '#info' => array(
              'label' => 'Add new content',
              'arguments' => array(
                'author' => array(
                  'type' => 'user',
                  'label' => 'User, who is set as author',
                ),
                'title' => array(
                  'type' => 'string',
                  'label' => 'Title',
                  'description' => 'The title of the newly created content.',
                ),
              ),
              'new variables' => array(
                'node_added' => array(
                  'label' => 'new content of type discussion',
                  'type' => 'node',
                  'save' => TRUE,
                  'label callback' => 'rules_action_add_node_variable_label',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
          '2' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Populate new content of type discussion\'s field \'field_discussion_article\'',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'eval input' => array(
                '0' => 'code',
                '1' => 'value|0|nid',
              ),
              'module' => 'CCK',
            ),
            '#name' => 'content_rules_action_populate_field',
            '#settings' => array(
              'field_name' => 'field_discussion_article',
              '#argument map' => array(
                'node' => 'node_added',
              ),
              'value' => array(
                '0' => array(
                  'nid' => '',
                ),
              ),
              'code' => 'return array(
  0 => array(\'nid\' => $node->nid),
);',
              'vars' => array(
                '0' => 'node',
              ),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'code' => array(
                    '0' => ':global',
                  ),
                  'value|0|nid' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
          '3' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Execute custom PHP code',
              'module' => 'PHP',
              'eval input' => array(
                '0' => 'code',
              ),
            ),
            '#name' => 'rules_action_custom_php',
            '#settings' => array(
              'code' => '$node->comment = 0;
return array("node" => $node);',
              'vars' => array(
                '0' => 'node',
              ),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'code' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function jrst_base_views_api() {
  return array(
    'api' => '2',
  );
}
