/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, SignpostRenderServerRenderInterval, SignpostHIDLatencyInterval, SignpostFrameLatencyInterval;

@interface SignpostFrameAccumulatedState : NSObject {

	unsigned _frameSeed;
	NSMutableDictionary* _contextIDtoContextInfoDict;
	SignpostRenderServerRenderInterval* _renderInterval;
	NSMutableDictionary* _frameSeedToSkippedRenderIntervals;
	SignpostHIDLatencyInterval* _hidLatency;
	SignpostFrameLatencyInterval* _frameLatency;

}

@property (nonatomic,readonly) unsigned frameSeed;                                                 //@synthesize frameSeed=_frameSeed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contextIDtoContextInfoDict;                     //@synthesize contextIDtoContextInfoDict=_contextIDtoContextInfoDict - In the implementation block
@property (nonatomic,retain) SignpostRenderServerRenderInterval * renderInterval;                  //@synthesize renderInterval=_renderInterval - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * frameSeedToSkippedRenderIntervals;              //@synthesize frameSeedToSkippedRenderIntervals=_frameSeedToSkippedRenderIntervals - In the implementation block
@property (nonatomic,retain) SignpostHIDLatencyInterval * hidLatency;                              //@synthesize hidLatency=_hidLatency - In the implementation block
@property (nonatomic,retain) SignpostFrameLatencyInterval * frameLatency;                          //@synthesize frameLatency=_frameLatency - In the implementation block
-(NSMutableDictionary *)frameSeedToSkippedRenderIntervals;
-(unsigned)frameSeed;
-(id)initWithFrameSeed:(unsigned)arg1 ;
-(void)_addSkippedRender:(id)arg1 ;
-(NSMutableDictionary *)contextIDtoContextInfoDict;
-(void)setContextIDtoContextInfoDict:(NSMutableDictionary *)arg1 ;
-(SignpostRenderServerRenderInterval *)renderInterval;
-(void)setRenderInterval:(SignpostRenderServerRenderInterval *)arg1 ;
-(void)setFrameSeedToSkippedRenderIntervals:(NSMutableDictionary *)arg1 ;
-(SignpostHIDLatencyInterval *)hidLatency;
-(void)setHidLatency:(SignpostHIDLatencyInterval *)arg1 ;
-(SignpostFrameLatencyInterval *)frameLatency;
-(void)setFrameLatency:(SignpostFrameLatencyInterval *)arg1 ;
@end

