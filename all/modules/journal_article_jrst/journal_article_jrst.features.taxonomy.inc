<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function journal_article_jrst_taxonomy_default_vocabularies() {
  return array(
    'concept_area' => array(
      'name' => 'Conceptual Area',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_concept_area',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
        'group' => 'group',
      ),
    ),
    'grade_level' => array(
      'name' => 'Grade Level',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_grade_level',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
        'group' => 'group',
      ),
    ),
    'methodology' => array(
      'name' => 'Methodology',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_methodology',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
        'group' => 'group',
      ),
    ),
    'science_topic' => array(
      'name' => 'Science Topic',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_science_topic',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
        'group' => 'group',
      ),
    ),
  );
}
