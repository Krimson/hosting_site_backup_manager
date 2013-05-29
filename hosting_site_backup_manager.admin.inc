<?php

/**
 * Hosting site backup manager configuration settings.
 */
function hosting_site_backup_manager_settings() {
  $form = array();

  $form['hosting_site_backup_manager_export'] = array(
    '#type' => 'checkbox',
    '#title' => t('Require export'),
    '#description' => t('If checked, we need to export the backup before we can download it.'),
    '#default_value' => variable_get('hosting_site_backup_manager_export', 0),
  );

  return system_settings_form($form);
}