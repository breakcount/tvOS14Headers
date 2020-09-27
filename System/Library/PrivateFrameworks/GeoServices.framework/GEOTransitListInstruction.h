/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOComposedRouteStepTransitInstructionMerging.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOFormattedString, GEOTransitListTimeInstruction, NSArray, NSString;

@interface GEOTransitListInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _commandFormatteds;
	NSMutableArray* _detailFormatteds;
	GEOFormattedString* _expandableListFormatted;
	NSMutableArray* _noticeFormatteds;
	NSMutableArray* _priceFormatteds;
	GEOTransitListTimeInstruction* _timeInstructions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_commandFormatteds : 1;
		unsigned read_detailFormatteds : 1;
		unsigned read_expandableListFormatted : 1;
		unsigned read_noticeFormatteds : 1;
		unsigned read_priceFormatteds : 1;
		unsigned read_timeInstructions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSArray * serverFormattedCommands; 
@property (nonatomic,readonly) NSArray * serverFormattedDetails; 
@property (nonatomic,readonly) NSArray * serverFormattedNotices; 
@property (nonatomic,readonly) NSArray * serverFormattedPrices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * noticeFormatteds; 
@property (nonatomic,retain) NSMutableArray * commandFormatteds; 
@property (nonatomic,retain) NSMutableArray * detailFormatteds; 
@property (nonatomic,retain) NSMutableArray * priceFormatteds; 
@property (nonatomic,readonly) BOOL hasExpandableListFormatted; 
@property (nonatomic,retain) GEOFormattedString * expandableListFormatted; 
@property (nonatomic,readonly) BOOL hasTimeInstructions; 
@property (nonatomic,retain) GEOTransitListTimeInstruction * timeInstructions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)noticeFormattedType;
+(Class)commandFormattedType;
+(Class)detailFormattedType;
+(Class)priceFormattedType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
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
-(GEOFormattedString *)expandableListFormatted;
-(GEOTransitListTimeInstruction *)timeInstructions;
-(void)addNoticeFormatted:(id)arg1 ;
-(void)addCommandFormatted:(id)arg1 ;
-(void)addDetailFormatted:(id)arg1 ;
-(void)addPriceFormatted:(id)arg1 ;
-(void)setExpandableListFormatted:(GEOFormattedString *)arg1 ;
-(void)setTimeInstructions:(GEOTransitListTimeInstruction *)arg1 ;
-(unsigned long long)noticeFormattedsCount;
-(void)clearNoticeFormatteds;
-(id)noticeFormattedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)commandFormattedsCount;
-(void)clearCommandFormatteds;
-(id)commandFormattedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)detailFormattedsCount;
-(void)clearDetailFormatteds;
-(id)detailFormattedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)priceFormattedsCount;
-(void)clearPriceFormatteds;
-(id)priceFormattedAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)noticeFormatteds;
-(void)setNoticeFormatteds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)commandFormatteds;
-(void)setCommandFormatteds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)detailFormatteds;
-(void)setDetailFormatteds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)priceFormatteds;
-(void)setPriceFormatteds:(NSMutableArray *)arg1 ;
-(BOOL)hasExpandableListFormatted;
-(BOOL)hasTimeInstructions;
-(NSArray *)serverFormattedCommands;
-(NSArray *)serverFormattedDetails;
-(NSArray *)serverFormattedNotices;
-(NSArray *)serverFormattedPrices;
-(void)_transit_prepareForDeepMergeFrom:(id)arg1 ;
@end

