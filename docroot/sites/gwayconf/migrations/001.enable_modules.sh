#!/bin/bash

URI=gsm.gatewaypeople.com

echo "Installing Advanced Help module ..."
drush dl advanced_help -n
drush en advanced_help --uri=$URI -y

echo "Installing Token module ..."
drush dl token -n
drush en token --uri=$URI -y

echo "Installing Vars module ..."
drush dl vars -n
drush en vars --uri=$URI -y

echo "Installing jQuery Update module ..."
drush dl jquery_update -n
drush en jquery_update --uri=$URI -y

echo "Installing Login Toboggan module ..."
drush dl logintoboggan -n
drush en logintoboggan --uri=$URI -y

echo "Installing Administration menu module ..."
drush dl admin_menu -n
# drush en admin_views --uri=$URI -y
# drush en admin_menu_toolbar --uri=$URI -y
# drush en admin_devel --uri=$URI -y
drush en admin_menu --uri=$URI -y

echo "Installing References module ..."
drush dl references -n
drush en references --uri=$URI -y
# drush en user_reference --uri=$URI -y
# drush en node_reference --uri=$URI -y

echo "Installing CCK module ..."
# as of 2011-Aug-23
drush dl cck-7.x-2.x-dev -n
drush en cck --uri=$URI -y

echo "Installing Entity API module ..."
drush dl entity -n
drush en entity --uri=$URI -y

echo "Installing Elements module ..."
drush dl elements -n
drush en elements --uri=$URI -y

echo "Installing Views module ..."
drush dl views -n
drush en views --uri=$URI -y
drush en views_ui --uri=$URI -y

echo "Installing Views Bulk Operations module ..."
drush dl views_bulk_operations -n
# actions_permissions
drush en views_bulk_operations --uri=$URI -y

echo "Installing Location module ..."
drush dl location -n
# location_fax
# location_phone
# location_addanother
# location_taxonomy
# location_search
# location_cck
# location_generate
# location
# location_user
# location_node
drush en location --uri=$URI -y

echo "Installing Node Reference URL Widget module ..."
drush dl nodereference_url -n
drush en nodereference_url --uri=$URI -y

# echo "Installing Node Hierarchy module ..."
# drush dl nodehierarchy -n
# drush en nodehierarchy --uri=$URI -y

# echo "Installing AddThis module ..."
# drush dl addthis -n
# drush en addthis --uri=$URI -y
# http://drupal.org/node/418356
# http://drupal.org/files/issues/addthis-drupal-7.patch
# It may be necessary to write from scratch or create a block manually

echo "Installing Video module ..."
drush dl video -n
drush en video --uri=$URI -y
drush en video_ui --uri=$URI -y

echo "Installing Date module ..."
drush dl date -n
drush en date --uri=$URI -y
# drush en date_views --uri=$URI -y
# drush en date_repeat --uri=$URI -y
# drush en date_popup --uri=$URI -y
# drush en date_tools --uri=$URI -y
# drush en date_migrate_example --uri=$URI -y
# drush en date_migrate --uri=$URI -y
# drush en date_api --uri=$URI -y

echo "Installing SMTP Authentication Support module ..."
# as of 2011-Feb-25
drush dl smtp-7.x-1.x-dev -n
drush en smtp --uri=$URI -y

echo "Installing Mail System module ..."
drush dl mailsystem -n
drush en mailsystem --uri=$URI -y

echo "Installing Mime Mail module ..."
# as of 2011-Aug-28
drush dl mimemail-7.x-1.x-dev -n
drush en mimemail --uri=$URI -y
# drush en mimemail_compress --uri=$URI -y
# drush en mimemail_action --uri=$URI -y

echo "Installing Rules module ..."
drush dl rules -n
drush en rules --uri=$URI -y
# drush en rules_scheduler --uri=$URI -y
# drush en rules_admin --uri=$URI -y

echo "Installing HTML5 Tools module ..."
drush dl html5_tools -n
drush en html5_tools --uri=$URI -y

echo "Installing Webform module ..."
drush dl webform -n
drush en webform --uri=$URI -y

echo "Installing Webform Validation module ..."
drush dl webform_validation -n
drush en webform_validation --uri=$URI -y

