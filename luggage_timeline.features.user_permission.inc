<?php
/**
 * @file
 * luggage_timeline.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_timeline_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create timeline_event content'.
  $permissions['create timeline_event content'] = array(
    'name' => 'create timeline_event content',
    'roles' => array(
      'content editor' => 'content editor',
      'timeline editor' => 'timeline editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any timeline_event content'.
  $permissions['delete any timeline_event content'] = array(
    'name' => 'delete any timeline_event content',
    'roles' => array(
      'content editor' => 'content editor',
      'timeline editor' => 'timeline editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own timeline_event content'.
  $permissions['delete own timeline_event content'] = array(
    'name' => 'delete own timeline_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any timeline_event content'.
  $permissions['edit any timeline_event content'] = array(
    'name' => 'edit any timeline_event content',
    'roles' => array(
      'content editor' => 'content editor',
      'timeline editor' => 'timeline editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own timeline_event content'.
  $permissions['edit own timeline_event content'] = array(
    'name' => 'edit own timeline_event content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
