/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVKeyValueObserverCollection, AVDelegateManager, AVInterstitialController, AVTimeRange, NSDate, _AVChapterInfo, NSArray, AVNavigationMarkersGroup, AVPlayerItem;

@interface AVPlayerControllerTVExtras : NSObject {

	Aq _seekCount;
	Aq _seekRequestCount;
	BOOL _isContentDurationIndefinite;
	BOOL _isProgramStartDateExact;
	BOOL _isProgramEndDateExact;
	BOOL _liveStreamEventModePossible;
	BOOL _loadingChapterInfo;
	BOOL _haveLoadedEmbeddedChapters;
	BOOL _lastObservedEffectiveRateNonZero;
	BOOL _resumePlaybackAfterNextSuccessfulSeek;
	AVKeyValueObserverCollection* _kvoPlayer;
	AVKeyValueObserverCollection* _kvoPlayerItem;
	AVDelegateManager* _delegateManager;
	AVInterstitialController* _interstitialController;
	AVTimeRange* _timeRangeSeekable;
	double _longestSeekableDurationSeenForCurrentItem;
	long long _currentSeekReason;
	double _contentDurationCached;
	NSDate* _programStartDate;
	NSDate* _programEndDate;
	NSDate* _clientSpecifiedDate;
	_AVChapterInfo* _chapterInfo;
	NSArray* _filteredNavigationMarkerGroups;
	AVNavigationMarkersGroup* _filteredEmbeddedChaptersNavigationMarkersGroup;
	AVPlayerItem* _currentPlayerItemForPlayerItemDelegate;

}

