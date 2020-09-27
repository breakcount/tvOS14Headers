/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKAccount, PKTransactionSource, NSArray, PKSpendingSummary, PKSpendingSummaryFetcher, NSString;

@interface PKDashboardCreditAccountItem : NSObject <PKDashboardItem> {

	PKAccount* _account;
	PKTransactionSource* _transactionSource;
	unsigned long long _type;
	NSArray* _weeks;
	NSArray* _months;
	PKSpendingSummary* _summary;
	PKSpendingSummaryFetcher* _summaryFetcher;
	NSArray* _mostRecentTransactions;
	NSArray* _upcomingScheduledPayments;

}

@property (nonatomic,readonly) PKAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKTransactionSource * transactionSource;                //@synthesize transactionSource=_transactionSource - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * weeks;                                        //@synthesize weeks=_weeks - In the implementation block
@property (nonatomic,retain) NSArray * months;                                       //@synthesize months=_months - In the implementation block
@property (nonatomic,retain) PKSpendingSummary * summary;                            //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) PKSpendingSummaryFetcher * summaryFetcher;              //@synthesize summaryFetcher=_summaryFetcher - In the implementation block
@property (nonatomic,retain) NSArray * mostRecentTransactions;                       //@synthesize mostRecentTransactions=_mostRecentTransactions - In the implementation block
@property (nonatomic,retain) NSArray * upcomingScheduledPayments;                    //@synthesize upcomingScheduledPayments=_upcomingScheduledPayments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(unsigned long long)type;
-(PKSpendingSummary *)summary;
-(void)setSummary:(PKSpendingSummary *)arg1 ;
-(PKAccount *)account;
-(NSArray *)weeks;
-(PKTransactionSource *)transactionSource;
-(void)setTransactionSource:(PKTransactionSource *)arg1 ;
-(PKSpendingSummaryFetcher *)summaryFetcher;
-(NSArray *)months;
-(NSArray *)mostRecentTransactions;
-(NSArray *)upcomingScheduledPayments;
-(id)initWithAccount:(id)arg1 transactionSource:(id)arg2 type:(unsigned long long)arg3 ;
-(void)setWeeks:(NSArray *)arg1 ;
-(void)setMonths:(NSArray *)arg1 ;
-(void)setSummaryFetcher:(PKSpendingSummaryFetcher *)arg1 ;
-(void)setMostRecentTransactions:(NSArray *)arg1 ;
-(void)setUpcomingScheduledPayments:(NSArray *)arg1 ;
@end

