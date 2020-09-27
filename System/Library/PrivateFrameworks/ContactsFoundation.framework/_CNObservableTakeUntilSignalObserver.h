/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNObserver.h>

@protocol CNObserver, _CNObservableTakeUntilSignalObserverDelegate;
@class NSString;

@interface _CNObservableTakeUntilSignalObserver : NSObject <CNObserver> {

	id<CNObserver> _observer;
	id<_CNObservableTakeUntilSignalObserverDelegate> _delegate;

}

@property (readonly) id<CNObserver> observer;                                                       //@synthesize observer=_observer - In the implementation block
@property (__weak,readonly) id<_CNObservableTakeUntilSignalObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<_CNObservableTakeUntilSignalObserverDelegate>)delegate;
-(id<CNObserver>)observer;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)initWithObserver:(id)arg1 delegate:(id)arg2 ;
@end

