/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SPAdvertisement, SPEstimatedLocation;

@interface SPBeaconPayload : NSObject <NSSecureCoding> {

	SPAdvertisement* _advertisement;
	SPEstimatedLocation* _location;
	long long _observationValue;

}

@property (nonatomic,retain) SPAdvertisement * advertisement;              //@synthesize advertisement=_advertisement - In the implementation block
@property (nonatomic,copy) SPEstimatedLocation * location;                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long observationValue;                   //@synthesize observationValue=_observationValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SPEstimatedLocation *)location;
-(void)setLocation:(SPEstimatedLocation *)arg1 ;
-(SPAdvertisement *)advertisement;
-(void)setAdvertisement:(SPAdvertisement *)arg1 ;
-(long long)observationValue;
-(void)setObservationValue:(long long)arg1 ;
-(id)initWithAdvertisement:(id)arg1 location:(id)arg2 ;
@end

