/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKQuantitySeriesSampleQueryClientInterface.h>

@class HKQuantitySample, NSMutableDictionary, NSData, NSDate, NSDictionary, NSString;

@interface HKQuantitySeriesSampleQuery : HKQuery <HKQuantitySeriesSampleQueryClientInterface> {

	/*^block*/id _seriesHandler;
	HKQuantitySample* _sample;
	long long _anchor;
	double _startTime;
	/*^block*/id _enumerationHandler;
	NSMutableDictionary* _receivedSamplesByUUID;
	BOOL _hasMaximumReceivedStartTime;
	double _maximumReceivedStartTime;
	NSData* _latestReceivedUUIDData;
	NSDate* _latestSampleStartDate;
	BOOL _includeSample;
	BOOL _orderByQuantitySampleStartDate;

}

@property (nonatomic,readonly) NSDictionary * unitTest_cachedQuantitySamplesByUUID; 
@property (nonatomic,readonly) id quantityHandlerWithoutSample; 
@property (nonatomic,readonly) id quantityHandlerWithSample; 
@property (assign,nonatomic) BOOL includeSample;                                                 //@synthesize includeSample=_includeSample - In the implementation block
@property (assign,nonatomic) BOOL orderByQuantitySampleStartDate;                                //@synthesize orderByQuantitySampleStartDate=_orderByQuantitySampleStartDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)_quantitySampleForEnumerationResult:(id)arg1 UUID:(id)arg2 ;
-(void)client_deliverQuantitySeries:(id)arg1 seriesAnchor:(long long)arg2 isFinal:(BOOL)arg3 query:(id)arg4 ;
-(void)client_deliverEnumerationResults:(id)arg1 isFinal:(BOOL)arg2 query:(id)arg3 ;
-(id)initWithSample:(id)arg1 quantityHandler:(/*^block*/id)arg2 ;
-(id)initWithQuantityType:(id)arg1 predicate:(id)arg2 quantityHandler:(/*^block*/id)arg3 ;
-(id)quantityHandlerWithoutSample;
-(id)quantityHandlerWithSample;
-(void)setIncludeSample:(BOOL)arg1 ;
-(void)setOrderByQuantitySampleStartDate:(BOOL)arg1 ;
-(NSDictionary *)unitTest_cachedQuantitySamplesByUUID;
-(BOOL)includeSample;
-(BOOL)orderByQuantitySampleStartDate;
@end

