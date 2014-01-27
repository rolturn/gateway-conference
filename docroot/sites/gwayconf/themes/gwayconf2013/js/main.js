jQuery(document).ready(function($) {

	var $window = $(window).resize(),
		mobileWindowStart = 760, //This number should correspond to breakpoint sizes in _variables.scss
		tabletWindowStart = 1200; //This number should correspond to breakpoint sizes in _variables.scss
		vtabletWindowStart = 1020; //This number should correspond to breakpoint sizes in _variables.scss

	
	$("#mobile-nav-trigger").click(function() {
	     $(this).toggleClass('active');
	     $('.mobile-nav-wrapper').toggleClass('active');
	     return false;
	});
		
	$(".osmplayer-default").wrap('<div class="video-player" />');
	
	if ($window.width() > vtabletWindowStart) {
		$('body.not-logged-in #main-wrap-full-bg').css('padding-top','20px');
		$('body.not-logged-in.node-type-video #main-wrap-full-bg').css('padding-top','200px');
		$('body.not-logged-in.page-node-68 #main-wrap-full-bg').css('padding-top','200px');
		$('#branding-full-bg').waypoint('sticky', {
		  offset: -50 // Apply "stuck" when element 30px from top
		});
	}
	
	
	//mobile overrides
	var mobileDetection = {
		isipad: /ipad/gi.test(navigator.userAgent),
		isiphone: /iphone/gi.test(navigator.userAgent),
		isipod: /ipod/gi.test(navigator.userAgent),
		isandroid: /android/gi.test(navigator.userAgent),
		
		init: function() {
			var self=this;
			if (self.isipad || self.isiphone || self.isipod) {
				jQuery('body').addClass('ismobile iOS');
				self.isios = true;
				if (self.isipad) {
					jQuery('body').addClass('iPad');
				}
				if (self.isiphone) {
					jQuery('body').addClass('iPhone');
				}
				if (self.isipod) {
					jQuery('body').addClass('iPod');
				}
			}
			if (self.isandroid) {
				jQuery('body').addClass('ismobile android');
			}
			self.ismobile = (self.isipad || self.isiphone || self.isipod || self.isandroid);
		}
	};
	
	mobileDetection.init();

})(jQuery);