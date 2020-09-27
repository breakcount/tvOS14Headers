/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, NSDate;

@interface PKAccountWebServicePaymentsRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSDate* _beginDate;
	NSDate* _endDate;
	long long _state;

}

@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                         //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSDate * beginDate;                        //@synthesize beginDate=_beginDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
-(NSURL *)baseURL;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSDate *)beginDate;
-(void)setBeginDate:(NSDate *)arg1 ;
@end

