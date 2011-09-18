<?php
/**
 * @file
 * MailhandlerAuthenticateDefault class.
 */

class MailhandlerAuthenticateDefault extends MailhandlerAuthenticate {

  public function authenticate(&$message, $mailbox) {
    list($fromaddress, $fromname) = mailhandler_get_fromaddress($message['header'], $mailbox);
    if ($from_user = user_load(array('mail' => $fromaddress))) {
      $message['authenticated_uid'] = $from_user->uid;
    }
    // Try using mailalias email aliases
    elseif (function_exists('mailalias_user') && $from_user = mailhandler_user_load_alias($fromaddress)) {
      $message['authenticated_uid'] = $from_user->uid;
    }
    else {
      // Authentication failed.  Try as anonymous.
      $message['authenticated_uid'] = 0;
    }
  }

}
