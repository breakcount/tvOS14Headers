/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSSubscriptionPredicateFactory;

@interface VSSubscriptionFetchOptionsValidator : NSObject {

	VSSubscriptionPredicateFactory* _predicateFactory;

}

@property (nonatomic,retain) VSSubscriptionPredicateFactory * predicateFactory;              //@synthesize predicateFactory=_predicateFactory - In the implementation block
-(VSSubscriptionPredicateFactory *)predicateFactory;
-(id)subscriptionFetchOptionsAllowedForSecurityTask:(id)arg1 ;
-(id)standardizedFetchOptionsFromOptions:(id)arg1 withSecurityTask:(id)arg2 ;
-(void)setPredicateFactory:(VSSubscriptionPredicateFactory *)arg1 ;
@end

