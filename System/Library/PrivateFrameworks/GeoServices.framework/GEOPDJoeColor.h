/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDJoeColor : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _backgroundColor;
	NSString* _primaryTextColor;
	NSString* _quaternaryTextColor;
	NSString* _secondaryTextColor;
	NSString* _tertiaryTextColor;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_backgroundColor : 1;
		unsigned read_primaryTextColor : 1;
		unsigned read_quaternaryTextColor : 1;
		unsigned read_secondaryTextColor : 1;
		unsigned read_tertiaryTextColor : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBackgroundColor; 
@property (nonatomic,retain) NSString * backgroundColor; 
@property (nonatomic,readonly) BOOL hasPrimaryTextColor; 
@property (nonatomic,retain) NSString * primaryTextColor; 
@property (nonatomic,readonly) BOOL hasSecondaryTextColor; 
@property (nonatomic,retain) NSString * secondaryTextColor; 
@property (nonatomic,readonly) BOOL hasTertiaryTextColor; 
@property (nonatomic,retain) NSString * tertiaryTextColor; 
@property (nonatomic,readonly) BOOL hasQuaternaryTextColor; 
@property (nonatomic,retain) NSString * quaternaryTextColor; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)backgroundColor;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)primaryTextColor;
-(NSString *)secondaryTextColor;
-(NSString *)tertiaryTextColor;
-(NSString *)quaternaryTextColor;
-(void)setPrimaryTextColor:(NSString *)arg1 ;
-(void)setSecondaryTextColor:(NSString *)arg1 ;
-(void)setTertiaryTextColor:(NSString *)arg1 ;
-(void)setQuaternaryTextColor:(NSString *)arg1 ;
-(BOOL)hasBackgroundColor;
-(BOOL)hasPrimaryTextColor;
-(BOOL)hasSecondaryTextColor;
-(BOOL)hasTertiaryTextColor;
-(BOOL)hasQuaternaryTextColor;
@end

