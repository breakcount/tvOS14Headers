//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel;

@interface TVPPhotoLibraryOptInOfferViewController : UIViewController
{
    CDUnknownBlockType _optInBlock;	// 8 = 0x8
    CDUnknownBlockType _optOutBlock;	// 16 = 0x10
    UIButton *_optInButton;	// 24 = 0x18
    UILabel *_footerLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100078cc8
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *optInButton; // @synthesize optInButton=_optInButton;
@property(copy, nonatomic) CDUnknownBlockType optOutBlock; // @synthesize optOutBlock=_optOutBlock;
@property(copy, nonatomic) CDUnknownBlockType optInBlock; // @synthesize optInBlock=_optInBlock;
- (void)_optOut:(id)arg1;	// IMP=0x0000000100078c0c
- (void)_optIn:(id)arg1;	// IMP=0x0000000100078bd0
- (id)_footerColor;	// IMP=0x0000000100078bb0
- (id)_descriptionColor;	// IMP=0x0000000100078b90
- (id)_titleColor;	// IMP=0x0000000100078b70
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100078a6c
- (void)viewDidLoad;	// IMP=0x00000001000774f8

@end
