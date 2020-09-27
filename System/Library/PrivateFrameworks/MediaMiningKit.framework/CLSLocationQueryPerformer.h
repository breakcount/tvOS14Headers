/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/CLSQueryPerformerProtocol.h>

@protocol GEOMapServiceTicket, OS_os_log;
@class NSArray, NSObject, NSString;

@interface CLSLocationQueryPerformer : NSObject <CLSQueryPerformerProtocol> {

	BOOL _isCancelled;
	NSArray* _geoLocations;
	id<GEOMapServiceTicket> _ticket;
	NSArray* _regions;
	double _precision;
	NSObject*<OS_os_log> _loggingConnection;
	SCD_Struct_CL2 _statistics;

}

@property (nonatomic,readonly) NSArray * geoLocations;                            //@synthesize geoLocations=_geoLocations - In the implementation block
@property (nonatomic,readonly) id<GEOMapServiceTicket> ticket;                    //@synthesize ticket=_ticket - In the implementation block
@property (nonatomic,copy,readonly) NSArray * regions;                            //@synthesize regions=_regions - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                                  //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL2 statistics;                           //@synthesize statistics=_statistics - In the implementation block
@property (assign,nonatomic) double precision;                                    //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryWithTemplate:(id)arg1 forRegions:(id)arg2 ;
+(unsigned long long)numberOfRegionsPerBatch;
+(double)defaultPrecision;
-(id)init;
-(void)cancel;
-(BOOL)isCancelled;
-(double)precision;
-(NSArray *)regions;
-(id<GEOMapServiceTicket>)ticket;
-(SCD_Struct_CL2)statistics;
-(void)setStatistics:(SCD_Struct_CL2)arg1 ;
-(void)setPrecision:(double)arg1 ;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_os_log>)loggingConnection;
-(BOOL)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2 ;
-(unsigned long long)cacheItems:(id)arg1 ;
-(void)logGeoLookupCounterAndDurationWithLookupDuration:(id)arg1 ;
-(void)logGeoLookupFailureResult;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
-(id)initWithRegions:(id)arg1 precision:(double)arg2 ;
-(NSArray *)geoLocations;
@end

