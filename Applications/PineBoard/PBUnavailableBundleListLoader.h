//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBUnavailableBundleListLoader : NSObject
{
}

- (id)_numberArrayFromStringArray:(id)arg1;	// IMP=0x000000010013f414
- (id)_requestPromiseWithEndpoint:(id)arg1;	// IMP=0x000000010013f1cc
- (id)_santizeProgrammingInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000010013eef0
- (id)_loadProgrammingInfoPromise;	// IMP=0x000000010013e9d0
- (id)_santizeMappingInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000010013e508
- (id)_loadMappingInfoPromise;	// IMP=0x000000010013dfe8
- (id)loadIdentifierMappingInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010013db0c
- (id)loadProgrammingInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010013d630
- (id)fetchListWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010013cf3c

@end

