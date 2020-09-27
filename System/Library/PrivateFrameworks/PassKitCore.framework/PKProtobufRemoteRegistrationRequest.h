/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKProtobufRemoteRegistrationRequest : PBRequest <NSCopying> {

	unsigned _version;
	BOOL _registerBroker;
	BOOL _registerPeerPayment;
	SCD_Struct_PK7 _has;

}

@property (assign,nonatomic) unsigned version;                         //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasRegisterBroker; 
@property (assign,nonatomic) BOOL registerBroker;                      //@synthesize registerBroker=_registerBroker - In the implementation block
@property (assign,nonatomic) BOOL hasRegisterPeerPayment; 
@property (assign,nonatomic) BOOL registerPeerPayment;                 //@synthesize registerPeerPayment=_registerPeerPayment - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)registerBroker;
-(void)setRegisterBroker:(BOOL)arg1 ;
-(BOOL)registerPeerPayment;
-(void)setRegisterPeerPayment:(BOOL)arg1 ;
-(void)setHasRegisterBroker:(BOOL)arg1 ;
-(BOOL)hasRegisterBroker;
-(void)setHasRegisterPeerPayment:(BOOL)arg1 ;
-(BOOL)hasRegisterPeerPayment;
@end

