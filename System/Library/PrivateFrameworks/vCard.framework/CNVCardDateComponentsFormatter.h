/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSCalendar, NSDateFormatter;

@interface CNVCardDateComponentsFormatter : NSFormatter {

	NSCalendar* _gregorianCalendar;
	NSDateFormatter* _compactYearMonthDayDateFormatter;
	NSDateFormatter* _compactYearMonthDayDateHourMinuteSecondZFormatter;
	NSDateFormatter* _monthDayDateFormatter;
	NSDateFormatter* _yearMonthDayDateFormatter;
	NSDateFormatter* _yearMonthDayDateHourMinuteSecondZFormatter;

}
+(id)dateComponentsFromALTBDAYString:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringFromDateComponents:(id)arg1 ;
-(id)dateComponentsFromString:(id)arg1 ;
-(id)gregorianCalendar;
-(id)dateComponentsFromALTBDAYString:(id)arg1 ;
-(id)altBDAYStringFromDateComponents:(id)arg1 ;
-(id)yearMonthDayStringFromDateComponents:(id)arg1 ;
-(id)monthDayStringFromDateComponents:(id)arg1 ;
-(id)yearMonthDayDateFormatter;
-(id)yearMonthDayDateHourMinuteSecondZFormatter;
-(id)compactYearMonthDayDateFormatter;
-(id)compactYearMonthDayDateHourMinuteSecondZFormatter;
-(id)monthDayDateFormatter;
-(id)stringForComponentValue:(long long)arg1 format:(id)arg2 ;
@end
