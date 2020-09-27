/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSVDistributedNotificationObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableOrderedSet, ML3MusicLibrary, NSString;

@interface ML3LibraryNotificationManager : NSObject <MSVDistributedNotificationObserverDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _notificationObservers;
	NSMutableOrderedSet* _queuedLocalNotifications;
	NSMutableOrderedSet* _queuedDistributedNotificationNames;
	ML3MusicLibrary* _library;

}

@property (nonatomic,__weak,readonly) ML3MusicLibrary * library;              //@synthesize library=_library - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ML3MusicLibrary *)library;
-(BOOL)observerShouldForwardDistributedNotification:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 distributedAndLocalNames:(id)arg2 ;
-(void)enqueueDistributedNotificationNamed:(id)arg1 ;
-(void)enqueueLocalNotificationNamed:(id)arg1 ;
-(void)removeObserverWithDistributedName:(id)arg1 ;
-(void)_postEnqueuedLocalNotifications;
-(void)enqueueLocalNotification:(id)arg1 ;
-(void)_postEnqueuedDistributedNotifications;
-(id)_observerForDistributedName:(id)arg1 ;
-(void)addObserverForDistributedName:(id)arg1 localName:(id)arg2 ;
-(void)removeObserverWithLocalName:(id)arg1 ;
-(id)_observerForLocalName:(id)arg1 ;
@end

