/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface AMSPaymentVerificationTokenResult : NSObject <NSSecureCoding> {

	NSData* _tokenData;

}

@property (nonatomic,readonly) NSData * tokenData;              //@synthesize tokenData=_tokenData - In the implementation block
-(NSData *)tokenData;
@end

