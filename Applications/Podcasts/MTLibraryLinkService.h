//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastsFoundation/IMBaseStoreService.h>

@class NSDictionary;

@interface MTLibraryLinkService : IMBaseStoreService
{
    NSDictionary *_requestParams;	// 8 = 0x8
}

+ (_Bool)shouldFollowRedirects;	// IMP=0x000000010016456c
- (void).cxx_destruct;	// IMP=0x0000000100164da4
@property(retain, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
- (void)updateAdamIdForPodcast:(id)arg1 withFeedURLs:(id)arg2;	// IMP=0x0000000100164950
- (void)requestWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100164710
- (void)performRequest:(CDUnknownBlockType)arg1;	// IMP=0x000000010016469c
- (id)urlRequest;	// IMP=0x0000000100164574
- (id)init;	// IMP=0x0000000100164538

@end
