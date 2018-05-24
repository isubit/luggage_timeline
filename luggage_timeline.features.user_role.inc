<?php
/**
 * @file
 * luggage_timeline.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function luggage_timeline_user_default_roles() {
  $roles = array();

  // Exported role: timeline editor.
  $roles['timeline editor'] = array(
    'name' => 'timeline editor',
    'weight' => 10,
  );

  return $roles;
}
