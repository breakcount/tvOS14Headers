//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDAutoUnlockLTKInfo : PBCodable <NSCopying>
{
    NSData *_ltk;	// 8 = 0x8
    NSData *_ltkID;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _signout;	// 28 = 0x1c
    struct {
        unsigned int version:1;
        unsigned int signout:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010012989c
@property(nonatomic) _Bool signout; // @synthesize signout=_signout;
@property(retain, nonatomic) NSData *ltkID; // @synthesize ltkID=_ltkID;
@property(retain, nonatomic) NSData *ltk; // @synthesize ltk=_ltk;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100129770
- (unsigned long long)hash;	// IMP=0x00000001001296b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100129578
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100129478
- (void)copyTo:(id)arg1;	// IMP=0x00000001001293b4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100129300
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001292f8
- (id)dictionaryRepresentation;	// IMP=0x0000000100128e70
- (id)description;	// IMP=0x0000000100128dbc
@property(nonatomic) _Bool hasSignout;
@property(readonly, nonatomic) _Bool hasLtkID;
@property(readonly, nonatomic) _Bool hasLtk;
@property(nonatomic) _Bool hasVersion;

@end
