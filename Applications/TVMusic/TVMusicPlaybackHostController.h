//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TVPPlaybackViewController;
@protocol TVPPlayback;

@interface TVMusicPlaybackHostController : UIViewController
{
    _Bool _visible;	// 8 = 0x8
    TVPPlaybackViewController *_playbackViewController;	// 16 = 0x10
    id <TVPPlayback> _player;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100014428
@property(retain, nonatomic) id <TVPPlayback> player; // @synthesize player=_player;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) TVPPlaybackViewController *playbackViewController; // @synthesize playbackViewController=_playbackViewController;
- (_Bool)_tvTabBarShouldAutohide;	// IMP=0x00000001000143b8
- (id)preferredFocusEnvironments;	// IMP=0x0000000100014318
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100014214
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100013f60
- (id)initWithPlayer:(id)arg1;	// IMP=0x0000000100013ed8

@end
