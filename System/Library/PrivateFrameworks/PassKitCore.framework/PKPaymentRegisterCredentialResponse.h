/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSURL, NSData;

@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse {

	NSURL* _passURL;
	NSData* _credentialAttestation;

}

@property (nonatomic,readonly) NSURL * passURL;                             //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,readonly) NSData * credentialAttestation;              //@synthesize credentialAttestation=_credentialAttestation - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSURL *)passURL;
-(NSData *)credentialAttestation;
@end
