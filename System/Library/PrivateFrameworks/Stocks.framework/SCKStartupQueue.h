/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCKAsyncSerialQueue;

@interface SCKStartupQueue : NSObject {

	SCKAsyncSerialQueue* _startupTaskQueue;

}

@property (nonatomic,retain) SCKAsyncSerialQueue * startupTaskQueue;              //@synthesize startupTaskQueue=_startupTaskQueue - In the implementation block
-(id)initWithDeferredStartup:(BOOL)arg1 ;
-(void)executeAfterStartup:(/*^block*/id)arg1 ;
-(void)enqueueStartupBlock:(/*^block*/id)arg1 ;
-(SCKAsyncSerialQueue *)startupTaskQueue;
-(void)setStartupTaskQueue:(SCKAsyncSerialQueue *)arg1 ;
@end

