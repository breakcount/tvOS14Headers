//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVPMediaItem-Protocol.h"

@class MTPlayerItem, NSString;

@interface MTTVMediaItem : NSObject <TVPMediaItem>
{
    MTPlayerItem *_playerItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010002c158
@property(retain, nonatomic) MTPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (id)reportingDelegate;	// IMP=0x000000010002c13c
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x000000010002c138
- (void)performMediaItemMetadataTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c12c
- (void)removeMediaItemMetadataForProperty:(id)arg1;	// IMP=0x000000010002c128
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000010002c124
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x000000010002b584
- (_Bool)hasTrait:(id)arg1;	// IMP=0x000000010002b50c
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x000000010002b430
- (id)mediaItemURL;	// IMP=0x000000010002b3dc
- (id)initWithMediaItem:(id)arg1;	// IMP=0x000000010002b368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

