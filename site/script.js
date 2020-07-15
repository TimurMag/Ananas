[].forEach.call(document.querySelectorAll('.infoBlock'), function(item) {
	 item.addEventListener('mouseover', function() {
	    console.log('1');
	});
});