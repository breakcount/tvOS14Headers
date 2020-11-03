//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, UIImageView;
@protocol OS_dispatch_source;

@interface AXTVCaptionCloudView : UIView
{
    _Bool _shouldHandleUpdates;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_cloudTimer;	// 16 = 0x10
    unsigned long long _cloudIndex;	// 24 = 0x18
    unsigned long long _viewIndex;	// 32 = 0x20
    UIView *_cloudContainer;	// 40 = 0x28
    UIImageView *_cloudView1;	// 48 = 0x30
    UIImageView *_cloudView2;	// 56 = 0x38
    UIImageView *_subtitleView;	// 64 = 0x40
    struct OpaqueFigSubtitleRenderer *_subtitleRenderer;	// 72 = 0x48
}

+ (struct CGSize)preferredSize;	// IMP=0x0000000000028dbc
- (void).cxx_destruct;	// IMP=0x0000000000029b60
- (id)_subtitleImageWithText:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000299bc
- (void)_updateSubtitleImage;	// IMP=0x0000000000029920
- (void)_stopBackgroundAnimation;	// IMP=0x00000000000298dc
- (void)_startBackgroundAnimation;	// IMP=0x00000000000297b0
- (id)_cloudImageSequence;	// IMP=0x0000000000029758
- (id)_cloudImageForIndex:(unsigned long long)arg1;	// IMP=0x000000000002967c
- (void)appearanceSettingsChanged:(id)arg1;	// IMP=0x00000000000295f8
- (void)showNextImage;	// IMP=0x00000000000292b8
- (id)currentSlide;	// IMP=0x0000000000029288
- (id)nextSlide;	// IMP=0x0000000000029250
- (void)didMoveToWindow;	// IMP=0x00000000000291d8
- (void)dealloc;	// IMP=0x000000000002913c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000028dd0

@end

