/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKInstallmentPlan, PKAccount, PKTransactionSource, NSString;

@interface PKDashboardTransactionInstallmentItem : NSObject <PKDashboardItem> {

	PKInstallmentPlan* _installmentPlan;
	PKAccount* _account;
	PKTransactionSource* _transactionSource;

}

@property (nonatomic,retain) PKInstallmentPlan * installmentPlan;                  //@synthesize installmentPlan=_installmentPlan - In the implementation block
@property (nonatomic,retain) PKAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKTransactionSource * transactionSource;              //@synthesize transactionSource=_transactionSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKTransactionSource *)transactionSource;
-(void)setTransactionSource:(PKTransactionSource *)arg1 ;
-(PKInstallmentPlan *)installmentPlan;
-(void)setInstallmentPlan:(PKInstallmentPlan *)arg1 ;
@end
