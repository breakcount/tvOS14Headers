/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAEmailVettingRequest : AARequest {

	ACAccount* _account;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(id)initWithAccount:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
@end

