/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKNFCTagReaderSessionDelegate.h>

@class PKAccountService, PKAccount, PKPhysicalCard, PKPaymentPass, PKPhysicalCardActivationAnimationView, PKPaymentSessionHandle, PKNFCTagReaderSession, PKBusinessChatController, NSString;

@interface PKPhysicalCardReaderModeActivationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate> {

	PKAccountService* _accountService;
	PKAccount* _account;
	PKPhysicalCard* _physicalCard;
	PKPaymentPass* _paymentPass;
	unsigned long long _feature;
	PKPhysicalCardActivationAnimationView* _animationView;
	BOOL _invalidated;
	BOOL _deviceSupportsReaderMode;
	PKPaymentSessionHandle* _sessionHandle;
	PKNFCTagReaderSession* _readerSession;
	PKBusinessChatController* _businessChatController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_invalidate;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_dismiss;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 ;
-(void)_startTagReaderSession;
-(void)_stopTagReaderSession;
-(void)_presentActivationWithActivationCode:(id)arg1 ;
-(void)nfcTagReaderSession:(id)arg1 didDetectTags:(id)arg2 ;
-(void)nfcTagReaderSessionDidEndUnexpectedly:(id)arg1 ;
@end

