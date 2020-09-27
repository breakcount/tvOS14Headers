/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MKMapSnapshotOptions, NSObject, VKMapSnapshotCreator, NSXPCConnection;

@interface MKMapSnapshotter : NSObject {

	MKMapSnapshotOptions* _options;
	int _loadingFlag;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionHandler;
	VKMapSnapshotCreator* _snapshotCreator;
	BOOL _needsResume;
	NSXPCConnection* _snapshotService;

}

@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(id)initWithOptions:(id)arg1 ;
-(void)_cancel;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isLoading;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enterBackground:(id)arg1 ;
-(void)_exitBackground:(id)arg1 ;
-(void)_performSnapshot;
-(void)_cleanupSnapshotCreator;
-(void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
-(void)_failWithError:(id)arg1 ;
-(BOOL)_shouldShowDarkContent;
-(void)_succeedWithSnapshot:(id)arg1 ;
-(BOOL)_shouldDefaultToDarkContent;
@end

