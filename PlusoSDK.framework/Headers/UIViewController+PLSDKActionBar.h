//
//  UIViewController+PLSDKActionBar.h
//  PlusoSDK
//
//  Created by Alexey Sidorov on 05/06/15.
//  Copyright (c) 2015 RusVe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PLSDKConstants.h"

@class PLSDKActionBar;


@interface UIViewController (PLSDKActionBar)

/**
 *  Methods automatically adds Action Bar view at the bottom of View Controller`s view
 *
 *  @param type activity type of Action Bar
 *  @param url  AppStore url string to share
 *
 *  @return Action Bar instance
 */
- (PLSDKActionBar *)addActionBarOfType:(PLSDKActivityType)type shareURLString:(NSString *)url;

/**
 *  This method does the same that addActionBarOfType:shareURLString: but additionally contains email param,
 *  if you are using action bar in "Rate" mode
 *
 *  @param type  activity type of Action Bar
 *  @param url   AppStore url string to share
 *  @param email support email, used to send feedback messages
 *
 *  @return Action Bar instance
 */
- (PLSDKActionBar *)addActionBarOfType:(PLSDKActivityType)type shareURLString:(NSString *)url feedbackEmail:(NSString *)email;

/**
 *  The same that addActionBarOfType:shareURLString:feedbackEmail: but with color customization
 *
 *  @param type         activity type of Action Bar
 *  @param url          AppStore url string to share
 *  @param email        support email, used to send feedback messages
 *  @param barColor     UIColor of bar`s background
 *  @param buttonsColor UIColor of buttons and images on bar
 *
 *  @return Action Bar instance
 */
- (PLSDKActionBar *)addActionBarOfType:(PLSDKActivityType)type shareURLString:(NSString *)url feedbackEmail:(NSString *)email barColor:(UIColor *)barColor buttonsColor:(UIColor *)buttonsColor;

@end
