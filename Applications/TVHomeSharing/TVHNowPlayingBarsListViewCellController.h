//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVHListView, TVHMediaEntitiesDataSource, TVPPlayer;

@interface TVHNowPlayingBarsListViewCellController : NSObject
{
    _Bool _monitoringPlayer;	// 8 = 0x8
    TVHListView *_listView;	// 16 = 0x10
    TVHMediaEntitiesDataSource *_dataSource;	// 24 = 0x18
    TVPPlayer *_player;	// 32 = 0x20
}

+ (id)new;	// IMP=0x00000001000254f4
- (void).cxx_destruct;	// IMP=0x0000000100025e4c
@property(nonatomic) _Bool monitoringPlayer; // @synthesize monitoringPlayer=_monitoringPlayer;
@property(readonly, nonatomic) TVPPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) TVHMediaEntitiesDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) TVHListView *listView; // @synthesize listView=_listView;
- (void)_updateVisibleListViewCells;	// IMP=0x0000000100025bf8
- (unsigned long long)_nowPlayingBarsStateForListItemIdentifier:(id)arg1 withCurrentMediaItem:(id)arg2;	// IMP=0x0000000100025a64
- (id)_currentMediaItem;	// IMP=0x00000001000259c8
- (void)_stopMonitoringPlayer;	// IMP=0x000000010002590c
- (void)_startMonitoringPlayer;	// IMP=0x0000000100025840
- (void)_handleCurrentPlaybackMediaItemDidChangeNotification:(id)arg1;	// IMP=0x0000000100025834
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100025828
- (unsigned long long)nowPlayingBarsStateForListItemIdentifier:(id)arg1;	// IMP=0x0000000100025744
- (void)dealloc;	// IMP=0x0000000100025688
- (id)initWithListView:(id)arg1 dataSource:(id)arg2 player:(id)arg3;	// IMP=0x00000001000255b8
- (id)init;	// IMP=0x0000000100025530

@end
