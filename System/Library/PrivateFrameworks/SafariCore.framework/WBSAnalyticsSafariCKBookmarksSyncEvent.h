/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WBSAnalyticsSafariCKBookmarksSyncEvent : PBCodable <NSCopying> {

	long long _result;
	unsigned long long _timestamp;
	NSString* _errorCode;
	NSString* _errorDomain;
	SCD_Struct_WB1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) long long result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(long long)result;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setResult:(long long)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)errorDomain;
-(NSString *)errorCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasResult:(BOOL)arg1 ;
-(BOOL)hasResult;
-(BOOL)hasErrorDomain;
-(BOOL)hasErrorCode;
@end

