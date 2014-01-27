#!/bin/bash


# This file was last updated on 3/5/12 by Roland Turner

# Field Collection,

echo "Downloading CTools module ..."
drush dl ctools-7.x-1.0-rc1 -n --destination=sites/all/modules/contrib/

echo "Downloading Context module ..."
drush dl context-7.x-3.0-beta2 -n --destination=sites/all/modules/contrib/

echo "Downloading Field Group module ..."
drush dl field_group-7.x-1.1 -n --destination=sites/all/modules/contrib/

echo "Downloading Adaptive Image module ..."
drush dl adaptive_image-7.x-1.4 -n --destination=sites/all/modules/contrib/

echo "Downloading Boxes module ..."
drush dl boxes-7.x-1.0-beta7 -n --destination=sites/all/modules/contrib/

echo "Downloading Token module ..."
drush dl token-7.x-1.0-rc1 -n --destination=sites/all/modules/contrib/

echo "Downloading Libraries module ..."
drush dl libraries-7.x-1.0 -n --destination=sites/all/modules/contrib/

echo "Downloading References module ..."
drush dl references-7.x-2.0 -n --destination=sites/all/modules/contrib/

echo "Downloading Entity API module ..."
drush dl entity-7.x-1.0-rc1 -n --destination=sites/all/modules/contrib/

echo "Downloading Profile 2 module ..."
drush dl profile2-7.x-1.2 -n --destination=sites/all/modules/contrib/

echo "Downloading Shield module ..."
drush dl shield-7.x-1.1 -n --destination=sites/all/modules/contrib/

echo "Downloading Views module ..."
drush dl views-7.x-3.3 -n --destination=sites/all/modules/contrib/

echo "Downloading DraggableViews module ..."
drush dl draggableviews-7.x-2.x-dev -n --destination=sites/all/modules/contrib/

echo "Downloading Node Reference URL Widget module ..."
drush dl nodereference_url-7.x-1.12 -n --destination=sites/all/modules/contrib/

echo "Downloading Include ..."
drush dl include-7.x-1.8 -n --destination=sites/all/modules/contrib/

echo "Downloading Node Block ..."
drush dl nodeblock-7.x-1.2 -n --destination=sites/all/modules/contrib/

echo "Downloading Date module ..."
drush dl date-7.x-2.2 -n --destination=sites/all/modules/contrib/

echo "Downloading SMTP Authentication Support "never used" module ..."
drush dl smtp-7.x-1.0-beta1 -n --destination=sites/all/modules/contrib/

echo "Downloading Rules module ..."
drush dl rules-7.x-2.0 -n --destination=sites/all/modules/contrib/

echo "Downloading Webform module ..."
drush dl webform-7.x-3.16 -n --destination=sites/all/modules/contrib/

echo "Downloading Webform Validation module ..."
drush dl webform_validation-7.x-1.1 -n --destination=sites/all/modules/contrib/

echo "Downloading Clientside Validation module ..."
drush dl clientside_validation-7.x-1.27 -n --destination=sites/all/modules/contrib/

echo "Downloading FAPI Validation module ..."
drush dl fapi_validation-7.x-1.0 -n --destination=sites/all/modules/contrib/

echo "Downloading Printer, e-mail and PDF versions module ..."
drush dl print-7.x-1.0-beta1 -n --destination=sites/all/modules/contrib/

# Additional CCK fields
echo "Downloading Address Field module ..."
drush dl addressfield-7.x-1.0-beta2 -n --destination=sites/all/modules/contrib/

echo "Downloading Email Field module ..."
drush dl email-7.x-1.0 -n --destination=sites/all/modules/contrib/

echo "Downloading Node export module ..."
drush dl node_export-7.x-3.0-rc1 -n --destination=sites/all/modules/contrib/




# Development & Super Admin
echo "Downloading Features module ..."
drush dl features-7.x-1.0-beta6 -n --destination=sites/all/modules/contrib/

echo "Downloading Devel module ..."
drush dl devel-7.x-1.2 -n --destination=sites/all/modules/contrib/

echo "Downloading Strongarm module ..."
drush dl strongarm-7.x-2.0-beta5 -n --destination=sites/all/modules/contrib/




# Filters
echo "Downloading Image javascript crop module ..."
drush dl imagecrop-7.x-1.0-rc3 -n --destination=sites/all/modules/contrib/

echo "Downloading Token Filter module ..."
drush dl token_filter-7.x-1.1 -n --destination=sites/all/modules/contrib/

echo "Downloading Invisimail module ..."
drush dl invisimail-7.x-1.1 -n --destination=sites/all/modules/contrib/

echo "Downloading Pathologic module ..."
drush dl pathologic-7.x-1.4 -n --destination=sites/all/modules/contrib/




# Usability & Experience section
echo "Downloading Custom Breadcrumbs module ..."
drush dl custom_breadcrumbs-7.x-1.0-alpha1 -n --destination=sites/all/modules/contrib/

