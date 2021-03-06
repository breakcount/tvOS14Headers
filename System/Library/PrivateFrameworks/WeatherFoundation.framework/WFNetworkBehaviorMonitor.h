/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface WFNetworkBehaviorMonitor : NSObject {

	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)logNetworkEvent:(id)arg1 ;
@end

