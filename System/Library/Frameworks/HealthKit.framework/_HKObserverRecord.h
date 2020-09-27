/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _HKObserverRecord : NSObject {

	id _observer;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (assign,nonatomic,__weak) id observer;                                    //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithObserver:(id)arg1 clientQueue:(id)arg2 ;
@end
