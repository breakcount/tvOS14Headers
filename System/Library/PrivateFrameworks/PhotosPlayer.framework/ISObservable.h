/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMapTable;

@interface ISObservable : NSObject {

	long long _nestedChanges;
	NSMutableArray* _pendingChangesQueue_pendingChangeBlocks;
	long long _numAppliedPendingChanges;
	unsigned long long _currentChange;
	BOOL _isEnumeratingObservers;
	NSObject*<OS_dispatch_queue> _observersQueue;
	NSObject*<OS_dispatch_queue> _pendingChangesQueue;
	BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
	NSMapTable* _observersQueue_changeObserversWithContexts;
	BOOL _hasObservers;

}

@property (nonatomic,readonly) BOOL hasObservers;              //@synthesize hasObservers=_hasObservers - In the implementation block
-(id)init;
-(void)_willChange;
-(BOOL)hasObservers;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)_didChange;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)isPerformingChanges;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)didPerformChanges;
-(void)didPublishChanges;
-(void)willPerformChanges;
-(void)hasObserversDidChange;
-(void)signalChange:(unsigned long long)arg1 ;
-(unsigned long long)currentChanges;
-(void)_setHasObservers:(BOOL)arg1 ;
-(void)_publishChanges;
-(void)_applyPendingChanges;
-(void)_observersQueue_copyChangeObserversForWriteIfNeeded;
@end

