/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIResponder.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSArray, AVMediaSelectionOption, NSString, NSObject, NSNumber, AVValueTiming, BSSimpleAssertion, AVPlayer, AVObservationController, AVAsset, AVAssetTrack, NSDictionary, AVPlayerLayer, AVDelegateManager, AVInterstitialController, AVTimeRange, NSDate, AVQueuePlayer, AVPlayerItem, AVNavigationMarkersGroup, NSError;

@interface AVPlayerController : UIResponder {

	BOOL _jKeyDown;
	BOOL _kKeyDown;
	BOOL _lKeyDown;
	NSArray* _audioMediaSelectionOptions;
	NSArray* _legibleMediaSelectionOptions;
	AVMediaSelectionOption* _cachedSelectedAudioMediaSelectionOption;
	AVMediaSelectionOption* _cachedSelectedLegibleMediaSelectionOption;
	AVMediaSelectionOption* _cachedSelectedLegibleMediaSelectionOptionAccordingToAVFoundation;
	NSString* _lastKnownPersistedExtendedLanguageTag;
	NSObject*<OS_dispatch_queue> _seekQueue;
	BOOL _ignoreRateKeyValueChange;
	void* _observationInfo;
	BOOL _inspectionSuspended;
	id _updateAtMinMaxTimePeriodicObserverToken;
	id _timecodePeriodicObserverToken;
	BOOL _pictureInPictureInterrupted;
	BOOL _handlesAudioSessionInterruptions;
	BOOL _isDeallocating;
	NSNumber* _rateToRestoreAfterAudioSessionInterruptionEnds;
	/*^block*/id _retryPlayingImmediatelyBlock;
	BOOL _shouldPlayImmediately;
	BOOL _looping;
	long long _actionAtItemEnd;
	BOOL _pendingSeek;
	SCD_Struct_AV1 _toleranceBefore;
	SCD_Struct_AV1 _toleranceAfter;
	BOOL _isScanningForward;
	BOOL _isScanningBackward;
	unsigned long long _scanningCount;
	double _preScanningRate;
	AVValueTiming* _liveStreamMinTiming;
	AVValueTiming* _liveStreamMaxTiming;
	BOOL _liveStreamEventModePossible;
	long long _canUseNetworkResourcesForLiveStreamingWhilePausedCount;
	BOOL _previousValueOfCanUseNetworkResourcesForLiveStreamingWhilePaused;
	BOOL _shouldPlayWhenLikelyToKeepUp;
	BOOL _playingOnSecondScreen;
	BOOL _didPreventSleepWhenStartingExternalPlayback;
	BSSimpleAssertion* _reduceResourceUsageAssertion;
	double _defaultPlaybackRate;
	BOOL _touchBarRequiresLinearPlayback;
	BOOL _atMaxTime;
	BOOL _atMinTime;
	BOOL _scrubbing;
	BOOL _pictureInPictureSupported;
	BOOL _seekingInternal;
	BOOL _seeking;
	BOOL _composable;
	BOOL _hasProtectedContent;
	BOOL _compatibleWithAirPlayVideo;
	BOOL _preventingIdleSystemSleep;
	BOOL _preventingIdleDisplaySleep;
	BOOL _disablingAutomaticTermination;
	BOOL _allowsPictureInPicturePlayback;
	BOOL _pictureInPictureActive;
	BOOL _canTogglePictureInPicture;
	BOOL _hasBegunInspection;
	AVPlayer* _player;
	AVObservationController* _observationController;
	AVAsset* _currentAssetIfReady;
	NSObject*<OS_dispatch_queue> _assetInspectionQueue;
	AVAsset* _assetBeingPrepared;
	AVValueTiming* _timing;
	AVValueTiming* _minTiming;
	AVValueTiming* _maxTiming;
	AVAssetTrack* _currentAudioTrack;
	double _seekToTime;
	NSDictionary* _metadata;
	NSArray* _availableMetadataFormats;
	double _rateBeforeScrubBegan;
	AVPlayerLayer* _playerLayerForReducingResources;
	NSObject*<OS_dispatch_source> _seekTimer;
	long long _bestAvailableVideoResolution;
	long long _bestAvailableVideoRange;
	long long _bestAvailableAudioFormat;
	CGSize _presentationSize;
	SCD_Struct_AV1 _seekToTimeInternal;

}

