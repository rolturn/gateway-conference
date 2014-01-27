<?php
/**
 * @file
 * gateway_conference_api.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gateway_conference_api_taxonomy_default_vocabularies() {
  return array(
    'app_notification_type' => array(
      'name' => 'App Notification Type',
      'machine_name' => 'app_notification_type',
      'description' => 'The type of notification for the app, such as push notifcation.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'ttl' => array(
      'name' => 'TTL',
      'machine_name' => 'ttl',
      'description' => 'Time to live values for app feeds',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
