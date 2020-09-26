//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVMusicPlaybackHelper : NSObject
{
}

+ (id)_currentFeatureName;	// IMP=0x00000001000a7da4
+ (id)_stringForItemType:(unsigned long long)arg1;	// IMP=0x00000001000a7cc4
+ (_Bool)_isPlayingOnLocalDevice;	// IMP=0x00000001000a7c48
+ (_Bool)_isAppleMusicSubscriber;	// IMP=0x00000001000a7bf4
+ (_Bool)_isVideoItemType:(unsigned long long)arg1;	// IMP=0x00000001000a7be4
+ (void)_queueSongsWithRequest:(id)arg1 playNext:(_Bool)arg2;	// IMP=0x00000001000a7a28
+ (void)_playSongsWithRequest:(id)arg1 playbackAction:(unsigned long long)arg2 initialPlaybackType:(unsigned long long)arg3;	// IMP=0x00000001000a79fc
+ (void)_playSongsWithRequest:(id)arg1 playbackAction:(unsigned long long)arg2;	// IMP=0x00000001000a79ec
+ (void)_playSongsWithRequest:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 initialPlaybackType:(unsigned long long)arg4;	// IMP=0x00000001000a7834
+ (void)_playLibraryItemWithRequest:(id)arg1 identifiers:(id)arg2 playbackType:(unsigned long long)arg3;	// IMP=0x00000001000a7734
+ (void)_playRequestWithItemType:(unsigned long long)arg1 requestBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a7368
+ (void)_playUsingAirPlayWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x00000001000a7048
+ (void)_playWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2 playbackAction:(unsigned long long)arg3 checkSubscriptionStatus:(_Bool)arg4;	// IMP=0x00000001000a6d50
+ (void)_playVideoItemWithRequest:(id)arg1 item:(id)arg2;	// IMP=0x00000001000a6c14
+ (id)_songsRequestForContainer:(id)arg1 filterObject:(id)arg2;	// IMP=0x00000001000a6904
+ (id)_songsRequestForContainer:(id)arg1;	// IMP=0x00000001000a68f4
+ (id)modelKindForPlaybackType:(unsigned long long)arg1;	// IMP=0x00000001000a661c
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 filterObject:(id)arg4;	// IMP=0x00000001000a64d0
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 itemSortDescriptors:(id)arg4 inSectionKind:(id)arg5 sectionSortDescriptors:(id)arg6 initialPlaybackType:(unsigned long long)arg7;	// IMP=0x00000001000a62e8
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 itemSortDescriptors:(id)arg4;	// IMP=0x00000001000a6254
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 initialPlaybackType:(unsigned long long)arg3;	// IMP=0x00000001000a61e4
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3;	// IMP=0x00000001000a6170
+ (void)shuffleAllLibrarySongs;	// IMP=0x00000001000a6114
+ (void)playItemType:(unsigned long long)arg1 withPersistentID:(id)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x00000001000a6100
+ (void)playItemType:(unsigned long long)arg1 withPersistentID:(id)arg2 inContainer:(id)arg3 playbackAction:(unsigned long long)arg4;	// IMP=0x00000001000a59bc
+ (void)playItemType:(unsigned long long)arg1 withPersistentID:(id)arg2;	// IMP=0x00000001000a59ac
+ (void)playWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2;	// IMP=0x00000001000a57f8
+ (void)playRadioFromMPSong:(id)arg1;	// IMP=0x00000001000a55dc
+ (void)queueRadioWithPlaybackIntent:(id)arg1;	// IMP=0x00000001000a54d8
+ (void)playRadioWithPlaybackIntent:(id)arg1;	// IMP=0x00000001000a53d4
+ (void)playFromRequest:(id)arg1 startItemIdentifiers:(id)arg2 initialPlaybackType:(unsigned long long)arg3;	// IMP=0x00000001000a5298
+ (void)playFromRequest:(id)arg1 shuffle:(_Bool)arg2 initialPlaybackType:(unsigned long long)arg3;	// IMP=0x00000001000a5280
+ (void)playItemType:(unsigned long long)arg1 withMPObject:(id)arg2;	// IMP=0x00000001000a4f1c
+ (_Bool)canPlayItemWithStoreID:(id)arg1 playbackAction:(unsigned long long)arg2;	// IMP=0x00000001000a4d1c
+ (_Bool)canPlayItemType:(unsigned long long)arg1 withPersistentID:(id)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x00000001000a4a90

@end
