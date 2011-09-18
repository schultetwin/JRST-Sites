<?php
/**
 * @file
 * Definition of MailhandlerCommands class.
 */

/**
 * Allows additional sources to be mapped when selected from the Mailhandler
 * Parser. These sources can come from standard IMAP headers / MIME parts or be
 * "commanded" by key: value pairs in message bodies.
 */
abstract class MailhandlerCommands {

  protected $commands = NULL;

  /**
   * Parse commands from email body
   *
   * @param $object
   *   Node object of the node being built for submission.
   */
  public function parse(&$message, $source) {
    return;
  }

  /**
   * Process parsed commands by applying / manipulating the node object.
   *
   * @param $object
   *   Node object of the node being built for submission.
   */
  abstract public function process(&$message, $source);

  /**
   * Return mapping sources in the same manner as a Feeds Parser.
   *
   * @return
   *   Array containing mapping sources in standard Feeds Parser format.
   */
  public function getMappingSources() {
    return array();
  }
}
