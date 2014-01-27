<?php
/**
 * @file
 * gway_video.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gway_video_taxonomy_default_vocabularies() {
  return array(
    'video_categories' => array(
      'name' => 'Video Categories',
      'machine_name' => 'video_categories',
      'description' => 'Groups Videos into Categories',
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
