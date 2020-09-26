//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPVideoPlayerViewController.h>

#import "TVHPlaybackViewController-Protocol.h"

@class NSString;
@protocol TVHVideoPlaybackViewControllerDelegate;

@interface TVHVideoPlaybackViewController : TVPVideoPlayerViewController <TVHPlaybackViewController>
{
}

+ (id)new;	// IMP=0x0000000100007180
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000776c
- (_Bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;	// IMP=0x0000000100007764
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;	// IMP=0x00000001000076e4
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;	// IMP=0x0000000100007664
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;	// IMP=0x00000001000075c0
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;	// IMP=0x0000000100007540
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;	// IMP=0x00000001000074c0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100007430
- (void)viewDidLoad;	// IMP=0x00000001000073bc
@property(readonly, nonatomic) _Bool supportsPictureInPicture;
- (id)initWithPlayer:(id)arg1;	// IMP=0x0000000100007354
- (id)initWithPlayer:(id)arg1 invalidateWhenDone:(_Bool)arg2;	// IMP=0x00000001000072cc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100007244
- (id)init;	// IMP=0x00000001000071bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <TVHVideoPlaybackViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
