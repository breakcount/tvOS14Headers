/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDecimalNumber, NSDate, NSArray, PKCreditAccountStatement;

@interface PKInstallmentPlanPayment : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSString* _statementIdentifier;
	NSString* _currencyCode;
	NSDecimalNumber* _originalAmountDue;
	NSDecimalNumber* _amountDue;
	NSDecimalNumber* _amountPaid;
	NSDate* _dueDate;
	NSDate* _statementDate;
	NSArray* _lineItems;
	unsigned long long _paymentNumber;
	unsigned long long _paymentCount;
	PKCreditAccountStatement* _statement;

}

@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * statementIdentifier;                      //@synthesize statementIdentifier=_statementIdentifier - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                             //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * originalAmountDue;               //@synthesize originalAmountDue=_originalAmountDue - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * amountDue;                       //@synthesize amountDue=_amountDue - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * amountPaid;                      //@synthesize amountPaid=_amountPaid - In the implementation block
@property (nonatomic,retain) NSDate * dueDate;                                  //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,retain) NSDate * statementDate;                            //@synthesize statementDate=_statementDate - In the implementation block
@property (nonatomic,copy) NSArray * lineItems;                                 //@synthesize lineItems=_lineItems - In the implementation block
@property (assign,nonatomic) unsigned long long paymentNumber;                  //@synthesize paymentNumber=_paymentNumber - In the implementation block
@property (assign,nonatomic) unsigned long long paymentCount;                   //@synthesize paymentCount=_paymentCount - In the implementation block
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,retain) PKCreditAccountStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) NSString * localizedDisplay; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)currencyCode;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setDueDate:(NSDate *)arg1 ;
-(NSDate *)dueDate;
-(PKCreditAccountStatement *)statement;
-(void)setStatement:(PKCreditAccountStatement *)arg1 ;
-(NSDecimalNumber *)amountDue;
-(void)setAmountDue:(NSDecimalNumber *)arg1 ;
-(NSArray *)lineItems;
-(NSString *)statementIdentifier;
-(void)setStatementIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToInstallmentPlanPayment:(id)arg1 ;
-(BOOL)isPaid;
-(NSString *)localizedDisplay;
-(NSDecimalNumber *)originalAmountDue;
-(void)setOriginalAmountDue:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)amountPaid;
-(void)setAmountPaid:(NSDecimalNumber *)arg1 ;
-(NSDate *)statementDate;
-(void)setStatementDate:(NSDate *)arg1 ;
-(void)setLineItems:(NSArray *)arg1 ;
-(unsigned long long)paymentNumber;
-(void)setPaymentNumber:(unsigned long long)arg1 ;
-(unsigned long long)paymentCount;
-(void)setPaymentCount:(unsigned long long)arg1 ;
@end

