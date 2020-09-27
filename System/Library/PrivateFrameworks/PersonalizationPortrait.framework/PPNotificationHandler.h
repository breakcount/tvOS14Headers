/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _PASLock, NSObject, NSString;

@interface PPNotificationHandler : NSObject {

	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _waiterQueue;
	double _waitSeconds;
	NSString* _name;

}

@property (assign,nonatomic) double waitSeconds;              //@synthesize waitSeconds=_waitSeconds - In the implementation block
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 waitSeconds:(double)arg2 ;
-(void)_executeBlocksWithGuardedData:(id)arg1 ;
-(void)_delayedExecutionAfterSeconds:(double)arg1 ;
-(void)fireWithObjects:(id)arg1 ;
-(void)addObserverBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(double)waitSeconds;
-(void)setWaitSeconds:(double)arg1 ;
-(void)waitOnQueueToDrain;
@end

