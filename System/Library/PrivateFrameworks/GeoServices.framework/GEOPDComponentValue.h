/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDRoadAccessInfo, GEOPDAddressObject, GEOPDAddress, GEOPDAmenities, GEOPDAnnotatedItemList, GEOPDAssociatedApp, GEOPDBounds, GEOPDBrowseCategories, GEOPDBusinessClaim, GEOPDBusinessHours, GEOPDCaptionedPhoto, GEOPDCollectionIds, GEOPDContainedPlace, GEOPDEntity, GEOPDETA, GEOPDExternalAction, GEOPDFactoid, GEOPDFlyover, GEOPDHours, GEOPDIcon, GEOPDISO3166Code, GEOPDLinkedService, GEOPDLocationEvent, GEOPDMessageLink, GEOPDMiniBrowseCategories, GEOPDPhoto, GEOPDPlaceCollectionItem, GEOPDPlaceCollection, GEOPDPlaceInfo, GEOPDPlaceQuestionnaireResult, GEOPDPlacecardLayoutConfiguration, GEOPDPlacecardURL, GEOPDPoiEvent, GEOPDPriceDescription, GEOPDPrototypeContainer, GEOPDPublisher, GEOPDQuickLink, GEOPDRap, GEOPDRating, GEOPDRawAttribute, GEOPDRelatedPlace, GEOPDRestaurantReservationLink, GEOPDResultSnippet, GEOPDReview, GEOPDSimpleRestaurantMenuText, GEOPDSpatialLookupResult, GEOStyleAttributes, GEOPDTextBlock, GEOPDTip, GEOPDTransitAttribution, GEOPDTransitIncident, GEOPDTransitInfoSnippet, GEOPDTransitInfo, GEOPDTransitSchedule, GEOPDTransitTripGeometry, GEOPDTransitTripStopTime, GEOPDTransitTripStop, GEOPBTransitVehiclePosition, GEOPDVenueInfo, GEOPDWifiFingerprint;

@interface GEOPDComponentValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDRoadAccessInfo* _accessInfo;
	GEOPDAddressObject* _addressObject;
	GEOPDAddress* _address;
	GEOPDAmenities* _amenities;
	GEOPDAnnotatedItemList* _annotatedItemList;
	GEOPDAssociatedApp* _associatedApp;
	GEOPDBounds* _bounds;
	GEOPDBrowseCategories* _browseCategories;
	GEOPDBusinessClaim* _businessClaim;
	GEOPDBusinessHours* _businessHours;
	GEOPDCaptionedPhoto* _captionedPhoto;
	GEOPDCollectionIds* _collectionIds;
	GEOPDContainedPlace* _containedPlace;
	GEOPDEntity* _entity;
	GEOPDETA* _eta;
	GEOPDExternalAction* _externalAction;
	GEOPDFactoid* _factoid;
	GEOPDFlyover* _flyover;
	GEOPDHours* _hours;
	GEOPDIcon* _icon;
	GEOPDISO3166Code* _iso3166Code;
	GEOPDLinkedService* _linkedService;
	GEOPDLocationEvent* _locationEvent;
	GEOPDMessageLink* _messageLink;
	GEOPDMiniBrowseCategories* _miniPlaceBrowseCategories;
	GEOPDPhoto* _photo;
	GEOPDBrowseCategories* _placeBrowseCategories;
	GEOPDPlaceCollectionItem* _placeCollectionItem;
	GEOPDPlaceCollection* _placeCollection;
	GEOPDPlaceInfo* _placeInfo;
	GEOPDPlaceQuestionnaireResult* _placeQuestionnaire;
	GEOPDPlacecardLayoutConfiguration* _placecardLayoutConfiguration;
	GEOPDPlacecardURL* _placecardUrl;
	GEOPDPoiEvent* _poiEvent;
	GEOPDPriceDescription* _priceDescription;
	GEOPDPrototypeContainer* _prototypeContainer;
	GEOPDPublisher* _publisher;
	GEOPDQuickLink* _quickLink;
	GEOPDRap* _rap;
	GEOPDRating* _rating;
	GEOPDRawAttribute* _rawAttribute;
	GEOPDRelatedPlace* _relatedPlace;
	GEOPDRestaurantReservationLink* _restaurantReservationLink;
	GEOPDResultSnippet* _resultSnippet;
	GEOPDReview* _review;
	GEOPDSimpleRestaurantMenuText* _simpleRestaurantMenuText;
	GEOPDSpatialLookupResult* _spatialLookupResult;
	GEOStyleAttributes* _styleAttributes;
	GEOPDTextBlock* _textBlock;
	GEOPDTip* _tip;
	GEOPDTransitAttribution* _transitAttribution;
	GEOPDTransitIncident* _transitIncident;
	GEOPDTransitInfoSnippet* _transitInfoSnippet;
	GEOPDTransitInfo* _transitInfo;
	GEOPDTransitSchedule* _transitSchedule;
	GEOPDTransitTripGeometry* _transitTripGeometry;
	GEOPDTransitTripStopTime* _transitTripStopTime;
	GEOPDTransitTripStop* _transitTripStop;
	GEOPBTransitVehiclePosition* _transitVehiclePosition;
	GEOPDAmenities* _vendorAmenities;
	GEOPDVenueInfo* _venueInfo;
	GEOPDWifiFingerprint* _wifiFingerprint;

}

