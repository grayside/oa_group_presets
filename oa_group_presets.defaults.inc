<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _oa_group_presets_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "spaces" && $api == "spaces") {
    return array("version" => 3);
  }
}

/**
 * Helper to implementation of hook_spaces_presets().
 */
function _oa_group_presets_spaces_presets() {
  $export = array();
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'atrium_og_private';
  $spaces_presets->title = 'Private group';
  $spaces_presets->description = 'A private group is accessible only to users added to that group by one of the group\'s managers.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_features' => array(
        'atrium_blog' => '1',
        'atrium_book' => '1',
        'atrium_calendar' => '0',
        'atrium_casetracker' => '0',
        'atrium_members' => '1',
        'atrium_shoutbox' => '0',
        'spaces_dashboard' => '1',
      ),
      'spaces_dashboard_custom' => array(
        'custom-1' => 'Dashboard',
      ),
      'spaces_setting_home' => 'dashboard',
      'spaces_og_selective' => 3,
      'spaces_og_directory' => 0,
      'spaces_og_register' => 1,
      'spaces_og_private' => 1,
      'designkit_color' => array(
        'background' => '#3399aa',
      ),
      'site_frontpage' => 'dashboard',
      'space_menu_items' => array(
        'dashboard' => -20,
        'blog' => -19,
        'notebook' => -18,
        'casetracker' => -17,
        'shoutbox' => -16,
        'calendar' => -15,
        'members' => -14,
      ),
    ),
    'context' => array(
      'spaces_dashboard-custom-1:reaction:block' => array(
        'blocks' => array(
          'oa_group_presets-group_welcome' => array(
            'module' => 'oa_group_presets',
            'delta' => 'group_welcome',
            'region' => 'content',
            'weight' => 0,
          ),
          'views-atrium_intranet-block_1' => array(
            'module' => 'views',
            'delta' => 'atrium_intranet-block_1',
            'region' => 'content',
            'weight' => 1,
          ),
          'views-atrium_blog_comments-block_1' => array(
            'module' => 'views',
            'delta' => 'atrium_blog_comments-block_1',
            'region' => 'right',
            'weight' => 0,
          ),
        ),
      ),
      'spaces_dashboard-custom-2:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-3:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-4:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-5:reaction:block' => array(
        'blocks' => array(),
      ),
    ),
  );

  $export['atrium_og_private'] = $spaces_presets;
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'atrium_og_public';
  $spaces_presets->title = 'Open group';
  $spaces_presets->description = 'An open group is accessible to all users on the site. Users can join and leave open groups freely.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_features' => array(
        'atrium_blog' => '1',
        'atrium_book' => '1',
        'atrium_calendar' => '0',
        'atrium_casetracker' => '0',
        'atrium_members' => '1',
        'atrium_shoutbox' => '0',
        'spaces_dashboard' => '1',
      ),
      'site_frontpage' => 'dashboard',
      'spaces_dashboard_custom' => array(
        'custom-1' => 'Dashboard',
      ),
      'spaces_og_selective' => 0,
      'spaces_og_directory' => 1,
      'spaces_og_register' => 1,
      'spaces_og_private' => 0,
      'designkit_color' => array(
        'background' => '#3399aa',
      ),
      'space_menu_items' => array(
        'dashboard' => -20,
        'blog' => -19,
        'notebook' => -18,
        'casetracker' => -17,
        'shoutbox' => -16,
        'calendar' => -15,
        'members' => -14,
      ),
      'designkit_image' => array(
        'logo' => 0,
      ),
    ),
    'context' => array(
      'spaces_dashboard-custom-1:reaction:block' => array(
        'blocks' => array(
          'oa_group_presets-group_welcome' => array(
            'module' => 'oa_group_presets',
            'delta' => 'group_welcome',
            'region' => 'content',
            'weight' => 0,
          ),
          'views-atrium_intranet-block_1' => array(
            'module' => 'views',
            'delta' => 'atrium_intranet-block_1',
            'region' => 'content',
            'weight' => 1,
          ),
          'views-atrium_blog_comments-block_1' => array(
            'module' => 'views',
            'delta' => 'atrium_blog_comments-block_1',
            'region' => 'right',
            'weight' => 0,
          ),
        ),
      ),
      'spaces_dashboard-custom-2:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-3:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-4:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-5:reaction:block' => array(
        'blocks' => array(),
      ),
    ),
  );

  $export['atrium_og_public'] = $spaces_presets;
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'oa_og_controlled';
  $spaces_presets->title = 'Moderated group';
  $spaces_presets->description = 'All users may view public content from this group. Users must request to join this group.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_features' => array(
        'atrium_blog' => '1',
        'atrium_book' => '1',
        'atrium_calendar' => '0',
        'atrium_casetracker' => '0',
        'atrium_members' => '1',
        'atrium_shoutbox' => '0',
        'spaces_dashboard' => '1',
      ),
      'site_frontpage' => 'dashboard',
      'spaces_dashboard_custom' => array(
        'custom-1' => 'Dashboard',
      ),
      'spaces_og_selective' => '1',
      'spaces_og_register' => 1,
      'spaces_og_directory' => 1,
      'spaces_og_private' => 0,
      'designkit_color' => array(
        'background' => '#3399aa',
      ),
      'space_menu_items' => array(
        'dashboard' => -20,
        'blog' => -19,
        'notebook' => -18,
        'casetracker' => -17,
        'shoutbox' => -16,
        'calendar' => -15,
        'members' => -14,
      ),
    ),
    'context' => array(
      'spaces_dashboard-custom-1:reaction:block' => array(
        'blocks' => array(
          'oa_group_presets-group_welcome' => array(
            'module' => 'oa_group_presets',
            'delta' => 'group_welcome',
            'region' => 'content',
            'weight' => 0,
          ),
          'views-atrium_intranet-block_1' => array(
            'module' => 'views',
            'delta' => 'atrium_intranet-block_1',
            'region' => 'content',
            'weight' => 1,
          ),
          'views-atrium_blog_comments-block_1' => array(
            'module' => 'views',
            'delta' => 'atrium_blog_comments-block_1',
            'region' => 'right',
            'weight' => 0,
          ),
        ),
      ),
      'spaces_dashboard-custom-2:reaction:block' => array(
        'blocks' => array(
          'views-atrium_intranet-block_2' => array(
            'module' => 'views',
            'delta' => 'atrium_intranet-block_2',
            'region' => 'content',
            'weight' => 1,
          ),
        ),
      ),
      'spaces_dashboard-custom-3:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-4:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-5:reaction:block' => array(
        'blocks' => array(),
      ),
    ),
  );

  $export['oa_og_controlled'] = $spaces_presets;
  return $export;
}
