/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreTransactionOptions.h>

@class NSMutableArray, NSMutableSet, NSMutableDictionary, HMDBackingStore;

@interface HMDBackingStoreTransactionActions : HMDBackingStoreTransactionOptions {

	BOOL _postApplyActionsInvoked;
	NSMutableArray* _postApplyActions;
	NSMutableSet* _postApplyActionNames;
	BOOL _local;
	BOOL _changed;
	BOOL _saveToAssistant;
	BOOL _saveToSharedUserAccount;
	NSMutableDictionary* _userInfo;
	HMDBackingStore* _backingStore;

}

@property (nonatomic,readonly) BOOL local;                                         //@synthesize local=_local - In the implementation block
@property (nonatomic,readonly) BOOL changed;                                       //@synthesize changed=_changed - In the implementation block
@property (nonatomic,readonly) BOOL saveToAssistant;                               //@synthesize saveToAssistant=_saveToAssistant - In the implementation block
@property (nonatomic,readonly) BOOL saveToSharedUserAccount;                       //@synthesize saveToSharedUserAccount=_saveToSharedUserAccount - In the implementation block
@property (nonatomic,__weak,readonly) HMDBackingStore * backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
+(id)logCategory;
-(id)description;
-(NSMutableDictionary *)userInfo;
-(BOOL)local;
-(HMDBackingStore *)backingStore;
-(BOOL)changed;
-(id)logIdentifier;
-(void)markChanged;
-(void)markLocalChanged;
-(void)markSaveToAssistant;
-(void)markSaveToSharedUserAccount;
-(void)addPostApplyActionUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithBackingStore:(id)arg1 options:(id)arg2 ;
-(BOOL)addPostApplyActionIfNotPresent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)invokePostApplyActions;
-(BOOL)saveToAssistant;
-(BOOL)saveToSharedUserAccount;
@end

