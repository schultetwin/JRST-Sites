<?php
/**
 * @file
 * MailhandlerCommandsFiles class.
 */

class MailhandlerCommandsFiles extends MailhandlerCommands {

  /**
   * Parse attachments from message mimeparts.
   */
  function process(&$message, $source) {
    $message['attachments'] = array();

    foreach ($message['mimeparts'] as $attachment) {
      // 'unnamed_attachment' files are not really attachments, but mimeparts like HTML or Plain Text.
      // We only want to save real attachments, like images and files.
      if ($attachment->filename !== 'unnamed_attachment') {
        $file = file_save_data($attachment->data, file_directory_temp() . '/' . $attachment->filename);
        $message['attachments'][] = new FeedsEnclosure($file, $attachment->filemime);
      }
    }
    // This otherwise breaks batch import.  Attachments are handled above.
    // @TODO: Ensure it's ok to really trash this like so.
    unset($message['mimeparts']);
  }

  function getMappingSources() {
    $sources = array();
    $sources['attachments'] = array(
        'title' => t('Attachments'),
        'description' => t('Files attached to message.'),
    );
    return $sources;
  }
}
