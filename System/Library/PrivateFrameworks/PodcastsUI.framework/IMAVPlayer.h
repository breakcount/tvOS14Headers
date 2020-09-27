/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <libobjc.A.dylib/AVAudioSessionDelegate.h>

@protocol IMAVPlayerDelegate, OS_dispatch_source;
@class MPNowPlayingInfoCenter, MPRemoteCommandCenter, AVPlayer, AVPlayerItem, IMPlayerManifest, IMPlayerItem, IMAVPlayerVideoViewController, NSURL, NSTimer, NSMutableArray, NSObject, AVPlayerLayer, UIWindow, IMPlayerChapterInfo, NSString;

@interface IMAVPlayer : NSObject <AVAudioSessionDelegate> {

	BOOL _providesVideoView;
	BOOL _externalDisplay;
	BOOL _scrubbing;
	BOOL _timeObserverNeedsUpdate;
	BOOL _seekForward;
	BOOL _isUpdatingCurrentTime;
	BOOL _wasInterrupted;
	BOOL _wasInterruptedEarly;
	BOOL _stateChangeInterruptionFlag;
	int _loops;
	struct {
		unsigned delegateStateChanged : 1;
		unsigned delegateErrorDidOccur : 1;
		unsigned delegateMediaTypeAvailable : 1;
		unsigned delegateDurationAvailable : 1;
		unsigned delegateCallbackForTime : 1;
		unsigned delegatePeriodicUpdate : 1;
		unsigned delegateHasDidChangePlayerItem : 1;
		unsigned delegateHasDidStopPlayerItem : 1;
		unsigned delegateHasDidEndedPlayerItem : 1;
		unsigned delegateLoadedDurationChanged : 1;
		unsigned delegateChapterStarted : 1;
		unsigned delegateCurrentManifestItemChanged : 1;
	}  _delegateFlags;
	float _scanRate;
	double _currentTime;
	id<IMAVPlayerDelegate> _delegate;
	MPNowPlayingInfoCenter* _infoCenter;
	MPRemoteCommandCenter* _commandCenter;
	unsigned long long _state;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	IMPlayerManifest* _manifest;
	IMPlayerItem* _currentItem;
	/*^block*/id _playbackErrorFallback;
	unsigned long long _autoStop;
	double _autoStopTimerTime;
	double _autoStopMediaTime;
	unsigned long long _videoScale;
	IMAVPlayerVideoViewController* _videoViewController;
	unsigned long long _currentChapterIndex;
	unsigned long long _chapterMetadataMode;
	unsigned long long _playbackSpeed;
	NSURL* _lastPlayingURL;
	unsigned long long _backgroundTask;
	NSTimer* _hdcpTimer;
	NSTimer* _seekTimer;
	NSMutableArray* _timeObservers;
	NSMutableArray* _observingTimes;
	NSObject*<OS_dispatch_source> _fadeOutTimer;
	id _periodicTimeObserver;
	id _nowPlayingInfoPeriodicTimeObserver;
	NSTimer* _autoStopTimer;
	double _autoStopTimerPausedTime;
	AVPlayerLayer* _videoLayer;
	UIWindow* _externalVideoWindow;

}

