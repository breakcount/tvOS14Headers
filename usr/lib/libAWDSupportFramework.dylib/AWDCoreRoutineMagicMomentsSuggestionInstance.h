/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDCoreRoutineMagicMomentsSuggestionInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _confidence;
	int _durationSinceLastSuggestion;
	int _reposponceTime;
	NSString* _suggestionId;
	NSMutableArray* _suggestions;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionId; 
@property (nonatomic,retain) NSString * suggestionId;                          //@synthesize suggestionId=_suggestionId - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                                   //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestions;                     //@synthesize suggestions=_suggestions - In the implementation block
@property (assign,nonatomic) BOOL hasReposponceTime; 
@property (assign,nonatomic) int reposponceTime;                               //@synthesize reposponceTime=_reposponceTime - In the implementation block
@property (assign,nonatomic) BOOL hasDurationSinceLastSuggestion; 
@property (assign,nonatomic) int durationSinceLastSuggestion;                  //@synthesize durationSinceLastSuggestion=_durationSinceLastSuggestion - In the implementation block
+(Class)suggestionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(int)confidence;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSuggestionId:(NSString *)arg1 ;
-(BOOL)hasSuggestionId;
-(NSString *)suggestionId;
-(void)setConfidence:(int)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)setSuggestions:(NSMutableArray *)arg1 ;
-(void)addSuggestions:(id)arg1 ;
-(unsigned long long)suggestionsCount;
-(void)clearSuggestions;
-(id)suggestionsAtIndex:(unsigned long long)arg1 ;
-(void)setReposponceTime:(int)arg1 ;
-(void)setHasReposponceTime:(BOOL)arg1 ;
-(BOOL)hasReposponceTime;
-(void)setDurationSinceLastSuggestion:(int)arg1 ;
-(void)setHasDurationSinceLastSuggestion:(BOOL)arg1 ;
-(BOOL)hasDurationSinceLastSuggestion;
-(NSMutableArray *)suggestions;
-(int)reposponceTime;
-(int)durationSinceLastSuggestion;
@end