echo "Installing Clientside Validation module ..."
drush dl clientside_validation -n
drush en clientside_validation --uri=$URI -y
# drush en clientside_validation_form --uri=$URI -y
# drush en clientside_validation_webform --uri=$URI -y
# drush en clientside_validation_field_validation --uri=$URI -y
# drush en clientside_validation_fapi --uri=$URI -y

echo "Installing Printer, e-mail and PDF versions module ..."
drush dl print -n
drush en print --uri=$URI -y
# drush en print_mail --uri=$URI -y
# drush en print_pdf --uri=$URI -y

# Additional CCK fields
echo "Installing Address Field module ..."
drush dl addressfield -n
drush en addressfield --uri=$URI -y

echo "Installing Countries module ..."
drush dl countries -n
drush en countries --uri=$URI -y

echo "Installing Email Field module ..."
drush dl email -n
drush en email --uri=$URI -y




# Development & Super Admin
echo "Installing Backup and Migrate module ..."
drush dl backup_migrate -n
drush en backup_migrate --uri=$URI -y

echo "Installing Features module ..."
drush dl features -n
drush en features --uri=$URI -y

echo "Installing Devel module ..."
drush dl devel -n
drush en devel --uri=$URI -y
# drush en devel_generate --uri=$URI -y
# drush en devel_node_access --uri=$URI -y
# FirePHP http://www.firephp.org/Wiki/Libraries/Drupal

echo "Installing Elysia Cron module ..."
# as of 2011-Aug-09
drush dl elysia_cron-7.x-1.x-dev -n
drush en elysia_cron --uri=$URI -y

echo "Installing Job Scheduler module ..."
# as of 2011-Jan-10
drush dl job_scheduler-7.x-2.0-alpha2 -n
drush en job_scheduler --uri=$URI -y  

echo "Installing Memcache API and Integration module ..."
# Encountered issues with the Memcache module 
# drush dl memcache -n
# drush en memcache --uri=$URI -y
# drush en memcache_admin --uri=$URI -y



# Filters
echo "Installing Imagefield Crop module ..."
drush dl imagefield_crop -n
drush en imagefield_crop --uri=$URI -y

echo "Installing Textile module ..."
drush dl textile -n
# Until the syntax error is corrected with a patch, the steps to installing Textile are manual.
# http://drupal.org/node/1004426
# todo: remove (2.x) dependencies[] = vars (2.x)
# drush en textile --uri=$URI -y
# todo: mkdir /sites/all/libraries/textile
# todo: dl and install class
# wget https://raw.github.com/netcarver/textile/master/classTextile.php

echo "Installing Token Filter module ..."
drush dl token_filter -n
drush en token_filter --uri=$URI -y
# http://drupal.org/project/token_insert

echo "Installing Invisimail module ..."
drush dl invisimail -n
drush en invisimail --uri=$URI -y

echo "Installing Pathologic module ..."
drush dl pathologic -n
drush en pathologic --uri=$URI -y




# Usability & Experience section
echo "Installing Custom Breadcrumbs module ..."
drush dl custom_breadcrumbs -n
drush en custom_breadcrumbs --uri=$URI -y

echo "Installing Redirect module ..."
drush dl redirect -n
drush en redirect --uri=$URI -y

echo "Installing Mollom module ..."
drush dl mollom -n
drush en mollom --uri=$URI -y

echo "Installing Views Nivo Slider module ..."
# as of 2011-Aug-04 
drush dl views_nivo_slider-7.x-2.x-dev -n
drush en views_nivo_slider --uri=$URI -y

echo "Installing Apache Solr Search Integration module ..."
# drush dl apachesolr-7.x-1.0-beta8 -n
# drush en apachesolr --uri=$URI -y

echo "Installing Acquia modules ..."
# drush dl acquia_connector -n
# drush en acquia_spi --uri=$URI -y
# drush en acquia_agent --uri=$URI -y
# drush en acquia_search --uri=$URI -y

echo "Installing Search 404 module ..."
drush dl search404 -n
drush en search404 --uri=$URI -y

echo "Installing Nice Menus module ..."
drush dl nice_menus -n
drush en nice_menus --uri=$URI -y

echo "Installing 404 Navigation module ..."
drush dl navigation404 -n
drush en navigation404 --uri=$URI -y

