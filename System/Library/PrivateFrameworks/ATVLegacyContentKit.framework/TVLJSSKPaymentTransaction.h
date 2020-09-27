/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVLJSObject.h>

@class SKPaymentTransaction;

@interface TVLJSSKPaymentTransaction : NSObject <TVLJSObject> {

	OpaqueJSValueRef _jsObjectRef;
	SKPaymentTransaction* _paymentTransaction;

}

@property (nonatomic,readonly) SKPaymentTransaction * paymentTransaction;              //@synthesize paymentTransaction=_paymentTransaction - In the implementation block
+(void)addClassDefinitionInContext:(OpaqueJSContextRef)arg1 ;
+(id)paymentTransactionFromJSValue:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 ;
-(id)init;
-(void)dealloc;
-(SKPaymentTransaction *)paymentTransaction;
-(OpaqueJSValueRef)jsObjectRef;
-(void)_jsFinalize;
-(id)initWithPaymentTransaction:(id)arg1 context:(OpaqueJSContextRef)arg2 ;
@end

