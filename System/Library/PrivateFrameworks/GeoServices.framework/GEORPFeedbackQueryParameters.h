/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFilter, GEORPPageInfo, GEORPSortParameters;

@interface GEORPFeedbackQueryParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _feedbackComponentTypes;
	GEORPFilter* _filter;
	GEORPPageInfo* _pageInfo;
	GEORPSortParameters* _sortParameters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_feedbackComponentTypes : 1;
		unsigned read_filter : 1;
		unsigned read_pageInfo : 1;
		unsigned read_sortParameters : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSortParameters; 
@property (nonatomic,retain) GEORPSortParameters * sortParameters; 
@property (nonatomic,readonly) BOOL hasPageInfo; 
@property (nonatomic,retain) GEORPPageInfo * pageInfo; 
@property (nonatomic,readonly) unsigned long long feedbackComponentTypesCount; 
@property (nonatomic,readonly) int* feedbackComponentTypes; 
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) GEORPFilter * filter; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEORPFilter *)filter;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFilter:(GEORPFilter *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addFeedbackComponentType:(int)arg1 ;
-(unsigned long long)feedbackComponentTypesCount;
-(void)clearFeedbackComponentTypes;
-(int)feedbackComponentTypeAtIndex:(unsigned long long)arg1 ;
-(int*)feedbackComponentTypes;
-(void)setFeedbackComponentTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)feedbackComponentTypesAsString:(int)arg1 ;
-(int)StringAsFeedbackComponentTypes:(id)arg1 ;
-(GEORPSortParameters *)sortParameters;
-(GEORPPageInfo *)pageInfo;
-(void)setSortParameters:(GEORPSortParameters *)arg1 ;
-(void)setPageInfo:(GEORPPageInfo *)arg1 ;
-(BOOL)hasSortParameters;
-(BOOL)hasPageInfo;
-(BOOL)hasFilter;
@end

