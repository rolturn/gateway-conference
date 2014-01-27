; Genesis make file
core = "7.x"
api = "2"
; comment this out in to use on drupal.org
projects[drupal][version] = "7.x"

; Modules
projects[admin_menu][version] = "3.0-rc3"
projects[admin_menu][subdir] = "contrib"

projects[admin_views][version] = "1.1"
projects[admin_views][subdir] = "contrib"

projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[profiler_builder][version] = "1.0-rc2"
projects[profiler_builder][subdir] = "contrib"

projects[features][version] = "1.0"
projects[features][subdir] = "contrib"

projects[features_override][version] = "2.0-beta1"
projects[features_override][subdir] = "contrib"

projects[entity][version] = "1.0"
projects[entity][subdir] = "contrib"

projects[module_filter][version] = "1.7"
projects[module_filter][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[uuid][version] = "1.x-dev"
projects[uuid][subdir] = "contrib"

projects[views][version] = "3.5"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][subdir] = "contrib"

; TODO modules without versions
projects[opengate_default_admin_ui][version] = "" ; TODO add version
projects[opengate_default_admin_ui][subdir] = "features"


; Themes
; adaptivetheme
projects[adaptivetheme][type] = "theme"
projects[adaptivetheme][version] = "2.3"
projects[adaptivetheme][subdir] = "contrib"
; blessed_admin
projects[blessed_admin][type] = "theme"
projects[blessed_admin][version] = "1.0-rc"
projects[blessed_admin][subdir] = "contrib"
; cube
projects[cube][type] = "theme"
projects[cube][version] = "1.3"
projects[cube][subdir] = "contrib"
; 
projects[][type] = "theme"
projects[][version] = ""; TODO add version
projects[][subdir] = "custom"
; rubik
projects[rubik][type] = "theme"
projects[rubik][version] = "4.0-beta8"
projects[rubik][subdir] = "contrib"
; tao
projects[tao][type] = "theme"
projects[tao][version] = "3.0-beta4"
projects[tao][subdir] = "contrib"
