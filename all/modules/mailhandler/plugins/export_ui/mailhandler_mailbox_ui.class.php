<?php
/**
 * @file
 * Definition of mailhandler_mailbox_ui class.
 */

/**
 * Represents an IMAP or POP mailbox. Intended to be used as a source for a
 * Feeds Importer using the Mailhandler Fetcher.
 */
class mailhandler_mailbox_ui extends ctools_export_ui {

  /**
   * Implementation of ctools_export_ui::edit_form().
   */
  function edit_form(&$form, &$form_state) {
    parent::edit_form($form, $form_state);
    drupal_add_js(drupal_get_path('module', 'mailhandler') .'/mailhandler_mailbox_ui.js');
    $mailbox = $form_state['item'];
    $form['info']['mail']['#attributes'] = array('class' => 'mailbox-id');
    $form['settings']['#collapsible'] = TRUE;
    $form['settings']['#tree'] = TRUE;
    $form['settings']['mail'] = array(
      '#type' => 'textfield',
      '#title' => t('Email address'),
      '#description' => t('The unique human-readable ID for this mailhandler mailbox. Suggested, though not required, to be an email address.'),
      '#default_value' => $mailbox->settings['mail'],
      '#required' => TRUE,
      '#attributes' => array('class' => 'mailbox-name'),
    );
    $form['settings']['folder'] = array(
      '#type' => 'textfield',
      '#title' => t('Folder'),
      '#default_value' => $mailbox->settings['folder'],
      '#description' => t('Optional. The folder where the mail is stored. If you want this mailbox to read from a local folder, give the full path. Leave domain, port, name, and pass empty below. Remember to set the folder to readable and writable by the webserver.'),
    );
    $form['settings']['imap'] = array(
      '#type' => 'select',
      '#title' => t('POP3 or IMAP Mailbox'),
      '#options' => array('POP3', 'IMAP'),
      '#default_value' => $mailbox->settings['imap'],
      '#description' => t('If you wish to retrieve mail from a POP3 or IMAP mailbox instead of a Folder, select POP3 or IMAP. Also, complete the Mailbox items below.'),
    );
    $form['settings']['domain'] = array(
      '#type' => 'textfield',
      '#title' => t('Mailbox domain'),
      '#default_value' => $mailbox->settings['domain'],
      '#description' => t('The domain of the server used to collect mail.'),
    );
    $form['settings']['port'] = array(
      '#type' => 'textfield',
      '#title' => t('Mailbox port'),
      '#size' => 5,
      '#maxlength' => 5,
      '#default_value' => $mailbox->settings['port'],
      '#description' => t('The port of the mailbox used to collect mail (usually 110 for POP3, 143 for IMAP).'),
    );
    $form['settings']['name'] = array(
      '#type' => 'textfield',
      '#title' => t('Mailbox username'),
      '#default_value' => $mailbox->settings['name'],
      '#description' => t('This username is used while logging into this mailbox during mail retrieval.'),
    );
    $form['settings']['pass'] = array(
      '#type' => 'textfield',
      '#title' => t('Mailbox password'),
      '#default_value' => $mailbox->settings['pass'],
      '#description' => t('The password corresponding to the username above. Consider using a non-vital password, since this field is stored without encryption in the database.'),
    );
    // Allow administrators to configure the mailbox with extra IMAP commands (notls, novalidate-cert etc.)
    $form['settings']['extraimap'] = array(
      '#type' => 'textfield',
      '#title' => t('Extra commands'),
      '#default_value' => $mailbox->settings['extraimap'],
      '#description' => t('Optional. In some circumstances you need to issue extra commands to connect to your mail server (e.g. "/notls", "/novalidate-cert" etc.). See documentation for <a href="http://php.net/imap_open">imap_open</a>. Begin the string with a "/", separating each subsequent command with another "/".'),
    );
    $form['settings']['limit'] = array(
      '#type' => 'textfield',
      '#title' => t('Maximum messages to retrieve'),
      '#size' => 5,
      '#maxlength' => 5,
      '#default_value' => $mailbox->settings['limit'],
      '#description' => t('To prevent timeout errors from large mailboxes you can limit the maximum number of messages that will be retrieved during each cron run.  A value of zero means that no limit will be applied. Some trial and error may be needed to find the optimum setting.'),
    );
    $form['settings']['encoding'] = array(
      '#type' => 'textfield',
      '#title' => t('Default character encoding'),
      '#default_value' => $mailbox->settings['encoding'],
      '#description' => t('The default character encoding to use when an incoming message does not define an encoding.'),
    );
    $form['settings']['mime'] = array(
      '#type' => 'select',
      '#title' => t('MIME preference'),
      '#options' => array(
        'TEXT/HTML,TEXT/PLAIN' => 'HTML',
        'TEXT/PLAIN,TEXT/HTML' => t('Plain text'),
      ),
      '#default_value' => $mailbox->settings['mime'],
      '#description' => t('When a user sends an e-mail containing both HTML and plain text parts, use this part as the node body.'),
    );
    $form['settings']['delete_after_read'] = array(
      '#type' => 'checkbox',
      '#title' => t('Delete messages after they are processed?'),
      '#default_value' => $mailbox->settings['delete_after_read'],
      '#description' => t('Uncheck this box to leave read messages in the mailbox. They will not be processed again unless they become marked as unread.  If you selected "POP3" as your mailbox type, you must check this box.'),
    );
    $form['settings']['fromheader'] = array(
      '#type' => 'textfield',
      '#title' => t('From header'),
      '#default_value' => $mailbox->settings['fromheader'],
      '#description' => t('Use this e-mail header to determine the author of the resulting node. Admins usually leave this field blank (thus using the <strong>From</strong> header), but <strong>Sender</strong> is also useful when working with listservs.'),
    );
    $form['settings']['security'] = array(
      '#type' => 'radios',
      '#title' => t('Security'),
      '#options' => array(t('Disabled'), t('Require password')),
      '#default_value' => ($mailbox->settings['security']) ? $mailbox->settings['security'] : 0,
      '#description' => t('Disable security if your site does not require a password in the Commands section of incoming e-mails. Note: Security=Enabled and MIME preference=HTML is an unsupported combination.'),
    );
    $form['settings']['replies'] = array(
      '#type' => 'radios',
      '#title' => t('Send error replies'),
      '#options' => array(t('Disabled'), t('Enabled')),
      '#default_value' => ($mailbox->settings['replies']) ? $mailbox->settings['replies'] : 0,
      '#description' => t('Send helpful replies to all unsuccessful e-mail submissions. Consider disabling when a listserv posts to this mailbox.'),
    );
    $form['actions']['test'] = array(
      '#type' => 'submit',
      '#value' => t('Test and save'),
    );
  }

