/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationServiceProtocol.h>

@protocol PKPaymentAuthorizationHostProtocol;
@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationDataModel, NSString;

@interface PKPaymentAuthorizationCoreViewController : UIViewController <PKPaymentAuthorizationServiceProtocol> {

	long long _paymentAuthorizationStyle;
	PKPaymentAuthorizationLayout* _paymentAuthorizationLayout;
	PKPaymentAuthorizationStateMachine* _stateMachine;
	PKPaymentAuthorizationDataModel* _dataModel;
	id<PKPaymentAuthorizationHostProtocol> _delegate;

}

@property (nonatomic,readonly) long long paymentAuthorizationStyle;                                    //@synthesize paymentAuthorizationStyle=_paymentAuthorizationStyle - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationLayout * paymentAuthorizationLayout;              //@synthesize paymentAuthorizationLayout=_paymentAuthorizationLayout - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationStateMachine * stateMachine;                      //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationDataModel * dataModel;                            //@synthesize dataModel=_dataModel - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationHostProtocol> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPaymentAuthorizationHostProtocol>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationHostProtocol>)arg1 ;
-(PKPaymentAuthorizationStateMachine *)stateMachine;
-(long long)paymentAuthorizationStyle;
-(PKPaymentAuthorizationLayout *)paymentAuthorizationLayout;
-(PKPaymentAuthorizationDataModel *)dataModel;
@end
