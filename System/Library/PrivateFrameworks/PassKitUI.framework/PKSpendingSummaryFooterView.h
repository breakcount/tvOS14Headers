/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKSpendingSummaryFooter.h>

@protocol PKSpendingSummaryFooterViewDelegate;
@class UIView, PKContinuousButton, UIColor, UIImage, UILabel, NSString;

@interface PKSpendingSummaryFooterView : UIView <PKSpendingSummaryFooter> {

	UIView* _separatorView;
	UIView* _topSeparatorView;
	PKContinuousButton* _payButton;
	BOOL _usingCircleButton;
	UIColor* _buttonTitleColor;
	UIColor* _buttonTintColor;
	UIImage* _payButtonImage;
	id<PKSpendingSummaryFooterViewDelegate> _delegate;
	UILabel* _leadingTitle;
	UILabel* _leadingDetail;
	UILabel* _trailingTitle;
	UILabel* _trailingDetail;

}

@property (assign,nonatomic,__weak) id<PKSpendingSummaryFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * leadingTitle;                                             //@synthesize leadingTitle=_leadingTitle - In the implementation block
@property (nonatomic,readonly) UILabel * leadingDetail;                                            //@synthesize leadingDetail=_leadingDetail - In the implementation block
@property (nonatomic,readonly) UILabel * trailingTitle;                                            //@synthesize trailingTitle=_trailingTitle - In the implementation block
@property (nonatomic,readonly) UILabel * trailingDetail;                                           //@synthesize trailingDetail=_trailingDetail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKSpendingSummaryFooterViewDelegate>)delegate;
-(void)setDelegate:(id<PKSpendingSummaryFooterViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_buttonTapped:(id)arg1 ;
-(void)_createSubviews;
-(void)setButtonTitle:(id)arg1 ;
-(void)setPayButtonImage:(id)arg1 ;
-(UILabel *)leadingTitle;
-(UILabel *)leadingDetail;
-(void)setButtonTintColor:(id)arg1 ;
-(void)setButtonTitleColor:(id)arg1 ;
-(UILabel *)trailingTitle;
-(UILabel *)trailingDetail;
-(id)_payButtonWithCircleLayout:(BOOL)arg1 ;
-(BOOL)isEqualToFooter:(id)arg1 ;
@end

