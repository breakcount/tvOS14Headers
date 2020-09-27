/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIImageLoader.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _UILoadingHandlerImageLoader : _UIImageLoader {

	NSObject*<OS_dispatch_queue> _loadingQueue;
	/*^block*/id _loadingHandler;

}
-(id)initWithLoadingQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_really_loadImage:(/*^block*/id)arg1 ;
@end

