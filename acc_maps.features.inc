<?php
/**
 * @file
 * acc_maps.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_maps_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}
