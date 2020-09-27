/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface PLConcurrentQueue : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableArray* _internalQueue_pendingBlocks;
	long long _internalQueue_usedWidth;
	NSObject*<OS_dispatch_queue> _targetQueue;
	long long _width;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,readonly) long long width;                                       //@synthesize width=_width - In the implementation block
-(id)init;
-(long long)width;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)initWithTargetQueue:(id)arg1 width:(long long)arg2 ;
-(void)_internalQueue_tryDispatchingNextPendingBlock;
-(NSObject*<OS_dispatch_queue>)targetQueue;
@end

