<?php
/**
 * @file
 * MailhandlerCommandsDefault class.
 */

class MailhandlerCommandsDefault extends MailhandlerCommands {

  /**
   * Parse commands from email body
   *
   * @param $object
   *   Node object of the node being built for submission.
   */
  public function parse(&$message, $source) {
    $config = $source->importer->getConfig();
    // Prepend the default commands. User-added commands will override the default commands.
    if ($config['parser']['config']['default_commands']) {
      $message['origbody'] = trim($config['parser']['config']['default_commands']) . "\n" . $message['origbody'];
    }
    $commands = array();
    $endcommands = NULL;
    // Collect the commands and locate signature
    $lines = explode("\n", $message['origbody']);
    for ($i = 0; $i < count($lines); $i++) {
      $line = trim($lines[$i]);
      $words = explode(' ', $line);
      // Look for a command line. if not present, note which line number is the boundary
      if (drupal_substr($words[0], -1) == ':' && !isset($endcommands)) {
        // Looks like a name: value pair
        $commands[$i] = explode(': ', $line, 2);
      }
      else {
        if (!isset($endcommands)) {
          $endcommands = $i;
        }
      }
    }
    $message['origbody'] = implode("\n", array_slice($lines, $endcommands));
    $this->commands = $commands;
  }

  /**
   * Parse and process commands
   */
  function process(&$message, $source) {
    if (!empty($this->commands)) {
      foreach ($this->commands as $data) {
        // TODO: allow for nested arrays in commands ... Possibly trim() values after explode().
        // If needed, turn this command value into an array
        if (drupal_substr($data[1], 0, 1) == '[' && drupal_substr($data[1], -1, 1) == ']') {
          $data[1] = rtrim(ltrim($data[1], '['), ']'); //strip brackets
          $data[1] = explode(",", $data[1]);
          // allow for key value pairs
          foreach ($data[1] as $key => $value) {
            $data_tmp = explode(":", $value, 2);
            if (isset($data_tmp[1])) { // is it a key value pair?
              // remove old, add as key value pair
              unset($data[1][$key]);
              $data_tmp[0] = trim($data_tmp[0]);
              $data[1][$data_tmp[0]] = $data_tmp[1];
            }
          }
        }
        $data[0] = drupal_strtolower(str_replace(' ', '_', $data[0]));
        if (!empty($data[0])) {
          $message[$data[0]] = $data[1];
        }
      }
    }
  }

  function getMappingSources() {
    $sources = array();
    $sources['origbody'] = array(
      'name' => t('Body'),
      'description' => t('Message body'),
    );
    $sources['mimeparts'] = array(
      'name' => t('MIME parts'),
      'description' => t('Message mimeparts'),
    );
    return $sources;
  }
}
