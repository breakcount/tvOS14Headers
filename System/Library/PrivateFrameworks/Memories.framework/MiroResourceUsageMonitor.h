/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <Memories/Memories-Structs.h>
@class NSObject;

@interface MiroResourceUsageMonitor : NSObject {

	rusage __rusageStart;
	double __timeStart;
	long long __initialResidentMemoryBytes;
	long long __initialPeakResidentMemoryBytes;
	long long __maxResidentMemoryBytes;
	NSObject*<OS_dispatch_source> __pollingTimer;
	BOOL __isRunning;
	NSObject*<OS_dispatch_queue> __isolationQueue;
	double __processorUsage;
	long long __memoryUsage;
	long long __peakMemoryUsage;
	long long __initialResidentMemoryKBytes;
	long long __initialPeakResidentMemoryKBytes;
	long long __maxResidentMemoryKBytes;

}

@property (assign,nonatomic) rusage _rusageStart;                                       //@synthesize _rusageStart=__rusageStart - In the implementation block
@property (assign,nonatomic) double _timeStart;                                         //@synthesize _timeStart=__timeStart - In the implementation block
@property (assign,nonatomic) long long _initialResidentMemoryKBytes;                    //@synthesize _initialResidentMemoryKBytes=__initialResidentMemoryKBytes - In the implementation block
@property (assign,nonatomic) long long _initialPeakResidentMemoryKBytes;                //@synthesize _initialPeakResidentMemoryKBytes=__initialPeakResidentMemoryKBytes - In the implementation block
@property (assign,nonatomic) long long _maxResidentMemoryKBytes;                        //@synthesize _maxResidentMemoryKBytes=__maxResidentMemoryKBytes - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> _pollingTimer;               //@synthesize _pollingTimer=__pollingTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _isolationQueue;              //@synthesize _isolationQueue=__isolationQueue - In the implementation block
@property (nonatomic,readonly) double processorUsage; 
@property (nonatomic,readonly) long long memoryUsage; 
+(long long)_getResidentMemoryKBytes:(long long*)arg1 ;
+(id)sharedResourceUsageMonitor;
-(id)description;
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(BOOL)stop;
-(BOOL)isRunning;
-(NSObject*<OS_dispatch_queue>)_isolationQueue;
-(long long)memoryUsage;
-(NSObject*<OS_dispatch_source>)_pollingTimer;
-(long long)_maxResidentMemoryKBytes;
-(void)set_maxResidentMemoryKBytes:(long long)arg1 ;
-(void)_inqueue_start;
-(void)_inqueue_stop;
-(double)processorUsage;
-(rusage)_rusageStart;
-(void)set_rusageStart:(rusage)arg1 ;
-(double)_timeStart;
-(void)set_timeStart:(double)arg1 ;
-(long long)_initialResidentMemoryKBytes;
-(void)set_initialResidentMemoryKBytes:(long long)arg1 ;
-(long long)_initialPeakResidentMemoryKBytes;
-(void)set_initialPeakResidentMemoryKBytes:(long long)arg1 ;
-(void)set_pollingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)set_isolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

