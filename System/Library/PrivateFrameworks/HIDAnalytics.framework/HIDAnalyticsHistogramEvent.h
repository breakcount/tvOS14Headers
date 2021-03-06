/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HIDAnalytics/HIDAnalytics-Structs.h>
#import <HIDAnalytics/HIDAnalyticsEvent.h>

@class HIDAnalyticsHistogramEventField;

@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent {

	HIDAnalyticsHistogramEventField* _field;
	BOOL _isUpdated;

}
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)addField:(id)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2 ;
-(id)initWithAttributes:(id)arg1 description:(id)arg2 ;
-(void)addHistogramFieldWithSegments:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
@end

