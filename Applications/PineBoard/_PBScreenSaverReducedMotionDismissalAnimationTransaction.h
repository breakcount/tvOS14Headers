//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class PBScreenSaverContentPresentingViewController, UIViewPropertyAnimator;

@interface _PBScreenSaverReducedMotionDismissalAnimationTransaction : BSTransaction
{
    _Bool _animated;	// 8 = 0x8
    _Bool _shouldApplyStartValues;	// 9 = 0x9
    PBScreenSaverContentPresentingViewController *_screenSaverViewController;	// 16 = 0x10
    UIViewPropertyAnimator *_alphaAnimator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010014b320
@property(readonly, nonatomic) UIViewPropertyAnimator *alphaAnimator; // @synthesize alphaAnimator=_alphaAnimator;
@property(nonatomic) _Bool shouldApplyStartValues; // @synthesize shouldApplyStartValues=_shouldApplyStartValues;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) PBScreenSaverContentPresentingViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
- (void)_begin;	// IMP=0x000000010014a8b4
- (_Bool)_canBeInterrupted;	// IMP=0x000000010014a894

@end
