/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPSGraphExecutable;

@interface MPSGraphExecutionDescriptor : NSObject {

	BOOL _waitUntilCompleted;
	/*^block*/id _scheduledHandler;
	/*^block*/id _completionHandler;
	MPSGraphExecutable* _executable;

}

@property (nonatomic,retain) MPSGraphExecutable * executable;              //@synthesize executable=_executable - In the implementation block
@property (copy) id scheduledHandler;                                      //@synthesize scheduledHandler=_scheduledHandler - In the implementation block
@property (copy) id completionHandler;                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign) BOOL waitUntilCompleted;                                //@synthesize waitUntilCompleted=_waitUntilCompleted - In the implementation block
-(BOOL)waitUntilCompleted;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)scheduledHandler;
-(void)setScheduledHandler:(id)arg1 ;
-(void)setWaitUntilCompleted:(BOOL)arg1 ;
-(MPSGraphExecutable *)executable;
-(void)setExecutable:(MPSGraphExecutable *)arg1 ;
@end

