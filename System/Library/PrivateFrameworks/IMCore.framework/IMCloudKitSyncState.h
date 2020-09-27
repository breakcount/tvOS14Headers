/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray;

@interface IMCloudKitSyncState : NSObject {

	BOOL _hasExited;
	BOOL _isDisablingDevices;
	BOOL _accountIsEnabled;
	unsigned long long _syncControllerSyncState;
	long long _syncControllerSyncType;
	long long _syncControllerRecordType;
	NSDate* _exitDate;
	long long _changingEnabledState;
	NSDate* _lastSyncDate;
	NSArray* _errors;
	long long _accountStatus;
	long long _syncState;

}

@property (nonatomic,readonly) BOOL accountIsEnabled;                                   //@synthesize accountIsEnabled=_accountIsEnabled - In the implementation block
@property (nonatomic,readonly) long long syncState;                                     //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) BOOL isSyncing; 
@property (nonatomic,readonly) BOOL isSyncingPaused; 
@property (nonatomic,readonly) unsigned long long syncControllerSyncState;              //@synthesize syncControllerSyncState=_syncControllerSyncState - In the implementation block
@property (nonatomic,readonly) long long syncControllerSyncType;                        //@synthesize syncControllerSyncType=_syncControllerSyncType - In the implementation block
@property (nonatomic,readonly) long long syncControllerRecordType;                      //@synthesize syncControllerRecordType=_syncControllerRecordType - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingAvailable; 
@property (nonatomic,readonly) BOOL hasExited;                                          //@synthesize hasExited=_hasExited - In the implementation block
@property (nonatomic,copy,readonly) NSDate * exitDate;                                  //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingEnabled; 
@property (nonatomic,readonly) long long changingEnabledState;                          //@synthesize changingEnabledState=_changingEnabledState - In the implementation block
@property (nonatomic,readonly) BOOL isDisablingDevices;                                 //@synthesize isDisablingDevices=_isDisablingDevices - In the implementation block
@property (nonatomic,readonly) BOOL canChangeEnabledSetting; 
@property (nonatomic,readonly) BOOL canStartSyncing; 
@property (nonatomic,readonly) BOOL canEnableSyncing; 
@property (nonatomic,readonly) BOOL isSyncEnabledForDisplayOnly; 
@property (nonatomic,readonly) NSDate * lastSyncDate;                                   //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,readonly) NSArray * errors;                                        //@synthesize errors=_errors - In the implementation block
@property (nonatomic,readonly) BOOL syncingFailed; 
@property (nonatomic,readonly) long long accountStatus;                                 //@synthesize accountStatus=_accountStatus - In the implementation block
+(id)logHandle;
-(id)description;
-(NSArray *)errors;
-(id)logHandle;
-(long long)accountStatus;
-(NSDate *)lastSyncDate;
-(long long)syncState;
-(BOOL)isSyncing;
-(NSDate *)exitDate;
-(id)initWithAccountEnabled:(BOOL)arg1 stateDictionary:(id)arg2 ;
-(BOOL)shouldFetchSyncStatistics;
-(id)createSyncProgressWithSyncStatistics:(id)arg1 ;
-(BOOL)shouldRescheduleSyncSyncProgress;
-(unsigned long long)syncControllerSyncState;
-(BOOL)syncingFailed;
-(BOOL)isSyncingAvailable;
-(BOOL)isSyncingEnabled;
-(BOOL)_isChangingEnabledState;
-(long long)changingEnabledState;
-(BOOL)isDisablingDevices;
-(BOOL)isSyncingPaused;
-(id)syncErrorWithDomain:(id)arg1 code:(long long)arg2 ;
-(BOOL)canEnableSyncing;
-(BOOL)canStartSyncing;
-(BOOL)canChangeEnabledSetting;
-(BOOL)isSyncEnabledForDisplayOnly;
-(long long)syncControllerSyncType;
-(long long)syncControllerRecordType;
-(BOOL)hasExited;
-(BOOL)accountIsEnabled;
-(BOOL)_shouldHideProgressInFirstSevenDays;
@end

