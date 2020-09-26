//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableSet;
@protocol MTSettingsControllerDelegate;

@interface MTSettingsController : NSObject
{
    NSDictionary *_groups;	// 8 = 0x8
    NSArray *_order;	// 16 = 0x10
    id <MTSettingsControllerDelegate> _delegate;	// 24 = 0x18
    NSMutableSet *_disabledGroups;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010010f074
@property(retain, nonatomic) NSMutableSet *disabledGroups; // @synthesize disabledGroups=_disabledGroups;
@property(nonatomic) __weak id <MTSettingsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *order; // @synthesize order=_order;
@property(copy, nonatomic) NSDictionary *groups; // @synthesize groups=_groups;
- (void)setValue:(id)arg1 forSettingWithIdentifier:(id)arg2 inGroup:(id)arg3;	// IMP=0x000000010010ed44
- (void)removeSettingAtIndex:(unsigned long long)arg1 fromGroupWithIdentifier:(id)arg2;	// IMP=0x000000010010ec38
- (void)removeGroupWithIdentifier:(id)arg1;	// IMP=0x000000010010eb20
- (void)addGroup:(id)arg1 withIdentifier:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010010e9f8
- (void)setHeaderAction:(id)arg1 forGroupWithIdentifier:(id)arg2;	// IMP=0x000000010010e928
- (void)setEnabled:(_Bool)arg1 forGroupWithIdentifier:(id)arg2;	// IMP=0x000000010010e83c
- (_Bool)isEnabledForGroupWithIdentifier:(id)arg1;	// IMP=0x000000010010e7c0
- (void)reloadGroupWithIdentifier:(id)arg1;	// IMP=0x000000010010e6d0

@end
