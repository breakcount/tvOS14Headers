/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ASDBagKeySetAggregator : NSObject {

	NSMutableDictionary* _bagKeySets;

}
-(id)init;
-(void)addBagKeySet:(id)arg1 forConsumer:(Class)arg2 ;
-(id)generateAggregatedBagKeySet;
-(BOOL)hasBagKeySetForConsumer:(Class)arg1 ;
@end

