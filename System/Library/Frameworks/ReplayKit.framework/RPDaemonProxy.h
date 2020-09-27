/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/RPDaemonProtocol.h>
#import <libobjc.A.dylib/RPClientProtocol.h>

@class NSURL, NSXPCConnection, NSString;

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol> {

	NSURL* _broadcastURL;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSURL * broadcastURL;                      //@synthesize broadcastURL=_broadcastURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemonProxy;
-(id)init;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(oneway void)startInAppRecordingWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(/*^block*/id)arg5 ;
-(oneway void)stopInAppRecordingWithHandler:(/*^block*/id)arg1 ;
-(oneway void)stopInAppRecordingWithUrl:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)discardInAppRecordingWithHandler:(/*^block*/id)arg1 ;
-(oneway void)pauseInAppRecording;
-(oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2 ;
-(oneway void)resumeInAppRecordingWithWindowLayerContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)startInAppCaptureWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(/*^block*/id)arg5 ;
-(oneway void)stopInAppCaptureWithHandler:(/*^block*/id)arg1 ;
-(oneway void)pauseInAppCapture;
-(oneway void)resumeInAppCaptureWithWindowLayerContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)startInAppBroadcastWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 listenerEndpoint:(id)arg5 withHandler:(/*^block*/id)arg6 ;
-(oneway void)stopInAppBroadcastWithHandler:(/*^block*/id)arg1 ;
-(oneway void)pauseInAppBroadcast;
-(oneway void)resumeInAppBroadcastWithWindowLayerContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBroadcastURL:(NSURL *)arg1 ;
-(oneway void)startSystemRecordingWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(/*^block*/id)arg5 ;
-(oneway void)stopSystemRecordingWithHandler:(/*^block*/id)arg1 ;
-(oneway void)stopSystemRecordingWithURLHandler:(/*^block*/id)arg1 ;
-(oneway void)startClipBufferingWithMicrophoneEnabled:(BOOL)arg1 windowSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3 ;
-(oneway void)stopClipBufferingWithHandler:(/*^block*/id)arg1 ;
-(oneway void)generateClipWithSeconds:(double)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)saveVideoToCameraRoll:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)saveVideo:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)recordingTimerDidUpdate:(id)arg1 ;
-(oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1 ;
-(oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2 ;
-(oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2 ;
-(oneway void)recordingLockInterrupted:(id)arg1 ;
-(oneway void)recordingDidPause;
-(oneway void)shouldResumeSessionType:(id)arg1 ;
-(oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1 ;
-(NSURL *)broadcastURL;
-(oneway void)updateBroadcastURL:(id)arg1 ;
-(oneway void)updateBroadcastServiceInfo:(id)arg1 ;
-(oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(/*^block*/id)arg5 ;
-(oneway void)getSystemBroadcastExtensionInfo:(/*^block*/id)arg1 ;
-(oneway void)macApplicationDidResignActive;
-(oneway void)macApplicationDidBecomeActiveWithContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)consumeSandboxExtension:(id)arg1 processNewConnection:(BOOL)arg2 ;
-(oneway void)stopCurrentActiveSessionWithHandler:(/*^block*/id)arg1 ;
-(oneway void)stopAllActiveClients;
-(void)issueSandboxExtensionForMainBundleRead;
-(id)issueSandboxExtensionForClientFileWrite:(id)arg1 ;
-(oneway void)reportCameraUsage:(long long)arg1 ;
@end

