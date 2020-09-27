/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_nw_path_monitor, CPLNetworkWatcherDelegate;
@class NSObject, NSString, CPLNetworkState;

@interface CPLNetworkWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_nw_path_monitor> _monitor;
	NSString* _endPoint;
	CPLNetworkState* _networkState;
	id<CPLNetworkWatcherDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * endPoint;                                      //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,readonly) CPLNetworkState * networkState;                           //@synthesize networkState=_networkState - In the implementation block
@property (assign,nonatomic,__weak) id<CPLNetworkWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CPLNetworkWatcherDelegate>)delegate;
-(void)setDelegate:(id<CPLNetworkWatcherDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(id)initWithQueue:(id)arg1 ;
-(NSString *)endPoint;
-(CPLNetworkState *)networkState;
-(BOOL)_isRestrictedPath:(id)arg1 policies:(id)arg2 ;
-(void)_updateNetworkState:(id)arg1 ;
@end

