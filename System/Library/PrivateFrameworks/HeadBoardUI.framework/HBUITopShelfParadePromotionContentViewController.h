/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HBUITopShelfParadeContentViewController.h>

@protocol HBUITopShelfParadeItem, HBUITopShelfParadeContentViewControllerDelegate, HBUITopShelfParadeAction;
@class HBUITopShelfParadeButton, UILabel, NSString;

@interface HBUITopShelfParadePromotionContentViewController : UIViewController <HBUITopShelfParadeContentViewController> {

	id<HBUITopShelfParadeItem> _paradeItem;
	id<HBUITopShelfParadeContentViewControllerDelegate> _delegate;
	HBUITopShelfParadeButton* _primaryActionButton;
	UILabel* _primaryActionSubtitleLabel;
	id<HBUITopShelfParadeAction> _primaryAction;

}

@property (nonatomic,readonly) HBUITopShelfParadeButton * primaryActionButton;                                 //@synthesize primaryActionButton=_primaryActionButton - In the implementation block
@property (nonatomic,readonly) UILabel * primaryActionSubtitleLabel;                                           //@synthesize primaryActionSubtitleLabel=_primaryActionSubtitleLabel - In the implementation block
@property (nonatomic,retain) id<HBUITopShelfParadeAction> primaryAction;                                       //@synthesize primaryAction=_primaryAction - In the implementation block
@property (nonatomic,retain) id<HBUITopShelfParadeItem> paradeItem;                                            //@synthesize paradeItem=_paradeItem - In the implementation block
@property (assign,nonatomic,__weak) id<HBUITopShelfParadeContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HBUITopShelfParadeContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HBUITopShelfParadeContentViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id<HBUITopShelfParadeAction>)primaryAction;
-(HBUITopShelfParadeButton *)primaryActionButton;
-(id<HBUITopShelfParadeItem>)paradeItem;
-(void)setParadeItem:(id<HBUITopShelfParadeItem>)arg1 ;
-(void)setPrimaryAction:(id<HBUITopShelfParadeAction>)arg1 ;
-(void)_didSelectPrimaryActionButton;
-(void)_updatePrimaryAction;
-(UILabel *)primaryActionSubtitleLabel;
@end
