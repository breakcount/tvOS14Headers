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

@class GEOLogMsgStateDeviceIdentifier;

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying> {

	GEOLogMsgStateDeviceIdentifier* _pairedDeviceIdentifier;
	int _type;
	BOOL _isConnected;
	SCD_Struct_GE114 _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasIsConnected; 
@property (assign,nonatomic) BOOL isConnected; 
@property (nonatomic,readonly) BOOL hasPairedDeviceIdentifier; 
@property (nonatomic,retain) GEOLogMsgStateDeviceIdentifier * pairedDeviceIdentifier; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isConnected;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setIsConnected:(BOOL)arg1 ;
-(void)setPairedDeviceIdentifier:(GEOLogMsgStateDeviceIdentifier *)arg1 ;
-(GEOLogMsgStateDeviceIdentifier *)pairedDeviceIdentifier;
-(void)setHasIsConnected:(BOOL)arg1 ;
-(BOOL)hasIsConnected;
-(BOOL)hasPairedDeviceIdentifier;
@end

