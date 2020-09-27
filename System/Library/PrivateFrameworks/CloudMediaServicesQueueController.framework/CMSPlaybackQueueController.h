/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesQueueController.framework/CloudMediaServicesQueueController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudMediaServicesQueueController/CloudMediaServicesQueueController-Structs.h>
#import <libobjc.A.dylib/CMSPlayerReadyToAcceptTimeElapsedDelegate.h>
#import <libobjc.A.dylib/CMSPlayerTimeElapsedDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSDictionary, CMSPlayerContext, NSDate, NSObject, CMSNetworkActivity, NSString, CMSAVQueuePlayer, CMSContentManager;

@interface CMSPlaybackQueueController : NSObject <CMSPlayerReadyToAcceptTimeElapsedDelegate, CMSPlayerTimeElapsedDelegate> {

	NSMutableArray* _contentItems;
	NSMutableDictionary* _avPlayerItemToContentMappingList;
	NSDictionary* _currentItemMetaData;
	unsigned long long _currentItemIndex;
	CMSPlayerContext* _nowPlaying;
	CMSPlayerContext* _previouslyPlaying;
	unsigned long long _queuedTransitionReportType;
	unsigned long long _previousQueuedTransitionReportType;
	CMSPlayerContext* _reportedPlaying;
	unsigned long long _playElapsedActivityMillis;
	unsigned long long _playElapsedIntervalActivityMillis;
	NSDate* _pausedTimestamp;
	CMSPlayerContext* _pausedPlayingPointer;
	unsigned long long _playPausedActivityMillis;
	id _playElapsedHandler;
	float _version;
	unsigned long long _totalContentItemCount;
	BOOL _didAddElapsedTimeObserver;
	BOOL _updateMROnInitialPlaybackRequest;
	float _playbackRateBeforeTrackTransition;
	NSObject*<OS_dispatch_queue> _updateMRInfoQueue;
	BOOL _isCurrentSchemeInternetRadio;
	BOOL _requestedContentFromServer;
	float _preScanningRate;
	float _reportingPlaybackRate;
	NSDictionary* _userActivityDictionary;
	NSDictionary* _currentPlaybackQueue;
	NSDictionary* _requestedOverrideMediaControls;
	CMSNetworkActivity* _parentNetworkActivity;
	NSString* _queueIdentifier;
	NSString* _siriIdentifier;
	long long _skipsRemaining;
	CMSAVQueuePlayer* _CMSQueuePlayer;
	NSString* _activityIdentifier;
	double _prerollSeconds;
	double _currentItemPrerollSecond;
	CMSContentManager* _contentManager;
	NSDictionary* _mediaControls;

}

