//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHGridViewLayout.h"

@class NSDictionary, TVHSimpleLockupLayout;

@interface TVHMediaEntitiesGridViewLayout : TVHGridViewLayout
{
    TVHSimpleLockupLayout *_lockupLayout;	// 8 = 0x8
    NSDictionary *_lockupLayoutByMediaEntityType;	// 16 = 0x10
    NSDictionary *_minimumLineSpacingByFetchRequestIdentifier;	// 24 = 0x18
    NSDictionary *_minimumInteritemSpacingByFetchRequestIdentifier;	// 32 = 0x20
}

+ (id)mediaEntitiesGridViewLayoutWithImageSizes:(id)arg1 footerLayoutType:(unsigned long long)arg2;	// IMP=0x00000001000a3a5c
+ (id)mediaEntitiesGridViewLayoutWithImageSize:(struct CGSize)arg1 footerLayoutType:(unsigned long long)arg2;	// IMP=0x00000001000a399c
+ (id)mediaEntitiesGridViewLayoutWithImageSize:(struct CGSize)arg1;	// IMP=0x00000001000a3924
- (void).cxx_destruct;	// IMP=0x00000001000a3dc4
@property(copy, nonatomic) NSDictionary *minimumInteritemSpacingByFetchRequestIdentifier; // @synthesize minimumInteritemSpacingByFetchRequestIdentifier=_minimumInteritemSpacingByFetchRequestIdentifier;
@property(copy, nonatomic) NSDictionary *minimumLineSpacingByFetchRequestIdentifier; // @synthesize minimumLineSpacingByFetchRequestIdentifier=_minimumLineSpacingByFetchRequestIdentifier;
@property(copy, nonatomic) NSDictionary *lockupLayoutByMediaEntityType; // @synthesize lockupLayoutByMediaEntityType=_lockupLayoutByMediaEntityType;
@property(retain, nonatomic) TVHSimpleLockupLayout *lockupLayout; // @synthesize lockupLayout=_lockupLayout;
- (id)init;	// IMP=0x00000001000a3c44

@end

