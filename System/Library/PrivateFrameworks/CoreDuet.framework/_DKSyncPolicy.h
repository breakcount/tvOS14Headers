/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _DKSyncPolicy : NSObject {

	BOOL _syncDisabled;
	BOOL _alwaysSyncUpAndDown;
	BOOL _pushTriggersSync;
	BOOL _forceSync;
	unsigned long long _assetThresholdInBytes;
	unsigned long long _firstSyncPeriodInDays;
	unsigned long long _maxSyncDownIntervalInDays;
	unsigned long long _minSyncIntervalInSeconds;
	unsigned long long _minSyncsPerDay;
	unsigned long long _maxSyncsPerDay;
	unsigned long long _numChangesTriggeringSync;
	unsigned long long _singleDeviceSyncIntervalInDays;
	NSArray* _streamNamesWithAdditionsTriggeringSync;
	NSArray* _streamNamesWithDeletionsTriggeringSync;
	unsigned long long _syncTimeoutInSeconds;
	unsigned long long _triggeredSyncDelayInSeconds;
	unsigned long long _policyDownloadIntervalInDays;

}

@property (nonatomic,readonly) BOOL syncDisabled; 
@property (nonatomic,readonly) BOOL alwaysSyncUpAndDown; 
@property (nonatomic,readonly) unsigned long long assetThresholdInBytes; 
@property (nonatomic,readonly) unsigned long long firstSyncPeriodInDays; 
@property (nonatomic,readonly) unsigned long long maxSyncDownIntervalInDays; 
@property (nonatomic,readonly) unsigned long long minSyncIntervalInSeconds; 
@property (nonatomic,readonly) unsigned long long minSyncsPerDay; 
@property (nonatomic,readonly) unsigned long long maxSyncsPerDay; 
@property (nonatomic,readonly) unsigned long long numChangesTriggeringSync; 
@property (nonatomic,readonly) BOOL pushTriggersSync; 
@property (nonatomic,readonly) unsigned long long singleDeviceSyncIntervalInDays; 
@property (nonatomic,readonly) NSArray * streamNamesWithAdditionsTriggeringSync; 
@property (nonatomic,readonly) NSArray * streamNamesWithDeletionsTriggeringSync; 
@property (nonatomic,readonly) unsigned long long syncTimeoutInSeconds; 
@property (nonatomic,readonly) unsigned long long triggeredSyncDelayInSeconds; 
@property (nonatomic,readonly) BOOL forceSync; 
+(id)policy;
+(id)forceSyncPolicy;
-(id)description;
-(BOOL)syncDisabled;
-(BOOL)pushTriggersSync;
-(unsigned long long)minSyncsPerDay;
-(unsigned long long)maxSyncsPerDay;
-(double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)arg1 ;
-(unsigned long long)singleDeviceSyncIntervalInDays;
-(unsigned long long)maxSyncDownIntervalInDays;
-(unsigned long long)minSyncIntervalInSeconds;
-(unsigned long long)numChangesTriggeringSync;
-(NSArray *)streamNamesWithAdditionsTriggeringSync;
-(NSArray *)streamNamesWithDeletionsTriggeringSync;
-(unsigned long long)syncTimeoutInSeconds;
-(unsigned long long)triggeredSyncDelayInSeconds;
-(BOOL)forceSync;
-(unsigned long long)firstSyncPeriodInDays;
-(BOOL)alwaysSyncUpAndDown;
-(unsigned long long)assetThresholdInBytes;
-(id)queryStartDateFromLastDaySyncDates:(id)arg1 lastSyncDate:(id)arg2 isSingleDevice:(BOOL)arg3 isTriggeredSync:(BOOL)arg4 ;
@end

