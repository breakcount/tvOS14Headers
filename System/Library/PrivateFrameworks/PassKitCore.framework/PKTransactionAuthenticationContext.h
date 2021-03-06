/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKTransactionAuthenticationContext : NSObject <NSSecureCoding> {

	BOOL _complete;
	unsigned long long _requestedAuthenticationMechanisms;
	unsigned long long _processedAuthenticationMechanisms;
	long long _paymentPINFormat;
	NSData* _nonce;
	NSData* _signingKeyMaterial;
	NSData* _partialSignature;
	long long _authenticationFailure;

}

@property (assign,nonatomic) unsigned long long requestedAuthenticationMechanisms;              //@synthesize requestedAuthenticationMechanisms=_requestedAuthenticationMechanisms - In the implementation block
@property (assign,nonatomic) unsigned long long processedAuthenticationMechanisms;              //@synthesize processedAuthenticationMechanisms=_processedAuthenticationMechanisms - In the implementation block
@property (assign,nonatomic) BOOL complete;                                                     //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) long long paymentPINFormat;                                        //@synthesize paymentPINFormat=_paymentPINFormat - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                                      //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSData * signingKeyMaterial;                                         //@synthesize signingKeyMaterial=_signingKeyMaterial - In the implementation block
@property (nonatomic,copy) NSData * partialSignature;                                           //@synthesize partialSignature=_partialSignature - In the implementation block
@property (assign,nonatomic) long long authenticationFailure;                                   //@synthesize authenticationFailure=_authenticationFailure - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)complete;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(NSData *)partialSignature;
-(void)setPartialSignature:(NSData *)arg1 ;
-(unsigned long long)requestedAuthenticationMechanisms;
-(BOOL)isEqualToTransactionAuthenticationContext:(id)arg1 ;
-(void)setRequestedAuthenticationMechanisms:(unsigned long long)arg1 ;
-(unsigned long long)processedAuthenticationMechanisms;
-(void)setProcessedAuthenticationMechanisms:(unsigned long long)arg1 ;
-(long long)paymentPINFormat;
-(void)setPaymentPINFormat:(long long)arg1 ;
-(NSData *)signingKeyMaterial;
-(void)setSigningKeyMaterial:(NSData *)arg1 ;
-(long long)authenticationFailure;
-(void)setAuthenticationFailure:(long long)arg1 ;
@end

