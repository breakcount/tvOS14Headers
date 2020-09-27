/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue;
@class NSObject;

@interface CBModule : NSObject {

	/*^block*/id _notificationBlock;
	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)unregisterNotificationBlock;
@end

