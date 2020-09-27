/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPRequestCancellationToken, OS_dispatch_source, MPRequestResponseControllerDelegate, OS_dispatch_queue;
@class NSObject, NSError;

@interface MPRequestResponseController : NSObject {

	long long _numberOfObservers;
	long long _requestRevision;
	BOOL _shouldAutomaticallyLoad;
	BOOL _needsReload;
	id<MPRequestCancellationToken> _cancelToken;
	double _retryInterval;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSError* _lastError;
	id _pendingResponse;
	unsigned long long _stateHandle;
	id _request;
	id _response;
	id<MPRequestResponseControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                          //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) id response;                                                          //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) id request;                                                           //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<MPRequestResponseControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MPRequestResponseControllerDelegate>)delegate;
-(void)setDelegate:(id<MPRequestResponseControllerDelegate>)arg1 ;
-(id)request;
-(void)setResponse:(id)arg1 ;
-(id)response;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)setRequest:(id)arg1 ;
-(void)setNeedsReload;
-(void)beginAutomaticResponseLoading;
-(void)endAutomaticResponseLoading;
-(void)setNeedsReloadForSignificantRequestChange;
-(void)reloadIfNeeded;
-(void)_responseDidInvalidate:(id)arg1 ;
-(void)_onQueue_scheduleRetryAfterInterval:(double)arg1 ;
-(void)_onQueue_reloadIfNeeded;
@end

