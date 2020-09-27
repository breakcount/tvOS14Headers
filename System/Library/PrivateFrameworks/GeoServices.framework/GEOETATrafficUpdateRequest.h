/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDABClientDatasetMetadata, GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEOLocation, NSMutableArray, NSData, NSString, GEORouteAttributes, GEOTFTrafficSnapshot, GEOETATrafficUpdateWaypointRoute;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTimepoint _clientTimepoint;
	GEOSessionID _sessionID;
	GEOPDABClientDatasetMetadata* _abClientMetadata;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOClientCapabilities* _clientCapabilities;
	GEOCommonOptions* _commonOptions;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _destinationWaypointTypeds;
	NSData* _directionsResponseID;
	NSString* _requestingAppId;
	GEORouteAttributes* _routeAttributes;
	NSMutableArray* _routes;
	NSMutableArray* _serviceTags;
	double _sessionRelativeTimestamp;
	NSData* _sessionState;
	NSMutableArray* _trafficApiResponses;
	NSMutableArray* _trafficSnapshotIds;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	NSData* _tripID;
	GEOLocation* _tripOrigin;
	GEOETATrafficUpdateWaypointRoute* _waypointRoute;
	NSString* _xpcUuid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxAlternateRouteCount;
	unsigned _previouslyRejectedRerouteSavings;
	int _rerouteStatus;
	BOOL _includeBetterRouteSuggestion;
	BOOL _needServerLatency;
	BOOL _useClientTimepointAsNow;
	BOOL _useLiveTrafficAsFallback;
	struct {
		unsigned has_clientTimepoint : 1;
		unsigned has_sessionID : 1;
		unsigned has_sessionRelativeTimestamp : 1;
		unsigned has_maxAlternateRouteCount : 1;
		unsigned has_previouslyRejectedRerouteSavings : 1;
		unsigned has_rerouteStatus : 1;
		unsigned has_includeBetterRouteSuggestion : 1;
		unsigned has_needServerLatency : 1;
		unsigned has_useClientTimepointAsNow : 1;
		unsigned has_useLiveTrafficAsFallback : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_additionalEnabledMarkets : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_commonOptions : 1;
		unsigned read_currentUserLocation : 1;
		unsigned read_destinationWaypointTypeds : 1;
		unsigned read_directionsResponseID : 1;
		unsigned read_requestingAppId : 1;
		unsigned read_routeAttributes : 1;
		unsigned read_routes : 1;
		unsigned read_serviceTags : 1;
		unsigned read_sessionState : 1;
		unsigned read_trafficApiResponses : 1;
		unsigned read_trafficSnapshotIds : 1;
		unsigned read_trafficSnapshot : 1;
		unsigned read_tripID : 1;
		unsigned read_tripOrigin : 1;
		unsigned read_waypointRoute : 1;
		unsigned read_xpcUuid : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasClientTimepoint; 
@property (assign,nonatomic) GEOTimepoint clientTimepoint; 
@property (assign,nonatomic) BOOL hasUseClientTimepointAsNow; 
@property (assign,nonatomic) BOOL useClientTimepointAsNow; 
@property (assign,nonatomic) BOOL hasNeedServerLatency; 
@property (assign,nonatomic) BOOL needServerLatency; 
@property (nonatomic,readonly) BOOL hasXpcUuid; 
@property (nonatomic,retain) NSString * xpcUuid; 
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation; 
@property (nonatomic,readonly) BOOL hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes; 
@property (assign,nonatomic) BOOL hasIncludeBetterRouteSuggestion; 
@property (assign,nonatomic) BOOL includeBetterRouteSuggestion; 
@property (nonatomic,retain) NSMutableArray * routes; 
@property (nonatomic,readonly) BOOL hasWaypointRoute; 
@property (nonatomic,retain) GEOETATrafficUpdateWaypointRoute * waypointRoute; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID; 
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets; 
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds; 
@property (assign,nonatomic) BOOL hasPreviouslyRejectedRerouteSavings; 
@property (assign,nonatomic) unsigned previouslyRejectedRerouteSavings; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (assign,nonatomic) BOOL hasRerouteStatus; 
@property (assign,nonatomic) int rerouteStatus; 
@property (nonatomic,readonly) BOOL hasCommonOptions; 
@property (nonatomic,retain) GEOCommonOptions * commonOptions; 
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * abClientMetadata; 
@property (assign,nonatomic) BOOL hasMaxAlternateRouteCount; 
@property (assign,nonatomic) unsigned maxAlternateRouteCount; 
@property (nonatomic,readonly) BOOL hasTripID; 
@property (nonatomic,retain) NSData * tripID; 
@property (nonatomic,readonly) BOOL hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId; 
@property (nonatomic,readonly) BOOL hasTripOrigin; 
@property (nonatomic,retain) GEOLocation * tripOrigin; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,retain) NSMutableArray * trafficApiResponses; 
@property (nonatomic,retain) NSMutableArray * trafficSnapshotIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceTagType;
+(Class)routeType;
+(Class)trafficApiResponsesType;
+(Class)trafficSnapshotIdsType;
+(Class)destinationWaypointTypedType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDABClientDatasetMetadata *)abClientMetadata;
-(NSString *)requestingAppId;
-(void)setAbClientMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(void)clearSensitiveFields;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAbClientMetadata;
-(BOOL)hasRequestingAppId;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(NSData *)tripID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(double)sessionRelativeTimestamp;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(GEOLocation *)currentUserLocation;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(BOOL)hasCurrentUserLocation;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(GEOClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(BOOL)hasClientCapabilities;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(BOOL)hasSessionState;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(NSMutableArray *)routes;
-(GEOETATrafficUpdateWaypointRoute *)waypointRoute;
-(BOOL)hasDirectionsResponseID;
-(BOOL)hasXpcUuid;
-(void)setXpcUuid:(NSString *)arg1 ;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setCommonOptions:(GEOCommonOptions *)arg1 ;
-(unsigned long long)routesCount;
-(void)setTripID:(NSData *)arg1 ;
-(BOOL)hasTripID;
-(void)setTripOrigin:(GEOLocation *)arg1 ;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(void)setMaxAlternateRouteCount:(unsigned)arg1 ;
-(void)clearDestinationWaypointTypeds;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(BOOL)hasAdditionalEnabledMarkets;
-(unsigned)maxAlternateRouteCount;
-(void)setHasMaxAlternateRouteCount:(BOOL)arg1 ;
-(BOOL)hasMaxAlternateRouteCount;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setNeedServerLatency:(BOOL)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(BOOL)useLiveTrafficAsFallback;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(BOOL)needServerLatency;
-(void)setHasNeedServerLatency:(BOOL)arg1 ;
-(BOOL)hasNeedServerLatency;
-(void)setClientTimepoint:(GEOTimepoint)arg1 ;
-(void)setUseClientTimepointAsNow:(BOOL)arg1 ;
-(GEOTimepoint)clientTimepoint;
-(void)setHasClientTimepoint:(BOOL)arg1 ;
-(BOOL)hasClientTimepoint;
-(BOOL)useClientTimepointAsNow;
-(void)setHasUseClientTimepointAsNow:(BOOL)arg1 ;
-(BOOL)hasUseClientTimepointAsNow;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(GEOCommonOptions *)commonOptions;
-(NSMutableArray *)trafficSnapshotIds;
-(void)addTrafficApiResponses:(id)arg1 ;
-(void)addTrafficSnapshotIds:(id)arg1 ;
-(unsigned long long)trafficApiResponsesCount;
-(void)clearTrafficApiResponses;
-(id)trafficApiResponsesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficSnapshotIdsCount;
-(void)clearTrafficSnapshotIds;
-(id)trafficSnapshotIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRouteAttributes;
-(BOOL)hasCommonOptions;
-(NSMutableArray *)trafficApiResponses;
-(void)setTrafficApiResponses:(NSMutableArray *)arg1 ;
-(void)setTrafficSnapshotIds:(NSMutableArray *)arg1 ;
-(void)addRoute:(id)arg1 ;
-(void)clearRoutes;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)setWaypointRoute:(GEOETATrafficUpdateWaypointRoute *)arg1 ;
-(NSMutableArray *)destinationWaypointTypeds;
-(unsigned long long)destinationWaypointTypedsCount;
-(id)destinationWaypointTypedAtIndex:(unsigned long long)arg1 ;
-(GEOLocation *)tripOrigin;
-(NSString *)xpcUuid;
-(void)setIncludeBetterRouteSuggestion:(BOOL)arg1 ;
-(void)setPreviouslyRejectedRerouteSavings:(unsigned)arg1 ;
-(void)setRerouteStatus:(int)arg1 ;
-(BOOL)hasTripOrigin;
-(BOOL)includeBetterRouteSuggestion;
-(void)setHasIncludeBetterRouteSuggestion:(BOOL)arg1 ;
-(BOOL)hasIncludeBetterRouteSuggestion;
-(BOOL)hasWaypointRoute;
-(unsigned)previouslyRejectedRerouteSavings;
-(void)setHasPreviouslyRejectedRerouteSavings:(BOOL)arg1 ;
-(BOOL)hasPreviouslyRejectedRerouteSavings;
-(int)rerouteStatus;
-(void)setHasRerouteStatus:(BOOL)arg1 ;
-(BOOL)hasRerouteStatus;
-(id)rerouteStatusAsString:(int)arg1 ;
-(int)StringAsRerouteStatus:(id)arg1 ;
@end

