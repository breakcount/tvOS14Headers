/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraIDSSessionSetup : PBCodable <NSCopying> {

	unsigned _idsSessionInvitationReceived;
	unsigned _idsSessionInvitationSent;
	unsigned _idsSessionStartedOnReceiver;
	unsigned _idsSessionStartedOnResident;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasIdsSessionInvitationSent; 
@property (assign,nonatomic) unsigned idsSessionInvitationSent;                  //@synthesize idsSessionInvitationSent=_idsSessionInvitationSent - In the implementation block
@property (assign,nonatomic) BOOL hasIdsSessionInvitationReceived; 
@property (assign,nonatomic) unsigned idsSessionInvitationReceived;              //@synthesize idsSessionInvitationReceived=_idsSessionInvitationReceived - In the implementation block
@property (assign,nonatomic) BOOL hasIdsSessionStartedOnResident; 
@property (assign,nonatomic) unsigned idsSessionStartedOnResident;               //@synthesize idsSessionStartedOnResident=_idsSessionStartedOnResident - In the implementation block
@property (assign,nonatomic) BOOL hasIdsSessionStartedOnReceiver; 
@property (assign,nonatomic) unsigned idsSessionStartedOnReceiver;               //@synthesize idsSessionStartedOnReceiver=_idsSessionStartedOnReceiver - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIdsSessionInvitationSent:(unsigned)arg1 ;
-(void)setHasIdsSessionInvitationSent:(BOOL)arg1 ;
-(BOOL)hasIdsSessionInvitationSent;
-(void)setIdsSessionInvitationReceived:(unsigned)arg1 ;
-(void)setHasIdsSessionInvitationReceived:(BOOL)arg1 ;
-(BOOL)hasIdsSessionInvitationReceived;
-(void)setIdsSessionStartedOnResident:(unsigned)arg1 ;
-(void)setHasIdsSessionStartedOnResident:(BOOL)arg1 ;
-(BOOL)hasIdsSessionStartedOnResident;
-(void)setIdsSessionStartedOnReceiver:(unsigned)arg1 ;
-(void)setHasIdsSessionStartedOnReceiver:(BOOL)arg1 ;
-(BOOL)hasIdsSessionStartedOnReceiver;
-(unsigned)idsSessionInvitationSent;
-(unsigned)idsSessionInvitationReceived;
-(unsigned)idsSessionStartedOnResident;
-(unsigned)idsSessionStartedOnReceiver;
@end

