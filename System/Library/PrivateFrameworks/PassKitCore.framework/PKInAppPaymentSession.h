/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSession.h>

@interface PKInAppPaymentSession : PKPaymentSession
-(id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 withAuthorizationParameters:(id)arg3 ;
-(id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4 ;
-(id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4 isFeatureNotSupportedError:(BOOL*)arg5 ;
@end
