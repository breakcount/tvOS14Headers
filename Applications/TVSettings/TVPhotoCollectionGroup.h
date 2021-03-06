//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TVPhotoCollectionGroup : NSObject
{
    NSString *_photoCollectionGroupName;	// 8 = 0x8
    NSString *_photoCollectionGroupIdentifier;	// 16 = 0x10
    NSDictionary *_photoCollectionGroupProviderInfo;	// 24 = 0x18
    NSArray *_photoCollections;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000aabf0
@property(readonly, copy, nonatomic) NSArray *photoCollections; // @synthesize photoCollections=_photoCollections;
@property(readonly, copy, nonatomic) NSDictionary *photoCollectionGroupProviderInfo;
@property(readonly, copy, nonatomic) NSString *photoCollectionGroupIdentifier;
@property(readonly, copy, nonatomic) NSString *photoCollectionGroupName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000aa6ec
- (unsigned long long)hash;	// IMP=0x00000001000aa6c8
- (id)initWithPhotoCollections:(id)arg1;	// IMP=0x00000001000aa648
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000001000aa5c8
- (id)initWithName:(id)arg1;	// IMP=0x00000001000aa548

@end

