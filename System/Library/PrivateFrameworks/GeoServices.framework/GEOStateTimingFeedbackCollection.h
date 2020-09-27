/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	double _durationInOldState;
	double _sessionRelativeTimestamp;
	NSMutableArray* _stateTransitions;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (nonatomic,retain) NSMutableArray * stateTransitions; 
@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState; 
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
+(BOOL)isValid:(id)arg1 ;
+(Class)stateTransitionType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)stateTransitions;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(double)sessionRelativeTimestamp;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(void)addStateTransition:(id)arg1 ;
-(void)setDurationInOldState:(double)arg1 ;
-(unsigned long long)stateTransitionsCount;
-(void)clearStateTransitions;
-(id)stateTransitionAtIndex:(unsigned long long)arg1 ;
-(void)setStateTransitions:(NSMutableArray *)arg1 ;
-(double)durationInOldState;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)hasDurationInOldState;
@end