@property (nonatomic,retain) AVDelegateManager * delegateManager; 
@property (nonatomic,readonly) AVInterstitialController * interstitialController; 
@property (nonatomic,readonly) long long currentSeekReason; 
@property (nonatomic,readonly) BOOL isSeekingTV; 
@property (nonatomic,readonly) AVTimeRange * timeRangeSeekable; 
@property (nonatomic,readonly) AVTimeRange * timeRangeForNonLivePlayback; 
@property (nonatomic,readonly) AVTimeRange * timeRangeForNavigation; 
@property (nonatomic,readonly) AVTimeRange * displayTimeRangeForNavigation; 
@property (nonatomic,readonly) double contentDurationCached; 
@property (nonatomic,readonly) BOOL isContentDurationIndefinite; 
@property (nonatomic,readonly) double displayedDuration; 
@property (nonatomic,readonly) long long avkitMediaType; 
@property (nonatomic,readonly) BOOL shouldContinuePlaybackInBackground; 
@property (nonatomic,retain) NSDate * programStartDate; 
@property (nonatomic,retain) NSDate * programEndDate; 
@property (nonatomic,readonly) BOOL hasStartAndEndDates; 
@property (nonatomic,readonly) NSDate * exactStartDate; 
@property (nonatomic,readonly) NSDate * exactEndDate; 
@property (nonatomic,readonly) double startTime; 
@property (getter=isEffectiveRateNonZero,nonatomic,readonly) BOOL effectiveRateNonZero; 
@property (nonatomic,readonly) AVQueuePlayer * queuePlayer; 
@property (nonatomic,readonly) BOOL hasMoreEnqueuedContent; 
@property (getter=isLiveStreamEventModePossible,nonatomic,readonly) BOOL liveStreamEventModePossible; 
@property (nonatomic,readonly) double longestSeekableDurationSeenForCurrentItem; 
@property (nonatomic,readonly) AVPlayerItem * currentItem; 
@property (nonatomic,readonly) double currentDisplayTime; 
@property (nonatomic,readonly) AVNavigationMarkersGroup * embeddedChapterNavigationMarkersGroup; 
@property (nonatomic,readonly) NSArray * externalNavigationMarkerGroups; 
@property (nonatomic,readonly) AVNavigationMarkersGroup * primaryNavigationMarkersGroup; 
@property (nonatomic,readonly) BOOL shouldBounceBackAfterScanForwardPastEndTime; 
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen; 
@property (nonatomic,readonly) BOOL usesExternalPlaybackWhileExternalScreenIsActive; 
@property (nonatomic,readonly) CGSize maximumVideoResolution; 
@property (assign,nonatomic) BOOL handlesAudioSessionInterruptions; 
@property (assign,getter=isAtMaxTime,nonatomic) BOOL atMaxTime;                                                      //@synthesize atMaxTime=_atMaxTime - In the implementation block
@property (assign,getter=isAtMinTime,nonatomic) BOOL atMinTime;                                                      //@synthesize atMinTime=_atMinTime - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                      //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                      //@synthesize observationController=_observationController - In the implementation block
@property (assign,nonatomic) CGSize presentationSize;                                                                //@synthesize presentationSize=_presentationSize - In the implementation block
@property (nonatomic,retain) AVAsset * currentAssetIfReady;                                                          //@synthesize currentAssetIfReady=_currentAssetIfReady - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetInspectionQueue;                                      //@synthesize assetInspectionQueue=_assetInspectionQueue - In the implementation block
@property (nonatomic,retain) AVAsset * assetBeingPrepared;                                                           //@synthesize assetBeingPrepared=_assetBeingPrepared - In the implementation block
@property (assign,getter=isPictureInPictureSupported,nonatomic) BOOL pictureInPictureSupported;                      //@synthesize pictureInPictureSupported=_pictureInPictureSupported - In the implementation block
@property (getter=isReadyToPlay,nonatomic,readonly) BOOL readyToPlay; 
@property (nonatomic,retain) AVValueTiming * timing;                                                                 //@synthesize timing=_timing - In the implementation block
@property (nonatomic,retain) AVValueTiming * minTiming;                                                              //@synthesize minTiming=_minTiming - In the implementation block
@property (nonatomic,retain) AVValueTiming * maxTiming;                                                              //@synthesize maxTiming=_maxTiming - In the implementation block
@property (nonatomic,retain) AVAssetTrack * currentAudioTrack;                                                       //@synthesize currentAudioTrack=_currentAudioTrack - In the implementation block
@property (getter=isSeekingInternal) BOOL seekingInternal;                                                           //@synthesize seekingInternal=_seekingInternal - In the implementation block
@property (assign,getter=isSeeking,nonatomic) BOOL seeking;                                                          //@synthesize seeking=_seeking - In the implementation block
@property (assign) SCD_Struct_AV1 seekToTimeInternal;                                                                //@synthesize seekToTimeInternal=_seekToTimeInternal - In the implementation block
@property (assign,nonatomic) double seekToTime;                                                                      //@synthesize seekToTime=_seekToTime - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                                                //@synthesize metadata=_metadata - In the implementation block
@property (assign,getter=isComposable,nonatomic) BOOL composable;                                                    //@synthesize composable=_composable - In the implementation block
@property (assign,nonatomic) BOOL hasProtectedContent;                                                               //@synthesize hasProtectedContent=_hasProtectedContent - In the implementation block
@property (nonatomic,retain) NSArray * availableMetadataFormats;                                                     //@synthesize availableMetadataFormats=_availableMetadataFormats - In the implementation block
@property (assign,getter=isCompatibleWithAirPlayVideo,nonatomic) BOOL compatibleWithAirPlayVideo;                    //@synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo - In the implementation block
@property (assign,nonatomic) double rateBeforeScrubBegan;                                                            //@synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan - In the implementation block
@property (assign,getter=isPreventingIdleSystemSleep,nonatomic) BOOL preventingIdleSystemSleep;                      //@synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep - In the implementation block
@property (assign,getter=isPreventingIdleDisplaySleep,nonatomic) BOOL preventingIdleDisplaySleep;                    //@synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep - In the implementation block
@property (assign,getter=isDisablingAutomaticTermination,nonatomic) BOOL disablingAutomaticTermination;              //@synthesize disablingAutomaticTermination=_disablingAutomaticTermination - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback;                                                    //@synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback - In the implementation block
@property (assign,getter=isPictureInPictureActive,nonatomic) BOOL pictureInPictureActive;                            //@synthesize pictureInPictureActive=_pictureInPictureActive - In the implementation block
@property (assign,nonatomic) BOOL canTogglePictureInPicture;                                                         //@synthesize canTogglePictureInPicture=_canTogglePictureInPicture - In the implementation block
@property (assign,nonatomic) BOOL hasBegunInspection;                                                                //@synthesize hasBegunInspection=_hasBegunInspection - In the implementation block
@property (nonatomic,retain) BSSimpleAssertion * reduceResourceUsageAssertion; 
@property (assign,nonatomic,__weak) AVPlayerLayer * playerLayerForReducingResources;                                 //@synthesize playerLayerForReducingResources=_playerLayerForReducingResources - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> seekTimer;                                              //@synthesize seekTimer=_seekTimer - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) NSDate * currentOrEstimatedDate; 
@property (assign,nonatomic) long long bestAvailableVideoResolution;                                                 //@synthesize bestAvailableVideoResolution=_bestAvailableVideoResolution - In the implementation block
@property (assign,nonatomic) long long bestAvailableVideoRange;                                                      //@synthesize bestAvailableVideoRange=_bestAvailableVideoRange - In the implementation block
@property (assign,nonatomic) long long bestAvailableAudioFormat;                                                     //@synthesize bestAvailableAudioFormat=_bestAvailableAudioFormat - In the implementation block
@property (assign,nonatomic) double defaultPlaybackRate; 
@property (assign,nonatomic) BOOL touchBarRequiresLinearPlayback; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
+(void)initialize;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)keyPathsForValuesAffectingStatus;
+(id)keyPathsForValuesAffectingReadyToPlay;
+(id)keyPathsForValuesAffectingError;
+(id)keyPathsForValuesAffectingCompletelySeekable;
+(id)keyPathsForValuesAffectingRate;
+(id)keyPathsForValuesAffectingCanPlay;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingCanPause;
+(id)keyPathsForValuesAffectingCanTogglePlayback;
+(id)keyPathsForValuesAffectingVolume;
+(id)keyPathsForValuesAffectingMuted;
+(id)keyPathsForValuesAffectingHasContent;
+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingMinTime;
+(id)keyPathsForValuesAffectingReversePlaybackEndTime;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+(id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingSeekableTimeRanges;
+(id)keyPathsForValuesAffectingLoadedTimeRanges;
+(id)keyPathsForValuesAffectingHasEnabledAudio;
+(id)keyPathsForValuesAffectingHasVideo;
+(id)keyPathsForValuesAffectingHasEnabledVideo;
+(id)keyPathsForValuesAffectingStreaming;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+(id)keyPathsForValuesAffectingHasTrimmableContent;
+(id)keyPathsForValuesAffectingHasShareableContent;
+(id)keyPathsForValuesAffectingTimeControlStatus;
+(id)keyPathsForValuesAffectingCanSeek;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanScanBackward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingCanSeekFrameForward;
+(id)keyPathsForValuesAffectingCanSeekFrameBackward;
+(id)keyPathsForValuesAffectingAllowsExternalPlayback;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+(id)keyPathsForValuesAffectingExternalPlaybackActive;
+(id)keyPathsForValuesAffectingExternalPlaybackType;
+(id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingUsesExternalPlaybackWhileExternalScreenIsActive;
+(id)keyPathsForValuesAffectingPreferredDisplayCriteria;
+(id)keyPathsForValuesAffectingMaximumVideoResolution;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
-(id)init;
-(void)dealloc;
-(void)setObservationInfo:(void*)arg1 ;
-(NSError *)error;
-(double)startTime;
-(id)loadedTimeRanges;
-(void*)observationInfo;
-(long long)status;
-(NSDictionary *)metadata;
-(BOOL)hasProtectedContent;
-(AVPlayerItem *)currentItem;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)isPlaying;
-(double)currentTime;
-(void)play:(id)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)hasContent;
-(NSDate *)currentDate;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(long long)timeControlStatus;
-(id)seekableTimeRanges;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(BOOL)isExternalPlaybackActive;
-(long long)externalPlaybackType;
-(BOOL)allowsExternalPlayback;
-(double)defaultPlaybackRate;
-(void)setDefaultPlaybackRate:(double)arg1 ;
-(AVValueTiming *)timing;
-(BOOL)canPause;
-(void)setTiming:(AVValueTiming *)arg1 ;
-(AVAssetTrack *)currentAudioTrack;
-(void)setCurrentAudioTrack:(AVAssetTrack *)arg1 ;
-(float)nominalFrameRate;
-(BOOL)isStreaming;
-(id)_queuePlayer;
-(BOOL)hasVideo;
-(void)seekToTime:(double)arg1 ;
-(CGSize)presentationSize;
-(SCD_Struct_AV1)forwardPlaybackEndTime;
-(void)setForwardPlaybackEndTime:(SCD_Struct_AV1)arg1 ;
-(double)maxTime;
-(AVQueuePlayer *)queuePlayer;
-(BOOL)isPictureInPictureActive;
-(BOOL)isPictureInPictureSupported;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
-(BOOL)isPictureInPicturePossible;
-(double)contentDuration;
-(BOOL)isPictureInPictureInterrupted;
-(double)timeFromDisplayTime:(double)arg1 ;
-(double)displayTimeFromTime:(double)arg1 ;
-(double)currentDisplayTime;
-(NSDate *)currentOrEstimatedDate;
-(SCD_Struct_AV1)timeToSeekAfterUserNavigatedFromTime:(double)arg1 toTime:(double)arg2 ;
-(AVDelegateManager *)delegateManager;
-(void)setDelegateManager:(AVDelegateManager *)arg1 ;
-(id)kvoPlayerItem;
-(BOOL)isSeeking;
-(void)setSeeking:(BOOL)arg1 ;
-(BOOL)isScrubbing;
-(BOOL)allowsPictureInPicturePlayback;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(id)kvoPlayer;
-(AVInterstitialController *)interstitialController;
-(AVTimeRange *)timeRangeSeekable;
-(double)longestSeekableDurationSeenForCurrentItem;
-(long long)currentSeekReason;
-(double)contentDurationCached;
-(BOOL)isContentDurationIndefinite;
-(NSDate *)programStartDate;
-(void)setProgramStartDate:(NSDate *)arg1 ;
-(NSDate *)programEndDate;
-(void)setProgramEndDate:(NSDate *)arg1 ;
-(id)clientSpecifiedDate;
-(void)setClientSpecifiedDate:(id)arg1 ;
-(id)tvExtras;
-(void)_nukeTVExtras;
-(void)_updateNavigationMarkers;
-(void)updateStartAndEndDates;
-(void)updateTimeRanges;
-(AVTimeRange *)timeRangeForNonLivePlayback;
-(AVTimeRange *)timeRangeForNavigation;
-(void)_durationDidChange;
-(double)displayedDuration;
-(BOOL)isLiveStreamEventModePossible;
-(BOOL)hasMoreEnqueuedContent;
-(long long)avkitMediaType;
-(void)_willBeginSeek;
-(void)_didEndSeek;
-(void)requestNavigateToTime:(double)arg1 fromTime:(double)arg2 reason:(long long)arg3 playWhenReady:(BOOL)arg4 permissionHandler:(/*^block*/id)arg5 seekCompletion:(/*^block*/id)arg6 ;
-(void)_willRequestSeek;
-(void)_didRequestSeek;
-(void)seekToTime:(double)arg1 seekReason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)seekToDate:(id)arg1 seekReason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)playbackEndTime;
-(BOOL)hasStartAndEndDates;
-(void)requestPlayWithCompletion:(/*^block*/id)arg1 ;
-(void)requestSeekToDate:(id)arg1 seekReason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestSeekToTime:(double)arg1 seekReason:(long long)arg2 permissionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)requestPauseWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadEmbeddedChapterNavigationMarkersGroupAsynchronously:(/*^block*/id)arg1 ;
-(BOOL)isFirstUnfilteredNavigationGroupChapters;
-(BOOL)isFirstFilteredNavigationGroupChapters;
-(NSArray *)externalNavigationMarkerGroups;
-(AVNavigationMarkersGroup *)embeddedChapterNavigationMarkersGroup;
-(id)initWithTVPlayer:(id)arg1 ;
-(void)invalidateTV;
-(BOOL)linearPlaybackRequiredByInterstitial:(id)arg1 ;
-(AVTimeRange *)displayTimeRangeForNavigation;
-(BOOL)isEffectiveRateNonZero;
-(void)setEffectiveRateNonZero:(BOOL)arg1 ;
-(NSDate *)exactStartDate;
-(NSDate *)exactEndDate;
-(BOOL)shouldBounceBackAfterScanForwardPastEndTime;
-(double)bounceBackReturningDisplayTime;
-(void)loadAspectRatio:(/*^block*/id)arg1 ;
-(BOOL)shouldContinuePlaybackInBackground;
-(BOOL)isSeekingTV;
-(BOOL)playerItem:(id)arg1 shouldSeekToTime:(SCD_Struct_AV1*)arg2 toleranceBefore:(SCD_Struct_AV1*)arg3 toleranceAfter:(SCD_Struct_AV1*)arg4 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(void)requestSeekToTime:(double)arg1 reason:(long long)arg2 playWhenReady:(BOOL)arg3 ;
-(void)requestSeekToDate:(id)arg1 reason:(long long)arg2 playWhenReady:(BOOL)arg3 ;
-(void)requestNavigateToDate:(id)arg1 fromDate:(id)arg2 reason:(long long)arg3 playWhenReady:(BOOL)arg4 permissionHandler:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)setLimitReadAheadIfAllowed:(BOOL)arg1 ;
-(id)externalChapterNavigationMarkersGroup;
-(AVNavigationMarkersGroup *)primaryNavigationMarkersGroup;
-(void)setPlaying:(BOOL)arg1 ;
-(id)_videoAssetTracks;
-(void)_updateVideoResolutionAndRange;
-(id)_audioAssetTracks;
-(void)updateVideoResolutionAndRange;
-(void)updateAudioFormats;
-(void)togglePlayback:(id)arg1 ;
-(void)setPictureInPictureActive:(BOOL)arg1 ;
-(AVObservationController *)observationController;
-(void)startInspectionIfNeeded;
-(void)startKVO;
-(BOOL)isReadyToPlay;
-(BOOL)isCompletelySeekable;
-(void)_observeValueForKeyPath:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(void)_retryPlayImmediatelyIfNeeded;
-(BOOL)canPlayImmediately;
-(BOOL)canPlay;
-(void)autoplay:(id)arg1 ;
-(void)pause:(id)arg1 ;
-(BOOL)canTogglePlayback;
-(BOOL)touchBarRequiresLinearPlayback;
-(void)setTouchBarRequiresLinearPlayback:(BOOL)arg1 ;
-(BOOL)isLooping;
-(void)setLooping:(BOOL)arg1 ;
-(void)updateAtMinMaxTime;
-(void)increaseVolume:(id)arg1 ;
-(void)decreaseVolume:(id)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(BOOL)isInspectionSuspended;
-(void)setInspectionSuspended:(BOOL)arg1 ;
-(CGSize)contentDimensions;
-(double)minTime;
-(void)setMinTime:(double)arg1 ;
-(SCD_Struct_AV1)reversePlaybackEndTime;
-(void)setReversePlaybackEndTime:(SCD_Struct_AV1)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(void)_setMinTiming:(id)arg1 maxTiming:(id)arg2 ;
-(double)contentDurationWithinEndTimes;
-(double)currentTimeWithinEndTimes;
-(BOOL)hasEnabledAudio;
-(BOOL)hasEnabledVideo;
-(BOOL)hasContentChapters;
-(BOOL)hasLiveStreamingContent;
-(BOOL)hasSeekableLiveStreamingContent;
-(BOOL)hasTrimmableContent;
-(BOOL)hasShareableContent;
-(BOOL)_assetIsRestrictedFromSaving:(id)arg1 ;
-(id)audioWaveform;
-(BOOL)_assetIsMarkedNotSerializable:(id)arg1 ;
-(BOOL)_assetContainsProResRaw:(id)arg1 ;
-(void)_updateCurrentAudioTrackIfNeeded;
-(BOOL)canSeek;
-(void)beginScrubbing;
-(void)endScrubbing;
-(void)seekToCMTime:(SCD_Struct_AV1)arg1 toleranceBefore:(SCD_Struct_AV1)arg2 toleranceAfter:(SCD_Struct_AV1)arg3 ;
-(void)throttledSeekToTime:(SCD_Struct_AV1)arg1 toleranceBefore:(SCD_Struct_AV1)arg2 toleranceAfter:(SCD_Struct_AV1)arg3 ;
-(void)actuallySeekToTime;
-(void)seekByTimeInterval:(double)arg1 ;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(BOOL)canScanForward;
-(void)scanForward:(id)arg1 ;
-(void)beginScanningForward:(id)arg1 ;
-(void)_updateScanningForwardRate;
-(void)endScanningForward:(id)arg1 ;
-(BOOL)canScanBackward;
-(void)scanBackward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)_updateScanningBackwardRate;
-(void)endScanningBackward:(id)arg1 ;
-(BOOL)canSeekToBeginning;
-(void)seekToBeginning:(id)arg1 ;
-(BOOL)canSeekToEnd;
-(void)seekToEnd:(id)arg1 ;
-(BOOL)canSeekFrameForward;
-(void)seekFrameForward:(id)arg1 ;
-(BOOL)canSeekFrameBackward;
-(void)seekFrameBackward:(id)arg1 ;
-(void)seekOrStepByFrameCount:(long long)arg1 ;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(void)updateTiming;
-(void)updateMinMaxTiming;
-(BOOL)isPlayingOnExternalScreen;
-(BOOL)isPlayingOnSecondScreen;
-(id)externalPlaybackAirPlayDeviceLocalizedName;
-(void)setPictureInPictureInterrupted:(BOOL)arg1 ;
-(void)togglePictureInPicture:(id)arg1 ;
-(void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)arg1 ;
-(void)endReducingResourcesForPictureInPicturePlayerLayer:(id)arg1 ;
-(void)acquireResourceReductionAssertion;
-(void)setReduceResourceUsageAssertion:(BSSimpleAssertion *)arg1 ;
-(BSSimpleAssertion *)reduceResourceUsageAssertion;
-(BOOL)isReducingResourcesForPictureInPicture;
-(void)startUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)stopUsingNetworkResourcesForLiveStreamingWhilePaused;
-(BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg1 ;
-(id)_timecodeTrack;
-(void)_cancelPendingSeeksIfNeeded;
-(void)_updateRateForScrubbingAndSeeking;
-(id)scanningDelays;
-(void)_prepareAssetForInspectionIfNeeded;
-(BOOL)isAtMaxTime;
-(void)setAtMaxTime:(BOOL)arg1 ;
-(BOOL)isAtMinTime;
-(void)setAtMinTime:(BOOL)arg1 ;
-(void)setScrubbing:(BOOL)arg1 ;
-(void)setPresentationSize:(CGSize)arg1 ;
-(AVAsset *)currentAssetIfReady;
-(void)setCurrentAssetIfReady:(AVAsset *)arg1 ;
-(NSObject*<OS_dispatch_queue>)assetInspectionQueue;
-(void)setAssetInspectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AVAsset *)assetBeingPrepared;
-(void)setAssetBeingPrepared:(AVAsset *)arg1 ;
-(void)setPictureInPictureSupported:(BOOL)arg1 ;
-(AVValueTiming *)minTiming;
-(void)setMinTiming:(AVValueTiming *)arg1 ;
-(AVValueTiming *)maxTiming;
-(void)setMaxTiming:(AVValueTiming *)arg1 ;
-(BOOL)isSeekingInternal;
-(void)setSeekingInternal:(BOOL)arg1 ;
-(SCD_Struct_AV1)seekToTimeInternal;
-(void)setSeekToTimeInternal:(SCD_Struct_AV1)arg1 ;
-(double)seekToTime;
-(void)setSeekToTime:(double)arg1 ;
-(BOOL)isComposable;
-(void)setComposable:(BOOL)arg1 ;
-(void)setHasProtectedContent:(BOOL)arg1 ;
-(NSArray *)availableMetadataFormats;
-(void)setAvailableMetadataFormats:(NSArray *)arg1 ;
-(BOOL)isCompatibleWithAirPlayVideo;
-(void)setCompatibleWithAirPlayVideo:(BOOL)arg1 ;
-(double)rateBeforeScrubBegan;
-(void)setRateBeforeScrubBegan:(double)arg1 ;
-(BOOL)isPreventingIdleSystemSleep;
-(void)setPreventingIdleSystemSleep:(BOOL)arg1 ;
-(BOOL)isPreventingIdleDisplaySleep;
-(void)setPreventingIdleDisplaySleep:(BOOL)arg1 ;
-(BOOL)isDisablingAutomaticTermination;
-(void)setDisablingAutomaticTermination:(BOOL)arg1 ;
-(BOOL)canTogglePictureInPicture;
-(void)setCanTogglePictureInPicture:(BOOL)arg1 ;
-(BOOL)hasBegunInspection;
-(void)setHasBegunInspection:(BOOL)arg1 ;
-(AVPlayerLayer *)playerLayerForReducingResources;
-(void)setPlayerLayerForReducingResources:(AVPlayerLayer *)arg1 ;
-(NSObject*<OS_dispatch_source>)seekTimer;
-(long long)bestAvailableVideoResolution;
-(void)setBestAvailableVideoResolution:(long long)arg1 ;
-(long long)bestAvailableVideoRange;
-(void)setBestAvailableVideoRange:(long long)arg1 ;
-(long long)bestAvailableAudioFormat;
-(void)setBestAvailableAudioFormat:(long long)arg1 ;
-(BOOL)handlesAudioSessionInterruptions;
-(id)preferredDisplayCriteria;
-(CGSize)maximumVideoResolution;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(void)setHandlesAudioSessionInterruptions:(BOOL)arg1 ;
-(id)legibleOptions;
-(void)setLegibleMediaSelectionOptions:(id)arg1 audioMediaSelectionOptions:(id)arg2 assumeMediaOptionMayHaveChanged:(BOOL)arg3 ;
-(id)_optionsForGroup:(id)arg1 ;
-(BOOL)hasAudioMediaSelectionOptions;
-(BOOL)hasLegibleMediaSelectionOptions;
-(void)_performAutomaticMediaSelectionForUserCaptionDisplayType:(long long)arg1 ;
-(BOOL)hasMediaSelectionOptions;
-(id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
-(void)setCurrentAudioMediaSelectionOption:(id)arg1 ;
-(id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg1 ;
-(void)selectedMediaOptionMayHaveChanged;
-(void)reloadOptions;
-(void)reloadOptionsAndCurrentSelections;
-(void)reloadAudioOptions;
-(void)reloadLegibleOptions;
-(id)audioMediaSelectionOptions;
-(void)setAudioMediaSelectionOptions:(id)arg1 ;
-(void)setLegibleMediaSelectionOptions:(id)arg1 ;
-(void)selectedMediaOptionMayHaveChanged:(BOOL)arg1 ;
-(id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1 ;
-(void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2 ;
-(id)legibleMediaSelectionOptions;
-(BOOL)_mediaSelectionCriteriaCanBeAppliedAutomaticallyToLegibleMediaSelectionGroup;
-(void)_disableLegibleMediaSelectionOptions:(id)arg1 ;
-(void)_enableAutoMediaSelection:(id)arg1 ;
-(void)_ensureUserCaptionDisplayType:(long long)arg1 ;
-(id)currentLegibleMediaSelectionOption;
-(id)currentAudioMediaSelectionOption;
-(void)reloadOptionsAssumingMediaOptionsMayHaveChanged:(BOOL)arg1 ;
-(id)audioOptions;
@end

