/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEProvider.h>

@class NSDictionary;

@interface NEAppPushProvider : NEProvider {

	NSDictionary* _providerConfiguration;

}

@property (readonly) NSDictionary * providerConfiguration;              //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
-(id)init;
-(NSDictionary *)providerConfiguration;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(void)stopWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reportIncomingCallWithUserInfo:(id)arg1 ;
-(void)handleTimerEvent;
@end

