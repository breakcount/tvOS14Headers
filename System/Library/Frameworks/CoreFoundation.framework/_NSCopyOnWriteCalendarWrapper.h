/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar, _NSRefcountedPthreadMutex;

@interface _NSCopyOnWriteCalendarWrapper : NSCalendar {

	NSCalendar* cal;
	_NSRefcountedPthreadMutex* _lock;
	BOOL needsToCopy;

}
+(id)currentCalendar;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setTimeZone:(id)arg1 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)timeZone;
-(id)_initWithCalendar:(id)arg1 ;
-(id)_init;
-(id)calendarIdentifier;
-(void)_copyWrappedCalendar;
-(void)setLocale:(id)arg1 ;
-(id)locale;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(unsigned long long)firstWeekday;
-(void)setMinimumDaysInFirstWeek:(unsigned long long)arg1 ;
-(unsigned long long)minimumDaysInFirstWeek;
-(id)gregorianStartDate;
-(void)setGregorianStartDate:(id)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned long long)arg1 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
-(BOOL)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

