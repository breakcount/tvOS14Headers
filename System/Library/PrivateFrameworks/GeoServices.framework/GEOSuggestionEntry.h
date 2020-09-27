/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOLatLng, NSData;

@interface GEOSuggestionEntry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOHighlight* _textHighlights;
	unsigned long long _textHighlightsCount;
	unsigned long long _textHighlightsSpace;
	NSString* _calloutTitle;
	NSMutableArray* _displayLines;
	NSString* _iconID;
	GEOLatLng* _latlng;
	NSMutableArray* _namedFeatures;
	NSString* _searchQueryDisplayString;
	NSData* _suggestionEntryMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_textHighlights : 1;
		unsigned read_calloutTitle : 1;
		unsigned read_displayLines : 1;
		unsigned read_iconID : 1;
		unsigned read_latlng : 1;
		unsigned read_namedFeatures : 1;
		unsigned read_searchQueryDisplayString : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * displayLines; 
@property (nonatomic,readonly) unsigned long long textHighlightsCount; 
@property (nonatomic,readonly) GEOHighlight* textHighlights; 
@property (nonatomic,readonly) BOOL hasIconID; 
@property (nonatomic,retain) NSString * iconID; 
@property (nonatomic,readonly) BOOL hasLatlng; 
@property (nonatomic,retain) GEOLatLng * latlng; 
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (nonatomic,readonly) BOOL hasSearchQueryDisplayString; 
@property (nonatomic,retain) NSString * searchQueryDisplayString; 
@property (nonatomic,readonly) BOOL hasCalloutTitle; 
@property (nonatomic,retain) NSString * calloutTitle; 
@property (nonatomic,retain) NSMutableArray * namedFeatures; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayLineType;
+(Class)namedFeatureType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
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
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(NSString *)calloutTitle;
-(NSMutableArray *)displayLines;
-(void)setLatlng:(GEOLatLng *)arg1 ;
-(GEOLatLng *)latlng;
-(void)addDisplayLine:(id)arg1 ;
-(unsigned long long)displayLinesCount;
-(void)clearDisplayLines;
-(id)displayLineAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayLines:(NSMutableArray *)arg1 ;
-(void)addNamedFeature:(id)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(void)clearNamedFeatures;
-(id)namedFeatureAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)namedFeatures;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(void)clearTextHighlights;
-(NSString *)iconID;
-(NSString *)searchQueryDisplayString;
-(void)addTextHighlights:(GEOHighlight)arg1 ;
-(void)setIconID:(NSString *)arg1 ;
-(void)setSearchQueryDisplayString:(NSString *)arg1 ;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(unsigned long long)textHighlightsCount;
-(GEOHighlight)textHighlightsAtIndex:(unsigned long long)arg1 ;
-(GEOHighlight*)textHighlights;
-(void)setTextHighlights:(GEOHighlight*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasIconID;
-(BOOL)hasLatlng;
-(BOOL)hasSearchQueryDisplayString;
-(BOOL)hasCalloutTitle;
@end

