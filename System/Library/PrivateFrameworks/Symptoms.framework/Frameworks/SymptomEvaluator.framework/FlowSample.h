/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FlowSample : NSObject {

	double _minRxThroughput;
	double _maxRxThroughput;
	double _minTxThroughput;
	double _maxTxThroughput;
	double _elapsedTime;
	unsigned long long _totalObservedIfTypeRxBytes;
	unsigned long long _totalObservedIfTypeTxBytes;

}

@property (assign,nonatomic) double elapsedTime;                                         //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) unsigned long long totalObservedIfTypeRxBytes;              //@synthesize totalObservedIfTypeRxBytes=_totalObservedIfTypeRxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long totalObservedIfTypeTxBytes;              //@synthesize totalObservedIfTypeTxBytes=_totalObservedIfTypeTxBytes - In the implementation block
@property (nonatomic,readonly) double minRxThroughput; 
@property (nonatomic,readonly) double averageRxThroughput; 
@property (nonatomic,readonly) double maxRxThroughput; 
@property (nonatomic,readonly) double minTxThroughput; 
@property (nonatomic,readonly) double averageTxThroughput; 
@property (nonatomic,readonly) double maxTxThroughput; 
@property (nonatomic,readonly) BOOL isIdle; 
-(id)description;
-(void)setElapsedTime:(double)arg1 ;
-(double)elapsedTime;
-(BOOL)isIdle;
-(double)averageRxThroughput;
-(double)averageTxThroughput;
-(double)maxRxThroughput;
-(double)maxTxThroughput;
-(unsigned long long)totalObservedIfTypeRxBytes;
-(unsigned long long)totalObservedIfTypeTxBytes;
-(double)minRxThroughput;
-(double)minTxThroughput;
-(void)accumulateFrom:(id)arg1 ;
-(void)setTotalObservedIfTypeRxBytes:(unsigned long long)arg1 ;
-(void)setTotalObservedIfTypeTxBytes:(unsigned long long)arg1 ;
@end

