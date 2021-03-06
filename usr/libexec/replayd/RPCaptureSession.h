//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RPSession.h"

#import "RPCaptureManagerProtocol-Protocol.h"

@interface RPCaptureSession : RPSession <RPCaptureManagerProtocol>
{
}

- (void)handleClientApplicationDidEnterForeground;	// IMP=0x0000000100034e30
- (void)handleClientApplicationDidEnterBackground;	// IMP=0x0000000100034d40
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000349c4
- (void)handleResumeContextIDFailure;	// IMP=0x000000010003479c
- (void)handleDeviceRestrictionWarning;	// IMP=0x0000000100034574
- (void)handleDeviceLockedWarning;	// IMP=0x0000000100034494
- (void)handleDisplayWarning;	// IMP=0x000000010003426c
- (void)packageAudioSampleBufferForCapture:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;	// IMP=0x0000000100034204
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000001000340c4
- (void)captureDidFailWithError:(id)arg1;	// IMP=0x0000000100033fa0
- (void)didCaptureSampleWithType:(int)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withTransformFlags:(unsigned long long)arg3;	// IMP=0x0000000100033eb8
- (id)dispatchCaptureQueue;	// IMP=0x0000000100033e48
- (void)pauseSession;	// IMP=0x0000000100033cd8
- (void)stopCaptureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100033aac
- (void)presentAcknowledgmentWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100033778
- (void)startCaptureWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 contextID:(id)arg3 windowSize:(struct CGSize)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000334cc

@end

