/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:53 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorProtocol.h>

@protocol HMISystemResourceUsageMonitorProtocol, OS_dispatch_queue;
@class NSObject;

@interface HMISystemResourceUsageMonitorImpl : HMFObject <HMISystemResourceUsageMonitorProtocol> {

	id<HMISystemResourceUsageMonitorProtocol> _resourceUsageMonitor;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) id<HMISystemResourceUsageMonitorProtocol> resourceUsageMonitor;              //@synthesize resourceUsageMonitor=_resourceUsageMonitor - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                      //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate; 
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)setDelegate:(id<HMISystemResourceUsageMonitorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(id)getCurrentSystemResourceUsage;
-(id)initWithProductClass:(long long)arg1 workQueue:(id)arg2 ;
-(id<HMISystemResourceUsageMonitorProtocol>)resourceUsageMonitor;
@end

