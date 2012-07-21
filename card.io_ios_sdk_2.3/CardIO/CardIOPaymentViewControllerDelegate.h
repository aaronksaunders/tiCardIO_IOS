//
//  CardIOPaymentViewControllerDelegate.h
//  Copyright (c) 2011-2012 Lumber Labs, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CardIOPaymentViewController;
@class CardIOCreditCardInfo;

@protocol CardIOPaymentViewControllerDelegate<NSObject>

//
// Precisely one of userDidCancelPaymentViewController: or userDidProvideCreditCardInfo:inPaymentViewController: will be called.
// In either case, it is your responsibility to dismiss the CardIOPaymentViewController.
//

@required

// This method will be called if the user cancels the scan. You must dismiss paymentViewController.
- (void)userDidCancelPaymentViewController:(CardIOPaymentViewController *)paymentViewController;

// This method will be called when there is a successful scan (or manual entry). You must dismiss paymentViewController.
- (void)userDidProvideCreditCardInfo:(CardIOCreditCardInfo *)info inPaymentViewController:(CardIOPaymentViewController *)paymentViewController;

@end