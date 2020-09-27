/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKWrappedPayment, NSData;

@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam {

	PKWrappedPayment* _wrappedPayment;
	NSData* _nonceData;
	NSData* _credential;
	long long _cryptogramType;

}

@property (nonatomic,retain) PKWrappedPayment * wrappedPayment;              //@synthesize wrappedPayment=_wrappedPayment - In the implementation block
@property (nonatomic,retain) NSData * nonceData;                             //@synthesize nonceData=_nonceData - In the implementation block
@property (nonatomic,retain) NSData * credential;                            //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) long long cryptogramType;                       //@synthesize cryptogramType=_cryptogramType - In the implementation block
+(id)paramWithWrappedPayment:(id)arg1 nonce:(id)arg2 credential:(id)arg3 cryptogramType:(long long)arg4 ;
-(id)description;
-(NSData *)credential;
-(void)setCredential:(NSData *)arg1 ;
-(long long)cryptogramType;
-(NSData *)nonceData;
-(PKWrappedPayment *)wrappedPayment;
-(void)setWrappedPayment:(PKWrappedPayment *)arg1 ;
-(void)setCryptogramType:(long long)arg1 ;
-(void)setNonceData:(NSData *)arg1 ;
@end

