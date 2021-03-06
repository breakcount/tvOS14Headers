//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPCPlaybackEngineDelegate-Protocol.h"
#import "MPCPlaybackEngineEventObserving-Protocol.h"
#import "MTTVMusicPlayQueueDelegate-Protocol.h"
#import "TVPAVFPlayback-Protocol.h"

@class AVPlayer, MPAVItem, MPCPlaybackEngine, MPCPlaybackIntent, MPIdentifierSet, MTTVMusicPlayQueue, NSArray, NSDate, NSMutableArray, NSString, TVPAudioOption, TVPChapter, TVPChapterCollection, TVPDateRange, TVPInterstitial, TVPPlaybackState, TVPPlaylist, TVPSubtitleOption, TVPTimeRange;
@protocol OS_dispatch_queue, TVPASyncPlaybackDelegate, TVPMediaItem, TVPPlaybackDelegate;

@interface MTTVMusicPlayer : NSObject <MTTVMusicPlayQueueDelegate, MPCPlaybackEngineDelegate, MPCPlaybackEngineEventObserving, TVPAVFPlayback>
{
    id <TVPMediaItem> _currentMediaItem;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_mediaItemObservationQueue;	// 16 = 0x10
    _Bool _waitsAfterPreparingMediaItems;	// 24 = 0x18
    _Bool interactive;	// 25 = 0x19
    _Bool limitReadAhead;	// 26 = 0x1a
    _Bool muted;	// 27 = 0x1b
    _Bool updatesMediaRemoteInfoAutomatically;	// 28 = 0x1c
    _Bool preventsSleepDuringVideoPlayback;	// 29 = 0x1d
    _Bool currentMediaItemInitialLoadingComplete;	// 30 = 0x1e
    _Bool _elapsedTimeJumpInProgress;	// 31 = 0x1f
    _Bool _isStopped;	// 32 = 0x20
    _Bool _isLive;	// 33 = 0x21
    float volume;	// 36 = 0x24
    long long errorBehavior;	// 40 = 0x28
    TVPChapterCollection *currentChapterCollection;	// 48 = 0x30
    double rateUsedForPlayback;	// 56 = 0x38
    NSArray *subtitleOptions;	// 64 = 0x40
    double maximumBitRate;	// 72 = 0x48
    id <TVPASyncPlaybackDelegate> asyncDelegate;	// 80 = 0x50
    TVPSubtitleOption *selectedSubtitleOption;	// 88 = 0x58
    long long mediaItemEndAction;	// 96 = 0x60
    TVPInterstitial *currentInterstitial;	// 104 = 0x68
    NSArray *chapterCollections;	// 112 = 0x70
    TVPAudioOption *selectedAudioOption;	// 120 = 0x78
    double forwardPlaybackEndTime;	// 128 = 0x80
    NSDate *playbackDate;	// 136 = 0x88
    double reversePlaybackEndTime;	// 144 = 0x90
    TVPChapter *currentChapter;	// 152 = 0x98
    MTTVMusicPlayQueue *_playQueue;	// 160 = 0xa0
    MPCPlaybackEngine *_playbackEngine;	// 168 = 0xa8
    NSString *_name;	// 176 = 0xb0
    NSMutableArray *_elapsedTimeObservers;	// 184 = 0xb8
    AVPlayer *_avPlayer;	// 192 = 0xc0
    double _targetElapsedTime;	// 200 = 0xc8
    TVPPlaybackState *_state;	// 208 = 0xd0
    double _duration;	// 216 = 0xd8
    TVPTimeRange *_bufferedTimeRange;	// 224 = 0xe0
    MPAVItem *_currentAVItem;	// 232 = 0xe8
    MPIdentifierSet *_identifiersForLastPlayedContainer;	// 240 = 0xf0
    MPIdentifierSet *_identifiersForLastEndedPlaybackItem;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00000001000f88e4
@property(retain, nonatomic) MPIdentifierSet *identifiersForLastEndedPlaybackItem; // @synthesize identifiersForLastEndedPlaybackItem=_identifiersForLastEndedPlaybackItem;
@property(retain, nonatomic) MPIdentifierSet *identifiersForLastPlayedContainer; // @synthesize identifiersForLastPlayedContainer=_identifiersForLastPlayedContainer;
@property(retain, nonatomic) MPAVItem *currentAVItem; // @synthesize currentAVItem=_currentAVItem;
@property(retain, nonatomic) TVPTimeRange *bufferedTimeRange; // @synthesize bufferedTimeRange=_bufferedTimeRange;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) TVPPlaybackState *state; // @synthesize state=_state;
@property(nonatomic) double targetElapsedTime; // @synthesize targetElapsedTime=_targetElapsedTime;
@property(nonatomic) _Bool elapsedTimeJumpInProgress; // @synthesize elapsedTimeJumpInProgress=_elapsedTimeJumpInProgress;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) NSMutableArray *elapsedTimeObservers; // @synthesize elapsedTimeObservers=_elapsedTimeObservers;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) MTTVMusicPlayQueue *playQueue; // @synthesize playQueue=_playQueue;
@property(nonatomic) _Bool currentMediaItemInitialLoadingComplete; // @synthesize currentMediaItemInitialLoadingComplete;
@property(readonly, nonatomic) TVPChapter *currentChapter; // @synthesize currentChapter;
@property(readonly, nonatomic) double reversePlaybackEndTime; // @synthesize reversePlaybackEndTime;
@property(nonatomic) float volume; // @synthesize volume;
@property(copy, nonatomic) NSDate *playbackDate; // @synthesize playbackDate;
@property(readonly, nonatomic) double forwardPlaybackEndTime; // @synthesize forwardPlaybackEndTime;
@property(retain, nonatomic) TVPAudioOption *selectedAudioOption; // @synthesize selectedAudioOption;
@property(readonly, nonatomic) NSArray *chapterCollections; // @synthesize chapterCollections;
@property(readonly, nonatomic) TVPInterstitial *currentInterstitial; // @synthesize currentInterstitial;
@property(nonatomic) long long mediaItemEndAction; // @synthesize mediaItemEndAction;
@property(nonatomic) _Bool preventsSleepDuringVideoPlayback; // @synthesize preventsSleepDuringVideoPlayback;
@property(retain, nonatomic) TVPSubtitleOption *selectedSubtitleOption; // @synthesize selectedSubtitleOption;
@property(nonatomic) __weak id <TVPASyncPlaybackDelegate> asyncDelegate; // @synthesize asyncDelegate;
@property(nonatomic) double maximumBitRate; // @synthesize maximumBitRate;
@property(readonly, nonatomic) NSArray *subtitleOptions; // @synthesize subtitleOptions;
@property(nonatomic) _Bool updatesMediaRemoteInfoAutomatically; // @synthesize updatesMediaRemoteInfoAutomatically;
@property(nonatomic) _Bool waitsAfterPreparingMediaItems; // @synthesize waitsAfterPreparingMediaItems=_waitsAfterPreparingMediaItems;
@property(nonatomic) _Bool muted; // @synthesize muted;
@property(nonatomic) double rateUsedForPlayback; // @synthesize rateUsedForPlayback;
@property(nonatomic) _Bool limitReadAhead; // @synthesize limitReadAhead;
@property(retain, nonatomic) TVPChapterCollection *currentChapterCollection; // @synthesize currentChapterCollection;
@property(nonatomic) _Bool interactive; // @synthesize interactive;
@property(nonatomic) long long errorBehavior; // @synthesize errorBehavior;
- (void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3;	// IMP=0x00000001000f8688
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;	// IMP=0x00000001000f8530
- (_Bool)_getStringForTitleLabel:(id *)arg1 subtitleLabel:(id *)arg2 forMediaItem:(id)arg3;	// IMP=0x00000001000f83f4
- (void)_populatePlayerItem:(id)arg1 withMetadataFromMediaItem:(id)arg2;	// IMP=0x00000001000f7e90
- (id)_TVPPlaybackStateFromMCPPlayerState:(long long)arg1;	// IMP=0x00000001000f7d9c
- (void)_playerPathChanged:(id)arg1;	// IMP=0x00000001000f7d34
- (void)_itemChanged:(id)arg1;	// IMP=0x00000001000f7c3c
- (void)_itemReadyToPlay:(id)arg1;	// IMP=0x00000001000f7a2c
- (void)_loadedDurationDidChange:(id)arg1;	// IMP=0x00000001000f798c
- (void)engine:(id)arg1 willResetQueueWithPlaybackIntent:(id)arg2;	// IMP=0x00000001000f7988
- (void)_sendNotificationForError:(id)arg1 avItem:(id)arg2;	// IMP=0x00000001000f77a8
- (void)engine:(id)arg1 didFailToPlayItem:(id)arg2 withError:(id)arg3;	// IMP=0x00000001000f76e0
- (void)engine:(id)arg1 didFailToPlayFirstItem:(id)arg2;	// IMP=0x00000001000f7670
- (void)engineDidPauseForLeaseEnd:(id)arg1;	// IMP=0x00000001000f7618
- (void)_updateElapsedTimeObserversWithDurationSnapshot:(CDStruct_fce57115)arg1;	// IMP=0x00000001000f7448
- (void)playQueue:(id)arg1 didChangeDurationSnapshot:(CDStruct_fce57115)arg2;	// IMP=0x00000001000f7310
- (void)playQueue:(id)arg1 didChangeAVPlayer:(id)arg2;	// IMP=0x00000001000f7300
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000f7140
- (void)_setAVPlayer:(id)arg1;	// IMP=0x00000001000f6e24
- (void)playQueue:(id)arg1 didChangeFromPlayState:(long long)arg2 toPlayState:(long long)arg3;	// IMP=0x00000001000f6b84
- (void)playQueue:(id)arg1 didChangePlayingItem:(id)arg2;	// IMP=0x00000001000f6b74
- (void)playQueue:(id)arg1 didUpdateQueue:(id)arg2;	// IMP=0x00000001000f6a18
- (void)skipToNextChapterInDirection:(long long)arg1;	// IMP=0x00000001000f6a14
- (_Bool)currentMediaItemSupportsScrubbingUsingPlayer;	// IMP=0x00000001000f6a0c
- (void)updateSubtitleOptions;	// IMP=0x00000001000f6a08
- (void)setSelectedSubtitleOption:(id)arg1 setGlobalPreference:(_Bool)arg2;	// IMP=0x00000001000f6a04
- (void)removeBoundaryTimeObserverWithToken:(id)arg1;	// IMP=0x00000001000f69fc
@property(readonly, nonatomic) TVPDateRange *seekableDateRange;
@property(readonly, nonatomic) TVPTimeRange *seekableTimeRange;
@property(readonly, nonatomic) NSArray *audioOptions;
- (void)invalidate;	// IMP=0x00000001000f6994
- (void)removeWeakReferenceToVideoView:(id)arg1;	// IMP=0x00000001000f6990
- (void)addWeakReferenceToVideoView:(id)arg1;	// IMP=0x00000001000f698c
- (void)continueLoadingCurrentItem;	// IMP=0x00000001000f6988
- (void)stopWithVolumeRampDuration:(double)arg1;	// IMP=0x00000001000f697c
- (void)pauseWithVolumeRampDuration:(double)arg1;	// IMP=0x00000001000f6970
- (void)pauseIgnoringDelegate:(_Bool)arg1;	// IMP=0x00000001000f6964
- (void)playIgnoringDelegate:(_Bool)arg1;	// IMP=0x00000001000f6958
- (id)addBoundaryTimeObserverForDates:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f68e0
- (id)addBoundaryTimeObserverForTimes:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f68d8
- (void)changeMediaInDirection:(long long)arg1 reason:(id)arg2;	// IMP=0x00000001000f68cc
- (void)changeMediaInDirection:(long long)arg1;	// IMP=0x00000001000f6864
- (void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(id)arg2;	// IMP=0x00000001000f681c
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_198678f7)arg2 ignoreDelegate:(_Bool)arg3;	// IMP=0x00000001000f6810
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_198678f7)arg2;	// IMP=0x00000001000f6804
- (void)setElapsedTime:(double)arg1 orPlaybackDate:(id)arg2 withAVKitCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f6758
- (void)setElapsedTime:(double)arg1 precise:(_Bool)arg2;	// IMP=0x00000001000f674c
- (void)setElapsedTime:(double)arg1;	// IMP=0x00000001000f66d0
@property(readonly, nonatomic) double elapsedTime;
- (void)_setCurrentMediaItem:(id)arg1;	// IMP=0x00000001000f63fc
@property(retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
- (void)_setCurrentState:(id)arg1;	// IMP=0x00000001000f5ff8
- (void)stop;	// IMP=0x00000001000f5dd8
- (void)play;	// IMP=0x00000001000f5d80
- (void)togglePlayPause;	// IMP=0x00000001000f5cec
- (void)scanWithRate:(double)arg1;	// IMP=0x00000001000f5c3c
- (void)pause;	// IMP=0x00000001000f5b30
@property(nonatomic) __weak id <TVPPlaybackDelegate> delegate;
@property(readonly, nonatomic) double rate;
- (void)removeElapsedTimeObserverWithToken:(id)arg1;	// IMP=0x00000001000f5a18
- (id)addElapsedTimeObserver:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f5980
@property(readonly, nonatomic) _Bool currentMediaItemHasDates;
@property(readonly, nonatomic) struct CGSize currentMediaItemPresentationSize;
@property(readonly, nonatomic) _Bool currentMediaItemIsStreaming;
@property(readonly, nonatomic) _Bool currentMediaItemPreparedForLoading;
@property(readonly, nonatomic) _Bool currentMediaItemHasVideoContent;
@property(retain, nonatomic) TVPPlaylist *playlist;
@property(retain, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent;
- (void)dealloc;	// IMP=0x00000001000f5630
- (id)init;	// IMP=0x00000001000f543c
- (id)initWithName:(id)arg1;	// IMP=0x00000001000f53d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

