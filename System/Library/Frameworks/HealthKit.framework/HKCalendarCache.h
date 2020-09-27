/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSCalendar;

@interface HKCalendarCache : NSObject {

	NSMutableDictionary* _calendarsByTimeZoneName;
	NSCalendar* _test_currentCalendar;

}
+(id)latestTimeZoneCalendar;
+(id)earliestTimeZoneCalendar;
-(id)init;
-(id)currentCalendar;
-(id)calendarForTimeZone:(id)arg1 ;
-(void)_test_setCurrentCalendar:(id)arg1 ;
@end

