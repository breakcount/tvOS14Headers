//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTPodcastDetailEpisodeSection, NSIndexPath;

@protocol MTPodcastDetailDataSourceDelegate <NSObject>
- (void)episodeSection:(MTPodcastDetailEpisodeSection *)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)sectionDidChangeContent:(MTPodcastDetailEpisodeSection *)arg1;
- (void)sectionWillChangeContent:(MTPodcastDetailEpisodeSection *)arg1;
@end

