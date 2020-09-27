/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupFieldCell.h>

@class UIButton;

@interface PKPaymentSetupLabelFieldCell : PKPaymentSetupFieldCell {

	UIButton* _button;

}
+(long long)tableViewCellStyle;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)editableTextField;
-(void)pk_applyAppearance:(id)arg1 ;
-(void)setMinimumTextLabelWidth:(double)arg1 ;
-(void)_updateDisplay:(BOOL)arg1 ;
-(void)_updateDisplayForFieldTypeLabel:(id)arg1 ;
-(void)_buttonTapped;
-(double)minimumTextFieldOffset;
@end

