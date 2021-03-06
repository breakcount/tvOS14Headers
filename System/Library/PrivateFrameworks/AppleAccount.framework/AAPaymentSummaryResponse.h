/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAPaymentSummaryResponse : AAResponse {

	NSDictionary* _responseParameters;

}

@property (nonatomic,readonly) unsigned long long numberOfCards; 
@property (nonatomic,readonly) NSString * description; 
-(NSString *)description;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(unsigned long long)numberOfCards;
@end

