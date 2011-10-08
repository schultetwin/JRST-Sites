<?php

/**
 * Implementation of hook_default_mailhandler_mailbox().
 */
function journal_article_jrst_default_mailhandler_mailbox() {
  $export = array();
  $mailbox = new stdClass;
  $mailbox->disabled = FALSE; /* Edit this to true to make a default mailbox disabled initially */
  $mailbox->api_version = 1;
  $mailbox->mail = 'auto_ejrst_net';
  $mailbox->settings = array(
    'mail' => 'auto@ejrst.net',
    'folder' => '',
    'imap' => '0',
    'domain' => 'mail.ejrst.net',
    'port' => '110',
    'name' => 'auto@ejrst.net',
    'pass' => 'birthday1993',
    'extraimap' => '/tls/novalidate-cert/debug',
    'limit' => '',
    'encoding' => '',
    'mime' => 'TEXT/PLAIN,TEXT/HTML',
    'delete_after_read' => 1,
    'fromheader' => '',
    'security' => '0',
    'replies' => '0',
  );

  $export['auto_ejrst_net'] = $mailbox;
  return $export;
}
