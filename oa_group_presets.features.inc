<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function oa_group_presets_ctools_plugin_api() {
  module_load_include('inc', 'oa_group_presets', 'oa_group_presets.defaults');
  $args = func_get_args();
  return call_user_func_array('_oa_group_presets_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_spaces_presets().
 */
function oa_group_presets_spaces_presets() {
  module_load_include('inc', 'oa_group_presets', 'oa_group_presets.defaults');
  $args = func_get_args();
  return call_user_func_array('_oa_group_presets_spaces_presets', $args);
}
