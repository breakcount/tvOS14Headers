//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface TVMTMusicBarsView : UIView
{
    NSArray *_barViews;	// 8 = 0x8
    float _repeatCount;	// 16 = 0x10
    unsigned long long _musicBarsStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010016a73c
- (void)_addAnimationsWithRepeatCount:(float)arg1;	// IMP=0x000000010016a3b4
- (void)_removeAnimations;	// IMP=0x000000010016a270
- (void)_addAnimations;	// IMP=0x000000010016a25c
- (id)_createBarViews;	// IMP=0x000000010016a0d4
- (void)_setBarHeights:(double)arg1;	// IMP=0x0000000100169f60
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100169e98
@property(nonatomic) unsigned long long musicBarsStyle;
- (void)_updateMusicBarsStyle;	// IMP=0x0000000100169b7c
- (void)resumeAnimating;	// IMP=0x0000000100169ae4
- (void)stopAnimating;	// IMP=0x0000000100169a58
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100169a04
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001698f8

@end

