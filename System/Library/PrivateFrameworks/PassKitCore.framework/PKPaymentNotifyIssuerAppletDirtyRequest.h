/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentNotifyIssuerAppletDirtyRequest : PKPaymentWebServiceRequest {

	NSString* _passSerialNumber;
	NSString* _deviceAccountIdentifier;

}
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithPassSerialNumber:(id)arg1 deviceAccountIdentifier:(id)arg2 ;
@end
