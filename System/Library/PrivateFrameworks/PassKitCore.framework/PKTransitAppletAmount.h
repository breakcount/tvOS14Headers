/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface PKTransitAppletAmount : NSObject <NSCopying, NSSecureCoding> {

	NSString* _balanceIdentifier;
	NSString* _currency;
	long long _exponent;
	NSDecimalNumber* _amount;

}

@property (nonatomic,copy) NSString * balanceIdentifier;              //@synthesize balanceIdentifier=_balanceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * currency;                       //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) long long exponent;                      //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                  //@synthesize amount=_amount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(long long)exponent;
-(void)setExponent:(long long)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)balanceIdentifier;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3 identifier:(id)arg4 ;
-(void)setBalanceIdentifier:(NSString *)arg1 ;
@end

