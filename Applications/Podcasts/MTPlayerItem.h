//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastsUI/IMPlayerItem.h>

#import "IMMetricsDataSource-Protocol.h"
#import "MTEpisodeIdentifierProvider-Protocol.h"

@class MTEpisode, NSDate, NSString, NSURL;
@protocol MTEpisodeIdentifier;

@interface MTPlayerItem : IMPlayerItem <MTEpisodeIdentifierProvider, IMMetricsDataSource>
{
    _Bool _isNotSubscribeable;	// 8 = 0x8
    _Bool _enqueuedByAnotherUser;	// 9 = 0x9
    _Bool _isExplicit;	// 10 = 0xa
    NSString *_podcastUuid;	// 16 = 0x10
    NSString *_podcastFeedUrl;	// 24 = 0x18
    long long _podcastStoreId;	// 32 = 0x20
    NSURL *_artworkUrl;	// 40 = 0x28
    NSString *_episodeUuid;	// 48 = 0x30
    NSString *_episodeGuid;	// 56 = 0x38
    long long _episodeStoreId;	// 64 = 0x40
    long long _episodePID;	// 72 = 0x48
    NSDate *_pubDate;	// 80 = 0x50
    NSString *_subtitle;	// 88 = 0x58
    NSString *_itemDescription;	// 96 = 0x60
    NSURL *_episodeShareUrl;	// 104 = 0x68
    long long _seasonNumber;	// 112 = 0x70
    long long _episodeNumber;	// 120 = 0x78
    long long _episodeType;	// 128 = 0x80
    NSString *_storeReportingParams;	// 136 = 0x88
}

+ (long long)contentItemEpisodeTypeForEpisodeType:(long long)arg1;	// IMP=0x0000000100016034
+ (id)subtitleStringForEpisode:(id)arg1;	// IMP=0x0000000100015d6c
+ (id)subtitleStringForArtist:(id)arg1 album:(id)arg2;	// IMP=0x0000000100015c28
+ (id)createAssetForUrl:(id)arg1;	// IMP=0x00000001000137a0
+ (id)defaultAssetOptions;	// IMP=0x00000001000136bc
+ (void)setServiceIdentifier:(id)arg1;	// IMP=0x0000000100013628
- (void).cxx_destruct;	// IMP=0x00000001000164d0
@property(retain, nonatomic) NSString *storeReportingParams; // @synthesize storeReportingParams=_storeReportingParams;
@property(nonatomic) long long episodeType; // @synthesize episodeType=_episodeType;
@property(nonatomic) long long episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(nonatomic) long long seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(retain, nonatomic) NSURL *episodeShareUrl; // @synthesize episodeShareUrl=_episodeShareUrl;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSDate *pubDate; // @synthesize pubDate=_pubDate;
@property(nonatomic) long long episodePID; // @synthesize episodePID=_episodePID;
@property(nonatomic) long long episodeStoreId; // @synthesize episodeStoreId=_episodeStoreId;
@property(retain, nonatomic) NSString *episodeGuid; // @synthesize episodeGuid=_episodeGuid;
@property(retain, nonatomic) NSString *episodeUuid; // @synthesize episodeUuid=_episodeUuid;
@property(nonatomic) _Bool enqueuedByAnotherUser; // @synthesize enqueuedByAnotherUser=_enqueuedByAnotherUser;
@property(nonatomic) _Bool isNotSubscribeable; // @synthesize isNotSubscribeable=_isNotSubscribeable;
@property(retain, nonatomic) NSURL *artworkUrl; // @synthesize artworkUrl=_artworkUrl;
@property(nonatomic) long long podcastStoreId; // @synthesize podcastStoreId=_podcastStoreId;
@property(retain, nonatomic) NSString *podcastFeedUrl; // @synthesize podcastFeedUrl=_podcastFeedUrl;
@property(retain, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
- (id)metricsContentIdentifier;	// IMP=0x000000010001604c
- (void)updateActivity:(id)arg1;	// IMP=0x0000000100015b54
- (void)updateContentItem;	// IMP=0x0000000100015244
- (id)_episodeArtworkIdentifier;	// IMP=0x0000000100015150
- (id)_podcastArtworkIdentifier;	// IMP=0x0000000100015094
- (id)artworkIdentifier;	// IMP=0x0000000100015000
- (id)contentItemIdentifier;	// IMP=0x0000000100014fac
- (id)externalMetadata;	// IMP=0x00000001000149d4
- (_Bool)_supportsArtworkURL;	// IMP=0x00000001000149cc
- (void)retrieveArtwork:(CDUnknownBlockType)arg1 withSize:(struct CGSize)arg2;	// IMP=0x0000000100014544
- (void)invalidateAsset;	// IMP=0x000000010001418c
@property(readonly, nonatomic) long long mpItemType;
- (void)setAreChaptersLoaded:(_Bool)arg1;	// IMP=0x0000000100014130
- (_Bool)notifyUserIsNotPlayable;	// IMP=0x0000000100013f70
- (void)setManifestIndex:(unsigned long long)arg1;	// IMP=0x0000000100013f3c
- (id)streamUrl;	// IMP=0x0000000100013c80
- (_Bool)isStreamable;	// IMP=0x0000000100013c08
- (_Bool)isShareable;	// IMP=0x0000000100013b54
- (_Bool)isPlayable;	// IMP=0x0000000100013ab8
@property(readonly, nonatomic) MTEpisode *episode;
- (id)initWithAsset:(id)arg1;	// IMP=0x0000000100013568
@property(readonly, nonatomic) id <MTEpisodeIdentifier> episodeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

