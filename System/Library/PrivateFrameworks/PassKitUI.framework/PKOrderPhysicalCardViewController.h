/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKOrderPhysicalCardController, NSString, PKPhysicalCardArtworkOption, PKOrderPhysicalCardHeroView;

@interface PKOrderPhysicalCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKViewControllerPreflightable> {

	long long _context;
	PKOrderPhysicalCardController* _controller;
	unsigned long long _featureIdentifier;
	NSString* _nameOnCard;
	PKPhysicalCardArtworkOption* _artworkOption;
	PKOrderPhysicalCardHeroView* _physicalCardHeroView;
	BOOL _unavailableToOrder;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	NSString* _titleOverride;
	NSString* _bodyOverride;
	NSString* _primaryButtonTitleOverride;
	NSString* _secondaryButtonTitleOverride;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * titleOverride;                                                //@synthesize titleOverride=_titleOverride - In the implementation block
@property (nonatomic,copy) NSString * bodyOverride;                                                 //@synthesize bodyOverride=_bodyOverride - In the implementation block
@property (nonatomic,copy) NSString * primaryButtonTitleOverride;                                   //@synthesize primaryButtonTitleOverride=_primaryButtonTitleOverride - In the implementation block
@property (nonatomic,copy) NSString * secondaryButtonTitleOverride;                                 //@synthesize secondaryButtonTitleOverride=_secondaryButtonTitleOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)initWithController:(id)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(NSString *)titleOverride;
-(void)setTitleOverride:(NSString *)arg1 ;
-(void)_terminateSetupFlow;
-(void)_handleNextStep;
-(NSString *)bodyOverride;
-(void)setBodyOverride:(NSString *)arg1 ;
-(NSString *)primaryButtonTitleOverride;
-(void)setPrimaryButtonTitleOverride:(NSString *)arg1 ;
-(NSString *)secondaryButtonTitleOverride;
-(void)setSecondaryButtonTitleOverride:(NSString *)arg1 ;
@end

