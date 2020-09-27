/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOCacheInvalidationData, GEOMapItemIdentifier, NSString, NSArray, NSDateInterval, NSTimeZone;

@interface GEOPOIEvent : NSObject <NSSecureCoding> {

	GEOCacheInvalidationData* _invalidationData;
	BOOL _updateRequired;
	GEOMapItemIdentifier* _identifier;
	NSString* _localizedName;
	GEOCoarseLocationLatLng _centerCoordinate;
	long long _expectedAttendance;
	NSArray* _categories;
	NSArray* _relatedPOIIdentifiers;
	NSDateInterval* _dateInterval;
	NSTimeZone* _timeZone;
	NSArray* _hours;
	NSArray* _performers;

}

@property (nonatomic,retain) GEOCacheInvalidationData * invalidationData;                //@synthesize invalidationData=_invalidationData - In the implementation block
@property (nonatomic,retain) GEOMapItemIdentifier * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                                   //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) GEOCoarseLocationLatLng centerCoordinate;                   //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (assign,nonatomic) long long expectedAttendance;                               //@synthesize expectedAttendance=_expectedAttendance - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                       //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSArray * relatedPOIIdentifiers;                            //@synthesize relatedPOIIdentifiers=_relatedPOIIdentifiers - In the implementation block
@property (nonatomic,retain) NSDateInterval * dateInterval;                              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                      //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSArray * hours;                                            //@synthesize hours=_hours - In the implementation block
@property (nonatomic,retain) NSArray * performers;                                       //@synthesize performers=_performers - In the implementation block
@property (getter=isUpdateRequired,nonatomic,readonly) BOOL updateRequired;              //@synthesize updateRequired=_updateRequired - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isUpdateRequiredForInvalidationData:(id)arg1 ;
+(BOOL)isUpdateRequiredForInvalidationToken:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(GEOMapItemIdentifier *)identifier;
-(NSString *)localizedName;
-(void)setIdentifier:(GEOMapItemIdentifier *)arg1 ;
-(NSArray *)hours;
-(NSDateInterval *)dateInterval;
-(NSArray *)categories;
-(id)initWithPlace:(id)arg1 ;
-(GEOCoarseLocationLatLng)centerCoordinate;
-(void)setHours:(NSArray *)arg1 ;
-(void)setExpectedAttendance:(long long)arg1 ;
-(NSArray *)performers;
-(void)setPerformers:(NSArray *)arg1 ;
-(long long)expectedAttendance;
-(void)geoPOIEventCommonInit;
-(BOOL)configureWithComponents:(id)arg1 ;
-(BOOL)configureWithPOIComponent:(id)arg1 ;
-(BOOL)configureWithPlaceInfoComponent:(id)arg1 ;
-(id)dateIntervalFromDateTimeRanges:(id)arg1 ;
-(id)initWithMapItemIdentifier:(id)arg1 ;
-(BOOL)isUpdateRequired;
-(id)invalidationToken;
-(GEOCacheInvalidationData *)invalidationData;
-(void)setInvalidationData:(GEOCacheInvalidationData *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setCenterCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSArray *)relatedPOIIdentifiers;
-(void)setRelatedPOIIdentifiers:(NSArray *)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
@end

