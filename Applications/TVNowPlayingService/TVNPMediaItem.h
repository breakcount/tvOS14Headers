//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPBaseMediaItem.h>

@class TVNPDataImageLoader;

@interface TVNPMediaItem : TVPBaseMediaItem
{
    TVNPDataImageLoader *_imageLoader;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100015564
@property(retain, nonatomic) TVNPDataImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x00000001000153a4
- (void)replaceMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000100015338

@end
