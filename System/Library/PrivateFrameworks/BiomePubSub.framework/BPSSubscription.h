/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BPSSubscription.h>

@protocol BPSSubscription <BPSCancellable,NSObject>
@required
-(void)requestDemand:(long long)arg1;

@end

#import <libobjc.A.dylib/BPSUpstreamSubscriptions.h>

@class NSArray, NSString;

@interface BPSSubscription : NSObject <BPSSubscription, BPSUpstreamSubscriptions>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * upstreamSubscriptions; 
-(void)cancel;
-(void)requestDemand:(long long)arg1 ;
-(NSArray *)upstreamSubscriptions;
@end

