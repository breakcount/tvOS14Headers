//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TVImageProxy, UIImage, UIImageView, UIView;

@interface TVPPhotoCell : UICollectionViewCell
{
    _Bool _imageLoaded;	// 8 = 0x8
    TVImageProxy *_imageProxy;	// 16 = 0x10
    UIImage *_photoImage;	// 24 = 0x18
    UIImage *_placeholderImage;	// 32 = 0x20
    long long _placeholderAssetType;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UIView *_overlayView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100089e40
@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long placeholderAssetType; // @synthesize placeholderAssetType=_placeholderAssetType;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
- (void)_updateImageView;	// IMP=0x0000000100089d2c
- (void)_setPlaceholderImageFromPlaceholderAssetTypeImage;	// IMP=0x0000000100089ce4
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100089c58
- (_Bool)canBecomeFocused;	// IMP=0x0000000100089c50
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100089b78
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100089ab0
- (double)cellCornerRadius;	// IMP=0x0000000100089aa8
- (void)setOverlay:(id)arg1;	// IMP=0x00000001000899b4
- (void)setImage:(id)arg1;	// IMP=0x0000000100089908
- (void)prepareForReuse;	// IMP=0x0000000100089424
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100089330

@end

