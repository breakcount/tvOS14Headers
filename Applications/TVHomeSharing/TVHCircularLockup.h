//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHSimpleLockup.h"

@class NSString, TVImageProxy, UIColor, UIImage;

@interface TVHCircularLockup : TVHSimpleLockup
{
}

+ (id)_contentViewWithLockupLayout:(id)arg1;	// IMP=0x0000000100006f48
- (id)_circularContentView;	// IMP=0x0000000100006fa0
- (void)setFocusedSizeIncrease:(double)arg1;	// IMP=0x0000000100006ec8
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UIColor *placeholderImageTintColor;
@property(retain, nonatomic) UIImage *placeholderImage;
@property(retain, nonatomic) TVImageProxy *imageProxy;
@property(retain, nonatomic) UIImage *image;

@end

