/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCalendar, NSTimeZone, NSDate;

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>

@property (copy) NSCalendar * calendar; 
@property (copy) NSTimeZone * timeZone; 
@property (assign) long long era; 
@property (assign) long long year; 
@property (assign) long long month; 
@property (assign) long long day; 
@property (assign) long long hour; 
@property (assign) long long minute; 
@property (assign) long long second; 
@property (assign) long long nanosecond; 
@property (assign) long long weekday; 
@property (assign) long long weekdayOrdinal; 
@property (assign) long long quarter; 
@property (assign) long long weekOfMonth; 
@property (assign) long long weekOfYear; 
@property (assign) long long yearForWeekOfYear; 
@property (getter=isLeapMonth) BOOL leapMonth; 
@property (copy,readonly) NSDate * date; 
@property (getter=isValidDate,readonly) BOOL validDate; 
+(unsigned long long)smaller:(BOOL)arg1 componentsRelativeToComponent:(unsigned long long)arg2 ;
+(unsigned long long)_ui_smallerComponentsRelativeToComponent:(unsigned long long)arg1 ;
+(unsigned long long)_ui_largerComponentsRelativeToComponent:(unsigned long long)arg1 ;
+(id)_ui_namesForComponents:(unsigned long long)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
-(long long)_ui_valueForComponent:(unsigned long long)arg1 ;
-(void)_ui_setValue:(long long)arg1 forComponent:(unsigned long long)arg2 ;
-(id)_ui_conciseDescription;
-(void)_ui_setComponents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSameMonthAsComponents:(id)arg1 ;
-(BOOL)isSameYearAsComponents:(id)arg1 ;
-(BOOL)isSameDayAsComponents:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setYear:(long long)arg1 ;
-(void)setMonth:(long long)arg1 ;
-(void)setDay:(long long)arg1 ;
-(void)setHour:(long long)arg1 ;
-(void)setMinute:(long long)arg1 ;
-(void)setSecond:(long long)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(id)_initWithCFDateComponents:(_CFDateComponents*)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(long long)era;
-(void)setEra:(long long)arg1 ;
-(long long)year;
-(long long)quarter;
-(void)setQuarter:(long long)arg1 ;
-(long long)month;
-(long long)day;
-(long long)hour;
-(long long)minute;
-(long long)second;
-(long long)nanosecond;
-(void)setNanosecond:(long long)arg1 ;
-(long long)week;
-(void)setWeek:(long long)arg1 ;
-(long long)weekOfYear;
-(void)setWeekOfYear:(long long)arg1 ;
-(long long)weekOfMonth;
-(void)setWeekOfMonth:(long long)arg1 ;
-(long long)yearForWeekOfYear;
-(void)setYearForWeekOfYear:(long long)arg1 ;
-(long long)weekday;
-(void)setWeekday:(long long)arg1 ;
-(long long)weekdayOrdinal;
-(void)setWeekdayOrdinal:(long long)arg1 ;
-(BOOL)isLeapMonthSet;
-(BOOL)isLeapMonth;
-(void)setLeapMonth:(BOOL)arg1 ;
-(_CFDateComponents*)_dateComponents;
-(void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2 ;
-(long long)valueForComponent:(unsigned long long)arg1 ;
-(BOOL)isValidDate;
-(BOOL)isValidDateInCalendar:(id)arg1 ;
@end

