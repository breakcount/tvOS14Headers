/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOTrafficResponseMetaData, NSMutableArray;

@interface GEOTrafficTrafficApiResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOSessionID _responseId;
	GEOTrafficResponseMetaData* _metaData;
	NSMutableArray* _trafficSnapshots;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_responseId : 1;
		unsigned read_metaData : 1;
		unsigned read_trafficSnapshots : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResponseId; 
@property (assign,nonatomic) GEOSessionID responseId; 
@property (nonatomic,readonly) BOOL hasMetaData; 
@property (nonatomic,retain) GEOTrafficResponseMetaData * metaData; 
@property (nonatomic,retain) NSMutableArray * trafficSnapshots; 
+(BOOL)isValid:(id)arg1 ;
+(Class)trafficSnapshotsType;
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
-(GEOSessionID)responseId;
-(void)setResponseId:(GEOSessionID)arg1 ;
-(BOOL)hasResponseId;
-(GEOTrafficResponseMetaData *)metaData;
-(void)setMetaData:(GEOTrafficResponseMetaData *)arg1 ;
-(BOOL)hasMetaData;
-(void)addTrafficSnapshots:(id)arg1 ;
-(unsigned long long)trafficSnapshotsCount;
-(void)clearTrafficSnapshots;
-(id)trafficSnapshotsAtIndex:(unsigned long long)arg1 ;
-(void)setHasResponseId:(BOOL)arg1 ;
-(NSMutableArray *)trafficSnapshots;
-(void)setTrafficSnapshots:(NSMutableArray *)arg1 ;
@end

