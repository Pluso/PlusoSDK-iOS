//
//  PLSDKActionBarDelegate.h
//  PlusoSDK
//
//  Created by Alexey Sidorov on 15/06/15.
//  Copyright (c) 2015 RusVe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLSDKConstants.h"

@class PLSDKActionBar;


@protocol PLSDKActionBarDelegate <NSObject>

@required
/**
 *  Called when user taped to close button
 *
 *  @param actionBar instance
 */
- (void)PLSDKActionBarDidTapCancelButton:(PLSDKActionBar *)actionBar;

@optional
/**
 *  called after user rated app
 *
 *  @param actionBar instance
 *  @param rate      user`s rate from 1 to 5
 */
- (void)PLSDKActionBar:(PLSDKActionBar *)actionBar ratedWithRate:(NSUInteger)rate;
/**
 *  called after user shared an app url
 *
 *  @param actionBar instance
 *  @param provider  PLSDKShareProvider
 */
- (void)PLSDKActionBar:(PLSDKActionBar *)actionBar sharedWithProvider:(PLSDKShareProvider)provider;

@end