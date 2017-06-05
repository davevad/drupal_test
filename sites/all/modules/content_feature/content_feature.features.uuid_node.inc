<?php
/**
 * @file
 * content_feature.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function content_feature_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'live front page',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1496681753,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ce9ddcc7-73b7-4d77-9e0f-f0c76aa218cf',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'front page created on the LIVE site ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2017-06-05 12:55:53 -0400',
  'user_uuid' => '77666e83-44d6-4e4f-937f-16403b17e185',
);
  return $nodes;
}
