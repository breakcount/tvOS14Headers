//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKBaseTableViewCell.h>

#import "TSKCellUpdating-Protocol.h"

@class NSArray, NSString, TSKSettingItem, UIActivityIndicatorView, UIImageView, UILabel, UITapGestureRecognizer;

@interface TVNPSettingsRouteTableViewCell : TSKBaseTableViewCell <TSKCellUpdating>
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_detailLabel;	// 16 = 0x10
    UIImageView *_deviceImageView;	// 24 = 0x18
    UIImageView *_symbolImageview;	// 32 = 0x20
    UIImageView *_checkmarkView;	// 40 = 0x28
    UIActivityIndicatorView *_spinnerView;	// 48 = 0x30
    NSArray *_konamiSequenceArray;	// 56 = 0x38
    UITapGestureRecognizer *_playPauseButtonRecognizer;	// 64 = 0x40
    TSKSettingItem *_item;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000003a98
@property(nonatomic) __weak TSKSettingItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UITapGestureRecognizer *playPauseButtonRecognizer; // @synthesize playPauseButtonRecognizer=_playPauseButtonRecognizer;
@property(retain, nonatomic) NSArray *konamiSequenceArray; // @synthesize konamiSequenceArray=_konamiSequenceArray;
@property(readonly, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(readonly, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(readonly, nonatomic) UIImageView *symbolImageview; // @synthesize symbolImageview=_symbolImageview;
@property(readonly, nonatomic) UIImageView *deviceImageView; // @synthesize deviceImageView=_deviceImageView;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_addInitialConstraints;	// IMP=0x0000000000003210
- (void)_updateKonamiCodeTrackerWithButtonPressType:(long long)arg1;	// IMP=0x0000000000003008
- (void)_konamiCodeRecognizerWithTapGestureRecognizer:(id)arg1;	// IMP=0x0000000000002f2c
- (void)settingItem:(id)arg1 didUpdateMetadataWithGroup:(id)arg2;	// IMP=0x0000000000002ad4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000002680

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

