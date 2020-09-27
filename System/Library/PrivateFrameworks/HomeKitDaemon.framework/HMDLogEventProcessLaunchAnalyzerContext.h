/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDLogEventAnalyzerContext.h>
#import <libobjc.A.dylib/HMDLogEventProcessLaunchAnalyzerContext.h>
@class HMFTimer;


@protocol HMDLogEventProcessLaunchAnalyzerContext <HMDLogEventAnalyzerContext>
@property (nonatomic,readonly) HMFTimer * submitProcessLaunchInfoTimer; 
@required
-(jetsam_snapshot*)fetchJetsamSnapshot;
-(HMFTimer *)submitProcessLaunchInfoTimer;

@end


@class HMFTimer, HMDLogEventDispatcher, NSString;

@interface HMDLogEventProcessLaunchAnalyzerContext : HMDLogEventAnalyzerContext <HMDLogEventProcessLaunchAnalyzerContext> {

	HMFTimer* _submitProcessLaunchInfoTimer;

}

@property (nonatomic,readonly) HMFTimer * submitProcessLaunchInfoTimer;              //@synthesize submitProcessLaunchInfoTimer=_submitProcessLaunchInfoTimer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (readonly) HMDLogEventDispatcher * logEventDispatcher; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWorkQueue:(id)arg1 processLaunchInfoTimer:(id)arg2 ;
-(jetsam_snapshot*)fetchJetsamSnapshot;
-(HMFTimer *)submitProcessLaunchInfoTimer;
@end