echo "Downloading Redirect module ..."
drush dl redirect-7.x-1.0-beta4 -n --destination=sites/all/modules/contrib/

echo "Downloading Menu Block module ..."
drush dl menu_block-7.x-2.3 -n --destination=sites/all/modules/contrib/

echo "Downloading Accordion Menu module ..."
drush dl accordion_menu-7.x-1.0 -n --destination=sites/all/modules/contrib/

echo "Downloading DownloadFile module ..."
drush dl download_file-7.x-1.1 -n --destination=sites/all/modules/contrib/

echo "Downloading Views Slideshow module ..."
drush dl views_slideshow-7.x-3.0 -n --destination=sites/all/modules/contrib/

echo "Downloading Views Acccordion module ..."
drush dl views_accordion-7.x-1.0-rc1 -n --destination=sites/all/modules/contrib/

echo "Downloading Media module due to Media Nivo Slider dependency and Video Feature we have created ..."
drush dl media-7.x-1.0-rc3 -n --destination=sites/all/modules/contrib/

echo "Downloading Media Gallery module due to Media Nivo Slider dependency and Video Feature we have created ..."
drush dl media_gallery-7.x-1.0-beta7 -n --destination=sites/all/modules/contrib/

echo "Downloading Mail MIME module ..."
drush dl mailmime-7.x-2.15 -n --destination=sites/all/modules/contrib/

echo "Downloading Acquia modules ..."
# drush dl acquia_connector-7.x-2.1 -n --destination=sites/all/modules/contrib/

echo "Downloading Search 404 module ..."
drush dl search404-7.x-1.1 -n --destination=sites/all/modules/contrib/

echo "Downloading Fast 404 module ..."
drush dl fast_404-7.x-1.1 -n --destination=sites/all/modules/contrib/

echo "Downloading Superfish module ..."
drush dl superfish-7.x-1.8 -n --destination=sites/all/modules/contrib/

echo "Downloading Calendar module ..."
drush dl calendar-7.x-3.0 -n --destination=sites/all/modules/contrib/

echo "Downloading Job Scheduler module, its needed for Feeds Module ..."
drush dl job_scheduler-7.x-2.0-alpha2 -n --destination=sites/all/modules/contrib/

echo "Downloading Feeds module ..."
drush dl feeds-7.x-2.0-alpha4 -n --destination=sites/all/modules/contrib/

echo "Downloading Wysiwyg module ..."
drush dl wysiwyg-7.x-2.1 -n --destination=sites/all/modules/contrib/

echo "Downloading WYSIWYG Tools Plus module ..."
drush dl wysiwyg_tools_plus-7.x-1.0-alpha1 -n --destination=sites/all/modules/contrib/

echo "Downloading Administration menu module ..."
drush dl admin_menu-7.x-3.0-rc1 -n --destination=sites/all/modules/contrib/

echo "Downloading Nodequeue module ..."
drush dl nodequeue-7.x-2.0-beta1 -n --destination=sites/all/modules/contrib/

echo "Downloading Diff module ..."
drush dl diff-7.x-2.0 -n --destination=sites/all/modules/contrib/

echo "Downloading jQuery plugins module ..."
drush dl jquery_plugin-7.x-1.0 -n --destination=sites/all/modules/contrib/

echo "Downloading jQuery Update module ..."
drush dl jquery_update-7.x-2.2 -n --destination=sites/all/modules/contrib/

echo "Downloading Modernizr module ..."
drush dl modernizr-7.x-2.1 -n --destination=sites/all/modules/contrib/

echo "Downloading Table Field module ..."
drush dl tablefield-7.x-2.0-beta6 -n --destination=sites/all/modules/contrib/





# Workflow section

echo "Downloading Workbench module ..."
drush dl workbench-7.x-1.1 -n --destination=sites/all/modules/contrib/

echo "Downloading Workbench Access module ..."
drush dl workbench_access-7.x-1.0 -n --destination=sites/all/modules/contrib/

echo "Downloading Workbench Moderation  module ..."
drush dl workbench_moderation-7.x-1.1 -n --destination=sites/all/modules/contrib/





# SEO section
echo "Downloading CDN module ..."
drush dl cdn-7.x-2.3 -n --destination=sites/all/modules/contrib/

echo "Downloading Site map module ..."
drush dl site_map-7.x-1.0 -n --destination=sites/all/modules/contrib/

echo "Downloading Google Analytics module ..."
drush dl google_analytics-7.x-1.2 -n --destination=sites/all/modules/contrib/

echo "Downloading Pathauto module ..."
drush dl pathauto-7.x-1.0 -n --destination=sites/all/modules/contrib/

echo "Downloading Global Redirect module ..."
drush dl globalredirect-7.x-1.4 -n --destination=sites/all/modules/contrib/

echo "Downloading Page Title module ..."
drush dl page_title-7.x-2.5 -n --destination=sites/all/modules/contrib/

echo "Downloading Metatag module ..."
drush dl metatag -n --destination=sites/all/modules/contrib/
