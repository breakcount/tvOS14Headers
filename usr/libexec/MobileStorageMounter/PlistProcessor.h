//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PlistProcessor : NSObject
{
}

+ (id)sharedPlistProcessor;	// IMP=0x0000000100005c54
- (_Bool)verifyPlist:(id)arg1 forMountPoint:(id)arg2;	// IMP=0x00000001000068a0
- (id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2;	// IMP=0x0000000100005eb8
- (void)scanPlistsAtPath:(id)arg1 execBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005cc0

@end

