/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAScheduler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _NAQueueScheduler : NSObject <NAScheduler> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
@end