  /**
   * Implementation of ctools_export_ui::edit_form_validate().
   */
  function edit_form_validate(&$form, &$form_state) {
    parent::edit_form_validate($form, $form_state);

    // Check whether limit is a valid integer.
    if ($form_state['values']['settings']['limit'] && !is_numeric($form_state['values']['settings']['limit'])) {
      form_set_error('settings][limit', t('Limit must be an integer.'));
    }

    // Validate POP/IMAP settings before actually testing connection.
    $mailbox_appears_ok = TRUE;
    if ($form_state['values']['settings']['domain'] && $form_state['values']['settings']['port'] && !is_numeric($form_state['values']['settings']['port'])) { // assume external mailbox
      form_set_error('settings][port', t('Mailbox port must be an integer.'));
      $mailbox_appears_ok = FALSE;
    }
    if (!$form_state['values']['settings']['domain'] && !$form_state['values']['settings']['port'] && $form_state['values']['settings']['folder']) { // assume local folder
      // check read and write permission
      if (!is_readable($form_state['values']['settings']['folder']) || !is_writable($form_state['values']['settings']['folder'])) {
        form_set_error('settings][port', t('The local folder has to be readable and writable by owner of the webserver process, e.g. nobody.'));
        $mailbox_appears_ok = FALSE;
      }
    }

    // Test POP/IMAP connection if requested.
    if ($mailbox_appears_ok && $form_state['clicked_button']['#value'] == t('Test and save')) {
      // Call the test function
      module_load_include('inc', 'mailhandler', 'mailhandler.retrieve');
      if ($result = mailhandler_open_mailbox((object)$form_state['values']['settings'])) {
        drupal_set_message(t('Mailhandler was able to connect to the mailbox.'));
        $box = mailhandler_mailbox_string((object)$form_state['values']['settings']);
        $status = imap_status($result, $box, SA_MESSAGES);
        if ($status) {
          drupal_set_message(t('There are @messages messages in the mailbox folder.', array('@messages' => $status->messages)));
        }
        else {
          drupal_set_message(t('Mailhandler could not open the specified folder'), 'warning');
        }
        mailhandler_close_mailbox($result);
      }
      else {
        form_set_error('mailhandler', t('Mailhandler could not access the mailbox using these settings'));
      }
    }

    // If POP3 mailbox is chosen, messages should be deleted after processing.  Do not set an actual error
    // because this is helpful for testing purposes.
    if ($form_state['values']['settings']['imap'] == 0 && $form_state['values']['settings']['delete_after_read'] == 0) {
      drupal_set_message(t('Unless you check off "Delete messages after they are processed" when using a POP3 mailbox, old emails will be re-imported each
      time the mailbox is processed.'), 'warning');
    }
  }
}
