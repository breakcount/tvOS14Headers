/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary;

@interface ARPPredictionContext : NSObject {

	NSDate* _microLocationEventDate;
	NSDate* _predictionDate;
	NSDictionary* _microLocationProbabilityVector;

}

@property (nonatomic,readonly) NSDictionary * microLocationProbabilityVector;              //@synthesize microLocationProbabilityVector=_microLocationProbabilityVector - In the implementation block
@property (nonatomic,copy,readonly) NSDate * microLocationEventDate;                       //@synthesize microLocationEventDate=_microLocationEventDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * predictionDate;                               //@synthesize predictionDate=_predictionDate - In the implementation block
-(id)description;
-(NSDictionary *)microLocationProbabilityVector;
-(NSDate *)predictionDate;
-(NSDate *)microLocationEventDate;
-(id)initWithPredictionDate:(id)arg1 microLocationEventDate:(id)arg2 microLocationProbabilityVector:(id)arg3 ;
@end

