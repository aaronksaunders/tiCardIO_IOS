// This is a test harness for your module
// You should do something interesting in this harness 
// to test out the module and to provide instructions 
// to users on how to use it by example.


// open a single window
var win = Ti.UI.createWindow({
	backgroundColor:'white'
});
var label = Ti.UI.createLabel();
win.add(label);
win.open();

// TODO: write your module tests here
var ti_cardio = require('ti.cardio');
Ti.API.info("module is => " + ti_cardio);

ti_cardio.scanCard("YOUR ID GOES HERE", function(data){
	Ti.API.info(' info ' + JSON.stringify(data));
});

