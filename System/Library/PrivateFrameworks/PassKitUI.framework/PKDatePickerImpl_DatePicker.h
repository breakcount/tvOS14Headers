/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDatePicker.h>
#import <libobjc.A.dylib/PKDatePickerInternalImplementationProtocol.h>

@class NSDate, NSString;

@interface PKDatePickerImpl_DatePicker : UIDatePicker <PKDatePickerInternalImplementationProtocol>

@property (nonatomic,retain) NSDate * date; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)prepareToDie;
-(id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 locale:(id)arg5 calendar:(id)arg6 ;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2 ;
@end

