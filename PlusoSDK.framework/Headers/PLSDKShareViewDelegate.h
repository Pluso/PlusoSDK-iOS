//
//  PLSDKShareViewDelegate.h
//  PlusoSDK
//
//  Created by Alexey Sidorov on 15/06/15.
//  Copyright (c) 2015 RusVe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLSDKConstants.h"

@class PLSDKShareView;

@protocol PLSDKShareViewDelegate <NSObject>

@optional
/**
 *  Called when user tapes on button of provider
 *
 *  @param shareView the view from which it was called
 *  @param provider  PLSDKShareProvider provider
 */
- (void)PLSDKShareView:(PLSDKShareView *)shareView sharedWithProvider:(PLSDKShareProvider)provider;

@end