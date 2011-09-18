<?php
/**
 * @file
 * MailhandlerParser class.
 */

/**
 * Parses an IMAP stream.
 */
class MailhandlerParser extends FeedsParser {

  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    return array(
      'if_auth_fails' => 'remove',
      'default_commands' => 'status: 1',
      'available_commands' => 'status',
      'command_plugin' => array('MailhandlerCommandsDefault', 'MailhandlerCommandsFiles', 'MailhandlerCommandsHeaders'),
      'authenticate_plugin' => 'MailhandlerAuthenticateDefault',
    );
  }

  public function sourceForm($source_config) {
    $form['if_auth_fails'] = array(
      '#type' => 'select',
      '#title' => t('If authentication fails'),
      '#options' => array(
        'remove' => t('Do not create the node'),
        'unpublish' => t('Create the node, leave it unpublished'),
        'ignore' => t('Ignore failed authentication'),
      ),
      '#default_value' => isset($source_config['if_auth_fails']) ? $source_config['if_auth_fails'] : 'remove',
      '#description' => t('If authentication is checked, here you can choose what to do if the incoming emails does not belongs to an authenticated user.'),
    );
    return $form;
  }

  /**
   * Build configuration form.
   */
  public function configForm(&$form_state) {
    $form = array();
    ctools_include('plugins');
    $options = array();
    $plugins = mailhandler_get_plugins('mailhandler', 'commands_plugin');
    foreach ($plugins as $key => $info) {
      $options[$key] = $info['name'];
    }
    $form['command_plugin'] = array(
      '#type' => 'select',
      '#title' => t('Command plugins'),
      '#description' => t('Choose the command plugins to use'),
      '#options' => $options,
      '#multiple' => TRUE,
      '#default_value' => $this->config['command_plugin'],
    );
    $options = array();
    $plugins = mailhandler_get_plugins('mailhandler', 'authenticate_plugin');
    foreach ($plugins as $key => $info) {
      $options[$key] = $info['name'];
    }
    $form['authenticate_plugin'] = array(
      '#type' => 'select',
      '#title' => t('Authentication plugin'),
      '#description' => t('Choose an authentication plugin'),
      '#options' => $options,
      '#default_value' => $this->config['authenticate_plugin'],
      '#required' => FALSE,
    );
    $form['available_commands'] = array(
      '#type' => 'textarea',
      '#title' => t('Available commands'),
      '#description' => t('A set of commands that can be mapped to Feeds processor targets.'),
      '#default_value' => $this->config['available_commands'],
    );
    $form['default_commands'] = array(
      '#type' => 'textarea',
      '#title' => t('Default commands'),
      '#description' => t('A set of commands that are added to each message by default. Should be in the form "key: value".'),
      '#default_value' => $this->config['default_commands'],
    );
    return $form;
  }

  /**
   * Implementation of FeedsParser::parse().
   */
  public function parse(FeedsImportBatch $batch, FeedsSource $source) {
    $fetched = $batch->getRaw();
    $mailbox = $fetched['mailbox'];
    $messages = $fetched['messages'];
    if (!empty($messages)) {
      foreach ($messages as $mid => &$message) {
        $this->authenticate($message, $mailbox);
        if ($message['authenticated_uid'] == 0) {
          // User was not authenticated
          $source_config = $source->getConfigFor($this);
          switch ($source_config['if_auth_fails']) {
            case 'remove':
              throw new Exception('User could not be authenticated. Please check your Mailhandler authentication plugin settings.');
            case 'unpublish':
              $message['status'] = 0;
              break;
            case 'ignore':
              $this->commands($message, $source);
              break;
          }
        }
        else {
          $this->commands($message, $source);
        }
      }
      $batch->setItems($messages);
    }
    else {
      if (isset($fetched['new'])) {
        drupal_set_message('No new messages.');
      }
    }
  }

  /*
   * This defines sources which user's can select to map values to.
   */
  public function getMappingSources() {
    $sources = parent::getMappingSources();

    $sources['authenticated_uid'] = array(
      'name' => t('Authenticated UID'),
      'description' => t('Authenticated UID'),
    );
    $plugins = $this->config['command_plugin'];
    foreach ($plugins as $plugin_name) {
      $plugin = mailhandler_plugin_load_class('mailhandler', $plugin_name, 'commands_plugin', 'handler');
      $sources = array_merge($sources, $plugin->getMappingSources());
    }
    // @TODO Move the following code into MailhandlerCommandsDefault... need to
    // figure out how to store the config there first though.
    $available_commands = explode("\n", $this->config['available_commands']);
    foreach ($available_commands as $command) {
      $command = trim($command);
      $sources[$command] = array(
        'name' => $command,
        'description' => $command . ' (commanded)',
      );
    }
    return $sources;
  }

  /*
   * Parse and apply commands.
   */
  public function commands(&$message, $source) {
    if (($plugins = $this->config['command_plugin']) && is_array($plugins) && !empty($plugins)) {
      foreach ($plugins as $plugin) {
        if ($class = mailhandler_plugin_load_class('mailhandler', $plugin, 'commands_plugin', 'handler')) {
          $class->parse($message, $source);
          $class->process($message, $source);
        }
      }
    }
  }

  /*
   * Authenticate the message and set $message['authenticated_uid'].
   */
  public function authenticate(&$message, $mailbox) {
    // TODO: allow for multiple authenticate plugins to be weighted and implemented.
    if ($plugin = $this->config['authenticate_plugin']) {
      if ($class = mailhandler_plugin_load_class('mailhandler', $plugin, 'authenticate_plugin', 'handler')) {
        $class->authenticate($message, $mailbox);
      }
    }
  }
}
