/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPShuffleableSectionedIdentifierListDelegate.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListAnnotationDelegate.h>
#import <libobjc.A.dylib/MPCContinueListeningRadioQueueProviding.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>
#import <libobjc.A.dylib/MPCQueueItemProviding.h>
#import <libobjc.A.dylib/MPAVQueueController.h>
#import <libobjc.A.dylib/MSVSegmentedCoding.h>

@protocol MPAVQueueControllerDelegate, MPAVQueueCoordinating;
@class MPAVItem, NSString, NSUserDefaults, MPCPlaybackEngine, NSError, NSMutableDictionary, MPSectionedIdentifierListPosition, MPShuffleableSectionedIdentifierList, MPSectionedIdentifierList;

@interface MPCQueueController : NSObject <MPShuffleableSectionedIdentifierListDelegate, MPSectionedIdentifierListAnnotationDelegate, MPCContinueListeningRadioQueueProviding, MPCPlaybackEngineEventObserving, MPCQueueItemProviding, MPAVQueueController, MSVSegmentedCoding> {

	unsigned long long _stateHandle;
	NSUserDefaults* _defaults;
	BOOL _hasUserMutations;
	BOOL _allowsQueueModifications;
	NSString* _preferredFirstContentItemID;
	MPAVItem* _currentItem;
	id<MPAVQueueControllerDelegate> _delegate;
	id<MPAVQueueCoordinating> _queueCoordinator;
	long long _repeatType;
	long long _shuffleType;
	MPCPlaybackEngine* _playbackEngine;
	NSString* _nextContentItemID;
	NSString* _deferredNextContentItemAnchorID;
	NSError* _restorationError;
	NSMutableDictionary* _coderVersions;
	long long _nextContentItemIDReason;
	long long _state;
	long long _autoPlayState;
	MPSectionedIdentifierListPosition* _autoPlayEndPosition;
	NSString* _restoreLastStartTimePositionToContentItemID;
	double _lastSavedTime;
	MPShuffleableSectionedIdentifierList* _identifierList;
	MPSectionedIdentifierList* _autoPlayIdentifierList;
	NSMutableDictionary* _dataSources;

}

