/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOClickableAdvisory, GEOAdvisoryNotice, NSMutableArray;

@interface GEOAdvisoriesInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOClickableAdvisory* _clickableAdvisory;
	GEOAdvisoryNotice* _evAdvisory;
	NSMutableArray* _incidentAdvisorys;
	NSMutableArray* _noticeAdvisorys;
	GEOAdvisoryNotice* _tollAdvisory;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_clickableAdvisory : 1;
		unsigned read_evAdvisory : 1;
		unsigned read_incidentAdvisorys : 1;
		unsigned read_noticeAdvisorys : 1;
		unsigned read_tollAdvisory : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * noticeAdvisorys; 
@property (nonatomic,readonly) BOOL hasClickableAdvisory; 
@property (nonatomic,retain) GEOClickableAdvisory * clickableAdvisory; 
@property (nonatomic,readonly) BOOL hasTollAdvisory; 
@property (nonatomic,retain) GEOAdvisoryNotice * tollAdvisory; 
@property (nonatomic,readonly) BOOL hasEvAdvisory; 
@property (nonatomic,retain) GEOAdvisoryNotice * evAdvisory; 
@property (nonatomic,retain) NSMutableArray * incidentAdvisorys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)noticeAdvisoryType;
+(Class)incidentAdvisoryType;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOClickableAdvisory *)clickableAdvisory;
-(NSMutableArray *)incidentAdvisorys;
-(GEOAdvisoryNotice *)evAdvisory;
-(GEOAdvisoryNotice *)tollAdvisory;
-(NSMutableArray *)noticeAdvisorys;
-(void)addNoticeAdvisory:(id)arg1 ;
-(void)setClickableAdvisory:(GEOClickableAdvisory *)arg1 ;
-(void)setTollAdvisory:(GEOAdvisoryNotice *)arg1 ;
-(void)setEvAdvisory:(GEOAdvisoryNotice *)arg1 ;
-(void)addIncidentAdvisory:(id)arg1 ;
-(unsigned long long)noticeAdvisorysCount;
-(void)clearNoticeAdvisorys;
-(id)noticeAdvisoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)incidentAdvisorysCount;
-(void)clearIncidentAdvisorys;
-(id)incidentAdvisoryAtIndex:(unsigned long long)arg1 ;
-(void)setNoticeAdvisorys:(NSMutableArray *)arg1 ;
-(BOOL)hasClickableAdvisory;
-(BOOL)hasTollAdvisory;
-(BOOL)hasEvAdvisory;
-(void)setIncidentAdvisorys:(NSMutableArray *)arg1 ;
@end

