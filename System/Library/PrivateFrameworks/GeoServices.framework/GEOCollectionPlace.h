/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOLatLng;

@interface GEOCollectionPlace : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _address;
	GEOLatLng* _coordinate;
	unsigned long long _muid;
	NSString* _name;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _providerId;
	struct {
		unsigned has_muid : 1;
		unsigned has_providerId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_address : 1;
		unsigned read_coordinate : 1;
		unsigned read_name : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasProviderId; 
@property (assign,nonatomic) int providerId; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)address;
-(id)dictionaryRepresentation;
-(GEOLatLng *)coordinate;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(BOOL)hasAddress;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)providerId;
-(void)setProviderId:(int)arg1 ;
-(BOOL)hasProviderId;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasCoordinate;
-(void)setHasProviderId:(BOOL)arg1 ;
@end

