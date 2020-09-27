/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKBusinessChatContext.h>

@class PKAccount, PKPaymentPass, NSString;

@interface PKBusinessChatInstallmentPaymentContext : NSObject <PKBusinessChatContext> {

	PKAccount* _account;
	PKPaymentPass* _paymentPass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)requiresAuthorization;
-(id)bodyText;
-(id)initWithAccount:(id)arg1 paymentPass:(id)arg2 ;
-(id)businessIdentifier;
-(id)intentParameters;
-(id)groupParameters;
@end
