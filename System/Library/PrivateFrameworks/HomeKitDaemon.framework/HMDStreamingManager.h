/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDVideoStreamInterfaceDelegate.h>
#import <libobjc.A.dylib/HMDAudioStreamInterfaceDelegate.h>
#import <libobjc.A.dylib/AVCRemoteVideoClientDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDStreamingManagerDelegate;
@class HMDVideoStreamInterface, HMDAudioStreamInterface, HMDCameraStreamSessionID, NSNumber, AVCRemoteVideoClient, NSObject, HMDCameraStreamSnapshotHandler, NSString;

@interface HMDStreamingManager : HMFObject <HMDVideoStreamInterfaceDelegate, HMDAudioStreamInterfaceDelegate, AVCRemoteVideoClientDelegate, HMFLogging> {

	HMDVideoStreamInterface* _videoStreamInterface;
	HMDAudioStreamInterface* _audioStreamInterface;
	HMDCameraStreamSessionID* _sessionID;
	NSNumber* _slotIdentifier;
	AVCRemoteVideoClient* _avcRemoteVideo;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDStreamingManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	HMDCameraStreamSnapshotHandler* _streamSnapshotHandler;

}

@property (nonatomic,retain) HMDCameraStreamSessionID * sessionID;                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSNumber * slotIdentifier;                                             //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
@property (nonatomic,retain) AVCRemoteVideoClient * avcRemoteVideo;                                 //@synthesize avcRemoteVideo=_avcRemoteVideo - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HMDStreamingManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSnapshotHandler * streamSnapshotHandler;              //@synthesize streamSnapshotHandler=_streamSnapshotHandler - In the implementation block
@property (nonatomic,retain) HMDVideoStreamInterface * videoStreamInterface;                        //@synthesize videoStreamInterface=_videoStreamInterface - In the implementation block
@property (nonatomic,retain) HMDAudioStreamInterface * audioStreamInterface;                        //@synthesize audioStreamInterface=_audioStreamInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDStreamingManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDStreamingManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDCameraStreamSessionID *)sessionID;
-(void)setSessionID:(HMDCameraStreamSessionID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)remoteVideoClientDidReceiveFirstFrame:(id)arg1 ;
-(void)remoteVideoClientDidReceiveLastFrame:(id)arg1 ;
-(void)remoteVideoServerDidDie:(id)arg1 ;
-(void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2 ;
-(id)logIdentifier;
-(NSNumber *)slotIdentifier;
-(void)_stopStream;
-(void)setSlotIdentifier:(NSNumber *)arg1 ;
-(void)_callNetworkImproved;
-(void)_callNetworkDeteriorated;
-(void)updateReconfigurationMode:(BOOL)arg1 ;
-(void)videoStream:(id)arg1 didStart:(id)arg2 ;
-(void)videoStream:(id)arg1 didStop:(id)arg2 ;
-(void)videoStreamDidNetworkImprove:(id)arg1 ;
-(void)videoStreamDidNetworkDeteriorate:(id)arg1 ;
-(void)videoStreamDidUpdateConfiguration:(id)arg1 ;
-(void)updateStreamConfiguration:(id)arg1 ;
-(void)_startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2 ;
-(HMDVideoStreamInterface *)videoStreamInterface;
-(HMDAudioStreamInterface *)audioStreamInterface;
-(void)_callRelayStarted;
-(HMDCameraStreamSnapshotHandler *)streamSnapshotHandler;
-(void)updateAudioSetting:(unsigned long long)arg1 ;
-(void)updateAudioVolume:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_callStreamStopped:(id)arg1 ;
-(void)setAvcRemoteVideo:(AVCRemoteVideoClient *)arg1 ;
-(AVCRemoteVideoClient *)avcRemoteVideo;
-(void)_callStreamStarted:(id)arg1 ;
-(void)_callConfigurationUpdated;
-(void)_callReceivedFirstFrame:(id)arg1 ;
-(void)audioStream:(id)arg1 didStart:(id)arg2 ;
-(void)audioStream:(id)arg1 didPause:(id)arg2 ;
-(void)audioStream:(id)arg1 didResume:(id)arg2 ;
-(void)audioStream:(id)arg1 didStop:(id)arg2 ;
-(id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 localVideoNetworkConfig:(id)arg6 localAudioNetworkConfig:(id)arg7 sessionHandler:(id)arg8 ;
-(void)startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2 ;
-(void)setVideoStreamInterface:(HMDVideoStreamInterface *)arg1 ;
-(void)setAudioStreamInterface:(HMDAudioStreamInterface *)arg1 ;
@end

