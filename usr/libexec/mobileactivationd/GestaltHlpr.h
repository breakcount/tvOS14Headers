//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GestaltHlpr : NSObject
{
}

+ (id)getSharedInstance;	// IMP=0x000000010000d750
- (void)updateRecertInfo:(id)arg1 errors:(id *)arg2;	// IMP=0x000000010000dd70
- (id)copyRegulatoryImagesInfo:(id *)arg1;	// IMP=0x000000010000dcd4
- (id)copyDeviceInfo:(id *)arg1;	// IMP=0x000000010000da2c
- (id)copyDeviceIDInfo:(id *)arg1;	// IMP=0x000000010000d964
- (void)addAGestaltKey:(struct __CFString *)arg1 toDictionary:(id)arg2 required:(_Bool)arg3 errors:(id)arg4;	// IMP=0x000000010000d834
- (_Bool)getBoolAnswer:(struct __CFString *)arg1;	// IMP=0x000000010000d7d4
- (id)copyAnswer:(struct __CFString *)arg1;	// IMP=0x000000010000d7bc

@end
