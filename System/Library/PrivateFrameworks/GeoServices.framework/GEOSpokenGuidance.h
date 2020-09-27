/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOSpokenGuidance : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _announcements;
	NSMutableArray* _timeGaps;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _alignment;
	unsigned _endDesiredTime;
	unsigned _exclusiveSetIdentifier;
	unsigned _numChainedVariants;
	unsigned _priority;
	unsigned _repetitionInterval;
	unsigned _startDesiredTime;
	BOOL _tapBeforeAnnouncement;
	struct {
		unsigned has_alignment : 1;
		unsigned has_endDesiredTime : 1;
		unsigned has_exclusiveSetIdentifier : 1;
		unsigned has_numChainedVariants : 1;
		unsigned has_priority : 1;
		unsigned has_repetitionInterval : 1;
		unsigned has_startDesiredTime : 1;
		unsigned has_tapBeforeAnnouncement : 1;
		unsigned read_unknownFields : 1;
		unsigned read_announcements : 1;
		unsigned read_timeGaps : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * announcements; 
@property (assign,nonatomic) BOOL hasStartDesiredTime; 
@property (assign,nonatomic) unsigned startDesiredTime; 
@property (assign,nonatomic) BOOL hasEndDesiredTime; 
@property (assign,nonatomic) unsigned endDesiredTime; 
@property (assign,nonatomic) BOOL hasAlignment; 
@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) BOOL hasRepetitionInterval; 
@property (assign,nonatomic) unsigned repetitionInterval; 
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned priority; 
@property (assign,nonatomic) BOOL hasNumChainedVariants; 
@property (assign,nonatomic) unsigned numChainedVariants; 
@property (assign,nonatomic) BOOL hasTapBeforeAnnouncement; 
@property (assign,nonatomic) BOOL tapBeforeAnnouncement; 
@property (nonatomic,retain) NSMutableArray * timeGaps; 
@property (assign,nonatomic) BOOL hasExclusiveSetIdentifier; 
@property (assign,nonatomic) unsigned exclusiveSetIdentifier; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)announcementType;
+(Class)timeGapType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasPriority:(BOOL)arg1 ;
-(BOOL)hasPriority;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addAnnouncement:(id)arg1 ;
-(unsigned long long)announcementsCount;
-(void)clearAnnouncements;
-(id)announcementAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)announcements;
-(void)setAnnouncements:(NSMutableArray *)arg1 ;
-(void)setStartDesiredTime:(unsigned)arg1 ;
-(void)setEndDesiredTime:(unsigned)arg1 ;
-(void)setRepetitionInterval:(unsigned)arg1 ;
-(void)setNumChainedVariants:(unsigned)arg1 ;
-(void)setTapBeforeAnnouncement:(BOOL)arg1 ;
-(void)addTimeGap:(id)arg1 ;
-(void)setExclusiveSetIdentifier:(unsigned)arg1 ;
-(unsigned long long)timeGapsCount;
-(void)clearTimeGaps;
-(id)timeGapAtIndex:(unsigned long long)arg1 ;
-(unsigned)startDesiredTime;
-(void)setHasStartDesiredTime:(BOOL)arg1 ;
-(BOOL)hasStartDesiredTime;
-(unsigned)endDesiredTime;
-(void)setHasEndDesiredTime:(BOOL)arg1 ;
-(BOOL)hasEndDesiredTime;
-(void)setHasAlignment:(BOOL)arg1 ;
-(BOOL)hasAlignment;
-(id)alignmentAsString:(int)arg1 ;
-(int)StringAsAlignment:(id)arg1 ;
-(unsigned)repetitionInterval;
-(void)setHasRepetitionInterval:(BOOL)arg1 ;
-(BOOL)hasRepetitionInterval;
-(unsigned)numChainedVariants;
-(void)setHasNumChainedVariants:(BOOL)arg1 ;
-(BOOL)hasNumChainedVariants;
-(BOOL)tapBeforeAnnouncement;
-(void)setHasTapBeforeAnnouncement:(BOOL)arg1 ;
-(BOOL)hasTapBeforeAnnouncement;
-(NSMutableArray *)timeGaps;
-(void)setTimeGaps:(NSMutableArray *)arg1 ;
-(unsigned)exclusiveSetIdentifier;
-(void)setHasExclusiveSetIdentifier:(BOOL)arg1 ;
-(BOOL)hasExclusiveSetIdentifier;
@end

