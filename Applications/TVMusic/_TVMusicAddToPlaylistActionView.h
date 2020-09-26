//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, _UIFloatingContentView;

@interface _TVMusicAddToPlaylistActionView : UIView
{
    _UIFloatingContentView *_floatingView;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
    UIImageView *_trailingImageView;	// 24 = 0x18
    CDUnknownBlockType _actionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000830a8
@property(readonly, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) UIImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
- (void)_handleSelectPress:(id)arg1;	// IMP=0x0000000100082f34
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100082ccc
- (_Bool)canBecomeFocused;	// IMP=0x0000000100082cc4
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100082be4
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x0000000100082bb0
- (id)accessibilityLabel;	// IMP=0x0000000100082b5c
- (unsigned long long)accessibilityTraits;	// IMP=0x0000000100082b18
- (_Bool)isAccessibilityElement;	// IMP=0x0000000100082b10
- (void)layoutSubviews;	// IMP=0x00000001000826b4
- (id)initWithText:(id)arg1 isFolder:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000820ec

@end
