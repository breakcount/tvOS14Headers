//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKPreviewViewController.h>

@class NSString, UIImageView;

@interface GCTVSettingsPreviewViewController : TSKPreviewViewController
{
    long long _controllerType;	// 8 = 0x8
    UIImageView *_controllerImageView;	// 16 = 0x10
    NSString *_buttonName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000006f34
@property(copy, nonatomic) NSString *buttonName; // @synthesize buttonName=_buttonName;
- (void)_updatePreviewImage;	// IMP=0x0000000000006b84
- (void)_willEnterForeground:(id)arg1;	// IMP=0x0000000000006b78
- (void)viewDidLoad;	// IMP=0x0000000000006aa8
- (id)initWithControllerType:(long long)arg1 buttonNamed:(id)arg2;	// IMP=0x0000000000006a18
- (id)initWithControllerType:(long long)arg1;	// IMP=0x0000000000006a08

@end

