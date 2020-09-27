/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class VUIMediaLibrary, NSString, NSObject, NSOperationQueue, NSOperation;

@interface VUIMediaLibraryFetchController : NSObject {

	VUIMediaLibrary* _mediaLibrary;
	NSString* _identifier;
	NSString* _logName;
	NSString* _logNameSuffix;
	long long _state;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	NSOperationQueue* _serialFetchOperationQueue;
	NSOperation* _fetchOperation;
	unsigned long long _mediaLibraryRevision;
	unsigned long long _pauseCount;

}

@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                                          //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (assign) long long state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialFetchOperationQueue;                            //@synthesize serialFetchOperationQueue=_serialFetchOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperation * fetchOperation;                                            //@synthesize fetchOperation=_fetchOperation - In the implementation block
@property (assign,nonatomic) unsigned long long mediaLibraryRevision;                                 //@synthesize mediaLibraryRevision=_mediaLibraryRevision - In the implementation block
@property (assign,nonatomic) unsigned long long pauseCount;                                           //@synthesize pauseCount=_pauseCount - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * logName;                                                        //@synthesize logName=_logName - In the implementation block
@property (nonatomic,copy) NSString * logNameSuffix;                                                  //@synthesize logNameSuffix=_logNameSuffix - In the implementation block
+(id)_logStringWithFetchControllers:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(long long)state;
-(void)resume;
-(void)setState:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)pause;
-(NSString *)logName;
-(void)setLogName:(NSString *)arg1 ;
-(VUIMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(unsigned long long)pauseCount;
-(NSOperation *)fetchOperation;
-(void)setFetchOperation:(NSOperation *)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)_enqueueSyncProcessingQueueBlock:(/*^block*/id)arg1 ;
-(void)_enqueueAsyncProcessingQueueBlock:(/*^block*/id)arg1 ;
-(void)setMediaLibraryRevision:(unsigned long long)arg1 ;
-(unsigned long long)mediaLibraryRevision;
-(NSOperationQueue *)serialFetchOperationQueue;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSerialFetchOperationQueue:(NSOperationQueue *)arg1 ;
-(void)cancelFetch;
-(id)_fetchOperationForFetchReason:(long long)arg1 ;
-(void)_didCompleteFetchOperation:(id)arg1 ;
-(void)beginFetchWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)_enqueueProcessingQueueBlock:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(NSString *)logNameSuffix;
-(void)_cancelFetch;
-(void)_moveToPausedState;
-(void)setPauseCount:(unsigned long long)arg1 ;
-(void)_startFetchIfNeededWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_shouldFetchForMediaLibraryRevision:(unsigned long long)arg1 ;
-(void)_startFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enqueueFetchWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchOperationCompleted:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_updateMutableArray:(id)arg1 withLatestObjects:(id)arg2 changeSet:(id)arg3 updateOnNoChanges:(BOOL)arg4 ;
-(void)setLogNameSuffix:(NSString *)arg1 ;
@end

