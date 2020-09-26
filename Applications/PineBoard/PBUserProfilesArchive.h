//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface PBUserProfilesArchive : NSObject <BSDescriptionProviding, NSSecureCoding>
{
    unsigned long long _version;	// 8 = 0x8
    NSDictionary *_userProfiles;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001ad744
+ (id)archiveWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000001001ad068
- (void).cxx_destruct;	// IMP=0x00000001001adad4
@property(readonly, nonatomic) NSDictionary *userProfiles; // @synthesize userProfiles=_userProfiles;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (id)succinctDescriptionBuilder;	// IMP=0x00000001001ada60
- (id)succinctDescription;	// IMP=0x00000001001ad9f0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001001ad94c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001001ad764
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001ad6ac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001ad4c8
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000001001acc54
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithUserProfiles:(id)arg1;	// IMP=0x00000001001acae0

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
