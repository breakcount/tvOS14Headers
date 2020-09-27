/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMapKitCount : PBCodable <NSCopying> {

	unsigned _appCount;
	int _appType;
	int _countType;
	unsigned _useCount;
	struct {
		unsigned has_appCount : 1;
		unsigned has_appType : 1;
		unsigned has_countType : 1;
		unsigned has_useCount : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCountType; 
@property (assign,nonatomic) int countType; 
@property (assign,nonatomic) BOOL hasAppType; 
@property (assign,nonatomic) int appType; 
@property (assign,nonatomic) BOOL hasUseCount; 
@property (assign,nonatomic) unsigned useCount; 
@property (assign,nonatomic) BOOL hasAppCount; 
@property (assign,nonatomic) unsigned appCount; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAppType:(int)arg1 ;
-(BOOL)hasAppType;
-(int)appType;
-(unsigned)useCount;
-(void)setUseCount:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasAppType:(BOOL)arg1 ;
-(id)appTypeAsString:(int)arg1 ;
-(int)StringAsAppType:(id)arg1 ;
-(void)setCountType:(int)arg1 ;
-(void)setAppCount:(unsigned)arg1 ;
-(int)countType;
-(void)setHasCountType:(BOOL)arg1 ;
-(BOOL)hasCountType;
-(id)countTypeAsString:(int)arg1 ;
-(int)StringAsCountType:(id)arg1 ;
-(void)setHasUseCount:(BOOL)arg1 ;
-(BOOL)hasUseCount;
-(unsigned)appCount;
-(void)setHasAppCount:(BOOL)arg1 ;
-(BOOL)hasAppCount;
@end