@property (nonatomic,retain) NSURL * lastPlayingURL;                                           //@synthesize lastPlayingURL=_lastPlayingURL - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTask;                                //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,retain) NSTimer * hdcpTimer;                                              //@synthesize hdcpTimer=_hdcpTimer - In the implementation block
@property (nonatomic,retain) NSTimer * seekTimer;                                              //@synthesize seekTimer=_seekTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * timeObservers;                                   //@synthesize timeObservers=_timeObservers - In the implementation block
@property (nonatomic,retain) NSMutableArray * observingTimes;                                  //@synthesize observingTimes=_observingTimes - In the implementation block
@property (assign,nonatomic) BOOL timeObserverNeedsUpdate;                                     //@synthesize timeObserverNeedsUpdate=_timeObserverNeedsUpdate - In the implementation block
@property (assign,nonatomic) BOOL seekForward;                                                 //@synthesize seekForward=_seekForward - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM0 delegateFlags;                                     //@synthesize delegateFlags=_delegateFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> fadeOutTimer;                       //@synthesize fadeOutTimer=_fadeOutTimer - In the implementation block
@property (nonatomic,retain) MPNowPlayingInfoCenter * infoCenter;                              //@synthesize infoCenter=_infoCenter - In the implementation block
@property (nonatomic,retain) MPRemoteCommandCenter * commandCenter;                            //@synthesize commandCenter=_commandCenter - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                        //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) id periodicTimeObserver;                                          //@synthesize periodicTimeObserver=_periodicTimeObserver - In the implementation block
@property (nonatomic,retain) id nowPlayingInfoPeriodicTimeObserver;                            //@synthesize nowPlayingInfoPeriodicTimeObserver=_nowPlayingInfoPeriodicTimeObserver - In the implementation block
@property (assign,nonatomic) BOOL isUpdatingCurrentTime;                                       //@synthesize isUpdatingCurrentTime=_isUpdatingCurrentTime - In the implementation block
@property (assign,nonatomic) float requestedRate; 
@property (assign,nonatomic) BOOL wasInterrupted;                                              //@synthesize wasInterrupted=_wasInterrupted - In the implementation block
@property (assign,nonatomic) BOOL wasInterruptedEarly;                                         //@synthesize wasInterruptedEarly=_wasInterruptedEarly - In the implementation block
@property (assign,nonatomic) BOOL stateChangeInterruptionFlag;                                 //@synthesize stateChangeInterruptionFlag=_stateChangeInterruptionFlag - In the implementation block
@property (nonatomic,retain) NSTimer * autoStopTimer;                                          //@synthesize autoStopTimer=_autoStopTimer - In the implementation block
@property (assign,nonatomic) double autoStopTimerPausedTime;                                   //@synthesize autoStopTimerPausedTime=_autoStopTimerPausedTime - In the implementation block
@property (nonatomic,retain) IMAVPlayerVideoViewController * videoViewController;              //@synthesize videoViewController=_videoViewController - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * videoLayer;                                       //@synthesize videoLayer=_videoLayer - In the implementation block
@property (nonatomic,retain) UIWindow * externalVideoWindow;                                   //@synthesize externalVideoWindow=_externalVideoWindow - In the implementation block
@property (assign,nonatomic) float scanRate;                                                   //@synthesize scanRate=_scanRate - In the implementation block
@property (assign,nonatomic,__weak) id<IMAVPlayerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long loadState; 
@property (nonatomic,readonly) BOOL isPlaybackRequested; 
@property (nonatomic,readonly) BOOL isPlaybackActive; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) float actualRate; 
@property (nonatomic,readonly) double loadedDuration; 
@property (nonatomic,readonly) BOOL bufferEmpty; 
@property (nonatomic,readonly) IMPlayerManifest * manifest;                                    //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,retain) IMPlayerItem * currentItem;                                       //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,copy) id playbackErrorFallback;                                           //@synthesize playbackErrorFallback=_playbackErrorFallback - In the implementation block
@property (assign,nonatomic) double currentTime;                                               //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) unsigned long long autoStop;                                      //@synthesize autoStop=_autoStop - In the implementation block
@property (assign,nonatomic) double autoStopTimerTime;                                         //@synthesize autoStopTimerTime=_autoStopTimerTime - In the implementation block
@property (assign,nonatomic) double autoStopMediaTime;                                         //@synthesize autoStopMediaTime=_autoStopMediaTime - In the implementation block
@property (nonatomic,readonly) double autoStopTimeRemaining; 
@property (assign,nonatomic) BOOL providesVideoView;                                           //@synthesize providesVideoView=_providesVideoView - In the implementation block
@property (nonatomic,readonly) BOOL airplayVideoActive; 
@property (assign,nonatomic) BOOL shouldEnforceHDCP; 
@property (assign,nonatomic) unsigned long long videoScale;                                    //@synthesize videoScale=_videoScale - In the implementation block
@property (nonatomic,readonly) BOOL externalDisplay;                                           //@synthesize externalDisplay=_externalDisplay - In the implementation block
@property (assign,nonatomic) unsigned long long currentChapterIndex;                           //@synthesize currentChapterIndex=_currentChapterIndex - In the implementation block
@property (nonatomic,readonly) IMPlayerChapterInfo * currentChapter; 
@property (nonatomic,readonly) unsigned long long chapterCount; 
@property (assign,nonatomic) unsigned long long chapterMetadataMode;                           //@synthesize chapterMetadataMode=_chapterMetadataMode - In the implementation block
@property (assign,nonatomic) int loops;                                                        //@synthesize loops=_loops - In the implementation block
@property (assign,nonatomic) BOOL scrubbing;                                                   //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,readonly) BOOL isSeeking; 
@property (nonatomic,readonly) BOOL isScanning; 
@property (assign,nonatomic) unsigned long long playbackSpeed;                                 //@synthesize playbackSpeed=_playbackSpeed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)performOnMainQueue:(/*^block*/id)arg1 ;
+(void)_configureAudioSessionWithCompletion:(/*^block*/id)arg1 ;
+(void)performOnAvSessionQueue:(/*^block*/id)arg1 ;
+(float)rateForPlaybackSpeed:(unsigned long long)arg1 ;
+(void)configureAudioSessionAndSetActive:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)sharedPlayer;
+(unsigned long long)playbackSpeedForRate:(float)arg1 ;
+(unsigned long long)incrementPlaybackSpeed:(unsigned long long)arg1 ;
+(unsigned long long)decrementPlaybackSpeed:(unsigned long long)arg1 ;
+(BOOL)isMaxSpeed:(unsigned long long)arg1 ;
+(BOOL)isMinSpeed:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id<IMAVPlayerDelegate>)delegate;
-(void)setDelegate:(id<IMAVPlayerDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)pause;
-(BOOL)isAtEnd;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(double)duration;
-(void)setCurrentItem:(IMPlayerItem *)arg1 ;
-(IMPlayerItem *)currentItem;
-(BOOL)isStalled;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerLayer *)videoLayer;
-(void)setVideoLayer:(AVPlayerLayer *)arg1 ;
-(BOOL)isScanning;
-(float)scanRate;
-(void)setScanRate:(float)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)play;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)removeTimeObserver:(double)arg1 ;
-(void)endBackgroundTask;
-(IMPlayerManifest *)manifest;
-(unsigned long long)playbackSpeed;
-(void)setPlaybackSpeed:(unsigned long long)arg1 ;
-(BOOL)wasInterrupted;
-(BOOL)_pause;
-(unsigned long long)chapterCount;
-(void)endSeek;
-(void)setBackgroundTask:(unsigned long long)arg1 ;
-(void)nextMediaItem;
-(void)previousMediaItem;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(BOOL)shouldEnforceHDCP;
-(void)setShouldEnforceHDCP:(BOOL)arg1 ;
-(unsigned long long)currentChapterIndex;
-(void)setCurrentChapterIndex:(unsigned long long)arg1 ;
-(BOOL)isSeeking;
-(void)setScrubbing:(BOOL)arg1 ;
-(NSTimer *)seekTimer;
-(MPRemoteCommandCenter *)commandCenter;
-(void)setCommandCenter:(MPRemoteCommandCenter *)arg1 ;
-(BOOL)scrubbing;
-(int)loops;
-(void)setLoops:(int)arg1 ;
-(void)fadeOutWithDuration:(double)arg1 ;
-(MPNowPlayingInfoCenter *)infoCenter;
-(void)previousChapter;
-(void)nextChapter;
-(void)_setCurrentTime:(double)arg1 ;
-(void)sleep;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(unsigned long long)videoScale;
-(void)setVideoScale:(unsigned long long)arg1 ;
-(void)fadeOut;
-(void)scanWithRate:(float)arg1 ;
-(void)setDelegateFlags:(SCD_Struct_IM0)arg1 ;
-(SCD_Struct_IM0)delegateFlags;
-(void)setState:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)loadState;
-(void)setInfoCenter:(MPNowPlayingInfoCenter *)arg1 ;
-(void)setChapterMetadataMode:(unsigned long long)arg1 ;
-(void)setProvidesVideoView:(BOOL)arg1 ;
-(void)setVideoViewController:(IMAVPlayerVideoViewController *)arg1 ;
-(void)_createPlayer;
-(float)storedVolume;
-(void)handleAudioSessionInterruption:(id)arg1 ;
-(void)onRouteChange:(id)arg1 ;
-(void)resetPlayer:(id)arg1 ;
-(void)handlePlayerInterruption:(id)arg1 ;
-(void)_failedToPlayToEndNotification:(id)arg1 ;
-(void)onChaptersLoaded:(id)arg1 ;
-(void)setManifest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllTimeObservers;
-(void)removePeriodicTimeObservers;
-(void)enforceAutoStopForMode:(unsigned long long)arg1 ;
-(void)manifestCurrentItemDidChange;
-(unsigned long long)autoStop;
-(void)_primitiveSetCurrentItem:(id)arg1 ;
-(void)_updatePlayerForCurrentItem;
-(void)stopObservingPlayerItem:(id)arg1 ;
-(void)setIsUpdatingCurrentTime:(BOOL)arg1 ;
-(BOOL)isPlaybackRequested;
-(void)clearAutoStop;
-(void)addPeriodicTimeObservers;
-(void)updateRateForCurrentState;
-(void)updateNowPlayingDurationSnapshot;
-(void)updateRateForCurrentState:(/*^block*/id)arg1 ;
-(void)cancelFadeOut;
-(void)cancelSeek;
-(void)_pauseAutoStopTimer;
-(void)setRequestedRate:(float)arg1 ;
-(void)becomeActiveMediaPlayer;
-(void)beginBackgroundTask;
-(void)_setupAutoStopTimer;
-(void)updateTimeObservers;
-(BOOL)hasChapters;
-(BOOL)previousRemote:(BOOL)arg1 ;
-(SCD_Struct_IM2)_skipToPreviousThreshold;
-(IMPlayerChapterInfo *)currentChapter;
-(void)setCurrentTime:(double)arg1 fromMediaRemote:(BOOL)arg2 ;
-(void)hdcpTimer:(id)arg1 ;
-(BOOL)_validatePlay;
-(void)setStateChangeInterruptionFlag:(BOOL)arg1 ;
-(void)setWasInterruptedEarly:(BOOL)arg1 ;
-(void)fadeOutWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPlaybackActive;
-(void)setWasInterrupted:(BOOL)arg1 ;
-(float)actualRate;
-(void)updateInfoCenterPlaybackState;
-(unsigned long long)backgroundTask;
-(BOOL)wasInterruptedEarly;
-(void)clearTimeObservers;
-(BOOL)providesVideoView;
-(IMAVPlayerVideoViewController *)videoViewController;
-(void)_durationAvailable;
-(void)_updateForCurrentRateAndTimeControlStatus;
-(id)playbackErrorFallback;
-(float)requestedRate;
-(void)sendItemEndedNotification;
-(void)sendPeriodicTimeEvent:(double)arg1 duration:(double)arg2 finished:(BOOL)arg3 ;
-(BOOL)isDurationReady;
-(BOOL)isUpdatingCurrentTime;
-(void)_updatePlayerToCurrentTime:(/*^block*/id)arg1 ;
-(void)_updatePlayerTimeCompleted:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceTriggerTimeObserverAt:(double)arg1 ;
-(void)onSeekTimer:(id)arg1 ;
-(void)addCMTimeObserver:(SCD_Struct_IM1)arg1 ;
-(void)removeCMTimeObserver:(SCD_Struct_IM1)arg1 ;
-(id)periodicTimeObserver;
-(void)setPeriodicTimeObserver:(id)arg1 ;
-(id)nowPlayingInfoPeriodicTimeObserver;
-(void)setNowPlayingInfoPeriodicTimeObserver:(id)arg1 ;
-(double)autoStopMediaTime;
-(void)_assertMainThread;
-(void)setupTimeObserver:(id)arg1 ;
-(void)triggerTimeObserverAt:(id)arg1 ;
-(void)setupChapterAtTime:(double)arg1 ;
-(unsigned long long)chapterMetadataMode;
-(void)_setChapterIndex:(unsigned long long)arg1 ;
-(void)updateNowPlayingMetadataIncludingArtwork:(BOOL)arg1 ;
-(void)setupChapterTimeObservers;
-(void)_clearAutoStopTimmer;
-(double)autoStopTimerPausedTime;
-(NSTimer *)autoStopTimer;
-(double)autoStopTimerTime;
-(void)_autoStopTimerFired;
-(void)setAutoStopTimer:(NSTimer *)arg1 ;
-(void)setAutoStopTimerPausedTime:(double)arg1 ;
-(double)autoStopTimeRemaining;
-(void)setAutoStopTimerTime:(double)arg1 ;
-(void)registerAVSessionCategoryAndMode;
-(BOOL)nextRemote;
-(BOOL)previousRemote;
-(void)setCurrentTimeRemote:(double)arg1 ;
-(void)play:(/*^block*/id)arg1 interruptionEvent:(BOOL)arg2 ;
-(BOOL)_pause:(BOOL)arg1 ;
-(BOOL)togglePlayPause;
-(void)toggleVideoAspectScaleMode;
-(id)stillFrameAt:(double)arg1 maxSize:(CGSize)arg2 scale:(double)arg3 ;
-(BOOL)airplayVideoActive;
-(void)startSeek:(BOOL)arg1 ;
-(double)loadedDuration;
-(BOOL)bufferEmpty;
-(void)addTimeObserver:(double)arg1 ;
-(void)setAutoStop:(unsigned long long)arg1 ;
-(void)setPlaybackErrorFallback:(id)arg1 ;
-(void)setAutoStopMediaTime:(double)arg1 ;
-(BOOL)externalDisplay;
-(NSURL *)lastPlayingURL;
-(void)setLastPlayingURL:(NSURL *)arg1 ;
-(NSTimer *)hdcpTimer;
-(void)setHdcpTimer:(NSTimer *)arg1 ;
-(void)setSeekTimer:(NSTimer *)arg1 ;
-(NSMutableArray *)timeObservers;
-(void)setTimeObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observingTimes;
-(void)setObservingTimes:(NSMutableArray *)arg1 ;
-(BOOL)timeObserverNeedsUpdate;
-(void)setTimeObserverNeedsUpdate:(BOOL)arg1 ;
-(BOOL)seekForward;
-(void)setSeekForward:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)fadeOutTimer;
-(void)setFadeOutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)stateChangeInterruptionFlag;
-(UIWindow *)externalVideoWindow;
-(void)setExternalVideoWindow:(UIWindow *)arg1 ;
@end

