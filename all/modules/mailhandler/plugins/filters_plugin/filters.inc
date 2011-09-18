<?php
/**
 * @file
 * Defines message filters for the Mailhandler Fetcher that allow the fetcher
 * to discriminate between different types of messages (nodes or comments).
 */

/**
 * Filter callback for MailhandlerFetcher
 *
 * @param $header
 *   Message headers
 * @return Always TRUE
 */
function mailhandler_filter_all($header) {
  return TRUE;
}

/**
 * Filter callback for MailhandlerFetcher
 *
 * @param $headers
 *   Message header
 * @return TRUE if comment, FALSE otherwise
 */
function mailhandler_filter_comments($header) {
  return isset($header->in_reply_to);
}

/**
 * Filter callback for MailhandlerFetcher
 *
 * @param $header
 *   Message headers
 * @return TRUE if node, FALSE otherwise
 */
function mailhandler_filter_nodes($header) {
  return !isset($header->in_reply_to);
}
