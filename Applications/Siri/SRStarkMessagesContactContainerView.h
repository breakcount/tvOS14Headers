//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber, UILabel;

@interface SRStarkMessagesContactContainerView : UIView
{
    NSNumber *_yOffset;	// 8 = 0x8
    UILabel *_nameLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100033848
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) NSNumber *yOffset; // @synthesize yOffset=_yOffset;
- (void)layoutSubviews;	// IMP=0x00000001000335fc
- (void)_updateYOffset:(id)arg1;	// IMP=0x00000001000334a4
- (void)centerText;	// IMP=0x0000000100033494
- (void)setTextOffset:(double)arg1;	// IMP=0x0000000100033440
- (void)_configureWithAceObject:(id)arg1;	// IMP=0x00000001000332a0
- (void)updateWithAceObject:(id)arg1;	// IMP=0x00000001000330ec
- (id)initWithAceObject:(id)arg1;	// IMP=0x0000000100032dfc

@end

