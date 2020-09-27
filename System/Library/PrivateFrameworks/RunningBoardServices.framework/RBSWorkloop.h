/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_workloop;
@class NSObject;

@interface RBSWorkloop : NSObject {

	NSObject*<OS_dispatch_workloop> _calloutWorkloop;
	NSObject*<OS_dispatch_workloop> _backgroundWorkloop;
	NSObject*<OS_dispatch_workloop> _syncingWorkloop;

}
+(void)performBackgroundWork:(/*^block*/id)arg1 ;
+(id)sharedBackgroundWorkloop;
+(id)createBackgroundQueue:(id)arg1 ;
+(id)createSyncingQueue:(id)arg1 ;
+(void)performBackgroundWorkWithServiceClass:(unsigned)arg1 block:(/*^block*/id)arg2 ;
+(id)sharedCalloutWorkloop;
+(id)createCalloutQueue:(id)arg1 ;
+(void)performCallout:(/*^block*/id)arg1 ;
+(void)performCalloutWithServiceClass:(unsigned)arg1 block:(/*^block*/id)arg2 ;
@end

