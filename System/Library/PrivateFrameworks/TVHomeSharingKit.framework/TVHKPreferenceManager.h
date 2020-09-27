/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSLock, NSTimer, NSMutableSet, NSCountedSet, NSObject;

@interface TVHKPreferenceManager : NSObject {

	NSLock* _preferencesLock;
	NSTimer* _prefsSyncTimer;
	NSMutableSet* _notificationDomains;
	NSMutableSet* _dirtyDomains;
	NSCountedSet* _pendingNotifcations;
	NSObject*<OS_dispatch_queue> _callbackDispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackDispatchQueue;              //@synthesize callbackDispatchQueue=_callbackDispatchQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)enableDistributedSyncForDomain:(id)arg1 ;
-(id)_valueForKey:(id)arg1 forDomain:(id)arg2 ;
-(id)objectForKey:(id)arg1 forDomain:(id)arg2 ;
-(BOOL)canSetPreferencesForKey:(id)arg1 forDomain:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(void)_handleDistributedSyncForDomain:(id)arg1 notificationKey:(id)arg2 ;
-(void)_postPrefsDidChangeForDomains:(id)arg1 ;
-(void)_syncDomains:(id)arg1 ;
-(void)_markPreferencesDirtyForDomain:(id)arg1 ;
-(void)_flushPreferences:(id)arg1 ;
-(void)syncAllDomains;
-(BOOL)syncDomain:(id)arg1 ;
-(long long)int64ForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(long long)arg3 ;
-(int)integerForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(int)arg3 ;
-(double)doubleForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(double)arg3 ;
-(BOOL)boolForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(BOOL)arg3 ;
-(id)stringForKey:(id)arg1 forDomain:(id)arg2 ;
-(BOOL)setInt64:(long long)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(BOOL)setInteger:(int)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(BOOL)setDouble:(double)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(BOOL)setBool:(BOOL)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(id)numberForKey:(id)arg1 forDomain:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)callbackDispatchQueue;
-(void)setCallbackDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