@property (nonatomic,copy) NSString * nextContentItemID;                                                   //@synthesize nextContentItemID=_nextContentItemID - In the implementation block
@property (nonatomic,copy) NSString * deferredNextContentItemAnchorID;                                     //@synthesize deferredNextContentItemAnchorID=_deferredNextContentItemAnchorID - In the implementation block
@property (nonatomic,copy) NSError * restorationError;                                                     //@synthesize restorationError=_restorationError - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coderVersions;                                          //@synthesize coderVersions=_coderVersions - In the implementation block
@property (assign,nonatomic) long long nextContentItemIDReason;                                            //@synthesize nextContentItemIDReason=_nextContentItemIDReason - In the implementation block
@property (assign,nonatomic) long long state;                                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long autoPlayState;                                                      //@synthesize autoPlayState=_autoPlayState - In the implementation block
@property (nonatomic,retain) MPSectionedIdentifierListPosition * autoPlayEndPosition;                      //@synthesize autoPlayEndPosition=_autoPlayEndPosition - In the implementation block
@property (nonatomic,copy) NSString * restoreLastStartTimePositionToContentItemID;                         //@synthesize restoreLastStartTimePositionToContentItemID=_restoreLastStartTimePositionToContentItemID - In the implementation block
@property (nonatomic,readonly) double lastSavedTime;                                                       //@synthesize lastSavedTime=_lastSavedTime - In the implementation block
@property (nonatomic,retain) MPShuffleableSectionedIdentifierList * identifierList;                        //@synthesize identifierList=_identifierList - In the implementation block
@property (nonatomic,retain) MPSectionedIdentifierList * autoPlayIdentifierList;                           //@synthesize autoPlayIdentifierList=_autoPlayIdentifierList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dataSources;                                            //@synthesize dataSources=_dataSources - In the implementation block
@property (getter=_autoplayMode,nonatomic,readonly) long long autoplayMode; 
@property (assign,nonatomic,__weak) MPCPlaybackEngine * playbackEngine;                                    //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,readonly) BOOL containsTransportableContent; 
@property (getter=isCurrentItemFromAutoPlay,nonatomic,readonly) BOOL currentItemFromAutoPlay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPAVItem * currentItem;                                                       //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL hasUserMutations;                                                      //@synthesize hasUserMutations=_hasUserMutations - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVQueueControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MPAVQueueCoordinating> queueCoordinator;                                   //@synthesize queueCoordinator=_queueCoordinator - In the implementation block
@property (nonatomic,readonly) long long displayCount; 
@property (assign,nonatomic) long long repeatType;                                                         //@synthesize repeatType=_repeatType - In the implementation block
@property (assign,nonatomic) long long shuffleType;                                                        //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) BOOL autoPlayEnabled; 
@property (nonatomic,readonly) unsigned long long supportedInsertionPositions; 
@property (nonatomic,readonly) BOOL userCanChangeShuffleAndRepeatType; 
@property (assign,nonatomic) BOOL allowsQueueModifications;                                                //@synthesize allowsQueueModifications=_allowsQueueModifications - In the implementation block
@property (nonatomic,readonly) BOOL userCanEnableAutoPlay; 
@property (nonatomic,copy,readonly) NSString * preferredFirstContentItemID;                                //@synthesize preferredFirstContentItemID=_preferredFirstContentItemID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)describePlayer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<MPAVQueueControllerDelegate>)delegate;
-(void)setDelegate:(id<MPAVQueueControllerDelegate>)arg1 ;
-(NSString *)uniqueIdentifier;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)setCurrentItem:(MPAVItem *)arg1 ;
-(MPAVItem *)currentItem;
-(long long)displayCount;
-(NSMutableDictionary *)dataSources;
-(id)segmentForCodingKey:(id)arg1 ;
-(long long)versionForSegment:(id)arg1 ;
-(void)didRestoreVersion:(long long)arg1 forSegment:(id)arg2 ;
-(unsigned long long)supportedInsertionPositions;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<MPAVQueueCoordinating>)queueCoordinator;
-(void)setQueueCoordinator:(id<MPAVQueueCoordinating>)arg1 ;
-(void)jumpToContentItemID:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3 ;
-(void)jumpToContentItemID:(id)arg1 ;
-(id)contentItemIDWithCurrentItemOffset:(long long)arg1 mode:(long long)arg2 didReachEnd:(BOOL*)arg3 ;
-(long long)shuffleType;
-(long long)repeatType;
-(void)didDequeueShuffledItemsInSectionedIdentifierList:(id)arg1 ;
-(void)sectionedIdentifierList:(id)arg1 dataSourceDidChangeItems:(id)arg2 inSection:(id)arg3 ;
-(void)sectionedIdentifierList:(id)arg1 dataSourceDidAddItems:(id)arg2 toSection:(id)arg3 ;
-(void)sectionedIdentifierList:(id)arg1 dataSourceDidMoveItems:(id)arg2 inSection:(id)arg3 ;
-(void)sectionedIdentifierList:(id)arg1 dataSourceDidRemoveItems:(id)arg2 fromSection:(id)arg3 ;
-(void)sectionedIdentifierList:(id)arg1 dataSourceDidUpdateSection:(id)arg2 ;
-(void)setShuffleType:(long long)arg1 ;
-(void)setRepeatType:(long long)arg1 ;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1 ;
-(void)queueCoordinatorDidChangeItems:(id)arg1 ;
-(id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2 ;
-(void)queueCoordinator:(id)arg1 didLoadItem:(id)arg2 ;
-(void)queueCoordinator:(id)arg1 willLoadItem:(id)arg2 ;
-(void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2 ;
-(void)reshuffle;
-(id)debugDescriptionForItem:(id)arg1 inSection:(id)arg2 ;
-(id)debugDescriptionForSection:(id)arg1 ;
-(void)setDataSources:(NSMutableDictionary *)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(NSString *)preferredFirstContentItemID;
-(void)playerItemDidBecomeCurrent:(id)arg1 ;
-(void)setPlaybackEngine:(MPCPlaybackEngine *)arg1 ;
-(void)playerItemDidResignCurrent:(id)arg1 ;
-(void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3 ;
-(void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2 ;
-(void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2 ;
-(long long)displayIndexForContentItemID:(id)arg1 ;
-(id)contentItemIDAtIndex:(long long)arg1 ;
-(id)itemForContentItemID:(id)arg1 ;
-(BOOL)allowsQueueModifications;
-(void)setAllowsQueueModifications:(BOOL)arg1 ;
-(void)removeContentItemID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(BOOL)arg3 userModification:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)addPlaybackContext:(id)arg1 afterContentItemID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)autoPlayEnabled;
-(BOOL)containsTransportableContent;
-(BOOL)isCurrentItemFromAutoPlay;
-(BOOL)canSkipItem:(id)arg1 ;
-(BOOL)userCanChangeShuffleAndRepeatType;
-(BOOL)userCanEnableAutoPlay;
-(id)firstContentItemIDForItemIntersectingIdentifierSet:(id)arg1 ;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)moveContentItemID:(id)arg1 beforeContentItemID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)moveContentItemID:(id)arg1 afterContentItemID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAutoPlayEnabled:(BOOL)arg1 ;
-(BOOL)hasUserMutations;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_emitEventsForPlaybackBehaviorChange;
-(void)finalizeStateRestorationWithAccountManager:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearUpNext;
-(BOOL)isPlaceholderItemForContentItemID:(id)arg1 ;
-(id)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long*)arg3 ;
-(void)updateLocationDependentPropertiesForItem:(id)arg1 ;
-(MPShuffleableSectionedIdentifierList *)identifierList;
-(MPSectionedIdentifierList *)autoPlayIdentifierList;
-(id)_stateDictionaryIncludingIdentifierList:(BOOL)arg1 ;
-(void)_highQualityMusicStreamingOnCellularDidChange:(id)arg1 ;
-(void)_soundCheckEnabledChangedNotification:(id)arg1 ;
-(id)_identifierListForSection:(id)arg1 ;
-(void)_addAutoPlayPlaybackContext:(id)arg1 atPosition:(long long)arg2 afterContentItemID:(id)arg3 sectionIdentifier:(id)arg4 actions:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)_addPlaybackContext:(id)arg1 atPosition:(long long)arg2 afterContentItemID:(id)arg3 sectionIdentifier:(id)arg4 actions:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)incrementVersionForSegment:(id)arg1 ;
-(id)_contentItemIDWithOffset:(long long)arg1 fromItem:(id)arg2 mode:(long long)arg3 didReachEnd:(BOOL*)arg4 ;
-(NSError *)restorationError;
-(id)_itemForContentItemID:(id)arg1 allowReuse:(BOOL)arg2 ;
-(id)_firstContentItemID;
-(void)setNextContentItemIDReason:(long long)arg1 ;
-(void)_currentItemDidChangeFromItem:(id)arg1 toItem:(id)arg2 ;
-(void)_transitionToAutoPlayState:(long long)arg1 ;
-(BOOL)_allDataSourcesSupportInsertionPositionLast;
-(void)resetWithIdentifier:(id)arg1 ;
-(id)_nextValidIdentifierPairStartingAtContentItemID:(id)arg1 wasInvalid:(BOOL*)arg2 ;
-(id)_itemForPair:(id)arg1 ;
-(id)_accountForAutoPlay;
-(id)queueReferencesWithMaxCount:(long long)arg1 ;
-(void)_emitEventsForItemChangeFromItem:(id)arg1 toCurrentItem:(id)arg2 ;
-(void)_emitEventsForAddingPlaybackContext:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)_firstContentItemIDInSectionWithIdentifier:(id)arg1 ;
-(void)_applyVolumeNormalizationForQueuedItems;
-(NSString *)deferredNextContentItemAnchorID;
-(long long)_privateListeningSourceForSection:(id)arg1 ;
-(long long)_autoplayMode;
-(id)itemForContentItemID:(id)arg1 allowReuse:(BOOL)arg2 ;
-(id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 jumpToItem:(BOOL)arg4 ;
-(BOOL)canSkipInDirection:(long long)arg1 fromQueueItem:(id)arg2 ;
-(void)jumpToFirstContentItem;
-(NSString *)nextContentItemID;
-(void)setNextContentItemID:(NSString *)arg1 ;
-(void)setDeferredNextContentItemAnchorID:(NSString *)arg1 ;
-(void)setRestorationError:(NSError *)arg1 ;
-(NSMutableDictionary *)coderVersions;
-(void)setCoderVersions:(NSMutableDictionary *)arg1 ;
-(long long)nextContentItemIDReason;
-(long long)autoPlayState;
-(void)setAutoPlayState:(long long)arg1 ;
-(MPSectionedIdentifierListPosition *)autoPlayEndPosition;
-(void)setAutoPlayEndPosition:(MPSectionedIdentifierListPosition *)arg1 ;
-(NSString *)restoreLastStartTimePositionToContentItemID;
-(void)setRestoreLastStartTimePositionToContentItemID:(NSString *)arg1 ;
-(double)lastSavedTime;
-(void)setIdentifierList:(MPShuffleableSectionedIdentifierList *)arg1 ;
-(void)setAutoPlayIdentifierList:(MPSectionedIdentifierList *)arg1 ;
@end

