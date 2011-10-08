<?php
/**
 * @file
 * MailhandlerCommandsJRST class.
 */

class MailhandlerCommandsJRST extends MailhandlerCommandsDefault {

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
        if ($commands[$i][0] == 'document_title') {
          $next_line = $lines[$i+1];
          $nl_words = explode(' ', $next_line);
          if (!drupal_substr($nl_words[0], -1) == ':' && !isset($endcommands)) {
            $commands[$i][1] .= ' ' . $next_line;
            unset($lines[$i+1]);
            $i++;
          }
        }
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
}
