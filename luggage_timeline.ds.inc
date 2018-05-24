<?php
/**
 * @file
 * luggage_timeline.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function luggage_timeline_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|timeline_event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'timeline_event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'timeline_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|timeline_event|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|timeline_event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'timeline_event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'timeline_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => 'timeline-title',
      ),
    ),
  );
  $export['node|timeline_event|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function luggage_timeline_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'timeline_date';
  $ds_field->label = 'Timeline Date';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'timeline_event|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="submitted"><span>[node:field-timeline-month]<?php $month = "[node:field-timeline-month]"; if ($month  != false) { echo "<span> </span>"; } ?>[node:field-timeline-day]<?php $day = "[node:field-timeline-day]"; if ($day  != false) { echo "<span>, </span>"; } ?>[node:field-timeline-year]</span></div>

',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['timeline_date'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function luggage_timeline_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|timeline_event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'timeline_event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'timeline_date',
        1 => 'body',
        2 => 'field_category',
        3 => 'field_tags',
      ),
    ),
    'fields' => array(
      'timeline_date' => 'ds_content',
      'body' => 'ds_content',
      'field_category' => 'ds_content',
      'field_tags' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|timeline_event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|timeline_event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'timeline_event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'timeline_date',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'timeline_date' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|timeline_event|teaser'] = $ds_layout;

  return $export;
}
