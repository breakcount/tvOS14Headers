//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSString, NSURL, UIImage, UIView;

@interface TVSBInformationalBulletinItem : NSObject <NSCopying>
{
    NSString *_titleText;	// 8 = 0x8
    NSString *_subtitleText;	// 16 = 0x10
    NSString *_footerText;	// 24 = 0x18
    NSAttributedString *_attributedFooterText;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    NSURL *_imageURL;	// 48 = 0x30
    UIView *_customView;	// 56 = 0x38
}

+ (id)itemWithTitleText:(id)arg1 subtitleText:(id)arg2 atrributedFooterText:(id)arg3 customView:(id)arg4;	// IMP=0x0000000100014570
+ (id)itemWithTitleText:(id)arg1 subtitleText:(id)arg2 footerText:(id)arg3 customView:(id)arg4;	// IMP=0x0000000100014460
+ (id)itemWithTitleText:(id)arg1 subtitleText:(id)arg2 atrributedFooterText:(id)arg3 imageURL:(id)arg4;	// IMP=0x0000000100014338
+ (id)itemWithTitleText:(id)arg1 subtitleText:(id)arg2 footerText:(id)arg3 imageURL:(id)arg4;	// IMP=0x0000000100014210
+ (id)itemWithTitleText:(id)arg1 subtitleText:(id)arg2 atrributedFooterText:(id)arg3 image:(id)arg4;	// IMP=0x0000000100014100
+ (id)itemWithTitleText:(id)arg1 subtitleText:(id)arg2 footerText:(id)arg3 image:(id)arg4;	// IMP=0x0000000100013ff0
+ (id)itemWithTitleText:(id)arg1 subtitleText:(id)arg2 atrributedFooterText:(id)arg3;	// IMP=0x0000000100013f04
+ (id)itemWithTitleText:(id)arg1 subtitleText:(id)arg2 footerText:(id)arg3;	// IMP=0x0000000100013e18
- (void).cxx_destruct;	// IMP=0x00000001000146b8
@property(readonly, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSAttributedString *attributedFooterText; // @synthesize attributedFooterText=_attributedFooterText;
@property(readonly, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(readonly, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000139f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000139f4
- (id)_init;	// IMP=0x00000001000139c0
- (id)init;	// IMP=0x00000001000139a8

@end

