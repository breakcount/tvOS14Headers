//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class BRLTTableEnumerator;

@interface AXTVBrailleAllLanguagesController : TSKViewController
{
    _Bool _addingNewLanguage;	// 8 = 0x8
    BRLTTableEnumerator *_tableEnumerator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003ab2c
@property(nonatomic, getter=isAddingNewLanguage) _Bool addingNewLanguage; // @synthesize addingNewLanguage=_addingNewLanguage;
@property(retain, nonatomic) BRLTTableEnumerator *tableEnumerator; // @synthesize tableEnumerator=_tableEnumerator;
- (id)loadSettingGroups;	// IMP=0x000000000003a2cc
- (id)initWithTableEnumerator:(id)arg1;	// IMP=0x000000000003a264

@end

