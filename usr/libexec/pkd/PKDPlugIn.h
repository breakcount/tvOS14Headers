//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PKPlugInCore.h"

@class NSDictionary, NSNumber, NSString, NSURL, NSUUID, PKDPersonaCache;
@protocol NSObject;

@interface PKDPlugIn : PKPlugInCore
{
    _Bool _isRBManaged;	// 172 = 0xac
    _Bool _ageRestricted;	// 173 = 0xad
    NSDictionary *_infoPlist;	// 176 = 0xb0
    NSString *_sandboxProfile;	// 184 = 0xb8
    PKDPersonaCache *_personaCache;	// 192 = 0xc0
    unsigned long long _lsSequenceNumber;	// 200 = 0xc8
    NSUUID *_lsKnowledgeUUID;	// 208 = 0xd0
    NSURL *_genericTranslocationURL;	// 216 = 0xd8
    NSNumber *_containerAgeRestriction;	// 224 = 0xe0
    id <NSObject> _fileID;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x000000010000b1a4
@property(readonly) id <NSObject> fileID; // @synthesize fileID=_fileID;
@property(readonly) _Bool ageRestricted; // @synthesize ageRestricted=_ageRestricted;
@property(readonly) NSNumber *containerAgeRestriction; // @synthesize containerAgeRestriction=_containerAgeRestriction;
@property _Bool isRBManaged; // @synthesize isRBManaged=_isRBManaged;
@property(readonly) NSURL *genericTranslocationURL; // @synthesize genericTranslocationURL=_genericTranslocationURL;
@property(readonly) NSUUID *lsKnowledgeUUID; // @synthesize lsKnowledgeUUID=_lsKnowledgeUUID;
@property(readonly) unsigned long long lsSequenceNumber; // @synthesize lsSequenceNumber=_lsSequenceNumber;
@property(readonly) PKDPersonaCache *personaCache; // @synthesize personaCache=_personaCache;
@property(readonly) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
- (id)description;	// IMP=0x000000010000b040
- (id)checkBusy;	// IMP=0x000000010000acd8
- (id)_personaID;	// IMP=0x000000010000a4b8
- (_Bool)enableForClient:(id)arg1 environment:(id)arg2 oneShotUUID:(id)arg3 pid:(int *)arg4 error:(id *)arg5;	// IMP=0x0000000100008f58
- (id)allowedTCCServices;	// IMP=0x0000000100008bac
- (id)allowForClient:(id)arg1;	// IMP=0x0000000100008a6c
- (_Bool)matchDictionary:(id)arg1 pattern:(id)arg2;	// IMP=0x000000010000874c
- (_Bool)matchValue:(id)arg1 pattern:(id)arg2;	// IMP=0x0000000100008468
- (_Bool)matchValue:(id)arg1 patterns:(id)arg2;	// IMP=0x00000001000082a4
- (_Bool)matchKey:(id)arg1 pattern:(id)arg2;	// IMP=0x0000000100007d88
- (_Bool)match:(id)arg1;	// IMP=0x0000000100007bf4
- (id)diagnose;	// IMP=0x0000000100007a6c
@property(readonly) NSString *annotationKey;
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x0000000100007978
- (id)valueForEntitlement:(id)arg1;	// IMP=0x00000001000078f8
- (id)issueResourceExtensions:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;	// IMP=0x000000010000752c
- (void)augmentForm:(id)arg1 host:(id)arg2;	// IMP=0x00000001000071f4
- (id)prunedInfoDictionaryFor:(id)arg1;	// IMP=0x0000000100007048
- (_Bool)isStillValidWithSequenceNumber:(unsigned long long)arg1 knowledgeUUID:(id)arg2;	// IMP=0x000000010000701c
- (_Bool)isStillValidWithKnowledgeUUID:(id)arg1;	// IMP=0x0000000100006fcc
- (_Bool)isStillValid;	// IMP=0x0000000100006fc4
@property(readonly) NSString *sandboxProfile; // @synthesize sandboxProfile=_sandboxProfile;
- (unsigned int)platform;	// IMP=0x0000000100006cb4
- (id)initWithLSData:(id)arg1 knowledgeUUID:(id)arg2 personaCache:(id)arg3 discoveryInstanceUUID:(id)arg4 extensionPointCache:(id)arg5;	// IMP=0x000000010000617c
- (id)getProxy;	// IMP=0x0000000100005fa0
- (void)dealloc;	// IMP=0x0000000100005f6c

@end

