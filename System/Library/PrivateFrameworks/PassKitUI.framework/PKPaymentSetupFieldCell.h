/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/PKDatePickerDelegate.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@protocol PKPaymentSetupFieldCellDelegate;
@class PKDatePicker, UIPickerView, NSArray, PKPaymentSetupField, UIColor, NSString;

@interface PKPaymentSetupFieldCell : PKTableViewCell <UITextFieldDelegate, PKDatePickerDelegate, UIPickerViewDelegate, UIPickerViewDataSource> {

	PKDatePicker* _dateInputView;
	UIPickerView* _pickerInputView;
	BOOL _ignoreCurrentValueChangedNotifications;
	NSArray* _defaultLeadingBarButtonGroups;
	NSArray* _defaultTrailingBarButtonGroups;
	NSArray* _defaultCenterBarButtonGroups;
	BOOL _canResignFirstResponder;
	BOOL _enabled;
	BOOL _shouldDrawSeperator;
	BOOL _shouldDrawFullWidthSeperator;
	id<PKPaymentSetupFieldCellDelegate> _delegate;
	PKPaymentSetupField* _paymentSetupField;
	double _minimumTextLabelWidth;
	UIColor* _editableTextFieldTextColor;
	UIColor* _editableTextFieldDisabledTextColor;
	UIColor* _editableTextFieldCameraCapturedTextColor;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupFieldCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPaymentSetupField * paymentSetupField;                          //@synthesize paymentSetupField=_paymentSetupField - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double minimumTextLabelWidth;                                     //@synthesize minimumTextLabelWidth=_minimumTextLabelWidth - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawSeperator;                                         //@synthesize shouldDrawSeperator=_shouldDrawSeperator - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawFullWidthSeperator;                                //@synthesize shouldDrawFullWidthSeperator=_shouldDrawFullWidthSeperator - In the implementation block
@property (nonatomic,copy) UIColor * editableTextFieldTextColor;                               //@synthesize editableTextFieldTextColor=_editableTextFieldTextColor - In the implementation block
@property (nonatomic,copy) UIColor * editableTextFieldDisabledTextColor;                       //@synthesize editableTextFieldDisabledTextColor=_editableTextFieldDisabledTextColor - In the implementation block
@property (nonatomic,copy) UIColor * editableTextFieldCameraCapturedTextColor;                 //@synthesize editableTextFieldCameraCapturedTextColor=_editableTextFieldCameraCapturedTextColor - In the implementation block
@property (assign,nonatomic) BOOL canResignFirstResponder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
+(double)minimumCellHeight;
+(long long)tableViewCellStyle;
+(id)paymentSetupFieldCellForField:(id)arg1 fromTableView:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PKPaymentSetupFieldCellDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentSetupFieldCellDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(double)heightForWidth:(double)arg1 ;
-(BOOL)canResignFirstResponder;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(CGRect)_separatorFrame;
-(void)pk_applyAppearance:(id)arg1 ;
-(void)setEditableTextFieldCameraCapturedTextColor:(UIColor *)arg1 ;
-(id)pk_childrenForAppearance;
-(PKPaymentSetupField *)paymentSetupField;
-(double)minimumTextLabelWidth;
-(void)setMinimumTextLabelWidth:(double)arg1 ;
-(void)setPaymentSetupField:(PKPaymentSetupField *)arg1 ;
-(void)_editableTextFieldDidBeginEditing:(id)arg1 ;
-(void)_editableTextFieldValueChanged:(id)arg1 ;
-(void)setShouldDrawFullWidthSeperator:(BOOL)arg1 ;
-(void)setShouldDrawSeperator:(BOOL)arg1 ;
-(id)initWithSetupField:(id)arg1 ;
-(void)_paymentSetupFieldCurrentValueChangedNotification:(id)arg1 ;
-(void)_updateDisplay:(BOOL)arg1 ;
-(void)_applyDefaultValues;
-(void)_updateDisplayForFieldTypeText:(id)arg1 ;
-(void)_updateDisplayForFieldTypeDate:(id)arg1 ;
-(void)_updateDisplayForFieldTypePicker:(id)arg1 ;
-(void)_pullCurrentValueFromField;
-(void)_pushCurrentValueToField;
-(void)datePicker:(id)arg1 didChangeDate:(id)arg2 ;
-(void)setCanResignFirstResponder:(BOOL)arg1 ;
-(void)updatePaymentSetupFieldWithCurrentCellValue;
-(BOOL)shouldDrawSeperator;
-(BOOL)shouldDrawFullWidthSeperator;
-(UIColor *)editableTextFieldTextColor;
-(void)setEditableTextFieldTextColor:(UIColor *)arg1 ;
-(UIColor *)editableTextFieldDisabledTextColor;
-(void)setEditableTextFieldDisabledTextColor:(UIColor *)arg1 ;
-(UIColor *)editableTextFieldCameraCapturedTextColor;
@end

