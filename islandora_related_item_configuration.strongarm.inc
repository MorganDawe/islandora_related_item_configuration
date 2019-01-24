<?php

/**
 * @file
 * islandora_related_item_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function islandora_related_item_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_related_items_field_data';
  $strongarm->value = array(
    0 => array(
      'label' => 'Item',
      'path' => 'string(mods:titleInfo/mods:title[text()])',
      'link' => 0,
      'title_exp' => 0,
      'multi_val' => 0,
    ),
    1 => array(
      'label' => 'mods:name/mods:role/mods:roleTerm',
      'path' => 'mods:name/mods:namePart',
      'link' => 0,
      'title_exp' => 1,
      'multi_val' => 1,
    ),
    2 => array(
      'label' => 'Subjects',
      'path' => 'string(mods:subject/mods:topic[text()])',
      'link' => 0,
      'title_exp' => 0,
      'multi_val' => 0,
    ),
    3 => array(
      'label' => 'Location',
      'path' => 'IDENTIFIER',
      'link' => 1,
      'title_exp' => 0,
      'multi_val' => 0,
    ),
  );
  $export['islandora_related_items_field_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_related_items_title_data';
  $strongarm->value = array(
    0 => array(
      'label' => 'NONE',
      'path' => 'string(@type)',
    ),
    1 => array(
      'label' => 'NONE',
      'path' => 'string(@otherType)',
    ),
  );
  $export['islandora_related_items_title_data'] = $strongarm;

  return $export;
}
