/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBSServiceLocalProtocol;
#import <RunningBoardServices/RunningBoardServices-Structs.h>
@class RBSAssertion, RBSProcessMonitor, RBSTerminateContext, RBSProcessPredicate, NSHashTable;

@interface RBSTerminationAssertion : NSObject {

	os_unfair_lock_s _lock;
	RBSAssertion* _assertion;
	RBSProcessMonitor* _monitor;
	RBSTerminateContext* _terminateContext;
	RBSProcessPredicate* _predicate;
	id<RBSServiceLocalProtocol> _service;
	unsigned long long _state;
	BOOL _processExists;
	NSHashTable* _observers;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) BOOL processExists; 
-(void)invalidate;
-(BOOL)isValid;
-(BOOL)acquireWithError:(out id*)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)invalidateWithError:(out id*)arg1 ;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 service:(id)arg3 ;
-(id)initWithTarget:(id)arg1 context:(id)arg2 ;
-(BOOL)processExists;
@end

