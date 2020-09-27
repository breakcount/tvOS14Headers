/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEONavdAnalyticsReporter;
@interface GEONavdAnalyticsManager : NSObject {

	id<GEONavdAnalyticsReporter> _analyticsReporter;

}

@property (nonatomic,retain) id<GEONavdAnalyticsReporter> analyticsReporter;              //@synthesize analyticsReporter=_analyticsReporter - In the implementation block
+(id)sharedManager;
-(id<GEONavdAnalyticsReporter>)analyticsReporter;
-(void)setAnalyticsReporter:(id<GEONavdAnalyticsReporter>)arg1 ;
@end