@property (nonatomic,retain) AVKeyValueObserverCollection * kvoPlayer;                                                     //@synthesize kvoPlayer=_kvoPlayer - In the implementation block
@property (nonatomic,retain) AVKeyValueObserverCollection * kvoPlayerItem;                                                 //@synthesize kvoPlayerItem=_kvoPlayerItem - In the implementation block
@property (nonatomic,retain) AVDelegateManager * delegateManager;                                                          //@synthesize delegateManager=_delegateManager - In the implementation block
@property (nonatomic,retain) AVInterstitialController * interstitialController;                                            //@synthesize interstitialController=_interstitialController - In the implementation block
@property (nonatomic,retain) AVTimeRange * timeRangeSeekable;                                                              //@synthesize timeRangeSeekable=_timeRangeSeekable - In the implementation block
@property (assign,nonatomic) double longestSeekableDurationSeenForCurrentItem;                                             //@synthesize longestSeekableDurationSeenForCurrentItem=_longestSeekableDurationSeenForCurrentItem - In the implementation block
@property (assign,nonatomic) long long currentSeekReason;                                                                  //@synthesize currentSeekReason=_currentSeekReason - In the implementation block
@property (assign,nonatomic) double contentDurationCached;                                                                 //@synthesize contentDurationCached=_contentDurationCached - In the implementation block
@property (assign,nonatomic) BOOL isContentDurationIndefinite;                                                             //@synthesize isContentDurationIndefinite=_isContentDurationIndefinite - In the implementation block
@property (nonatomic,retain) NSDate * programStartDate;                                                                    //@synthesize programStartDate=_programStartDate - In the implementation block
@property (assign,nonatomic) BOOL isProgramStartDateExact;                                                                 //@synthesize isProgramStartDateExact=_isProgramStartDateExact - In the implementation block
@property (nonatomic,retain) NSDate * programEndDate;                                                                      //@synthesize programEndDate=_programEndDate - In the implementation block
@property (nonatomic,retain) NSDate * clientSpecifiedDate;                                                                 //@synthesize clientSpecifiedDate=_clientSpecifiedDate - In the implementation block
@property (assign,nonatomic) BOOL isProgramEndDateExact;                                                                   //@synthesize isProgramEndDateExact=_isProgramEndDateExact - In the implementation block
@property (assign,nonatomic) BOOL liveStreamEventModePossible;                                                             //@synthesize liveStreamEventModePossible=_liveStreamEventModePossible - In the implementation block
@property (nonatomic,retain) _AVChapterInfo * chapterInfo;                                                                 //@synthesize chapterInfo=_chapterInfo - In the implementation block
@property (getter=isLoadingChapterInfo) BOOL loadingChapterInfo;                                                           //@synthesize loadingChapterInfo=_loadingChapterInfo - In the implementation block
@property (assign,nonatomic) BOOL haveLoadedEmbeddedChapters;                                                              //@synthesize haveLoadedEmbeddedChapters=_haveLoadedEmbeddedChapters - In the implementation block
@property (nonatomic,retain) NSArray * filteredNavigationMarkerGroups;                                                     //@synthesize filteredNavigationMarkerGroups=_filteredNavigationMarkerGroups - In the implementation block
@property (nonatomic,retain) AVNavigationMarkersGroup * filteredEmbeddedChaptersNavigationMarkersGroup;                    //@synthesize filteredEmbeddedChaptersNavigationMarkersGroup=_filteredEmbeddedChaptersNavigationMarkersGroup - In the implementation block
@property (assign,getter=isLastObservedEffectiveRateNonZero,nonatomic) BOOL lastObservedEffectiveRateNonZero;              //@synthesize lastObservedEffectiveRateNonZero=_lastObservedEffectiveRateNonZero - In the implementation block
@property (readonly) BOOL isSeeking; 
@property (readonly) BOOL isRequestingSeek; 
@property (assign,nonatomic) BOOL resumePlaybackAfterNextSuccessfulSeek;                                                   //@synthesize resumePlaybackAfterNextSuccessfulSeek=_resumePlaybackAfterNextSuccessfulSeek - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerItem * currentPlayerItemForPlayerItemDelegate;                                 //@synthesize currentPlayerItemForPlayerItemDelegate=_currentPlayerItemForPlayerItemDelegate - In the implementation block
-(id)init;
-(AVDelegateManager *)delegateManager;
-(void)setDelegateManager:(AVDelegateManager *)arg1 ;
-(AVKeyValueObserverCollection *)kvoPlayerItem;
-(void)setKvoPlayerItem:(AVKeyValueObserverCollection *)arg1 ;
-(BOOL)isSeeking;
-(void)willBeginSeek;
-(void)didEndSeek;
-(BOOL)isRequestingSeek;
-(void)willRequestSeek;
-(void)didRequestSeek;
-(AVKeyValueObserverCollection *)kvoPlayer;
-(void)setKvoPlayer:(AVKeyValueObserverCollection *)arg1 ;
-(AVInterstitialController *)interstitialController;
-(void)setInterstitialController:(AVInterstitialController *)arg1 ;
-(AVTimeRange *)timeRangeSeekable;
-(void)setTimeRangeSeekable:(AVTimeRange *)arg1 ;
-(double)longestSeekableDurationSeenForCurrentItem;
-(void)setLongestSeekableDurationSeenForCurrentItem:(double)arg1 ;
-(long long)currentSeekReason;
-(void)setCurrentSeekReason:(long long)arg1 ;
-(double)contentDurationCached;
-(void)setContentDurationCached:(double)arg1 ;
-(BOOL)isContentDurationIndefinite;
-(void)setIsContentDurationIndefinite:(BOOL)arg1 ;
-(NSDate *)programStartDate;
-(void)setProgramStartDate:(NSDate *)arg1 ;
-(BOOL)isProgramStartDateExact;
-(void)setIsProgramStartDateExact:(BOOL)arg1 ;
-(NSDate *)programEndDate;
-(void)setProgramEndDate:(NSDate *)arg1 ;
-(NSDate *)clientSpecifiedDate;
-(void)setClientSpecifiedDate:(NSDate *)arg1 ;
-(BOOL)isProgramEndDateExact;
-(void)setIsProgramEndDateExact:(BOOL)arg1 ;
-(BOOL)liveStreamEventModePossible;
-(void)setLiveStreamEventModePossible:(BOOL)arg1 ;
-(_AVChapterInfo *)chapterInfo;
-(void)setChapterInfo:(_AVChapterInfo *)arg1 ;
-(BOOL)isLoadingChapterInfo;
-(void)setLoadingChapterInfo:(BOOL)arg1 ;
-(BOOL)haveLoadedEmbeddedChapters;
-(void)setHaveLoadedEmbeddedChapters:(BOOL)arg1 ;
-(NSArray *)filteredNavigationMarkerGroups;
-(void)setFilteredNavigationMarkerGroups:(NSArray *)arg1 ;
-(AVNavigationMarkersGroup *)filteredEmbeddedChaptersNavigationMarkersGroup;
-(void)setFilteredEmbeddedChaptersNavigationMarkersGroup:(AVNavigationMarkersGroup *)arg1 ;
-(BOOL)isLastObservedEffectiveRateNonZero;
-(void)setLastObservedEffectiveRateNonZero:(BOOL)arg1 ;
-(BOOL)resumePlaybackAfterNextSuccessfulSeek;
-(void)setResumePlaybackAfterNextSuccessfulSeek:(BOOL)arg1 ;
-(AVPlayerItem *)currentPlayerItemForPlayerItemDelegate;
-(void)setCurrentPlayerItemForPlayerItemDelegate:(AVPlayerItem *)arg1 ;
@end

