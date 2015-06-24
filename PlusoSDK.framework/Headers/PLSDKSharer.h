//
//  PLSDKSharer.h
//  PlusoSDK
//
//  Created by Alexey Sidorov on 05/06/15.
//  Copyright (c) 2015 RusVe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLSDKConstants.h"
@import MessageUI;

@interface PLSDKSharer : NSObject

/**
 *  Method to share URL with provider without any UI
 *
 *  @param urlToShare NSURL to share
 *  @param provider   PLSDKShareProvider to share with
 *  @param delegate   delegate to deal with message composer (it`s temporary here. To be refactored..)
 */
+ (void)shareUrl:(NSURL *)urlToShare withProvider:(PLSDKShareProvider)provider delegate:(id<MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate>)delegate;

@end
