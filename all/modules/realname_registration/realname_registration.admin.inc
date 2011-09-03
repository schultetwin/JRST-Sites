<?php
/**
 * @file
 * Admin page callbacks for the realname_registration module.
 *
 */

/**
 * Form builder;
 *
 * @ingroup forms
 * @see system_settings_form()
 */
function realname_registration_settings_form() {
  $form = array();

  if (!module_exists('content_profile_registration')) {
    variable_del('realname_registration_use_content_profile_firstname_field');
    variable_del('realname_registration_content_profile_firstname_field_node');
    variable_del('realname_registration_use_content_profile_middlename_field');
    variable_del('realname_registration_content_profile_middlename_field_node');
    variable_del('realname_registration_use_content_profile_lastname_field');
    variable_del('realname_registration_content_profile_lastname_field_node');
  }

  $field_req = '<ul><li>'
  . t('The field name is correct and represents an existing profile field') . '</li><li>'
  . t('The field is required and displays on the registration form') . '</li></ul>';

  $form['fields'] = array(
    '#type' => 'fieldset',
    '#title' => t('Realname registration fields'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['fields']['firstname'] = array(
    '#type' => 'fieldset',
    '#title' => t('First name field'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['fields']['firstname']['realname_registration_firstname_field'] = array(
    '#type' => 'textfield',
    '#title' => t('First name field'),
    '#required' => TRUE,
    '#default_value' => variable_get('realname_registration_firstname_field', ''),
    '#description' => t('The name of your first name field. Ensure that:') . $field_req,
  );

  $form['fields']['firstname']['realname_registration_firstname_field_category'] = array(
    '#type' => 'value',
    '#value' => variable_get('realname_registration_firstname_field_category', ''),
  );

  if (module_exists('content_profile_registration')) {
    $form['fields']['firstname']['content_profile_firstname'] = array(
      '#type' => 'fieldset',
      '#title' => t('Content profile first name'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );
    $form['fields']['firstname']['content_profile_firstname']['realname_registration_use_content_profile_firstname_field'] = array(
        '#type' => 'checkbox',
        '#title' => t('Use the content profile module to store your first names.'),
        '#default_value' => variable_get('realname_registration_use_content_profile_firstname_field', 0),
        '#description' => t('When this checkbox is checked, Realname registration will use content profile fields to store first names.'),
    );
    $form['fields']['firstname']['content_profile_firstname']['realname_registration_content_profile_firstname_field_node'] = array(
      '#title' => t('Content profile type'),
      '#type' => 'textfield',
      '#default_value' => variable_get('realname_registration_content_profile_firstname_field_node', ''),
      '#description' => t('Please provide the machine name of the Content profile you wish for Realname registration to use.'),
    );
  }

  $form['fields']['middlename'] = array(
    '#type' => 'fieldset',
    '#title' => t('Middle name field'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['fields']['middlename']['realname_registration_middlename_field'] = array(
    '#type' => 'textfield',
    '#title' => t('Middle name field'),
    '#default_value' => variable_get('realname_registration_middlename_field', ''),
    '#description' => t('The name of your middle name field. Ensure that:') . '<ul><li>'
      . t('The field name is correct and represents an existing profile field') . '</li><li>'
      . t('The field is displayed on the registration form') . '</li></ul>',
  );

  $form['fields']['middlename']['realname_registration_middlename_field_category'] = array(
    '#type' => 'value',
    '#value' => variable_get('realname_registration_middlename_field_category', ''),
  );

  if (module_exists('content_profile_registration')) {
    $form['fields']['middlename']['content_profile_middlename'] = array(
      '#type' => 'fieldset',
      '#title' => t('Content profile middle name'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );
    $form['fields']['middlename']['content_profile_middlename']['realname_registration_use_content_profile_middlename_field'] = array(
        '#type' => 'checkbox',
        '#title' => t('Use the content profile module to store your middle names.'),
        '#default_value' => variable_get('realname_registration_use_content_profile_middlename_field', 0),
        '#description' => t('When this checkbox is checked, Realname registration will use content profile fields to store middle names.'),
    );
    $form['fields']['middlename']['content_profile_middlename']['realname_registration_content_profile_middlename_field_node'] = array(
      '#title' => t('Content profile type'),
      '#type' => 'textfield',
      '#default_value' => variable_get('realname_registration_content_profile_middlename_field_node', ''),
      '#description' => t('Please provide the machine name of the Content profile you wish for Realname registration to use.'),
    );
  }
  $form['fields']['lastname'] = array(
    '#type' => 'fieldset',
    '#title' => t('Last name field'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['fields']['lastname']['realname_registration_lastname_field'] = array(
    '#type' => 'textfield',
    '#title' => t('Last name field'),
    '#required' => TRUE,
    '#default_value' => variable_get('realname_registration_lastname_field', ''),
    '#description' => t('The name of your last name field. Ensure that:') . $field_req,
  );

  $form['fields']['lastname']['realname_registration_lastname_field_category'] = array(
    '#type' => 'value',
    '#value' => variable_get('realname_registration_lastname_field_category', ''),
  );

  if (module_exists('content_profile_registration')) {
    $form['fields']['lastname']['content_profile_lastname'] = array(
      '#type' => 'fieldset',
      '#title' => t('Content profile last name'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );
    $form['fields']['lastname']['content_profile_lastname']['realname_registration_use_content_profile_lastname_field'] = array(
        '#type' => 'checkbox',
        '#title' => t('Use the content profile module to store your last names.'),
        '#default_value' => variable_get('realname_registration_use_content_profile_lastname_field', 0),
        '#description' => t('When this checkbox is checked, Realname registration will use content profile fields to store last names.'),
    );
    $form['fields']['lastname']['content_profile_lastname']['realname_registration_content_profile_lastname_field_node'] = array(
      '#title' => t('Content profile type'),
      '#type' => 'textfield',
      '#default_value' => variable_get('realname_registration_content_profile_lastname_field_node', ''),
      '#description' => t('Please provide the machine name of the Content profile you wish for Realname registration to use.'),
    );
  }

  $form['fields']['realname_registration_ucfirst'] = array(
    '#type' => 'checkbox',
    '#title' => t('Force the first letters of the first, middle, and last names to uppercase'),
    '#default_value' => variable_get('realname_registration_ucfirst', 1),
    '#description' => t("Ensures that the first letter of the users first name, middle name, and last name are capitalized."),
  );

  $form['username_format'] = array(
    '#type' => 'fieldset',
    '#title' => t('Realname registration username creation'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['username_format']['realname_registration_format'] = array(
    '#type' => 'radios',
    '#title' => t('Username format'),
    '#description' => t('Select the format in which Realname registration will create new usernames.'),
    '#default_value' => variable_get('realname_registration_format', 0),
    '#options' => array(
      t('First name and last name (e.g., John Smith)'),
      t('First initial and last name (e.g., JSmith)'),
      t('First name, middle name, and last name (e.g., John Jacob Smith)'),
      t('First name, middle initial, and last name (e.g., John J Smith)'),
      t('First initial, middle initial, and last name (e.g., JJSmith)'),
      t('First name and last name without spaces (e.g., JohnSmith)'),
      t('First name, middle name, and last name without spaces (e.g., JohnJacobSmith)'),
      t('First name, middle initial, and last name without spaces (e.g., JohnJSmith)')
    ),
    '#required' => TRUE,
  );

  $form['username_format']['realname_registration_tolower'] = array(
    '#type' => 'checkbox',
    '#title' => t('Force lowercase'),
    '#default_value' => variable_get('realname_registration_tolower', 1),
    '#description' => t("Usernames will be created using only lowercase characters."),
  );

  $form['username_format']['realname_registration_use_validation'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Realname registration validation'),
    '#default_value' => variable_get('realname_registration_use_validation', 1),
    '#description' => t('Use regex to validate real names.'),
  );

  $form['#validate'][] = 'realname_registration_settings_validate';
  return system_settings_form($form);
}

function realname_registration_settings_validate($form, &$form_state) {
  $err_pretext = t('The field name') . ', <em>';
  $err_register = '</em>, ' . t("you've provided must be displayed on the registration form.");
  $err_req = '</em>, ' . t("you've provided must be required.");
  $err_unknown = '</em>, ' . t("you've provided either does not exist or is not a profile field.");
  $err_textfield = '</em>, ' . t('must use textfield widget.');
  $err_content_profile_req = t("You must specify a content profile machine name for the field, ") . '<em>';
  
  // If we are told to use content profile fields to store values, we need to know which content profile node type.
  if ($form_state['values']['realname_registration_use_content_profile_firstname_field'] && empty($form_state['values']['realname_registration_content_profile_firstname_field_node'])) {
    form_set_error('realname_registration_content_profile_firstname_field_node', $err_content_profile_req . $form_state['values']['realname_registration_firstname_field'] . '</em>');
  }
  if ($form_state['values']['realname_registration_use_content_profile_middlename_field'] && empty($form_state['values']['realname_registration_content_profile_middlename_field_node'])) {
    form_set_error('realname_registration_content_profile_middlename_field_node', $err_content_profile_req . $form_state['values']['realname_registration_middlename_field'] . '</em>');
  }
  if ($form_state['values']['realname_registration_use_content_profile_lastname_field'] && empty($form_state['values']['realname_registration_content_profile_lastname_field_node'])) {
    form_set_error('realname_registration_content_profile_lastname_field_node', $err_content_profile_req . $form_state['values']['realname_registration_lastname_field'] . '</em>');
  }

  // Validation for the first name field.
  if (!($form_state['values']['realname_registration_use_content_profile_firstname_field'])) {
    $firstname_field = db_fetch_object(db_query("SELECT type, required, register, category FROM {profile_fields} WHERE name = '%s'", $form_state['values']['realname_registration_firstname_field']));
    if (empty($firstname_field)) {
      form_set_error('realname_registration_firstname_field', $err_pretext . $form_state['values']['realname_registration_firstname_field'] . $err_unknown);
    }
    if ($firstname_field->type != 'textfield') {
      form_set_error('realname_registration_firstname_field', $err_pretext . $form_state['values']['realname_registration_firstname_field'] . $err_textfield);
    }
    if ($firstname_field->required != 1) {
      form_set_error('realname_registration_firstname_field', $err_pretext . $form_state['values']['realname_registration_firstname_field'] . $err_req);
    }
    if ($firstname_field->register != 1) {
      form_set_error('realname_registration_firstname_field', $err_pretext . $form_state['values']['realname_registration_firstname_field'] . $err_register);
    }
    if ($firstname_field->category) {
      $form_state['values']['realname_registration_firstname_field_category'] = $firstname_field->category;
    }
  }
  else {
    $sql = "SELECT i.field_name, i.type_name, i.widget_type, c.required "
    . "FROM {content_node_field_instance} AS i "
    . "LEFT JOIN {content_node_field} AS c "
    . "ON i.field_name = c.field_name "
    . "WHERE i.field_name = '%s'";
    $firstname_field = db_fetch_object(db_query($sql, $form_state['values']['realname_registration_firstname_field']));
    if (empty($firstname_field)) {
      form_set_error('realname_registration_firstname_field', $err_pretext . $form_state['values']['realname_registration_firstname_field'] . $err_unknown);
    }
    if ($firstname_field->widget_type != 'text_textfield') {
      form_set_error('realname_registration_firstname_field', $err_pretext . $form_state['values']['realname_registration_firstname_field'] . $err_textfield);
    }
    if ($firstname_field->required != 1) {
      form_set_error('realname_registration_firstname_field', $err_pretext . $form_state['values']['realname_registration_firstname_field'] . $err_req);
    }
    $types = array_keys(content_profile_get_types('names', 'registration_use'));
    $match = FALSE;
    foreach ($types as $type) {
      if ($type == $firstname_field->type_name) {
        $match = TRUE;
      }
    }
    if (!$match) {
      form_set_error('realname_registration_firstname_field', $err_pretext . $form_state['values']['realname_registration_firstname_field'] . $err_register);
    }
  }
  
  // Validation for the middle name field.
  if (!empty($form_state['values']['realname_registration_middlename_field'])) {
    if (!($form_state['values']['realname_registration_use_content_profile_middlename_field'])) {
      $middlename_field = db_fetch_object(db_query("SELECT type, required, register, category FROM {profile_fields} WHERE name = '%s'", $form_state['values']['realname_registration_middlename_field']));
      if (empty($middlename_field)) {
        form_set_error('realname_registration_middlename_field', $err_pretext . $form_state['values']['realname_registration_middlename_field'] . $err_unknown);
      }
      if ($middlename_field->type != 'textfield') {
        form_set_error('realname_registration_middlename_field', $err_pretext . $form_state['values']['realname_registration_middlename_field'] . $err_textfield);
      }
      if ($middlename_field->register != 1) {
        form_set_error('realname_registration_middlename_field', $err_pretext . $form_state['values']['realname_registration_middlename_field'] . $err_register);
      }
      if ($middlename_field->category) {
        $form_state['values']['realname_registration_middlename_field_category'] = $middlename_field->category;
      }
    }
    else {
      $sql = "SELECT i.field_name, i.type_name, i.widget_type, c.required "
      . "FROM {content_node_field_instance} AS i "
      . "LEFT JOIN {content_node_field} AS c "
      . "ON i.field_name = c.field_name "
      . "WHERE i.field_name = '%s'";
      $middlename_field = db_fetch_object(db_query($sql, $form_state['values']['realname_registration_middlename_field']));
      if (empty($middlename_field)) {
        form_set_error('realname_registration_middlename_field', $err_pretext . $form_state['values']['realname_registration_middlename_field'] . $err_unknown);
      }
      if ($middlename_field->widget_type != 'text_textfield') {
        form_set_error('realname_registration_middlename_field', $err_pretext . $form_state['values']['realname_registration_middlename_field'] . $err_textfield);
      }
      $types = array_keys(content_profile_get_types('names', 'registration_use'));
      $match = FALSE;
      foreach ($types as $type) {
        if ($type == $middlename_field->type_name) {
          $match = TRUE;
        }
      }
      if (!$match) {
        form_set_error('realname_registration_middlename_field', $err_pretext . $form_state['values']['realname_registration_middlename_field'] . $err_register);
      }
    }
  }

  // Validation for the last name field.
  if (!($form_state['values']['realname_registration_use_content_profile_lastname_field'])) {
    $lastname_field = db_fetch_object(db_query("SELECT type, required, register, category FROM {profile_fields} WHERE name = '%s'", $form_state['values']['realname_registration_lastname_field']));
    if (empty($lastname_field)) {
      form_set_error('realname_registration_lastname_field', $err_pretext . $form_state['values']['realname_registration_lastname_field'] . $err_unknown);
    }
    if ($lastname_field->required != 1) {
      form_set_error('realname_registration_lastname_field', $err_pretext . $form_state['values']['realname_registration_lastname_field'] . $err_req);
    }
    if ($lastname_field->type != 'textfield') {
      form_set_error('realname_registration_lastname_field', $err_pretext . $form_state['values']['realname_registration_lastname_field'] . $err_textfield);
    }
    if ($lastname_field->register != 1) {
      form_set_error('realname_registration_lastname_field', $err_pretext . $form_state['values']['realname_registration_lastname_field'] . $err_register);
    }
    if ($lastname_field->category) {
      $form_state['values']['realname_registration_lastname_field_category'] = $lastname_field->category;
    }
  }
  else {
    $sql = "SELECT i.field_name, i.type_name, i.widget_type, c.required "
    . "FROM {content_node_field_instance} AS i "
    . "LEFT JOIN {content_node_field} AS c "
    . "ON i.field_name = c.field_name "
    . "WHERE i.field_name = '%s'";
    $lastname_field = db_fetch_object(db_query($sql, $form_state['values']['realname_registration_lastname_field']));
    if (empty($lastname_field)) {
      form_set_error('realname_registration_lastname_field', $err_pretext . $form_state['values']['realname_registration_lastname_field'] . $err_unknown);
    }
    if ($lastname_field->required != 1) {
      form_set_error('realname_registration_lastname_field', $err_pretext . $form_state['values']['realname_registration_lastname_field'] . $err_req);
    }
    if ($lastname_field->widget_type != 'text_textfield') {
      form_set_error('realname_registration_lastname_field', $err_pretext . $form_state['values']['realname_registration_lastname_field'] . $err_textfield);
    }
    $types = array_keys(content_profile_get_types('names', 'registration_use'));
    $match = FALSE;
    foreach ($types as $type) {
      if ($type == $lastname_field->type_name) {
        $match = TRUE;
      }
    }
    if (!$match) {
      form_set_error('realname_registration_lastname_field', $err_pretext . $form_state['values']['realname_registration_lastname_field'] . $err_register);
    }
  }
}