(function($) {
	$(document).ready(function(){
    //When the Document is Loaded: hide the system specific settings for any disabled systems.
    if ($('#edit-gwp-smart-app-ios-enabled').is(':checked') == false) {
      $('#edit-ios').hide();
    }
    if ($('#edit-gwp-smart-app-android-enabled').is(':checked') == false) {
      $('#edit-android').hide();
    }
    if ($('#edit-gwp-smart-app-windows-enabled').is(':checked') == false) {
      $('#edit-windows').hide();
    }
   
    //When The System Specific Checkboxes are Clicked
    $(':checkbox').click(function(){
      var str_id = this.id;
      var str_element_group_id = '';
      //determine the main element group id
      if (str_id == 'edit-gwp-smart-app-ios-enabled') {
        str_element_group_id = '#edit-ios';
      }
      else if (str_id == 'edit-gwp-smart-app-android-enabled') {
        str_element_group_id = '#edit-android';
      }
      else if (str_id == 'edit-gwp-smart-app-windows-enabled') {
        str_element_group_id = '#edit-windows';
      }      
      //show hide element according to whether the smart app is enabled for the specific system
      if ($(this).attr('checked') == true) {
        $(str_element_group_id).show();
      }
      else {
        $(str_element_group_id).hide();
      }
    });   

   });

})(jQuery);
