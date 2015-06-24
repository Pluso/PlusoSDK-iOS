//
//  PLSDKActionBar.h
//  PlusoSDK
//
//  Created by Alexey Sidorov on 20/05/15.
//  Copyright (c) 2015 RusVe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PLSDKConstants.h"
#import "PLSDKActionBarDelegate.h"
#import "PLSDKShareViewDelegate.h"


@interface PLSDKActionBar : UIView <PLSDKShareViewDelegate>

@property (nonatomic, weak) id<PLSDKActionBarDelegate> delegate;

/**
 *  UIColor of action bar
 */
@property (nonatomic, strong) IBInspectable UIColor *barColor;

/**
 *  UIColor of buttons on bar
 */
@property (nonatomic, strong) IBInspectable UIColor *buttonsColor;

/**
 *  Action bar type
 */
@property (nonatomic, assign) IBInspectable PLSDKActivityType type;

/**
 *  URL string of your app in AppStore
 */
@property (nonatomic, strong) IBInspectable NSString *shareURLString;

/**
 *  used to User Defined Attribute at runtime
 */
@property (nonatomic, strong) IBInspectable NSString *actionType;

/**
 *  Email to send feedback from users
 */
@property (nonatomic, strong) IBInspectable NSString *feedbackEmail;

@end
