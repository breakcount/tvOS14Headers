//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MSDLocalization : NSObject
{
    NSDictionary *_localizationTable;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000251b4
- (void).cxx_destruct;	// IMP=0x0000000100025640
@property(retain, nonatomic) NSDictionary *localizationTable; // @synthesize localizationTable=_localizationTable;
- (id)localizedStringWithKey:(id)arg1 defaultString:(id)arg2;	// IMP=0x0000000100025460
- (id)init;	// IMP=0x0000000100025220

@end

