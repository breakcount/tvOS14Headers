//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKTableViewTextCell.h>

@class GCControllerElement, GCControllerSettings, NSString, UIImageView;

@interface GCTVSettingsButtonCell : TSKTableViewTextCell
{
    UIImageView *_remappedButtonIconView;	// 8 = 0x8
    UIImageView *_buttonIconView;	// 16 = 0x10
    NSString *_originalText;	// 24 = 0x18
    _Bool _showRemappedIcon;	// 32 = 0x20
    GCControllerElement *_element;	// 40 = 0x28
    GCControllerSettings *_settings;	// 48 = 0x30
    NSString *_buttonIconSfSymbolsName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000008364
@property(retain, nonatomic) NSString *buttonIconSfSymbolsName; // @synthesize buttonIconSfSymbolsName=_buttonIconSfSymbolsName;
@property(nonatomic) _Bool showRemappedIcon; // @synthesize showRemappedIcon=_showRemappedIcon;
@property(retain, nonatomic) GCControllerSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) GCControllerElement *element; // @synthesize element=_element;
- (void)dealloc;	// IMP=0x00000000000081f0
- (void)_updateButtonImage;	// IMP=0x0000000000007e08
- (void)_updateAccessoryTintColor;	// IMP=0x0000000000007c7c
- (void)layoutSubviews;	// IMP=0x0000000000007768
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000076b0
- (void)setElement:(id)arg1 settings:(id)arg2 showRemappedIcon:(_Bool)arg3;	// IMP=0x00000000000075bc
- (void)setButtonIconSFSymbolsName:(id)arg1;	// IMP=0x0000000000007544
- (void)reset;	// IMP=0x00000000000074b8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000007284

@end

