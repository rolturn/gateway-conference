<?php
/**
 * @file
 * gateway_conference_registrations.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gateway_conference_registrations_taxonomy_default_vocabularies() {
  return array(
    'venue' => array(
      'name' => 'Venue',
      'machine_name' => 'venue',
      'description' => 'Location of Conference',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
