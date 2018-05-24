<?php
/**
 * @file
 * luggage_timeline.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function luggage_timeline_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline_date|node|timeline_event|form';
  $field_group->group_name = 'group_timeline_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'timeline_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeline Date',
    'weight' => '6',
    'children' => array(
      0 => 'field_timeline_year',
      1 => 'field_timeline_month',
      2 => 'field_timeline_day',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Timeline Date',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'views-exposed-widgets group-timeline-date',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_timeline_date|node|timeline_event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Timeline Date');

  return $field_groups;
}
