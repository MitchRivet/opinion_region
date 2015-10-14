<?php
/**
 * @file
 * questions.features.inc
 */

/**
 * Implements hook_node_info().
 */
function questions_node_info() {
  $items = array(
    'questions' => array(
      'name' => t('Questions'),
      'base' => 'node_content',
      'description' => t('Questions to answer'),
      'has_title' => '1',
      'title_label' => t('Question Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
