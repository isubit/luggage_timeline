<?php
/**
 * @file
 * luggage_timeline.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luggage_timeline_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'timeline';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Timeline';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Timeline';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Year (field_timeline_year) */
  $handler->display->display_options['sorts']['field_timeline_year_value']['id'] = 'field_timeline_year_value';
  $handler->display->display_options['sorts']['field_timeline_year_value']['table'] = 'field_data_field_timeline_year';
  $handler->display->display_options['sorts']['field_timeline_year_value']['field'] = 'field_timeline_year_value';
  /* Sort criterion: Content: Month (field_timeline_month) */
  $handler->display->display_options['sorts']['field_timeline_month_value']['id'] = 'field_timeline_month_value';
  $handler->display->display_options['sorts']['field_timeline_month_value']['table'] = 'field_data_field_timeline_month';
  $handler->display->display_options['sorts']['field_timeline_month_value']['field'] = 'field_timeline_month_value';
  /* Sort criterion: Content: Day (field_timeline_day) */
  $handler->display->display_options['sorts']['field_timeline_day_value']['id'] = 'field_timeline_day_value';
  $handler->display->display_options['sorts']['field_timeline_day_value']['table'] = 'field_data_field_timeline_day';
  $handler->display->display_options['sorts']['field_timeline_day_value']['field'] = 'field_timeline_day_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'timeline_event' => 'timeline_event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'timeline';
  $export['timeline'] = $view;

  return $export;
}
