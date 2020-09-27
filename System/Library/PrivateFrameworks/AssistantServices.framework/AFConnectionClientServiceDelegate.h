/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFClientServiceDelegate.h>

@protocol OS_dispatch_queue;
@class AFConnection, NSObject, NSString;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate> {

	AFConnection* _connection;
	NSObject*<OS_dispatch_queue> _targetQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_connectionDelegate;
-(id)initWithConnection:(id)arg1 targetQueue:(id)arg2 ;
-(oneway void)shouldSpeakChanged:(BOOL)arg1 ;
-(oneway void)audioSessionIDChanged:(unsigned)arg1 ;
-(oneway void)requestHandleCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)requestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)requestRequestedOpenURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)requestRequestedDismissAssistant;
-(oneway void)quickStopWasHandledWithActions:(unsigned long long)arg1 ;
-(oneway void)acousticIDRequestWillStart;
-(oneway void)musicWasDetected;
-(oneway void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg1 ;
-(oneway void)setUserActivityInfo:(id)arg1 webpageURL:(id)arg2 ;
-(oneway void)invalidateCurrentUserActivity;
-(oneway void)cacheImage:(id)arg1 ;
-(oneway void)extensionRequestWillStartForApplication:(id)arg1 ;
-(oneway void)extensionRequestFinishedForApplication:(id)arg1 error:(id)arg2 ;
-(oneway void)startUIRequestWithText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)startUIRequestWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)getBulletinContext:(/*^block*/id)arg1 ;
-(oneway void)getClockContext:(/*^block*/id)arg1 ;
-(oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)speechRecordingDidChangeAVRecordRoute:(id)arg1 isDucking:(BOOL)arg2 isTwoShot:(BOOL)arg3 speechEndHostTime:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(oneway void)speechRecordingStartpointDetectedWithReply:(/*^block*/id)arg1 ;
-(oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)speechRecordingDidEndWithReply:(/*^block*/id)arg1 ;
-(oneway void)speechRecordingDidCancelWithReply:(/*^block*/id)arg1 ;
-(oneway void)speechRecordingDidFail:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)speechRecognized:(id)arg1 ;
-(oneway void)speechRecognizedAdditionalInterpretation:(id)arg1 refId:(id)arg2 ;
-(oneway void)speechRecognizedPartialResult:(id)arg1 ;
-(oneway void)speechRecognitionDidFail:(id)arg1 ;
-(oneway void)speechRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3 ;
-(oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(id)arg1 ;
-(oneway void)aceConnectionWillRetryOnError:(id)arg1 ;
-(oneway void)audioSessionDidBeginInterruption;
-(oneway void)audioSessionDidEndInterruption:(BOOL)arg1 ;
-(oneway void)audioPlaybackRequestWillStart:(id)arg1 ;
-(oneway void)audioPlaybackRequestDidStart:(id)arg1 ;
-(oneway void)audioPlaybackRequestDidStop:(id)arg1 error:(id)arg2 ;
-(oneway void)willProcessStartPlayback:(long long)arg1 intent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)startPlaybackDidFail:(long long)arg1 ;
-(oneway void)audioSessionWillBecomeActive:(BOOL)arg1 ;
-(oneway void)audioSessionDidBecomeActive:(BOOL)arg1 ;
-(oneway void)willProcessAppLaunchWithBundleIdentifier:(id)arg1 ;
-(oneway void)appLaunchFailedWithBundleIdentifier:(id)arg1 ;
-(oneway void)requestDidReceiveCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

