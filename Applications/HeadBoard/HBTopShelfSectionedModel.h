//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBTopShelfModel.h"

@class NSArray;

@interface HBTopShelfSectionedModel : HBTopShelfModel
{
    NSArray *_sections;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010008f9c4
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (unsigned long long)_itemsCount;	// IMP=0x000000010008f84c
- (void)_applyItemUpdates:(id)arg1;	// IMP=0x000000010008f6f0
- (id)_logSafeDescriptionBuilder;	// IMP=0x000000010008f610
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010008f554
- (id)initWithTopShelfSectionedContent:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x000000010008f30c

@end