@property (nonatomic,retain) CMSAVQueuePlayer * CMSQueuePlayer;                          //@synthesize CMSQueuePlayer=_CMSQueuePlayer - In the implementation block
@property (nonatomic,copy) NSString * activityIdentifier;                                //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,copy) NSString * queueIdentifier;                                   //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (assign,nonatomic) long long skipsRemaining;                                   //@synthesize skipsRemaining=_skipsRemaining - In the implementation block
@property (assign,nonatomic) double prerollSeconds;                                      //@synthesize prerollSeconds=_prerollSeconds - In the implementation block
@property (assign,nonatomic) double currentItemPrerollSecond;                            //@synthesize currentItemPrerollSecond=_currentItemPrerollSecond - In the implementation block
@property (assign,nonatomic) BOOL requestedContentFromServer;                            //@synthesize requestedContentFromServer=_requestedContentFromServer - In the implementation block
@property (assign,nonatomic,__weak) CMSContentManager * contentManager;                  //@synthesize contentManager=_contentManager - In the implementation block
@property (assign,nonatomic) float preScanningRate;                                      //@synthesize preScanningRate=_preScanningRate - In the implementation block
@property (assign,nonatomic) float reportingPlaybackRate;                                //@synthesize reportingPlaybackRate=_reportingPlaybackRate - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaControls;                               //@synthesize mediaControls=_mediaControls - In the implementation block
@property (nonatomic,copy) NSDictionary * userActivityDictionary;                        //@synthesize userActivityDictionary=_userActivityDictionary - In the implementation block
@property (nonatomic,copy) NSDictionary * currentPlaybackQueue;                          //@synthesize currentPlaybackQueue=_currentPlaybackQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * requestedOverrideMediaControls;              //@synthesize requestedOverrideMediaControls=_requestedOverrideMediaControls - In the implementation block
@property (nonatomic,retain) CMSNetworkActivity * parentNetworkActivity;                 //@synthesize parentNetworkActivity=_parentNetworkActivity - In the implementation block
@property (nonatomic,copy,readonly) NSString * siriIdentifier;                           //@synthesize siriIdentifier=_siriIdentifier - In the implementation block
@property (assign,nonatomic) float playbackRate; 
@property (nonatomic,readonly) unsigned long long interactionScheme; 
@property (nonatomic,readonly) BOOL currentItemSupportsRewind; 
@property (nonatomic,readonly) BOOL currentItemSupportsFastForward; 
@property (assign,nonatomic) BOOL isCurrentSchemeInternetRadio;                          //@synthesize isCurrentSchemeInternetRadio=_isCurrentSchemeInternetRadio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(void)pause;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(BOOL)isPlaying;
-(void)play;
-(NSString *)activityIdentifier;
-(void)setActivityIdentifier:(NSString *)arg1 ;
-(NSString *)queueIdentifier;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(CMSNetworkActivity *)parentNetworkActivity;
-(NSDictionary *)userActivityDictionary;
-(void)setUserActivityDictionary:(NSDictionary *)arg1 ;
-(void)setPrerollSeconds:(double)arg1 ;
-(BOOL)_queuePlayerInitWithNetworkActivity:(id)arg1 ;
-(void)_setupNotificationHandlers;
-(void)_invalidateQueuePlayer;
-(void)setReportingPlaybackRate:(float)arg1 ;
-(void)_updateMediaRemoteInfoWithReason:(unsigned long long)arg1 ;
-(float)reportingPlaybackRate;
-(double)currentElapsedTime;
-(void)_pauseIntervalElapsedHandler;
-(void)_updateMediaRemoteInfoWithReason:(unsigned long long)arg1 reportingPlaybackRate:(float)arg2 ;
-(BOOL)canAttemptNextTrack;
-(void)_nextTrack:(float)arg1 ;
-(void)_fetchDataFromNextQueueSegmentForTransition:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pausePlaybackForTrackTransition:(unsigned long long)arg1 rate:(float)arg2 ;
-(BOOL)canAttemptPreviousTrack;
-(void)contentFromServer:(id)arg1 usingStrategy:(unsigned long long)arg2 networkActivity:(id)arg3 ;
-(void)_updatePreviousTrackMetaDataWithPreviousPlaybackRate:(float)arg1 ;
-(void)_updateAVPlayerItemMappingListWithKey:(id)arg1 value:(id)arg2 ;
-(void)nextTrack;
-(void)_seekToTime:(SCD_Struct_CM0)arg1 fromTime:(SCD_Struct_CM0)arg2 ;
-(void)_removeObjectsFromAVPlayerItemToContentMappingList;
-(void)_removeExistingItemsBeforeIndex:(unsigned long long)arg1 andPlayerItem:(id)arg2 ;
-(unsigned long long)_lastIndexOfContentItemWithContentIdentifier:(id)arg1 ;
-(id)_findExistingPlayerItemWithContentIdentifier:(id)arg1 ;
-(void)_removeExistingItemsAfterIndex:(unsigned long long)arg1 andPlayerItem:(id)arg2 ;
-(BOOL)currentItemSupportsRewind;
-(BOOL)currentItemSupportsFastForward;
-(void)_handlePlayToEnd:(id)arg1 ;
-(void)_handleMediaServicesDied:(id)arg1 ;
-(void)_handleMediaServicesRestarted:(id)arg1 ;
-(void)_handleAudioSessionInterruption:(id)arg1 ;
-(void)_reportSeekToTime:(SCD_Struct_CM0)arg1 fromTime:(SCD_Struct_CM0)arg2 ;
-(void)_handleSeekToTimeGreaterThanPreroll;
-(void)_repeatPlayElapsedHandler:(double)arg1 ;
-(void)_initialPlayElapsedHandler:(double)arg1 ;
-(void)_invalidateNowplayingInfo;
-(id)_mediaControlSettingsKey;
-(unsigned long long)interactionScheme;
-(id)_updateSupportedControls:(id)arg1 ;
-(id)_getDefaultCommandOptionsForScheme:(unsigned long long)arg1 ;
-(void)_updateReportingActivity:(BOOL)arg1 playElapsed:(unsigned long long)arg2 interval:(unsigned long long)arg3 paused:(unsigned long long)arg4 ;
-(id)_getMediaItemTypeForScheme:(unsigned long long)arg1 ;
-(void)_handlePrerollSecondsSpecified;
-(void)player:(id)arg1 readyToTimeAcceptObservers:(BOOL)arg2 ;
-(void)player:(id)arg1 timeDidElapse:(double)arg2 ;
-(id)initWithContentManager:(id)arg1 contentItems:(id)arg2 mediaControls:(id)arg3 userActivityDictionary:(id)arg4 networkActivity:(id)arg5 skips:(long long)arg6 identifier:(id)arg7 siriIdentifier:(id)arg8 version:(float)arg9 totalContentItemCount:(unsigned long long)arg10 prerollSeconds:(double)arg11 ;
-(void)previousTrack;
-(void)skipForward:(double)arg1 ;
-(void)skipBackward:(double)arg1 ;
-(void)bookmarkTrack:(BOOL)arg1 ;
-(void)likeTrack:(BOOL)arg1 ;
-(void)dislikeTrack:(BOOL)arg1 ;
-(void)toggleRewindFastForwardMode:(unsigned long long)arg1 ;
-(BOOL)isCurrentSchemeInternetRadio;
-(NSDictionary *)currentPlaybackQueue;
-(void)setCurrentPlaybackQueue:(NSDictionary *)arg1 ;
-(NSDictionary *)requestedOverrideMediaControls;
-(void)setRequestedOverrideMediaControls:(NSDictionary *)arg1 ;
-(void)setParentNetworkActivity:(CMSNetworkActivity *)arg1 ;
-(NSString *)siriIdentifier;
-(long long)skipsRemaining;
-(void)setSkipsRemaining:(long long)arg1 ;
-(void)setIsCurrentSchemeInternetRadio:(BOOL)arg1 ;
-(CMSAVQueuePlayer *)CMSQueuePlayer;
-(void)setCMSQueuePlayer:(CMSAVQueuePlayer *)arg1 ;
-(double)prerollSeconds;
-(double)currentItemPrerollSecond;
-(void)setCurrentItemPrerollSecond:(double)arg1 ;
-(BOOL)requestedContentFromServer;
-(void)setRequestedContentFromServer:(BOOL)arg1 ;
-(CMSContentManager *)contentManager;
-(void)setContentManager:(CMSContentManager *)arg1 ;
-(float)preScanningRate;
-(void)setPreScanningRate:(float)arg1 ;
-(NSDictionary *)mediaControls;
-(void)setMediaControls:(NSDictionary *)arg1 ;
@end

