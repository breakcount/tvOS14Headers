/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKApplyWebServiceRequest : PKPaymentWebServiceRequest {

	NSString* _referrerIdentifier;

}

@property (nonatomic,copy) NSString * referrerIdentifier;              //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_murlRequestWithURL:(id)arg1 ;
-(id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4 ;
-(NSString *)referrerIdentifier;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
@end

