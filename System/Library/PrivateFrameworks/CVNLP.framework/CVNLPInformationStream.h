/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:41:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface CVNLPInformationStream : NSObject {

	double _decodingWeightValue;
	double _lowerBoundLogProbabilityValue;
	NSNumber* _decodingWeight;
	NSNumber* _lowerBoundLogProbability;

}

@property (nonatomic,readonly) NSNumber * decodingWeight;                        //@synthesize decodingWeight=_decodingWeight - In the implementation block
@property (nonatomic,readonly) NSNumber * lowerBoundLogProbability;              //@synthesize lowerBoundLogProbability=_lowerBoundLogProbability - In the implementation block
+(id)defaultLowerBoundLogProbability;
+(id)defaultDecodingWeight;
-(id)initWithDecodingWeight:(id)arg1 lowerBoundLogProbability:(id)arg2 ;
-(id)initWithDecodingWeight:(id)arg1 ;
-(double)decodingWeightValue;
-(double)lowerBoundLogProbabilityValue;
-(NSNumber *)decodingWeight;
-(NSNumber *)lowerBoundLogProbability;
@end

