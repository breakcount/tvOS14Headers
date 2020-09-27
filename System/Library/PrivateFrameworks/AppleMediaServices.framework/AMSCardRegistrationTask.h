/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@class NSString;

@interface AMSCardRegistrationTask : AMSTask {

	NSString* _countryCode;
	NSString* _merchantIdentifier;

}

@property (nonatomic,copy) NSString * countryCode;                     //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(id)initWithCountryCode:(id)arg1 merchantIdentifier:(id)arg2 ;
-(id)performCardRegistration;
-(id)_performCardRegistration;
@end
