//
//  PLSDKActionBar.h
//  PlusoSDK
//
//  Created by Alexey Sidorov on 20/05/15.
//  Copyright (c) 2015 RusVe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PLSDKConstants.h"

@class PLSDKActionBar;

@protocol PLSDKActionBarDelegate <NSObject>

@required
/**
 *  Called when user taped to close button
 *
 *  @param actionBar instance
 */
- (void)PLSDKActionBarShouldBeClosed:(PLSDKActionBar *)actionBar;

@end


@interface PLSDKActionBar : UIView

@property (nonatomic, weak) id<PLSDKActionBarDelegate> delegate;

/**
 *  UIColor of action bar
 */
@property (nonatomic, strong) UIColor *barColor;


/**
 *  UIColor of buttons on bar
 */
@property (nonatomic, strong) UIColor *buttonsColor;

/**
 *  Action bar type
 */
@property (nonatomic, assign) PLSDKActivityType type;

/**
 *  URL string of your app in AppStore
 */
@property (nonatomic, strong) NSString *shareURLString;

/**
 *  used to User Defined Attribute at runtime
 */
@property (nonatomic, strong) NSString *actionType;

/**
 *  Email to send feedback from users
 */
@property (nonatomic, strong) NSString *feedbackEmail;

@end
