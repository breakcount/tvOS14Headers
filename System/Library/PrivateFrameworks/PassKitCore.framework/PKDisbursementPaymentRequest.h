/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRequest.h>

@class PKDisbursementRequest;

@interface PKDisbursementPaymentRequest : PKPaymentRequest {

	PKDisbursementRequest* _disbursementRequest;
	unsigned long long _disbursementSource;
	unsigned long long _disbursementTarget;

}

@property (nonatomic,readonly) PKDisbursementRequest * disbursementRequest;              //@synthesize disbursementRequest=_disbursementRequest - In the implementation block
@property (nonatomic,readonly) unsigned long long disbursementSource;                    //@synthesize disbursementSource=_disbursementSource - In the implementation block
@property (nonatomic,readonly) unsigned long long disbursementTarget;                    //@synthesize disbursementTarget=_disbursementTarget - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)disbursementSource;
-(unsigned long long)disbursementTarget;
-(id)initWithDisbursementPaymentRequest:(id)arg1 ;
-(PKDisbursementRequest *)disbursementRequest;
@end

