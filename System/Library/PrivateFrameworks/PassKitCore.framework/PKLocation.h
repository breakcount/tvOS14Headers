/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKLocation : NSObject <NSSecureCoding> {

	BOOL _hasAltitude;
	AB _hashComputed;
	AQ _hash;
	NSString* _name;
	NSString* _relevantText;
	double _latitude;
	double _longitude;
	double _altitude;
	double _maxDistance;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * relevantText;                            //@synthesize relevantText=_relevantText - In the implementation block
@property (assign,nonatomic) double latitude;                                  //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                                 //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) BOOL hasAltitude;                               //@synthesize hasAltitude=_hasAltitude - In the implementation block
@property (assign,nonatomic) double altitude;                                  //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) double maxDistance;                               //@synthesize maxDistance=_maxDistance - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(BOOL)hasAltitude;
-(double)altitude;
-(double)maxDistance;
-(void)setMaxDistance:(double)arg1 ;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(BOOL)hasEqualCoordinatesToLocation:(id)arg1 ;
-(id)CLLocation;
@end

