<?php
/**
 * @file
 * MailhandlerCommandsDefault class.
 */

$plugin = array(
  'name' => 'JRST commands processor',
  'description' => 'JRST Mailhandler command parser and processor for nodes',
  'handler' => array(
    'class' => 'MailhandlerCommandsJRST',
    'parent' => 'MailhandlerCommandsDefault',
  ),
);
