//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVNPBaseRoutingDestinationCollectionViewCell.h"

@class TVNPRoutingDestination;

@interface TVNPRoutingDestinationCollectionViewCell : TVNPBaseRoutingDestinationCollectionViewCell
{
    TVNPRoutingDestination *_destination;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100022988
@property(retain, nonatomic) TVNPRoutingDestination *destination; // @synthesize destination=_destination;
- (void)_updateNowPlayingInfo;	// IMP=0x00000001000226b8
- (void)_updateMusicBarState;	// IMP=0x0000000100022664
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100022528
- (void)dealloc;	// IMP=0x0000000100022288

@end