@property (nonatomic,readonly) BOOL hasEntity; 
@property (nonatomic,retain) GEOPDEntity * entity; 
@property (nonatomic,readonly) BOOL hasPlaceInfo; 
@property (nonatomic,retain) GEOPDPlaceInfo * placeInfo; 
@property (nonatomic,readonly) BOOL hasAccessInfo; 
@property (nonatomic,retain) GEOPDRoadAccessInfo * accessInfo; 
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOPDAddress * address; 
@property (nonatomic,readonly) BOOL hasRating; 
@property (nonatomic,retain) GEOPDRating * rating; 
@property (nonatomic,readonly) BOOL hasReview; 
@property (nonatomic,retain) GEOPDReview * review; 
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEOPDPhoto * photo; 
@property (nonatomic,readonly) BOOL hasHours; 
@property (nonatomic,retain) GEOPDHours * hours; 
@property (nonatomic,readonly) BOOL hasTransitInfo; 
@property (nonatomic,retain) GEOPDTransitInfo * transitInfo; 
@property (nonatomic,readonly) BOOL hasTransitSchedule; 
@property (nonatomic,retain) GEOPDTransitSchedule * transitSchedule; 
@property (nonatomic,readonly) BOOL hasEta; 
@property (nonatomic,retain) GEOPDETA * eta; 
@property (nonatomic,readonly) BOOL hasFlyover; 
@property (nonatomic,retain) GEOPDFlyover * flyover; 
@property (nonatomic,readonly) BOOL hasRawAttribute; 
@property (nonatomic,retain) GEOPDRawAttribute * rawAttribute; 
@property (nonatomic,readonly) BOOL hasAmenities; 
@property (nonatomic,retain) GEOPDAmenities * amenities; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) BOOL hasTransitIncident; 
@property (nonatomic,retain) GEOPDTransitIncident * transitIncident; 
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,retain) GEOPDTextBlock * textBlock; 
@property (nonatomic,readonly) BOOL hasFactoid; 
@property (nonatomic,retain) GEOPDFactoid * factoid; 
@property (nonatomic,readonly) BOOL hasTransitAttribution; 
@property (nonatomic,retain) GEOPDTransitAttribution * transitAttribution; 
@property (nonatomic,readonly) BOOL hasBusinessClaim; 
@property (nonatomic,retain) GEOPDBusinessClaim * businessClaim; 
@property (nonatomic,readonly) BOOL hasCaptionedPhoto; 
@property (nonatomic,retain) GEOPDCaptionedPhoto * captionedPhoto; 
@property (nonatomic,readonly) BOOL hasTransitInfoSnippet; 
@property (nonatomic,retain) GEOPDTransitInfoSnippet * transitInfoSnippet; 
@property (nonatomic,readonly) BOOL hasExternalAction; 
@property (nonatomic,retain) GEOPDExternalAction * externalAction; 
@property (nonatomic,readonly) BOOL hasResultSnippet; 
@property (nonatomic,retain) GEOPDResultSnippet * resultSnippet; 
@property (nonatomic,readonly) BOOL hasAddressObject; 
@property (nonatomic,retain) GEOPDAddressObject * addressObject; 
@property (nonatomic,readonly) BOOL hasSimpleRestaurantMenuText; 
@property (nonatomic,retain) GEOPDSimpleRestaurantMenuText * simpleRestaurantMenuText; 
@property (nonatomic,readonly) BOOL hasRestaurantReservationLink; 
@property (nonatomic,retain) GEOPDRestaurantReservationLink * restaurantReservationLink; 
@property (nonatomic,readonly) BOOL hasSpatialLookupResult; 
@property (nonatomic,retain) GEOPDSpatialLookupResult * spatialLookupResult; 
@property (nonatomic,readonly) BOOL hasTip; 
@property (nonatomic,retain) GEOPDTip * tip; 
@property (nonatomic,readonly) BOOL hasPlacecardUrl; 
@property (nonatomic,retain) GEOPDPlacecardURL * placecardUrl; 
@property (nonatomic,readonly) BOOL hasAssociatedApp; 
@property (nonatomic,retain) GEOPDAssociatedApp * associatedApp; 
@property (nonatomic,readonly) BOOL hasMessageLink; 
@property (nonatomic,retain) GEOPDMessageLink * messageLink; 
@property (nonatomic,readonly) BOOL hasQuickLink; 
@property (nonatomic,retain) GEOPDQuickLink * quickLink; 
@property (nonatomic,readonly) BOOL hasRap; 
@property (nonatomic,retain) GEOPDRap * rap; 
@property (nonatomic,readonly) BOOL hasLocationEvent; 
@property (nonatomic,retain) GEOPDLocationEvent * locationEvent; 
@property (nonatomic,readonly) BOOL hasVenueInfo; 
@property (nonatomic,retain) GEOPDVenueInfo * venueInfo; 
@property (nonatomic,readonly) BOOL hasContainedPlace; 
@property (nonatomic,retain) GEOPDContainedPlace * containedPlace; 
@property (nonatomic,readonly) BOOL hasWifiFingerprint; 
@property (nonatomic,retain) GEOPDWifiFingerprint * wifiFingerprint; 
@property (nonatomic,readonly) BOOL hasIcon; 
@property (nonatomic,retain) GEOPDIcon * icon; 
@property (nonatomic,readonly) BOOL hasPriceDescription; 
@property (nonatomic,retain) GEOPDPriceDescription * priceDescription; 
@property (nonatomic,readonly) BOOL hasBrowseCategories; 
@property (nonatomic,retain) GEOPDBrowseCategories * browseCategories; 
@property (nonatomic,readonly) BOOL hasAnnotatedItemList; 
@property (nonatomic,retain) GEOPDAnnotatedItemList * annotatedItemList; 
@property (nonatomic,readonly) BOOL hasPoiEvent; 
@property (nonatomic,retain) GEOPDPoiEvent * poiEvent; 
@property (nonatomic,readonly) BOOL hasPlacecardLayoutConfiguration; 
@property (nonatomic,retain) GEOPDPlacecardLayoutConfiguration * placecardLayoutConfiguration; 
@property (nonatomic,readonly) BOOL hasPrototypeContainer; 
@property (nonatomic,retain) GEOPDPrototypeContainer * prototypeContainer; 
@property (nonatomic,readonly) BOOL hasTransitVehiclePosition; 
@property (nonatomic,retain) GEOPBTransitVehiclePosition * transitVehiclePosition; 
@property (nonatomic,readonly) BOOL hasLinkedService; 
@property (nonatomic,retain) GEOPDLinkedService * linkedService; 
@property (nonatomic,readonly) BOOL hasBusinessHours; 
@property (nonatomic,retain) GEOPDBusinessHours * businessHours; 
@property (nonatomic,readonly) BOOL hasPlaceCollection; 
@property (nonatomic,retain) GEOPDPlaceCollection * placeCollection; 
@property (nonatomic,readonly) BOOL hasRelatedPlace; 
@property (nonatomic,retain) GEOPDRelatedPlace * relatedPlace; 
@property (nonatomic,readonly) BOOL hasTransitTripStop; 
@property (nonatomic,retain) GEOPDTransitTripStop * transitTripStop; 
@property (nonatomic,readonly) BOOL hasTransitTripStopTime; 
@property (nonatomic,retain) GEOPDTransitTripStopTime * transitTripStopTime; 
@property (nonatomic,readonly) BOOL hasTransitTripGeometry; 
@property (nonatomic,retain) GEOPDTransitTripGeometry * transitTripGeometry; 
@property (nonatomic,readonly) BOOL hasPlaceBrowseCategories; 
@property (nonatomic,retain) GEOPDBrowseCategories * placeBrowseCategories; 
@property (nonatomic,readonly) BOOL hasPublisher; 
@property (nonatomic,retain) GEOPDPublisher * publisher; 
@property (nonatomic,readonly) BOOL hasMiniPlaceBrowseCategories; 
@property (nonatomic,retain) GEOPDMiniBrowseCategories * miniPlaceBrowseCategories; 
@property (nonatomic,readonly) BOOL hasPlaceQuestionnaire; 
@property (nonatomic,retain) GEOPDPlaceQuestionnaireResult * placeQuestionnaire; 
@property (nonatomic,readonly) BOOL hasPlaceCollectionItem; 
@property (nonatomic,retain) GEOPDPlaceCollectionItem * placeCollectionItem; 
@property (nonatomic,readonly) BOOL hasCollectionIds; 
@property (nonatomic,retain) GEOPDCollectionIds * collectionIds; 
@property (nonatomic,readonly) BOOL hasIso3166Code; 
@property (nonatomic,retain) GEOPDISO3166Code * iso3166Code; 
@property (nonatomic,readonly) BOOL hasVendorAmenities; 
@property (nonatomic,retain) GEOPDAmenities * vendorAmenities; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDAddress *)address;
-(id)dictionaryRepresentation;
-(GEOPDHours *)hours;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDBounds *)bounds;
-(GEOPDIcon *)icon;
-(void)setIcon:(GEOPDIcon *)arg1 ;
-(GEOPDEntity *)entity;
-(void)setEntity:(GEOPDEntity *)arg1 ;
-(void)setAddress:(GEOPDAddress *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasAddress;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(GEOPDTip *)tip;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEOPDCollectionIds *)collectionIds;
-(GEOPDPublisher *)publisher;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasPublisher;
-(GEOPDBusinessHours *)businessHours;
-(void)setBusinessHours:(GEOPDBusinessHours *)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(GEOPDAddressObject *)addressObject;
-(void)setAddressObject:(GEOPDAddressObject *)arg1 ;
-(BOOL)hasAddressObject;
-(void)setCollectionIds:(GEOPDCollectionIds *)arg1 ;
-(void)setPublisher:(GEOPDPublisher *)arg1 ;
-(BOOL)hasStyleAttributes;
-(GEOPDBrowseCategories *)browseCategories;
-(BOOL)hasTextBlock;
-(BOOL)hasPlaceCollection;
-(GEOPDPlaceCollection *)placeCollection;
-(BOOL)hasPlaceCollectionItem;
-(GEOPDPlaceCollectionItem *)placeCollectionItem;
-(GEOPDRestaurantReservationLink *)restaurantReservationLink;
-(void)setRestaurantReservationLink:(GEOPDRestaurantReservationLink *)arg1 ;
-(GEOPDPlaceInfo *)placeInfo;
-(BOOL)hasHours;
-(BOOL)hasReview;
-(GEOPDReview *)review;
-(BOOL)hasTip;
-(BOOL)hasPhoto;
-(GEOPDPhoto *)photo;
-(BOOL)hasCaptionedPhoto;
-(GEOPDCaptionedPhoto *)captionedPhoto;
-(GEOPDRating *)rating;
-(GEOPDRoadAccessInfo *)accessInfo;
-(GEOPDResultSnippet *)resultSnippet;
-(GEOPDTransitAttribution *)transitAttribution;
-(GEOPDTransitInfo *)transitInfo;
-(GEOPDTransitInfoSnippet *)transitInfoSnippet;
-(GEOPDTransitTripStop *)transitTripStop;
-(GEOPDTransitTripStopTime *)transitTripStopTime;
-(GEOPDTransitTripGeometry *)transitTripGeometry;
-(GEOPDTransitSchedule *)transitSchedule;
-(BOOL)hasTransitIncident;
-(GEOPDTransitIncident *)transitIncident;
-(GEOPBTransitVehiclePosition *)transitVehiclePosition;
-(GEOPDFlyover *)flyover;
-(GEOPDSpatialLookupResult *)spatialLookupResult;
-(GEOPDISO3166Code *)iso3166Code;
-(GEOPDAnnotatedItemList *)annotatedItemList;
-(GEOPDAmenities *)amenities;
-(BOOL)hasPlaceInfo;
-(BOOL)hasEntity;
-(GEOPDTextBlock *)textBlock;
-(BOOL)hasFactoid;
-(GEOPDFactoid *)factoid;
-(GEOPDBusinessClaim *)businessClaim;
-(GEOPDMessageLink *)messageLink;
-(GEOPDQuickLink *)quickLink;
-(BOOL)hasRelatedPlace;
-(GEOPDRelatedPlace *)relatedPlace;
-(GEOPDPlacecardLayoutConfiguration *)placecardLayoutConfiguration;
-(GEOPDLinkedService *)linkedService;
-(GEOPDAssociatedApp *)associatedApp;
-(GEOPDPriceDescription *)priceDescription;
-(GEOPDVenueInfo *)venueInfo;
-(void)setHours:(GEOPDHours *)arg1 ;
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(GEOPDETA *)eta;
-(GEOPDRawAttribute *)rawAttribute;
-(GEOPDExternalAction *)externalAction;
-(GEOPDSimpleRestaurantMenuText *)simpleRestaurantMenuText;
-(GEOPDPlacecardURL *)placecardUrl;
-(GEOPDRap *)rap;
-(GEOPDLocationEvent *)locationEvent;
-(GEOPDContainedPlace *)containedPlace;
-(GEOPDWifiFingerprint *)wifiFingerprint;
-(GEOPDPoiEvent *)poiEvent;
-(GEOPDPrototypeContainer *)prototypeContainer;
-(GEOPDBrowseCategories *)placeBrowseCategories;
-(GEOPDMiniBrowseCategories *)miniPlaceBrowseCategories;
-(GEOPDPlaceQuestionnaireResult *)placeQuestionnaire;
-(GEOPDAmenities *)vendorAmenities;
-(void)setPlaceInfo:(GEOPDPlaceInfo *)arg1 ;
-(void)setAccessInfo:(GEOPDRoadAccessInfo *)arg1 ;
-(void)setRating:(GEOPDRating *)arg1 ;
-(void)setReview:(GEOPDReview *)arg1 ;
-(void)setTransitInfo:(GEOPDTransitInfo *)arg1 ;
-(void)setTransitSchedule:(GEOPDTransitSchedule *)arg1 ;
-(void)setEta:(GEOPDETA *)arg1 ;
-(void)setFlyover:(GEOPDFlyover *)arg1 ;
-(void)setRawAttribute:(GEOPDRawAttribute *)arg1 ;
-(void)setAmenities:(GEOPDAmenities *)arg1 ;
-(void)setTransitIncident:(GEOPDTransitIncident *)arg1 ;
-(void)setTextBlock:(GEOPDTextBlock *)arg1 ;
-(void)setFactoid:(GEOPDFactoid *)arg1 ;
-(void)setTransitAttribution:(GEOPDTransitAttribution *)arg1 ;
-(void)setBusinessClaim:(GEOPDBusinessClaim *)arg1 ;
-(void)setCaptionedPhoto:(GEOPDCaptionedPhoto *)arg1 ;
-(void)setTransitInfoSnippet:(GEOPDTransitInfoSnippet *)arg1 ;
-(void)setExternalAction:(GEOPDExternalAction *)arg1 ;
-(void)setResultSnippet:(GEOPDResultSnippet *)arg1 ;
-(void)setSimpleRestaurantMenuText:(GEOPDSimpleRestaurantMenuText *)arg1 ;
-(void)setSpatialLookupResult:(GEOPDSpatialLookupResult *)arg1 ;
-(void)setTip:(GEOPDTip *)arg1 ;
-(void)setPlacecardUrl:(GEOPDPlacecardURL *)arg1 ;
-(void)setAssociatedApp:(GEOPDAssociatedApp *)arg1 ;
-(void)setMessageLink:(GEOPDMessageLink *)arg1 ;
-(void)setQuickLink:(GEOPDQuickLink *)arg1 ;
-(void)setRap:(GEOPDRap *)arg1 ;
-(void)setLocationEvent:(GEOPDLocationEvent *)arg1 ;
-(void)setVenueInfo:(GEOPDVenueInfo *)arg1 ;
-(void)setContainedPlace:(GEOPDContainedPlace *)arg1 ;
-(void)setWifiFingerprint:(GEOPDWifiFingerprint *)arg1 ;
-(void)setPriceDescription:(GEOPDPriceDescription *)arg1 ;
-(void)setBrowseCategories:(GEOPDBrowseCategories *)arg1 ;
-(void)setAnnotatedItemList:(GEOPDAnnotatedItemList *)arg1 ;
-(void)setPoiEvent:(GEOPDPoiEvent *)arg1 ;
-(void)setPlacecardLayoutConfiguration:(GEOPDPlacecardLayoutConfiguration *)arg1 ;
-(void)setPrototypeContainer:(GEOPDPrototypeContainer *)arg1 ;
-(void)setTransitVehiclePosition:(GEOPBTransitVehiclePosition *)arg1 ;
-(void)setLinkedService:(GEOPDLinkedService *)arg1 ;
-(void)setPlaceCollection:(GEOPDPlaceCollection *)arg1 ;
-(void)setRelatedPlace:(GEOPDRelatedPlace *)arg1 ;
-(void)setTransitTripStop:(GEOPDTransitTripStop *)arg1 ;
-(void)setTransitTripStopTime:(GEOPDTransitTripStopTime *)arg1 ;
-(void)setTransitTripGeometry:(GEOPDTransitTripGeometry *)arg1 ;
-(void)setPlaceBrowseCategories:(GEOPDBrowseCategories *)arg1 ;
-(void)setMiniPlaceBrowseCategories:(GEOPDMiniBrowseCategories *)arg1 ;
-(void)setPlaceQuestionnaire:(GEOPDPlaceQuestionnaireResult *)arg1 ;
-(void)setPlaceCollectionItem:(GEOPDPlaceCollectionItem *)arg1 ;
-(void)setIso3166Code:(GEOPDISO3166Code *)arg1 ;
-(void)setVendorAmenities:(GEOPDAmenities *)arg1 ;
-(BOOL)hasAccessInfo;
-(BOOL)hasBounds;
-(BOOL)hasRating;
-(BOOL)hasTransitInfo;
-(BOOL)hasTransitSchedule;
-(BOOL)hasEta;
-(BOOL)hasFlyover;
-(BOOL)hasRawAttribute;
-(BOOL)hasAmenities;
-(BOOL)hasTransitAttribution;
-(BOOL)hasBusinessClaim;
-(BOOL)hasTransitInfoSnippet;
-(BOOL)hasExternalAction;
-(BOOL)hasResultSnippet;
-(BOOL)hasSimpleRestaurantMenuText;
-(BOOL)hasRestaurantReservationLink;
-(BOOL)hasSpatialLookupResult;
-(BOOL)hasPlacecardUrl;
-(BOOL)hasAssociatedApp;
-(BOOL)hasMessageLink;
-(BOOL)hasQuickLink;
-(BOOL)hasRap;
-(BOOL)hasLocationEvent;
-(BOOL)hasVenueInfo;
-(BOOL)hasContainedPlace;
-(BOOL)hasWifiFingerprint;
-(BOOL)hasIcon;
-(BOOL)hasPriceDescription;
-(BOOL)hasBrowseCategories;
-(BOOL)hasAnnotatedItemList;
-(BOOL)hasPoiEvent;
-(BOOL)hasPlacecardLayoutConfiguration;
-(BOOL)hasPrototypeContainer;
-(BOOL)hasTransitVehiclePosition;
-(BOOL)hasLinkedService;
-(BOOL)hasBusinessHours;
-(BOOL)hasTransitTripStop;
-(BOOL)hasTransitTripStopTime;
-(BOOL)hasTransitTripGeometry;
-(BOOL)hasPlaceBrowseCategories;
-(BOOL)hasMiniPlaceBrowseCategories;
-(BOOL)hasPlaceQuestionnaire;
-(BOOL)hasCollectionIds;
-(BOOL)hasIso3166Code;
-(BOOL)hasVendorAmenities;
@end

