//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, NSArray, NSString, TVImageView, UILabel, UIView, _UIFloatingContentView;

@interface TVMusicPlaylistLockupViewCell : UICollectionViewCell
{
    _Bool _createdImageViews;	// 8 = 0x8
    _UIFloatingContentView *_floatingView;	// 16 = 0x10
    NSArray *_imageViews;	// 24 = 0x18
    UIView *_titleBlockView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_subtitleLabel;	// 48 = 0x30
    TVImageView *_titleBackgroundImageView;	// 56 = 0x38
    NSString *_playlistID;	// 64 = 0x40
    CALayer *_titleGradientLayer;	// 72 = 0x48
}

+ (id)playlistViewFromElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000001000b5d60
- (void).cxx_destruct;	// IMP=0x00000001000b7fac
@property(retain, nonatomic) CALayer *titleGradientLayer; // @synthesize titleGradientLayer=_titleGradientLayer;
@property(retain, nonatomic) NSString *playlistID; // @synthesize playlistID=_playlistID;
@property(retain, nonatomic) TVImageView *titleBackgroundImageView; // @synthesize titleBackgroundImageView=_titleBackgroundImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleBlockView; // @synthesize titleBlockView=_titleBlockView;
@property(nonatomic) _Bool createdImageViews; // @synthesize createdImageViews=_createdImageViews;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
- (id)_randomColor;	// IMP=0x00000001000b7e10
- (void)_configureLabel:(id)arg1 withTextElement:(id)arg2 maxWidth:(double)arg3;	// IMP=0x00000001000b7c80
- (struct CGRect)_scaleRect:(struct CGRect)arg1 withStyle:(id)arg2;	// IMP=0x00000001000b7b60
- (void)_setColorsForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000001000b7a0c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000b7940
- (void)layoutSubviews;	// IMP=0x00000001000b785c
- (void)layoutWithElement:(id)arg1;	// IMP=0x00000001000b6508
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000b647c
- (void)prepareForReuse;	// IMP=0x00000001000b6428
- (_Bool)canBecomeFocused;	// IMP=0x00000001000b6420
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000b5e14

@end
