//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyTaskWaiting : PBCodable <NSCopying>
{
    unsigned int _reason;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    struct {
        unsigned int reason:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003cd98
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003ccd4
- (unsigned long long)hash;	// IMP=0x000000010003cc6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003cb90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003cae8
- (void)copyTo:(id)arg1;	// IMP=0x000000010003ca70
- (void)writeTo:(id)arg1;	// IMP=0x000000010003ca00
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003c760
- (id)dictionaryRepresentation;	// IMP=0x000000010003c670
- (id)description;	// IMP=0x000000010003c5bc
@property(nonatomic) _Bool hasReason;
@property(readonly, nonatomic) _Bool hasTask;

@end
