/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDatePickerMode.h>

@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode {

	double _componentWidth;

}
+(long long)datePickerMode;
+(unsigned long long)extractableCalendarUnits;
-(id)font;
-(id)localizedFormatString;
-(double)rowHeight;
-(id)titleForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(NSRange)rangeForCalendarUnit:(unsigned long long)arg1 ;
-(BOOL)isTimeIntervalMode;
-(void)resetComponentWidths;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(long long)hourForRow:(long long)arg1 ;
-(long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3 ;
-(long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1 ;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2 ;
-(void)updateDateForNewDateRange;
-(BOOL)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2 ;
@end

