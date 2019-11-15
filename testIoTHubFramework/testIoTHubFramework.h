//
//  testIoTHubFramework.h
//  testIoTHubFramework
//
//  Created by Alexey Strakh on 11/5/19.
//  Copyright © 2019 Xamarin. All rights reserved.
//

//! Project version number for testIoTHubFramework.
FOUNDATION_EXPORT double testIoTHubFrameworkVersionNumber;

//! Project version string for testIoTHubFramework.
FOUNDATION_EXPORT const unsigned char testIoTHubFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <testIoTHubFramework/PublicHeader.h>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <AzureIoTHubClient/iothub_client.h>

@interface testIoTHubFrameworkObjC : NSObject

-(NSString*)returnValueBasedOnState:(DEVICE_TWIN_UPDATE_STATE)result;

@end
