/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKSyncRemoteContextStorage <_DKSyncRemoteStorage>
@required
-(void)setDelegate:(id)arg1;
-(void)subscribeToContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)fetchContextValuesFromPeer:(id)arg1 forKeyPaths:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 archivedObjects:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5;

@end

