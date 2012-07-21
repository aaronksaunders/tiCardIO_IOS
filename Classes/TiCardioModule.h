/**
 * Your Copyright Here
 *
 * Appcelerator Titanium is Copyright (c) 2009-2010 by Appcelerator, Inc.
 * and licensed under the Apache Public License (version 2)
 */
#import "TiModule.h"
#import "TiCardioModule.h"
#import "CardIO.h"

@interface TiCardioModule : TiModule <CardIOPaymentViewControllerDelegate> {
        KrollCallback * _callback;
}
@property (nonatomic, retain) KrollCallback * _callback;
@end
