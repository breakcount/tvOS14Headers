/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class PKAccountAutomaticPaymentsController, NSString;

@interface PKAccountAutomaticPaymentsHeroViewController : PKExplanationViewController <PKPaymentSetupViewControllerDelegate, UITextViewDelegate> {

	PKAccountAutomaticPaymentsController* _controller;
	unsigned long long _featureIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithController:(id)arg1 ;
-(id)_continueButton;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)_continuePressed;
@end

