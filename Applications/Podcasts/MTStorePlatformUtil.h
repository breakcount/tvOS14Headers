//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTStorePlatformUtil : NSObject
{
}

+ (id)_offerNameForOfferFlavor:(id)arg1;	// IMP=0x00000001000ef298
+ (id)_storeOfferDownloadDictionaryForStoreOfferItemDictionary:(id)arg1;	// IMP=0x00000001000ef004
+ (id)_storeDownloadOffersForStoreItemDictionary:(id)arg1;	// IMP=0x00000001000eee44
+ (id)_unmodifiedTitleForStoreItemDictionary:(id)arg1;	// IMP=0x00000001000eed98
+ (id)_genreNameForStoreItemDictionary:(id)arg1;	// IMP=0x00000001000eed08
+ (id)_storeDownloadArtworkArrayForStoreItemDictionary:(id)arg1;	// IMP=0x00000001000eeb5c
+ (id)storeDownloadDictionaryFromStorePlatformDictionary:(id)arg1;	// IMP=0x00000001000ee6c8
+ (id)pubDateFromStoreMediaDictionary:(id)arg1;	// IMP=0x00000001000ee654
+ (id)dateFromFormattedString:(id)arg1;	// IMP=0x00000001000ee5c8
+ (id)formatDate:(id)arg1;	// IMP=0x00000001000ee4d8
+ (id)encodedQueryStringFromDictionary:(id)arg1;	// IMP=0x00000001000ee310
+ (id)stringFromDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000ee234
+ (_Bool)isAValue:(id)arg1;	// IMP=0x00000001000ee1d4
+ (void)loadTopPodcastsChartsWithCompletionHandler:(CDUnknownBlockType)arg1 withLimit:(unsigned long long)arg2;	// IMP=0x00000001000ee004
+ (id)artworkDictionary:(id)arg1 closestToSize:(double)arg2;	// IMP=0x00000001000ede0c
+ (id)latestEpisodeDictionaryFromPodcastDictionary:(id)arg1;	// IMP=0x00000001000edc68
+ (_Bool)isExplicitForStorePlatformDictionary:(id)arg1;	// IMP=0x00000001000edb80
+ (id)storeMediaDictionaryFromStorePlatformDictionary:(id)arg1 artworkSize:(double)arg2 restricted:(_Bool *)arg3 isNotSubscribeable:(_Bool)arg4;	// IMP=0x00000001000ecf80
+ (id)storeMediaDictionaryFromStorePlatformDictionary:(id)arg1 artworkSize:(double)arg2 restricted:(_Bool *)arg3;	// IMP=0x00000001000ecf70
+ (id)storeMediaDictionaryFromStorePlatformDictionary:(id)arg1 artworkSize:(double)arg2 isNotSubscribeable:(_Bool)arg3;	// IMP=0x00000001000ecf5c
+ (id)storeMediaDictionaryFromStorePlatformDictionary:(id)arg1 artworkSize:(double)arg2;	// IMP=0x00000001000ecf4c

@end

