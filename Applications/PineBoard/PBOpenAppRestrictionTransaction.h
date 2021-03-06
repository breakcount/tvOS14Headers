//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class PBOpenApplicationRequest, PBRestrictionServiceRequest;

@interface PBOpenAppRestrictionTransaction : BSTransaction
{
    PBOpenApplicationRequest *_openRequest;	// 8 = 0x8
    unsigned long long _restrictionValue;	// 16 = 0x10
    PBRestrictionServiceRequest *_restrictionRequest;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000adaec
@property(readonly, nonatomic) PBRestrictionServiceRequest *restrictionRequest; // @synthesize restrictionRequest=_restrictionRequest;
@property(nonatomic) unsigned long long restrictionValue; // @synthesize restrictionValue=_restrictionValue;
@property(readonly, nonatomic) PBOpenApplicationRequest *openRequest; // @synthesize openRequest=_openRequest;
- (_Bool)_needsUI;	// IMP=0x00000001000ad800
- (void)_begin;	// IMP=0x00000001000ad20c
- (id)initWithRequest:(id)arg1;	// IMP=0x00000001000acf7c

@end

