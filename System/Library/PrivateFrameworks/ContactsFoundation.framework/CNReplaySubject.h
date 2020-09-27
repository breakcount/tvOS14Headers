/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/CNObserver.h>

@protocol CNSchedulerProvider, CNScheduler;
@class NSMutableArray, _CNObservableEventBufferingStrategy, CNObservableContractEnforcement, NSString;

@interface CNReplaySubject : CNObservable <CNObserver> {

	NSMutableArray* _observers;
	_CNObservableEventBufferingStrategy* _recentEventStrategy;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNScheduler> _resourceLock;
	CNObservableContractEnforcement* _enforcement;

}

@property (nonatomic,readonly) NSMutableArray * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) _CNObservableEventBufferingStrategy * recentEventStrategy;              //@synthesize recentEventStrategy=_recentEventStrategy - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                            //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resourceLock;                                         //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) CNObservableContractEnforcement * enforcement;                        //@synthesize enforcement=_enforcement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_removeObserver:(id)arg1 ;
-(void)performWithResourceLock:(/*^block*/id)arg1 ;
-(id<CNScheduler>)resourceLock;
-(id<CNSchedulerProvider>)schedulerProvider;
-(NSMutableArray *)observers;
-(id)resultWithResourceLock:(/*^block*/id)arg1 ;
-(CNObservableContractEnforcement *)enforcement;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id)initWithQueue:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)resourceLock_upToDateObserverFromObserver:(id)arg1 ;
-(_CNObservableEventBufferingStrategy *)recentEventStrategy;
-(void)resourceLock_scheduleReplayToObserver:(id)arg1 ;
-(id)resourceLock_removeAllObservers;
-(void)resourceLock_swapBufferingStrategiesGivenNewTerminatingEvent:(id)arg1 ;
-(void)setRecentEventStrategy:(_CNObservableEventBufferingStrategy *)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 schedulerProvider:(id)arg2 ;
@end

