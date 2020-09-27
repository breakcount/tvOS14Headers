/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKApplePayTrustKey : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSData* _signedEnrollmentData;
	NSData* _publicKeyHash;
	NSData* _certificate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * signedEnrollmentData;              //@synthesize signedEnrollmentData=_signedEnrollmentData - In the implementation block
@property (nonatomic,copy,readonly) NSData * publicKeyHash;                     //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy,readonly) NSData * certificate;                       //@synthesize certificate=_certificate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSData *)certificate;
-(NSData *)publicKeyHash;
-(NSData *)signedEnrollmentData;
@end

