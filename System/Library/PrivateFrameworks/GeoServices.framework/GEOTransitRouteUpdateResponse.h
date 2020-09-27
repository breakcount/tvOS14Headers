/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDDatasetABStatus, NSData, GEOTransitRouteUpdateConfiguration, NSMutableArray, NSString;

@interface GEOTransitRouteUpdateResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTimepoint _timepointUsed;
	GEOPDDatasetABStatus* _datasetAbStatus;
	NSData* _responseId;
	GEOTransitRouteUpdateConfiguration* _routeUpdateConfiguration;
	NSMutableArray* _routeUpdates;
	NSString* _transitDataVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_timepointUsed : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_responseId : 1;
		unsigned read_routeUpdateConfiguration : 1;
		unsigned read_routeUpdates : 1;
		unsigned read_transitDataVersion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * routeUpdates; 
@property (nonatomic,readonly) BOOL hasResponseId; 
@property (nonatomic,retain) NSData * responseId; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,readonly) BOOL hasRouteUpdateConfiguration; 
@property (nonatomic,retain) GEOTransitRouteUpdateConfiguration * routeUpdateConfiguration; 
@property (assign,nonatomic) BOOL hasTimepointUsed; 
@property (assign,nonatomic) GEOTimepoint timepointUsed; 
@property (nonatomic,readonly) BOOL hasTransitDataVersion; 
@property (nonatomic,retain) NSString * transitDataVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)routeUpdateType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSData *)responseId;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(GEOTransitRouteUpdateConfiguration *)routeUpdateConfiguration;
-(NSString *)transitDataVersion;
-(void)addRouteUpdate:(id)arg1 ;
-(void)setResponseId:(NSData *)arg1 ;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(void)setRouteUpdateConfiguration:(GEOTransitRouteUpdateConfiguration *)arg1 ;
-(void)setTimepointUsed:(GEOTimepoint)arg1 ;
-(void)setTransitDataVersion:(NSString *)arg1 ;
-(unsigned long long)routeUpdatesCount;
-(void)clearRouteUpdates;
-(id)routeUpdateAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)routeUpdates;
-(void)setRouteUpdates:(NSMutableArray *)arg1 ;
-(BOOL)hasResponseId;
-(BOOL)hasDatasetAbStatus;
-(BOOL)hasRouteUpdateConfiguration;
-(GEOTimepoint)timepointUsed;
-(void)setHasTimepointUsed:(BOOL)arg1 ;
-(BOOL)hasTimepointUsed;
-(BOOL)hasTransitDataVersion;
@end

