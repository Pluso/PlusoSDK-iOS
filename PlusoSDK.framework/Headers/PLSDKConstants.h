//
//  Common.h
//  PlusoSDK
//
//  Created by Alexey Sidorov on 21/05/15.
//  Copyright (c) 2015 RusVe. All rights reserved.
//

#ifndef PlusoSDK_Common_h
#define PlusoSDK_Common_h

#endif

/**
 *  Activity type of action bar
 */
typedef NS_ENUM(NSUInteger, PLSDKActivityType){
    /**
     *  Type rate used to allow user to rate app in AppStore
     */
    PLSDKActivityTypeRate,
    /**
     *  Type rate used to allow sharing ability
     */
    PLSDKActivityTypeShare,
    /**
     *  Notifications permission
     */
    //    PLSDKActivityTypeNotifications,
    /**
     *  Location permission
     */
    //    PLSDKActivityTypeLocation,
    /**
     *  Photo gallery permisssion
     */
    //    PLSDKActivityTypePhoto,
    /**
     *  Camera permission
     */
    //    PLSDKActivityTypeCamera,
    /**
     *  Contacts permission
     */
    //    PLSDKActivityTypeContacts,
};

typedef NS_ENUM(NSUInteger, PLSDKShareProvider) {
    PLSDKShareProviderFacebook,
    PLSDKShareProviderTwitter,
    PLSDKShareProviderLinkedin,
    PLSDKShareProviderPinterest,
    PLSDKShareProviderTumblr,
    PLSDKShareProviderGooglePlus,
    PLSDKShareProviderVK,
    PLSDKShareProviderWhatsapp,
    PLSDKShareProviderSMS,
    PLSDKShareProviderEmail,
};

FOUNDATION_EXPORT NSString *const PLSDKPlusoLink;

FOUNDATION_EXPORT NSString *const PLSDKPlusoCallbackLink;

FOUNDATION_EXPORT NSString *const PLSDKWhatsAppAppStoreLink;