/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface WLKSubscriptionData : NSObject <NSSecureCoding> {

	NSDictionary* _backingDictionary;
	NSArray* _subscriptionArray;
	NSDictionary* _account;
	NSDictionary* _family;
	NSDictionary* _subscriptionsByAdamID;
	long long _activeSubscriptionsCount;
	NSDictionary* _activeTVPlusSubscription;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)subscriptions;
-(id)activeTVPlusSubscription;
-(BOOL)isEqualToSubscriptionData:(id)arg1 ;
-(id)subscriptionByAdamID:(id)arg1 ;
-(id)currentFamily;
-(id)currentAccount;
-(BOOL)isTVPlusSubscriber;
-(unsigned long long)activeSubscriptionsCount;
@end

