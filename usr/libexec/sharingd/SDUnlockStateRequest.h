//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface SDUnlockStateRequest : PBRequest <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c5cbc
- (unsigned long long)hash;	// IMP=0x00000001000c5c88
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c5bdc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c5b70
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c5b40
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c5b14
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c5b0c
- (id)dictionaryRepresentation;	// IMP=0x00000001000c5844
- (id)description;	// IMP=0x00000001000c5790
@property(nonatomic) _Bool hasVersion;

@end
