/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKDatePickerInternalImplementationProtocol, PKDatePickerDelegate;
@class UIView, NSLocale, NSCalendar, NSDate;

@interface PKDatePicker : UIView {

	UIView*<PKDatePickerInternalImplementationProtocol> _internalPicker;
	BOOL _showsDay;
	BOOL _showsMonth;
	BOOL _showsYear;
	BOOL _usesDarkAppearance;
	unsigned long long _style;
	NSLocale* _locale;
	NSCalendar* _calendar;
	NSDate* _date;
	id<PKDatePickerDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL showsDay;                                       //@synthesize showsDay=_showsDay - In the implementation block
@property (nonatomic,readonly) BOOL showsMonth;                                     //@synthesize showsMonth=_showsMonth - In the implementation block
@property (nonatomic,readonly) BOOL showsYear;                                      //@synthesize showsYear=_showsYear - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                               //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDate * date;                                         //@synthesize date=_date - In the implementation block
@property (assign,nonatomic,__weak) id<PKDatePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesDarkAppearance;                               //@synthesize usesDarkAppearance=_usesDarkAppearance - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PKDatePickerDelegate>)delegate;
-(void)setDelegate:(id<PKDatePickerDelegate>)arg1 ;
-(NSDate *)date;
-(NSCalendar *)calendar;
-(NSLocale *)locale;
-(unsigned long long)style;
-(void)setDate:(NSDate *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(BOOL)showsDay;
-(BOOL)showsMonth;
-(BOOL)showsYear;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)setUsesDarkAppearance:(BOOL)arg1 ;
-(BOOL)usesDarkAppearance;
-(void)reconfigureToShowDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 style:(unsigned long long)arg4 locale:(id)arg5 calendar:(id)arg6 ;
-(Class)_classForDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 style:(unsigned long long)arg4 ;
-(void)_dateValueChanged:(id)arg1 ;
-(void)_forceReloadInternalPicker;
@end

