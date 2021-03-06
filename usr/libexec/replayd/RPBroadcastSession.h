//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RPSession.h"

#import "RPCaptureManagerProtocol-Protocol.h"

@class NSDictionary, NSExtension, NSURL, RPBroadcastConfiguration, RPBroadcastExtensionProxy;

@interface RPBroadcastSession : RPSession <RPCaptureManagerProtocol>
{
    NSURL *_broadcastURL;	// 88 = 0x58
    NSExtension *_broadcastExtension;	// 96 = 0x60
    NSDictionary *_broadcastUserInfo;	// 104 = 0x68
    CDStruct_1b6d18a9 _broadcastFragmentStartTime;	// 112 = 0x70
    long long _broadcastFragmentIndex;	// 136 = 0x88
    RPBroadcastExtensionProxy *_broadcastUploadExtensionProxy;	// 144 = 0x90
    NSDictionary *_extensionInfo;	// 152 = 0x98
    RPBroadcastConfiguration *_broadcastConfiguration;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000010002eb0c
@property(retain, nonatomic) RPBroadcastConfiguration *broadcastConfiguration; // @synthesize broadcastConfiguration=_broadcastConfiguration;
@property(retain, nonatomic) NSDictionary *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
- (void)handleResumeContextIDFailure;	// IMP=0x000000010002e89c
- (void)handleDeviceRestrictionWarning;	// IMP=0x000000010002e674
- (void)handleDeviceLockedWarning;	// IMP=0x000000010002e594
- (void)handleDisplayWarning;	// IMP=0x000000010002e36c
- (void)handleClientApplicationDidEnterForeground;	// IMP=0x000000010002e044
- (void)handleClientApplicationDidEnterBackground;	// IMP=0x000000010002df54
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002dbd8
- (unsigned int)orientationFromFigTransform:(unsigned long long)arg1;	// IMP=0x000000010002dbb4
- (void)notifyExtensionOfAction:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d848
- (void)notifyExtensionOfVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2 sampleOrientation:(unsigned int)arg3;	// IMP=0x000000010002d434
- (void)notifyExtensionOfAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;	// IMP=0x000000010002d21c
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 transformFlags:(unsigned long long)arg2;	// IMP=0x000000010002d088
- (void)processSampleBufferForStreaming:(struct opaqueCMSampleBuffer *)arg1 transformFlags:(unsigned long long)arg2;	// IMP=0x000000010002d07c
- (_Bool)showResumeBroadcastAlert;	// IMP=0x000000010002d074
- (_Bool)showAlertForBroadcastSessionWithError:(id)arg1;	// IMP=0x000000010002cf60
- (void)captureDidFailWithError:(id)arg1;	// IMP=0x000000010002ce94
- (void)didCaptureSampleWithType:(int)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withTransformFlags:(unsigned long long)arg3;	// IMP=0x000000010002cda0
- (id)dispatchCaptureQueue;	// IMP=0x000000010002cd30
- (void)loadBroadcastUploadExtensionWithBaseIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002ca08
- (void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010002c694
- (void)handleBroadcastError:(id)arg1;	// IMP=0x000000010002c580
- (void)handleBroadcastURL:(id)arg1;	// IMP=0x000000010002c564
- (void)handleBroadcastServiceInfo:(id)arg1;	// IMP=0x000000010002c548
- (id)enableBroadcastWithListenerEndpoint:(id)arg1;	// IMP=0x000000010002bfbc
- (void)resumeSessionWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002bd60
- (void)pauseSession;	// IMP=0x000000010002bba4
- (void)startCaptureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b820
- (void)enableBroadcastStartCaptureWithListenerEndpoint:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b5bc
- (void)processAcknowledgementSetupBroadcastWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 listenerEndpoint:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002b334
- (void)updateBroadcastURL:(id)arg1;	// IMP=0x000000010002b24c
- (_Bool)isBroadcastSetup;	// IMP=0x000000010002b20c
- (void)disableBroadcast;	// IMP=0x000000010002b0f4
- (void)stopBroadcastWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ae20
- (void)startBroadcastWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 contextID:(id)arg3 windowSize:(struct CGSize)arg4 listenerEndpoint:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010002ab28
- (id)initWithClientProxy:(id)arg1 callingPID:(int)arg2 bundleID:(id)arg3 delegate:(id)arg4;	// IMP=0x000000010002a9c0

@end

