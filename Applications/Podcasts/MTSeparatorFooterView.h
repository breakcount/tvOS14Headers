//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIView;

@interface MTSeparatorFooterView : UITableViewHeaderFooterView
{
    UIView *_dividerView;	// 8 = 0x8
    struct UIEdgeInsets _separatorInsets;	// 16 = 0x10
    struct CGRect _floatingRect;	// 48 = 0x30
}

+ (double)heightForSeparatorInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000100139428
+ (id)reuseIdentifier;	// IMP=0x0000000100139424
- (void).cxx_destruct;	// IMP=0x000000010013986c
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(nonatomic) struct CGRect floatingRect; // @synthesize floatingRect=_floatingRect;
@property(nonatomic) struct UIEdgeInsets separatorInsets; // @synthesize separatorInsets=_separatorInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100139728
- (void)layoutSubviews;	// IMP=0x00000001001395d4
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000001001394a0

@end

