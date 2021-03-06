/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentInformationEventExtensionBaseContext.h>
#import <libobjc.A.dylib/PKPaymentInformationEventExtensionHostContextProtocol.h>

@interface PKPaymentInformationEventExtensionHostContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionHostContextProtocol>
-(id)vendorContext;
-(id)vendorContextWithErrorHandler:(/*^block*/id)arg1 ;
-(void)handleInformationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleSignatureRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleConfigurationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

