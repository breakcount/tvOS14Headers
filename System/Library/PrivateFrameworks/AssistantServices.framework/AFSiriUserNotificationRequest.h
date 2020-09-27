/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriExternalRequest.h>

@class UNNotification, NSString;

@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest> {

	UNNotification* _notification;
	NSString* _sourceAppId;

}
+(BOOL)canBeHandled;
+(BOOL)supportedOnPlatform;
+(BOOL)supportedForApplicationWithBundleId:(id)arg1 ;
-(void)performRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2 ;
@end

