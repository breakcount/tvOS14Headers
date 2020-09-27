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

@class PBDataReader, GEORoutingSettingsCyclingPrefs, GEORoutingSettingsDrivingPrefs, GEORoutingSettingsVirtualGarageSetttings;

@interface GEOLogMsgStateRoutingSettings : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEORoutingSettingsCyclingPrefs* _cyclingPrefs;
	GEORoutingSettingsDrivingPrefs* _drivingPrefs;
	GEORoutingSettingsVirtualGarageSetttings* _virtualGarageSettings;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_cyclingPrefs : 1;
		unsigned read_drivingPrefs : 1;
		unsigned read_virtualGarageSettings : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVirtualGarageSettings; 
@property (nonatomic,retain) GEORoutingSettingsVirtualGarageSetttings * virtualGarageSettings; 
@property (nonatomic,readonly) BOOL hasCyclingPrefs; 
@property (nonatomic,retain) GEORoutingSettingsCyclingPrefs * cyclingPrefs; 
@property (nonatomic,readonly) BOOL hasDrivingPrefs; 
@property (nonatomic,retain) GEORoutingSettingsDrivingPrefs * drivingPrefs; 
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
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEORoutingSettingsVirtualGarageSetttings *)virtualGarageSettings;
-(GEORoutingSettingsCyclingPrefs *)cyclingPrefs;
-(GEORoutingSettingsDrivingPrefs *)drivingPrefs;
-(void)setVirtualGarageSettings:(GEORoutingSettingsVirtualGarageSetttings *)arg1 ;
-(void)setCyclingPrefs:(GEORoutingSettingsCyclingPrefs *)arg1 ;
-(void)setDrivingPrefs:(GEORoutingSettingsDrivingPrefs *)arg1 ;
-(BOOL)hasVirtualGarageSettings;
-(BOOL)hasCyclingPrefs;
-(BOOL)hasDrivingPrefs;
@end

