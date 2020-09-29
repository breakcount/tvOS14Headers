/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:38 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSArray, NSMutableArray;

@interface BWStillImageMultiCameraDoserNode : BWNode {

	NSArray* _portTypes;
	long long _currentSettingsID;
	NSMutableArray* _inputIndicesForWhichDosingIsPerformed;
	NSMutableArray* _stashedObjectsByInputIndex;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(id)_outputForNodeInputIndex:(unsigned long long)arg1 ;
-(void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 ;
-(void)_emitStashedObjectsIfReady;
-(unsigned long long)outputIndexForPortType:(id)arg1 ;
-(id)initWithPortTypes:(id)arg1 ;
@end
