/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSVFairPlaySubscriptionStatus : NSObject <SSXPCCoding> {

	BOOL _hasSubscriptionLease;
	BOOL _hasSubscriptionSlot;

}

@property (assign,nonatomic) BOOL hasSubscriptionLease;              //@synthesize hasSubscriptionLease=_hasSubscriptionLease - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionSlot;               //@synthesize hasSubscriptionSlot=_hasSubscriptionSlot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)hasSubscriptionLease;
-(void)setHasSubscriptionLease:(BOOL)arg1 ;
-(BOOL)hasSubscriptionSlot;
-(void)setHasSubscriptionSlot:(BOOL)arg1 ;
@end

