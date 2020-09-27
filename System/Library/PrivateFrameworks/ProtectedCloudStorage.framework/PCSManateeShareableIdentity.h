/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PCSManateePrivateKey;

@interface PCSManateeShareableIdentity : PBCodable <NSCopying> {

	PCSManateePrivateKey* _encryptionPrivateKey;
	PCSManateePrivateKey* _signingPrivateKey;

}

@property (nonatomic,readonly) BOOL hasEncryptionPrivateKey; 
@property (nonatomic,retain) PCSManateePrivateKey * encryptionPrivateKey;              //@synthesize encryptionPrivateKey=_encryptionPrivateKey - In the implementation block
@property (nonatomic,readonly) BOOL hasSigningPrivateKey; 
@property (nonatomic,retain) PCSManateePrivateKey * signingPrivateKey;                 //@synthesize signingPrivateKey=_signingPrivateKey - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEncryptionPrivateKey:(PCSManateePrivateKey *)arg1 ;
-(void)setSigningPrivateKey:(PCSManateePrivateKey *)arg1 ;
-(BOOL)hasEncryptionPrivateKey;
-(BOOL)hasSigningPrivateKey;
-(PCSManateePrivateKey *)encryptionPrivateKey;
-(PCSManateePrivateKey *)signingPrivateKey;
@end

