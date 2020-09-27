/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@protocol PKCreditPaymentDueCellDelegate;
@class UILabel, PKDashboardCreditAccountItem, PKContinuousButton, UIColor, UIFont, UIImage, NSString;

@interface PKCreditPaymentDueCell : PKDashboardCollectionViewCell {

	BOOL _usingCircleButton;
	BOOL _isCompactUI;
	BOOL _isTemplateLayout;
	UILabel* _paymentDueLabel;
	UILabel* _dateLabel;
	UILabel* _detailLabel;
	BOOL _useAccssibilityLayout;
	id<PKCreditPaymentDueCellDelegate> _delegate;
	PKDashboardCreditAccountItem* _item;
	PKContinuousButton* _payButton;
	UIColor* _payButtonTintColor;
	UIColor* _payButtonTitleColor;
	UIFont* _payButtonFont;
	UIImage* _payButtonImage;
	NSString* _fallbackButtonTitle;

}

@property (assign,nonatomic,__weak) id<PKCreditPaymentDueCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKDashboardCreditAccountItem * item;                             //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSString * paymentDueLabelText; 
@property (nonatomic,copy) UIFont * paymentDueLabelFont; 
@property (nonatomic,copy) UIColor * paymentDueLabelTextColor; 
@property (nonatomic,copy) NSString * dateLabelText; 
@property (nonatomic,copy) UIFont * dateLabelFont; 
@property (nonatomic,copy) UIColor * dateLabelTextColor; 
@property (nonatomic,copy) NSString * detailLabelText; 
@property (nonatomic,copy) UIFont * detailLabelFont; 
@property (nonatomic,copy) UIColor * detailLabelTextColor; 
@property (nonatomic,readonly) PKContinuousButton * payButton;                                //@synthesize payButton=_payButton - In the implementation block
@property (nonatomic,copy) UIColor * payButtonTintColor;                                      //@synthesize payButtonTintColor=_payButtonTintColor - In the implementation block
@property (nonatomic,copy) UIColor * payButtonTitleColor;                                     //@synthesize payButtonTitleColor=_payButtonTitleColor - In the implementation block
@property (nonatomic,copy) UIFont * payButtonFont;                                            //@synthesize payButtonFont=_payButtonFont - In the implementation block
@property (assign,nonatomic) BOOL useAccssibilityLayout;                                      //@synthesize useAccssibilityLayout=_useAccssibilityLayout - In the implementation block
@property (nonatomic,retain) UIImage * payButtonImage;                                        //@synthesize payButtonImage=_payButtonImage - In the implementation block
@property (nonatomic,copy) NSString * fallbackButtonTitle;                                    //@synthesize fallbackButtonTitle=_fallbackButtonTitle - In the implementation block
-(id<PKCreditPaymentDueCellDelegate>)delegate;
-(void)setDelegate:(id<PKCreditPaymentDueCellDelegate>)arg1 ;
-(void)setItem:(PKDashboardCreditAccountItem *)arg1 ;
-(PKDashboardCreditAccountItem *)item;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_buttonTapped:(id)arg1 ;
-(void)setButtonTitle:(id)arg1 ;
-(void)createSubviews;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(BOOL)useAccssibilityLayout;
-(void)setUseAccssibilityLayout:(BOOL)arg1 ;
-(void)setDateLabelFont:(UIFont *)arg1 ;
-(void)setPaymentDueLabelFont:(UIFont *)arg1 ;
-(void)setPaymentDueLabelTextColor:(UIColor *)arg1 ;
-(void)setDetailLabelFont:(UIFont *)arg1 ;
-(void)setDetailLabelTextColor:(UIColor *)arg1 ;
-(void)setDateLabelText:(NSString *)arg1 ;
-(void)setDetailLabelText:(NSString *)arg1 ;
-(void)setPaymentDueLabelText:(NSString *)arg1 ;
-(void)setPayButtonImage:(UIImage *)arg1 ;
-(void)setFallbackButtonTitle:(NSString *)arg1 ;
-(PKContinuousButton *)payButton;
-(void)setPayButtonTitleColor:(UIColor *)arg1 ;
-(void)setPayButtonTintColor:(UIColor *)arg1 ;
-(void)setPayButtonFont:(UIFont *)arg1 ;
-(id)_payButtonWithCircleLayout:(BOOL)arg1 ;
-(void)_updateButtonImage:(id)arg1 ;
-(NSString *)paymentDueLabelText;
-(UIFont *)paymentDueLabelFont;
-(UIColor *)paymentDueLabelTextColor;
-(NSString *)dateLabelText;
-(UIFont *)dateLabelFont;
-(void)setDateLabelTextColor:(UIColor *)arg1 ;
-(UIColor *)dateLabelTextColor;
-(NSString *)detailLabelText;
-(UIFont *)detailLabelFont;
-(UIColor *)detailLabelTextColor;
-(UIColor *)payButtonTintColor;
-(UIColor *)payButtonTitleColor;
-(UIFont *)payButtonFont;
-(UIImage *)payButtonImage;
-(NSString *)fallbackButtonTitle;
@end

