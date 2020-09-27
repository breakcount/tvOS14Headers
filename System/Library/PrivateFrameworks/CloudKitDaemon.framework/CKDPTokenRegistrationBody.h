/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDPTokenRegistrationBody : PBCodable <NSCopying> {

	int _apnsEnv;
	NSString* _bundleIdentifier;
	NSData* _token;
	BOOL _skipBundleIDCheck;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSData * token;                           //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasApnsEnv; 
@property (assign,nonatomic) int apnsEnv;                              //@synthesize apnsEnv=_apnsEnv - In the implementation block
@property (assign,nonatomic) BOOL hasSkipBundleIDCheck; 
@property (assign,nonatomic) BOOL skipBundleIDCheck;                   //@synthesize skipBundleIDCheck=_skipBundleIDCheck - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSData *)token;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setToken:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleIdentifier;
-(BOOL)hasToken;
-(int)apnsEnv;
-(void)setApnsEnv:(int)arg1 ;
-(void)setHasApnsEnv:(BOOL)arg1 ;
-(BOOL)hasApnsEnv;
-(id)apnsEnvAsString:(int)arg1 ;
-(int)StringAsApnsEnv:(id)arg1 ;
-(void)setSkipBundleIDCheck:(BOOL)arg1 ;
-(void)setHasSkipBundleIDCheck:(BOOL)arg1 ;
-(BOOL)hasSkipBundleIDCheck;
-(BOOL)skipBundleIDCheck;
@end

