/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ENStoreClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)handleError:(id)arg1 ;
-(void)invokeAsyncBoolBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeAsyncInt32Block:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeAsyncObjectBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeAsyncBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

