/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSString, NSObject;

@interface CKDClientInfo : NSObject {

	NSString* _cachedHostname;
	NSObject*<OS_dispatch_queue> _hostCallbackQueue;
	MGNotificationTokenStructRef _hostNotificationToken;

}

@property (nonatomic,readonly) NSString * hostname; 
+(id)sharedClientInfo;
-(id)init;
-(void)dealloc;
-(id)_init;
-(NSString *)hostname;
-(void)_refreshHostname;
@end

