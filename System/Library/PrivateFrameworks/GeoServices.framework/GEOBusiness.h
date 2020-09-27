/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOLatLng;

@interface GEOBusiness : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	unsigned long long _uID;
	NSString* _uRL;
	NSMutableArray* _attributeKeyValues;
	NSMutableArray* _attributions;
	NSMutableArray* _categorys;
	GEOLatLng* _center;
	NSMutableArray* _localizedCategories;
	NSString* _mapsURL;
	NSString* _name;
	NSMutableArray* _openHours;
	NSString* _phoneticName;
	NSMutableArray* _photos;
	NSMutableArray* _placeDataAmendments;
	NSMutableArray* _ratings;
	NSMutableArray* _sources;
	NSMutableArray* _starRatings;
	NSString* _telephone;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isClosed;
	struct {
		unsigned has_uID : 1;
		unsigned has_isClosed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_uRL : 1;
		unsigned read_attributeKeyValues : 1;
		unsigned read_attributions : 1;
		unsigned read_categorys : 1;
		unsigned read_center : 1;
		unsigned read_localizedCategories : 1;
		unsigned read_mapsURL : 1;
		unsigned read_name : 1;
		unsigned read_openHours : 1;
		unsigned read_phoneticName : 1;
		unsigned read_photos : 1;
		unsigned read_placeDataAmendments : 1;
		unsigned read_ratings : 1;
		unsigned read_sources : 1;
		unsigned read_starRatings : 1;
		unsigned read_telephone : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasUID; 
@property (assign,nonatomic) unsigned long long uID; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName; 
@property (nonatomic,readonly) BOOL hasTelephone; 
@property (nonatomic,retain) NSString * telephone; 
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL; 
@property (assign,nonatomic) BOOL hasIsClosed; 
@property (assign,nonatomic) BOOL isClosed; 
@property (nonatomic,readonly) BOOL hasMapsURL; 
@property (nonatomic,retain) NSString * mapsURL; 
@property (nonatomic,retain) NSMutableArray * ratings; 
@property (nonatomic,retain) NSMutableArray * categorys; 
@property (nonatomic,retain) NSMutableArray * photos; 
@property (nonatomic,retain) NSMutableArray * attributeKeyValues; 
@property (nonatomic,retain) NSMutableArray * openHours; 
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,retain) NSMutableArray * localizedCategories; 
@property (nonatomic,retain) NSMutableArray * attributions; 
@property (nonatomic,retain) NSMutableArray * sources; 
@property (nonatomic,retain) NSMutableArray * starRatings; 
@property (nonatomic,retain) NSMutableArray * placeDataAmendments; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)sourceType;
+(BOOL)isValid:(id)arg1 ;
+(Class)categoryType;
+(Class)attributionType;
+(Class)ratingType;
+(Class)photoType;
+(Class)attributeKeyValueType;
+(Class)openHoursType;
+(Class)localizedCategoriesType;
+(Class)starRatingType;
+(Class)placeDataAmendmentType;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(NSMutableArray *)sources;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSMutableArray *)photos;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasCenter;
-(NSMutableArray *)categorys;
-(void)addCategory:(id)arg1 ;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(unsigned long long)attributionsCount;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)attributions;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(NSString *)phoneticName;
-(void)setPhoneticName:(NSString *)arg1 ;
-(BOOL)hasPhoneticName;
-(BOOL)hasTelephone;
-(NSString *)telephone;
-(void)setTelephone:(NSString *)arg1 ;
-(void)setIsClosed:(BOOL)arg1 ;
-(void)addSource:(id)arg1 ;
-(void)addOpenHours:(id)arg1 ;
-(void)addPhoto:(id)arg1 ;
-(void)addLocalizedCategories:(id)arg1 ;
-(id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 entityAttribution:(id)arg6 ;
-(void)setUID:(unsigned long long)arg1 ;
-(unsigned long long)photosCount;
-(void)clearPhotos;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(void)setPhotos:(NSMutableArray *)arg1 ;
-(BOOL)hasUID;
-(unsigned long long)uID;
-(BOOL)hasMapsURL;
-(NSString *)mapsURL;
-(void)setMapsURL:(NSString *)arg1 ;
-(NSMutableArray *)openHours;
-(void)setOpenHours:(NSMutableArray *)arg1 ;
-(BOOL)hasURL;
-(NSString *)uRL;
-(BOOL)hasIsClosed;
-(BOOL)isClosed;
-(NSMutableArray *)starRatings;
-(void)addRating:(id)arg1 ;
-(void)addAttributeKeyValue:(id)arg1 ;
-(void)addStarRating:(id)arg1 ;
-(void)addPlaceDataAmendment:(id)arg1 ;
-(unsigned long long)ratingsCount;
-(void)clearRatings;
-(id)ratingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributeKeyValuesCount;
-(void)clearAttributeKeyValues;
-(id)attributeKeyValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)openHoursCount;
-(void)clearOpenHours;
-(id)openHoursAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)localizedCategoriesCount;
-(void)clearLocalizedCategories;
-(id)localizedCategoriesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sourcesCount;
-(void)clearSources;
-(id)sourceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)starRatingsCount;
-(void)clearStarRatings;
-(id)starRatingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeDataAmendmentsCount;
-(void)clearPlaceDataAmendments;
-(id)placeDataAmendmentAtIndex:(unsigned long long)arg1 ;
-(void)setHasUID:(BOOL)arg1 ;
-(void)setHasIsClosed:(BOOL)arg1 ;
-(NSMutableArray *)ratings;
-(void)setRatings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attributeKeyValues;
-(void)setAttributeKeyValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)localizedCategories;
-(void)setLocalizedCategories:(NSMutableArray *)arg1 ;
-(void)setSources:(NSMutableArray *)arg1 ;
-(void)setStarRatings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)placeDataAmendments;
-(void)setPlaceDataAmendments:(NSMutableArray *)arg1 ;
-(id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned)arg5 normalizedUserRatingScore:(float)arg6 ;
@end

