tiCardIO_IOS
============

tiCardIO_IOS

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

Sign up for an account at https://www.card.io/, create an app, and take note of your app_token. Replace it in
the code above and you are off and running, ready to scan some cards.