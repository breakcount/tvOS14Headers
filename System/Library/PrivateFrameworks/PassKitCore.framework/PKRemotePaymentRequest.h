/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKRemoteDevice, PKPaymentRequest, NSString;

@interface PKRemotePaymentRequest : NSObject <NSSecureCoding> {

	PKRemoteDevice* _device;
	PKPaymentRequest* _paymentRequest;
	NSString* _selectedApplicationIdentifier;
	NSString* _identifier;

}

@property (nonatomic,readonly) PKRemoteDevice * device;                           //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) PKPaymentRequest * paymentRequest;                   //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (nonatomic,copy) NSString * selectedApplicationIdentifier;              //@synthesize selectedApplicationIdentifier=_selectedApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(PKRemoteDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(PKPaymentRequest *)paymentRequest;
-(void)setPaymentRequest:(PKPaymentRequest *)arg1 ;
-(void)setSelectedApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)selectedApplicationIdentifier;
-(id)initWithDevice:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqualToRemoteRequest:(id)arg1 ;
@end

