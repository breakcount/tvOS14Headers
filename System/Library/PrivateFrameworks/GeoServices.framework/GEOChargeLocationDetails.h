/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOChargeLocationDetails : PBCodable <NSCopying> {

	BOOL _arrivedAtChargeLocation;
	BOOL _routePaused;
	BOOL _routeResumed;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasArrivedAtChargeLocation; 
@property (assign,nonatomic) BOOL arrivedAtChargeLocation; 
@property (assign,nonatomic) BOOL hasRoutePaused; 
@property (assign,nonatomic) BOOL routePaused; 
@property (assign,nonatomic) BOOL hasRouteResumed; 
@property (assign,nonatomic) BOOL routeResumed; 
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
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setRoutePaused:(BOOL)arg1 ;
-(void)setRouteResumed:(BOOL)arg1 ;
-(BOOL)routePaused;
-(void)setHasRoutePaused:(BOOL)arg1 ;
-(BOOL)hasRoutePaused;
-(BOOL)routeResumed;
-(void)setHasRouteResumed:(BOOL)arg1 ;
-(BOOL)hasRouteResumed;
-(void)setArrivedAtChargeLocation:(BOOL)arg1 ;
-(BOOL)arrivedAtChargeLocation;
-(void)setHasArrivedAtChargeLocation:(BOOL)arg1 ;
-(BOOL)hasArrivedAtChargeLocation;
@end

