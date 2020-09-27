/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOABSecondPartyPlaceRequestClientMetaData, GEOAdditionalEnabledMarkets, NSMutableArray, NSString, GEOLocation, GEOLocalizationCapabilities;

@interface GEOPDClientMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _knownClientResolvedTypeDeprecateds;
	SCD_Struct_GE85* _knownClientResolvedTypes;
	SCD_Struct_GE85* _supportedMapsResultTypes;
	GEOABSecondPartyPlaceRequestClientMetaData* _abClientMetadata;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	NSMutableArray* _businessChatPreflightIdentifiers;
	NSString* _debugApiKey;
	NSString* _deviceCountryCode;
	NSString* _deviceDisplayLanguage;
	GEOLocation* _deviceExtendedLocation;
	NSMutableArray* _deviceHistoricalLocations;
	NSString* _deviceKeyboardLanguage;
	NSString* _deviceSku;
	NSString* _deviceSpokenLanguage;
	GEOLocalizationCapabilities* _localizationCapabilities;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _clientRevision;
	unsigned _dayOfWeek;
	unsigned _hourOfDay;
	int _requiredVersion;
	int _resultListAttributionSupport;
	unsigned _timeSinceMapEnteredForeground;
	BOOL _enablePreflightVenues;
	BOOL _siriUserConsentsForAnalysis;
	struct {
		unsigned has_clientRevision : 1;
		unsigned has_dayOfWeek : 1;
		unsigned has_hourOfDay : 1;
		unsigned has_requiredVersion : 1;
		unsigned has_resultListAttributionSupport : 1;
		unsigned has_timeSinceMapEnteredForeground : 1;
		unsigned has_enablePreflightVenues : 1;
		unsigned has_siriUserConsentsForAnalysis : 1;
		unsigned read_unknownFields : 1;
		unsigned read_knownClientResolvedTypeDeprecateds : 1;
		unsigned read_knownClientResolvedTypes : 1;
		unsigned read_supportedMapsResultTypes : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_additionalEnabledMarkets : 1;
		unsigned read_businessChatPreflightIdentifiers : 1;
		unsigned read_debugApiKey : 1;
		unsigned read_deviceCountryCode : 1;
		unsigned read_deviceDisplayLanguage : 1;
		unsigned read_deviceExtendedLocation : 1;
		unsigned read_deviceHistoricalLocations : 1;
		unsigned read_deviceKeyboardLanguage : 1;
		unsigned read_deviceSku : 1;
		unsigned read_deviceSpokenLanguage : 1;
		unsigned read_localizationCapabilities : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * abClientMetadata; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) BOOL hasDeviceDisplayLanguage; 
