/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol OS_dispatch_workloop;
#import <CMCapture/CMCapture-Structs.h>
@class NSMapTable, NSObject;

@interface BWInferenceScheduler : NSObject {

	os_unfair_lock_s _connectionsLock;
	NSMapTable* _connectionsByIdentifier;
	NSObject*<OS_dispatch_workloop> _inferenceWorkloop;
	NSObject*<OS_dispatch_workloop> _scalingWorkloop;
	NSObject*<OS_dispatch_workloop> _submissionWorkloop;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)_queueForJob:(SCD_Struct_BW85*)arg1 fromConnection:(id)arg2 ;
-(void)_processJobsFromFramebuffer:(id)arg1 usingInputSampleBuffer:(opaqueCMSampleBufferRef)arg2 inferencePropagationHandler:(/*^block*/id)arg3 atExecutionTime:(SCD_Struct_BW36)arg4 forConnection:(id)arg5 ;
-(unsigned long long)registerInferenceConnection;
-(void)unregisterInferenceConnection:(unsigned long long)arg1 ;
-(int)prepareForInferenceRequirements:(id)arg1 dependencyProviderSource:(id)arg2 formatProvider:(id)arg3 pixelBufferPoolProvider:(id)arg4 connection:(unsigned long long)arg5 ;
-(int)performInferencesForConnection:(unsigned long long)arg1 usingInputSampleBuffer:(opaqueCMSampleBufferRef)arg2 attachingResultsToSampleBuffer:(opaqueCMSampleBufferRef)arg3 skippingInferencesWithTypes:(id)arg4 ;
@end

