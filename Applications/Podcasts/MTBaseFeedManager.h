//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTURLSessionManager.h"

@class NSMutableArray, NSObject, _TtC8Podcasts24FeedManagerConfiguration;
@protocol OS_dispatch_queue;

@interface MTBaseFeedManager : MTURLSessionManager
{
    _Bool _sessionTaskStateReloaded;	// 8 = 0x8
    _TtC8Podcasts24FeedManagerConfiguration *_configuration;	// 16 = 0x10
    NSMutableArray *_pendingFeedProcessingBlocks;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_feedProcessingQueue;	// 40 = 0x28
}

+ (void)standardDeviationForEpisodes:(id)arg1 standardDeviation:(double *)arg2 average:(double *)arg3;	// IMP=0x0000000100127868
+ (void)postNotificationName:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010012773c
+ (void)didFinishUpdatingAllFeeds:(_Bool)arg1;	// IMP=0x0000000100127608
+ (void)removeCompanionStartDateForOngoingFetchOfFeedUrl:(id)arg1;	// IMP=0x00000001001275a4
+ (void)didFinishUpdatingFeedUrl:(id)arg1;	// IMP=0x0000000100127308
+ (void)setCompanionStartDateForOngoingFetchOfFeedUrl:(id)arg1 cloudSyncUrl:(id)arg2;	// IMP=0x00000001001271e0
+ (void)didStartUpdatingFeedUrl:(id)arg1 cloudSyncUrl:(id)arg2;	// IMP=0x0000000100127040
+ (id)_metadataUrl;	// IMP=0x0000000100126fdc
+ (_Bool)isSubscribing;	// IMP=0x0000000100126bb0
+ (void)saveSubscriptionMetadata;	// IMP=0x0000000100126a64
+ (void)removeMetadataForPodcastUuid:(id)arg1;	// IMP=0x00000001001269e0
+ (void)purgeSubscriptionMetadata;	// IMP=0x0000000100126980
+ (unsigned long long)updatingCount;	// IMP=0x0000000100125e90
+ (_Bool)isUpdatingFeedUrl:(id)arg1;	// IMP=0x0000000100125dec
+ (_Bool)isUpdatingPodcastUuid:(id)arg1;	// IMP=0x0000000100125b1c
+ (void)initialize;	// IMP=0x0000000100120db8
- (void).cxx_destruct;	// IMP=0x0000000100127c08
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *feedProcessingQueue; // @synthesize feedProcessingQueue=_feedProcessingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableArray *pendingFeedProcessingBlocks; // @synthesize pendingFeedProcessingBlocks=_pendingFeedProcessingBlocks;
@property(retain, nonatomic) _TtC8Podcasts24FeedManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property _Bool sessionTaskStateReloaded; // @synthesize sessionTaskStateReloaded=_sessionTaskStateReloaded;
- (void)_queue_processNextPendingFeedIfPossible;	// IMP=0x0000000100126d5c
- (void)_processNextPendingFeedIfPossible;	// IMP=0x0000000100126cd0
- (void)_addPendingFeedProcessingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100126bb8
- (void)restoreBackgroundDownloadTasksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001263bc
- (void)startDownloadForFeedUrl:(id)arg1 cloudSyncFeedUrl:(id)arg2 userInitiated:(_Bool)arg3 useBackgroundFetch:(_Bool)arg4;	// IMP=0x0000000100125fe4
- (_Bool)abortUpdatesIfNetworkUnreachable:(_Bool)arg1;	// IMP=0x0000000100125efc
- (_Bool)saveAndResetImportContext:(id)arg1 ifNeededForImportCount:(unsigned long long)arg2 totalItemsCount:(unsigned long long)arg3 isLastBatch:(_Bool)arg4;	// IMP=0x000000010012593c
- (_Bool)updatePodcastWithUuid:(id)arg1 withFeed:(id)arg2;	// IMP=0x0000000100124098
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x00000001001237b0
- (void)updateGizmoLastFetchedDateAndRevisionNumberFor:(id)arg1 forPodcastFeedURL:(id)arg2;	// IMP=0x000000010012368c
- (void)updateCompanionLastFetchedDateFor:(id)arg1 forPodcastFeedURL:(id)arg2;	// IMP=0x0000000100123590
- (_Bool)processFeedWithData:(id)arg1 requestUrl:(id)arg2 useBackgroundFetch:(_Bool)arg3;	// IMP=0x0000000100122940
- (id)importContext;	// IMP=0x00000001001228a0
- (void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2;	// IMP=0x0000000100121d64
- (_Bool)isFileExpired:(id)arg1 inDirectory:(id)arg2;	// IMP=0x0000000100121b24
- (void)_removeTempFiles;	// IMP=0x000000010012168c
- (_Bool)createPrivateTempDirIfNeeded;	// IMP=0x0000000100121508
- (id)privatePathForDownload;	// IMP=0x0000000100121358
- (id)temporaryDirectory;	// IMP=0x00000001001212b8
- (void)_enqueueTempFilesDeletion;	// IMP=0x000000010012123c
- (void)setSessionCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001211ec
- (id)init;	// IMP=0x0000000100120f94
- (void)configureSession:(id)arg1;	// IMP=0x0000000100120f08

@end
