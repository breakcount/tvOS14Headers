/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_os_transaction;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class CFPrefsDaemon, CFPDDataBuffer, NSObject;

@interface CFPDSource : NSObject {

	CFPrefsDaemon* _cfprefsd;
	CFPDDataBuffer* _plist;
	NSObject*<OS_xpc_object> _pendingChangesQueue;
	unsigned long long _pendingChangesSize;
	CFStringRef _userName;
	CFStringRef _domain;
	char* _actualPath;
	CFSetRef _observingConnections;
	NSObject*<OS_os_transaction> _dirtyTransaction;
	CFStringRef _uncanonicalizedPathCache;
	os_unfair_lock_s _uncanonicalizedPathCacheLock;
	os_unfair_lock_s _observingConnectionsLock;
	os_unfair_lock_s _writeLock;
	os_unfair_lock_s _lock;
	unsigned _lastEuid;
	unsigned _lastEgid;
	int _fileProtectionClass;
	short _generationShmemIndex;
	BOOL _byHost;
	BOOL _managed;
	BOOL _managedUsesContainer;
	BOOL _watchingParentDirectory;
	unsigned _handlingRequest : 1;
	unsigned _dirty : 1;
	unsigned _neverCache : 1;
	unsigned _checkedForNonPrefsPlist : 1;
	unsigned _restrictedReadability : 1;
	unsigned _waitingForDeviceUnlock : 1;
	unsigned _disableBackup : 1;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(CFStringRef)domain;
-(BOOL)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(BOOL)arg4 ;
-(void)updateShmemEntry;
-(id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(BOOL)arg1 ;
-(CFStringRef)container;
-(void)lockedAsync:(/*^block*/id)arg1 ;
-(void)processEndOfMessageIntendingToRemoveSource:(BOOL*)arg1 ;
-(id)copyPropertyListValidatingPlist:(BOOL)arg1 ;
-(CFStringRef)debugDump;
-(CFStringRef)cloudConfigurationPath;
-(int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(BOOL)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
-(void)asyncNotifyObserversOfWriteFromConnection:(id)arg1 message:(id)arg2 ;
-(BOOL)managed;
-(CFStringRef)user;
-(short)shmemIndex;
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 byHost:(BOOL)arg3 managed:(BOOL)arg4 shmemIndex:(short)arg5 daemon:(id)arg6 ;
-(void)setUncanonicalizedPathCached:(BOOL)arg1 ;
-(void)setManagedPreferencesUseContainer:(BOOL)arg1 ;
-(void)lockedSync:(/*^block*/id)arg1 ;
-(void)syncWriteToDiskAndFlushCacheForReason:(CFStringRef)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(void)drainPendingChanges;
-(void)syncWriteToDisk;
-(/*^block*/id)createDiskWriteShouldPerformSynchronously:(BOOL*)arg1 ;
-(void)cacheActualPath;
-(CFStringRef)copyUncanonicalizedPath;
-(void)respondToFileWrittenToBehindOurBack;
-(BOOL)byHost;
-(void)finishedNonRequestWriteWithError:(int)arg1 ;
-(void)observingConnectionWasInvalidated:(id)arg1 ;
-(id)acceptMessage:(id)arg1 ;
-(void)cleanUpAfterAcceptingMessage:(id)arg1 ;
@end

