//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVEpisodeSplitViewController.h"

@class MTUuidQueryObserver;

@interface MTTVListenNowViewController : MTTVEpisodeSplitViewController
{
    MTUuidQueryObserver *_podcastsObserver;	// 8 = 0x8
    unsigned long long _podcastState;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100047058
@property(nonatomic) unsigned long long podcastState; // @synthesize podcastState=_podcastState;
@property(retain, nonatomic) MTUuidQueryObserver *podcastsObserver; // @synthesize podcastsObserver=_podcastsObserver;
- (id)emptyContentViewControllerForCurrentPodcastState;	// IMP=0x0000000100046fec
- (void)startObserveringPodcasts;	// IMP=0x0000000100046d30
- (void)viewDidLoad;	// IMP=0x0000000100046c7c
- (id)init;	// IMP=0x0000000100046bf4

@end

