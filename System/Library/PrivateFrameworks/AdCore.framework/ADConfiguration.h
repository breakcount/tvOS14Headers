/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ADConfiguration : PBCodable <NSCopying> {

	double _expirationDate;
	NSString* _baseUrl;
	NSString* _bundleId;
	int _requestType;
	BOOL _isTest;
	SCD_Struct_AD2 _has;

}

@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                     //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) BOOL hasIsTest; 
@property (assign,nonatomic) BOOL isTest;                         //@synthesize isTest=_isTest - In the implementation block
@property (nonatomic,readonly) BOOL hasBaseUrl; 
@property (nonatomic,retain) NSString * baseUrl;                  //@synthesize baseUrl=_baseUrl - In the implementation block
@property (assign,nonatomic) BOOL hasExpirationDate; 
@property (assign,nonatomic) double expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setExpirationDate:(double)arg1 ;
-(double)expirationDate;
-(void)setBundleId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(int)requestType;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasExpirationDate;
-(BOOL)hasBundleId;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(void)setBaseUrl:(NSString *)arg1 ;
-(void)setIsTest:(BOOL)arg1 ;
-(void)setHasIsTest:(BOOL)arg1 ;
-(BOOL)hasIsTest;
-(BOOL)hasBaseUrl;
-(BOOL)isTest;
-(NSString *)baseUrl;
@end
