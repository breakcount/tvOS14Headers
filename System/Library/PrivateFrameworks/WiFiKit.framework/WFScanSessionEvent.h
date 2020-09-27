/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFAWDEvent.h>

@protocol WFAWDWiFiUIScanSessionMetric;
@class PBCodable, NSString;

@interface WFScanSessionEvent : NSObject <WFAWDEvent> {

	PBCodable*<WFAWDWiFiUIScanSessionMetric> _metric;

}

@property (nonatomic,retain) PBCodable*<WFAWDWiFiUIScanSessionMetric> metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scanSessionEventWithSectionCounts:(id)arg1 duration:(double)arg2 ;
-(PBCodable*<WFAWDWiFiUIScanSessionMetric>)metric;
-(void)setMetric:(PBCodable*<WFAWDWiFiUIScanSessionMetric>)arg1 ;
-(unsigned)metricIdentifier;
-(id)initWithScanSectionCounts:(id)arg1 duration:(double)arg2 ;
-(unsigned long long)_durationBucketFromTimeInterval:(double)arg1 ;
-(id)_countMetricsFromSectionCounts:(id)arg1 ;
@end
