/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVOutputDeviceAuthorizationRequestImpl, OS_dispatch_queue;
@class NSObject, NSError;

@interface AVOutputDeviceAuthorizationRequestInternal : NSObject {

	id<AVOutputDeviceAuthorizationRequestImpl> impl;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	long long status;
	NSError* error;

}
@end

