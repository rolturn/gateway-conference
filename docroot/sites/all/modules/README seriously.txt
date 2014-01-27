
Before any additional modules are downloaded to this docroot please read this document. 

Please get approval from Gabriel Lopez before editing the script that downloads contributed modules to this docroot.

We are locking down the module set we are using as it will have a direct influence on all the sites within this docroot. The migrations script (000.download_modules.sh) with this directory is the only way and the contrib folder is the only place D.O contributed modules should be added to this docroots module list to ensure consistent versioning.

This script uses Drush, so Drush must be installed on your machine before running it from the commandline.

Directions for editing this script
1. Add your name to the commented log at the top giving us a quick rundown of the changes you are making.
2. Edit the script to match the approved modules on your module list
	¥ Each drush script should contain the following parts.
	¥ An echo letting people know what the script is and possibly its function.
	¥ The machine name of the module to be downloaded.
	¥ The most releasable version number at time to download (Any modules in dev should be tested locally first.)
	¥ The (-n) is to keep the script from downloading if it is already installed.
	¥ The --destination= to put the module in the correct folder for organization.

	Below is an example:
	echo "Downloading CTools module ..."
	drush dl ctools-7.x-1.0-rc1 -n --destination=sites/all/modules/contrib/
3. Add a comments if necessary

For further study on drush scripts please visit http://drush.ws

Directions for editing this script
1. Open your commandline app and navigate to the root directory of your site folder. 'sites/[site folder]'
2. Run $ bash ../all/modules/migrations/001.enable_site_modules.sh
	¥ Any errors should be flagged to the team.


If at a later time a module is updated on the sites within this docroot you will need to update that modules version within the script to match.