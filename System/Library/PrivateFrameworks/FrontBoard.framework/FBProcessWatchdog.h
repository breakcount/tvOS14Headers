/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSProcessWatchdog.h>

@class RBSProcessHandle, FBProcessWatchdogEventContext, FBProcessCPUStatistics;

@interface FBProcessWatchdog : FBSProcessWatchdog {

	RBSProcessHandle* _handle;
	long long _event;
	FBProcessWatchdogEventContext* _eventContext;
	FBProcessCPUStatistics* _cpuStatistics;

}

@property (nonatomic,readonly) long long event;                                                  //@synthesize event=_event - In the implementation block
@property (nonatomic,retain,readonly) FBProcessWatchdogEventContext * eventContext;              //@synthesize eventContext=_eventContext - In the implementation block
@property (nonatomic,retain,readonly) FBProcessCPUStatistics * cpuStatistics;                    //@synthesize cpuStatistics=_cpuStatistics - In the implementation block
-(void)activate;
-(long long)event;
-(id)initWithProcess:(id)arg1 context:(id)arg2 policy:(id)arg3 ;
-(FBProcessWatchdogEventContext *)eventContext;
-(FBProcessCPUStatistics *)cpuStatistics;
@end

