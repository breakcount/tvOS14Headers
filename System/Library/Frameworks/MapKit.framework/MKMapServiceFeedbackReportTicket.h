/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOMapServiceTraits;


@protocol MKMapServiceFeedbackReportTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(GEOMapServiceTraits *)traits;
-(void)submitWithCallbackQueue:(id)arg1 handler:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3;

@end

