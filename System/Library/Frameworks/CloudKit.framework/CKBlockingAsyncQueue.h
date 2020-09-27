/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface CKBlockingAsyncQueue : NSObject {

	unsigned _qosClass;
	unsigned long long _width;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _queueSema;

}

@property (assign,nonatomic) unsigned long long width;                                //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned qosClass;                                       //@synthesize qosClass=_qosClass - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> queueSema;              //@synthesize queueSema=_queueSema - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(id)initWithWidth:(unsigned long long)arg1 qosClass:(unsigned)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)queueSema;
-(id)initWithWidth:(unsigned long long)arg1 ;
-(void)performBarrierBlock:(/*^block*/id)arg1 ;
-(unsigned)qosClass;
-(void)setQosClass:(unsigned)arg1 ;
-(void)setQueueSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

