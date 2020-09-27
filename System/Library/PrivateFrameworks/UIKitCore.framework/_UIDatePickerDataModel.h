/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:30:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLocale, _UIDatePickerChineseCalendar, _UIDatePickerDateRange, NSCalendar, NSTimeZone, NSDate, NSDateComponents, NSString;

@interface _UIDatePickerDataModel : NSObject {

	NSLocale* _effectiveLocale;
	_UIDatePickerChineseCalendar* _chineseWrapperCalendar;
	_UIDatePickerDateRange* _dateRange;
	long long _datePickerStyle;
	long long _datePickerMode;
	NSLocale* _locale;
	NSCalendar* _calendar;
	NSTimeZone* _timeZone;
	NSDate* _date;
	NSDateComponents* _lastSelectedDateComponents;
	long long _minuteInterval;
	NSString* _customFontDesign;

}

@property (assign,nonatomic) long long datePickerStyle;                                      //@synthesize datePickerStyle=_datePickerStyle - In the implementation block
@property (assign,nonatomic) long long datePickerMode;                                       //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                            //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSLocale * effectiveLocale; 
@property (nonatomic,readonly) NSCalendar * effectiveCalendar; 
@property (nonatomic,readonly) NSCalendar * formattingCalendar; 
@property (nonatomic,retain) NSTimeZone * timeZone;                                          //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDateComponents * lastSelectedDateComponents;                  //@synthesize lastSelectedDateComponents=_lastSelectedDateComponents - In the implementation block
@property (nonatomic,readonly) NSDate * effectiveDate; 
@property (nonatomic,copy,readonly) NSDateComponents * effectiveDateComponents; 
@property (nonatomic,retain) NSDate * minimumDate; 
@property (nonatomic,retain) NSDate * maximumDate; 
@property (assign,nonatomic) long long minuteInterval;                                       //@synthesize minuteInterval=_minuteInterval - In the implementation block
@property (nonatomic,retain) NSString * customFontDesign;                                    //@synthesize customFontDesign=_customFontDesign - In the implementation block
-(id)init;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)setDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(long long)datePickerMode;
-(long long)minuteInterval;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(NSDate *)effectiveDate;
-(void)setMinuteInterval:(long long)arg1 ;
-(NSCalendar *)effectiveCalendar;
-(NSLocale *)effectiveLocale;
-(NSString *)customFontDesign;
-(void)setCustomFontDesign:(NSString *)arg1 ;
-(void)setLastSelectedDateComponents:(NSDateComponents *)arg1 ;
-(long long)datePickerStyle;
-(void)setDatePickerStyle:(long long)arg1 ;
-(void)resetForCurrentLocaleOrCalendarChange;
-(NSDateComponents *)lastSelectedDateComponents;
-(NSCalendar *)formattingCalendar;
-(void)_setupDerivedLocaleAndCalendars;
-(NSDateComponents *)effectiveDateComponents;
@end

