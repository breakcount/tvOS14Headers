/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ISKVOProxy, NSObject;

@interface ISKVOProxyRecord : NSObject {

	ISKVOProxy* _proxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) ISKVOProxy * proxy;                              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(ISKVOProxy *)proxy;
-(id)initWithProxy:(id)arg1 queue:(id)arg2 ;
@end