echo "Installing Font Your Face module ..."
drush dl fontyourface -n
drush en fontyourface --uri=$URI -y
# drush en typekit_api --uri=$URI -y
# drush en kernest --uri=$URI -y
# drush en fonts_com --uri=$URI -y
# drush en fontdeck --uri=$URI -y
# drush en fontsquirrel --uri=$URI -y
# drush en google_fonts_api --uri=$URI -y
# drush en font_reference --uri=$URI -y
# drush en common_fonts --uri=$URI -y

echo "Installing Featured Content module ..."
drush dl featured_content -n
drush en featured_content --uri=$URI -y

echo "Installing Calendar module ..."
drush dl calendar -n
drush en calendar --uri=$URI -y
# drush en calendar_ical --uri=$URI -y
# Calendar Tooltips module calendar_tooltips

echo "Installing Blogs module ..."
drush en blog --uri=$URI -y

echo "Installing Echo module ..."
drush dl echo -n
drush en echo --uri=$URI -y

echo "Installing Feeds module ..."
drush dl feeds -n
drush en feeds --uri=$URI -y
# drush en feeds_news --uri=$URI -y
# drush en feeds_ui --uri=$URI -y
# drush en feeds_import --uri=$URI -y

echo "Installing Services module ..."
drush dl services -n
drush en services --uri=$URI -y
# drush en services_oauth --uri=$URI -y
# drush en xmlrpc_server --uri=$URI -y
# drush en xcal_format --uri=$URI -y
# drush en rest_server --uri=$URI -y

echo "Installing Wysiwyg module ..."
drush dl wysiwyg -n
drush en wysiwyg --uri=$URI -y
# https://github.com/wymeditor/wymeditor






# Workflow section
echo "Installing Maestro module ..."
drush dl maestro -n
drush en maestro --uri=$URI -y
# drush en maestro_content_publish --uri=$URI -y
# drush en maestro_inline_form_api_task --uri=$URI -y
# drush en maestro_common --uri=$URI -y
# drush en maestro_test_flows --uri=$URI -y
# drush en maestro_technical_support_request_workflow --uri=$URI -y

echo "Installing Revisioning module ..."
drush dl revisioning -n
drush en revisioning --uri=$URI -y
# drush en revisioning_scheduler --uri=$URI -y

echo "Installing Workbench module ..."
drush dl workbench -n
drush en workbench --uri=$URI -y

echo "Installing Workbench Access module ..."
drush dl workbench_access -n
drush en workbench_access --uri=$URI -y

echo "Installing Workbench Moderation  module ..."
drush dl workbench_moderation -n
drush en workbench_moderation --uri=$URI -y

echo "Installing Revision All module ..."
drush dl revision_all -n
drush en revision_all --uri=$URI -y

echo "Installing Scheduler module ..."
drush dl scheduler -n
drush en scheduler --uri=$URI -y




# SEO section
echo "Installing CDN module ..."
drush dl cdn -n
drush en cdn --uri=$URI -y

echo "Installing XML Sitemap module ..."
drush dl xmlsitemap -n
drush en xmlsitemap --uri=$URI -y
drush en xmlsitemap_node --uri=$URI -y
# todo: enable specific modules for nodes & such

echo "Installing Site map module ..."
drush dl site_map -n
drush en site_map --uri=$URI -y

echo "Installing Google Analytics module ..."
drush dl google_analytics -n
drush en googleanalytics --uri=$URI -y
# todo: set API code

echo "Installing SEO Compliance Checker module ..."
drush dl seo_checker -n
drush en seo_checker --uri=$URI -y
# drush en keyword_rules --uri=$URI -y
# drush en basic_seo_rules --uri=$URI -y

echo "Installing SEO Checklist module ..."
drush dl seo_checklist -n
drush en seochecklist --uri=$URI -y

echo "Installing Pathauto module ..."
drush dl pathauto -n
drush en pathauto --uri=$URI -y

echo "Installing Content Analysis module ..."
drush dl contentanalysis -n
drush en contentanalysis --uri=$URI -y

echo "Installing Content Optimizer module ..."
# TODO Encountered issues with the installation of the Content Optimizer module
# drush dl contentoptimizer -n
# drush en contentoptimizer --uri=$URI -y
# http://groups.drupal.org/node/141519

