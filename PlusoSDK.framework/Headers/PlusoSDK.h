//
//  PlusoSDK.h
//  PlusoSDK
//
//  Created by Alexey Sidorov on 20/05/15.
//  Copyright (c) 2015 RusVe. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for PlusoSDK.
FOUNDATION_EXPORT double PlusoSDKVersionNumber;

//! Project version string for PlusoSDK.
FOUNDATION_EXPORT const unsigned char PlusoSDKVersionString[];

#import <PlusoSDK/PLSDKActionBar.h>
#import <PlusoSDK/PLSDKActionBarDelegate.h>
#import <PlusoSDK/PLSDKShareViewDelegate.h>
#import <PlusoSDK/UIViewController+PLSDKActionBar.h>
#import <PlusoSDK/PLSDKSharer.h>


#define PlusoSDKInstance [PlusoSDK sharedInstance]


@interface PlusoSDK : NSObject

/**
 *  @return PlusoSDK instance
 */
+ (instancetype)sharedInstance;

/**
 *  Use this method to start using PlusoSDK
 *  If you don`t have API_KEY you can obtain one at http://pluso.io
 *
 *  @param apiKey API key of your app
 */
+ (void)setAPIKey:(NSString *)apiKey;

@end