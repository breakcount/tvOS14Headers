//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
{
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100074658
+ (id)codedPropertyKeys;	// IMP=0x0000000100074634
+ (id)internalRepresentation;	// IMP=0x0000000100074168
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100074160
+ (id)internalRepresentationWithProperties:(id)arg1;	// IMP=0x0000000100121374
+ (id)propertiesToFetch;	// IMP=0x0000000100121298
+ (id)internalRepresentationForCacheObject:(id)arg1;	// IMP=0x0000000100120e68
- (void)mergePropertiesFrom:(id)arg1;	// IMP=0x0000000100074d30
- (id)serverRepresentation;	// IMP=0x0000000100074d24
- (id)description;	// IMP=0x0000000100074d14
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x0000000100074670
- (id)descriptionSubstitutionMap;	// IMP=0x0000000100074664
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000744b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100074370
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010007417c
- (void)updateWithProperties:(id)arg1;	// IMP=0x0000000100121404
- (id)initWithProperties:(id)arg1;	// IMP=0x00000001001213a4
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100120ff4
- (id)initWithCacheObject:(id)arg1;	// IMP=0x0000000100120e98

@end

