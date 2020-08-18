This repo has been moved to Bitbucket.
https://bitbucket.org/appno/hosting_site_backup_manager/src/6.x-1.x/

This is a fork of the http://drupal.org/project/hosting_site_backup_manager module.

Hosting site Backup Manager
======================================

This module adds a "Backups" tab to the "site" nodes in the 
Hostmaster environment. The tab shows the backups and enables
per backup actions (Restore, Delete and Get).

INSTALL
=================

The file hosting_site_backup_manager.drush.inc should be copied to the drush installation.
As it has code for both hostmaster and drush this project needs to be in both a modules directory of hostmaster and a directory where drush looks e.g. ~/.drush/.
The easiest way is to create a symlink in ~/.drush/ to e.g. /var/aegir/clients/admin/hostmaster.example.com/modules/hosting_site_backup_manager/.




TODO:
- Check if there are tasks working with the backups to prevent "collisions"