@property (nonatomic,retain) NSString * deviceDisplayLanguage; 
@property (nonatomic,readonly) BOOL hasDeviceKeyboardLanguage; 
@property (nonatomic,retain) NSString * deviceKeyboardLanguage; 
@property (nonatomic,readonly) BOOL hasDeviceSpokenLanguage; 
@property (nonatomic,retain) NSString * deviceSpokenLanguage; 
@property (assign,nonatomic) BOOL hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) unsigned timeSinceMapEnteredForeground; 
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets; 
@property (assign,nonatomic) BOOL hasResultListAttributionSupport; 
@property (assign,nonatomic) int resultListAttributionSupport; 
@property (assign,nonatomic) BOOL hasHourOfDay; 
@property (assign,nonatomic) unsigned hourOfDay; 
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek; 
@property (nonatomic,readonly) BOOL hasDeviceExtendedLocation; 
@property (nonatomic,retain) GEOLocation * deviceExtendedLocation; 
@property (nonatomic,retain) NSMutableArray * deviceHistoricalLocations; 
@property (assign,nonatomic) BOOL hasRequiredVersion; 
@property (assign,nonatomic) int requiredVersion; 
@property (nonatomic,readonly) BOOL hasDebugApiKey; 
@property (nonatomic,retain) NSString * debugApiKey; 
@property (nonatomic,readonly) unsigned long long knownClientResolvedTypeDeprecatedsCount; 
@property (nonatomic,readonly) int* knownClientResolvedTypeDeprecateds; 
@property (assign,nonatomic) BOOL hasEnablePreflightVenues; 
@property (assign,nonatomic) BOOL enablePreflightVenues; 
@property (nonatomic,readonly) unsigned long long knownClientResolvedTypesCount; 
@property (nonatomic,readonly) int* knownClientResolvedTypes; 
@property (nonatomic,retain) NSMutableArray * businessChatPreflightIdentifiers; 
@property (assign,nonatomic) BOOL hasClientRevision; 
@property (assign,nonatomic) int clientRevision; 
@property (nonatomic,readonly) BOOL hasLocalizationCapabilities; 
@property (nonatomic,retain) GEOLocalizationCapabilities * localizationCapabilities; 
@property (nonatomic,readonly) BOOL hasDeviceSku; 
@property (nonatomic,retain) NSString * deviceSku; 
@property (assign,nonatomic) BOOL hasSiriUserConsentsForAnalysis; 
@property (assign,nonatomic) BOOL siriUserConsentsForAnalysis; 
@property (nonatomic,readonly) unsigned long long supportedMapsResultTypesCount; 
@property (nonatomic,readonly) int* supportedMapsResultTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)deviceHistoricalLocationType;
+(Class)businessChatPreflightIdentifierType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)dayOfWeek;
-(unsigned)hourOfDay;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearLocations;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasDeviceExtendedLocation;
-(GEOLocation *)deviceExtendedLocation;
-(unsigned long long)deviceHistoricalLocationsCount;
-(NSMutableArray *)deviceHistoricalLocations;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOABSecondPartyPlaceRequestClientMetaData *)abClientMetadata;
-(void)setAbClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)clearSensitiveFields;
-(BOOL)hasAbClientMetadata;
-(void)addDeviceHistoricalLocation:(id)arg1 ;
-(void)clearDeviceHistoricalLocations;
-(id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1 ;
-(void)setDeviceHistoricalLocations:(NSMutableArray *)arg1 ;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(NSString *)debugApiKey;
-(void)setDebugApiKey:(NSString *)arg1 ;
-(BOOL)hasDebugApiKey;
-(void)setHourOfDay:(unsigned)arg1 ;
-(void)setHasHourOfDay:(BOOL)arg1 ;
-(BOOL)hasHourOfDay;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(BOOL)hasTimeSinceMapEnteredForeground;
-(unsigned)timeSinceMapEnteredForeground;
-(void)setTimeSinceMapEnteredForeground:(unsigned)arg1 ;
-(void)setDeviceSku:(NSString *)arg1 ;
-(int)requiredVersion;
-(void)setRequiredVersion:(int)arg1 ;
-(int)resultListAttributionSupport;
-(void)setResultListAttributionSupport:(int)arg1 ;
-(BOOL)enablePreflightVenues;
-(void)setEnablePreflightVenues:(BOOL)arg1 ;
-(NSMutableArray *)businessChatPreflightIdentifiers;
-(void)setBusinessChatPreflightIdentifiers:(NSMutableArray *)arg1 ;
-(NSString *)deviceCountryCode;
-(NSString *)deviceSku;
-(BOOL)hasDeviceCountryCode;
-(BOOL)hasDeviceSku;
-(NSString *)deviceDisplayLanguage;
-(NSString *)deviceKeyboardLanguage;
-(NSString *)deviceSpokenLanguage;
-(GEOLocalizationCapabilities *)localizationCapabilities;
-(void)setDeviceDisplayLanguage:(NSString *)arg1 ;
-(void)setDeviceKeyboardLanguage:(NSString *)arg1 ;
-(void)setDeviceSpokenLanguage:(NSString *)arg1 ;
-(void)setDeviceExtendedLocation:(GEOLocation *)arg1 ;
-(void)addKnownClientResolvedTypeDeprecated:(int)arg1 ;
-(void)addKnownClientResolvedType:(int)arg1 ;
-(void)addBusinessChatPreflightIdentifier:(id)arg1 ;
-(void)setClientRevision:(int)arg1 ;
-(void)setLocalizationCapabilities:(GEOLocalizationCapabilities *)arg1 ;
-(void)setSiriUserConsentsForAnalysis:(BOOL)arg1 ;
-(void)addSupportedMapsResultType:(int)arg1 ;
-(unsigned long long)knownClientResolvedTypeDeprecatedsCount;
-(void)clearKnownClientResolvedTypeDeprecateds;
-(int)knownClientResolvedTypeDeprecatedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)knownClientResolvedTypesCount;
-(void)clearKnownClientResolvedTypes;
-(int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)businessChatPreflightIdentifiersCount;
-(void)clearBusinessChatPreflightIdentifiers;
-(id)businessChatPreflightIdentifierAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedMapsResultTypesCount;
-(void)clearSupportedMapsResultTypes;
-(int)supportedMapsResultTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDeviceDisplayLanguage;
-(BOOL)hasDeviceKeyboardLanguage;
-(BOOL)hasDeviceSpokenLanguage;
-(void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1 ;
-(BOOL)hasAdditionalEnabledMarkets;
-(void)setHasResultListAttributionSupport:(BOOL)arg1 ;
-(BOOL)hasResultListAttributionSupport;
-(id)resultListAttributionSupportAsString:(int)arg1 ;
-(int)StringAsResultListAttributionSupport:(id)arg1 ;
-(void)setHasRequiredVersion:(BOOL)arg1 ;
-(BOOL)hasRequiredVersion;
-(id)requiredVersionAsString:(int)arg1 ;
-(int)StringAsRequiredVersion:(id)arg1 ;
-(int*)knownClientResolvedTypeDeprecateds;
-(void)setKnownClientResolvedTypeDeprecateds:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)knownClientResolvedTypeDeprecatedsAsString:(int)arg1 ;
-(int)StringAsKnownClientResolvedTypeDeprecateds:(id)arg1 ;
-(void)setHasEnablePreflightVenues:(BOOL)arg1 ;
-(BOOL)hasEnablePreflightVenues;
-(int*)knownClientResolvedTypes;
-(void)setKnownClientResolvedTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)knownClientResolvedTypesAsString:(int)arg1 ;
-(int)StringAsKnownClientResolvedTypes:(id)arg1 ;
-(int)clientRevision;
-(void)setHasClientRevision:(BOOL)arg1 ;
-(BOOL)hasClientRevision;
-(id)clientRevisionAsString:(int)arg1 ;
-(int)StringAsClientRevision:(id)arg1 ;
-(BOOL)hasLocalizationCapabilities;
-(BOOL)siriUserConsentsForAnalysis;
-(void)setHasSiriUserConsentsForAnalysis:(BOOL)arg1 ;
-(BOOL)hasSiriUserConsentsForAnalysis;
-(int*)supportedMapsResultTypes;
-(void)setSupportedMapsResultTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedMapsResultTypesAsString:(int)arg1 ;
-(int)StringAsSupportedMapsResultTypes:(id)arg1 ;
@end
