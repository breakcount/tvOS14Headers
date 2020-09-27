/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSUserDefaults, _PASLock, NSObject, PPKVOObserver;

@interface PPSettings : NSObject {

	NSUserDefaults* _portraitDefaults;
	NSUserDefaults* _canLearnFromAppDefaults;
	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _initializationComplete;
	PPKVOObserver* _canLearnFromAppKVOObserver;
	PPKVOObserver* _weightKVOObserver;
	PPKVOObserver* _abGroupKVObserver;
	PPKVOObserver* _queryPlanLoggingKVOObserver;

}

@property (assign,getter=isAppConnectionsLocationsEnabled,nonatomic) BOOL appConnectionsLocationsEnabled; 
+(void)initialize;
+(id)sharedInstance;
+(void)disableBundleIdentifier:(id)arg1 ;
+(id)cloudSyncDisabledFirstPartyBundleIds;
+(void)clearTestSettings;
+(BOOL)isVoiceAssistantEnabled;
+(BOOL)isCloudSyncEnabled;
-(id)init;
-(id)userDefaults;
-(BOOL)isAppConnectionsLocationsEnabled;
-(void)setAppConnectionsLocationsEnabled:(BOOL)arg1 ;
-(void)_updateAppConnectionsSettings;
-(void)setEntitiesBackfilledTimestamp:(id)arg1 ;
-(void)setEntitiesMappingTrieSha256:(id)arg1 ;
-(BOOL)showLocationsFoundInApps;
-(int)registerDisabledBundleIdentifierChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)arg1 ;
-(void)_invokeChangeHandlersAsync;
-(void)_handleCloudStorageDeletedByUser;
-(void)_refreshDisabledBundleIds;
-(id)_donationDisabledBundleIds;
-(id)_cloudKitDisabledBundleIds;
-(void)registerCloudKitDisabledBundleIdRewriteHandler;
-(void)registerDisabledBundleIdPurgeHandler;
-(void)rewriteSyncStateForDisabledBundleIdsAsync;
-(void)_purgeRecordsForDisabledBundleIdsAsync;
-(void)_triggerDelayedOperationWithCoalescingToken:(A*)arg1 operation:(int)arg2 :(/*^block*/id)arg3 ;
-(void)_triggerDelayedBundleIdPurge;
-(void)triggerDelayedCloudSyncRewrite;
-(void)_disableBundleIdentifier:(id)arg1 ;
-(void)refreshCloudKitDisabledBundleIdsAsync;
-(void)_refreshCloudKitDisabledBundleIds;
-(double)weightMultiplier;
-(id)entitiesBackfilledTimestamp;
-(id)entitiesMappingPreviousTrieSha256;
-(BOOL)bundleIdentifierIsEnabledForDonation:(id)arg1 ;
-(BOOL)bundleIdentifierIsEnabledForCloudKit:(id)arg1 ;
-(id)abGroupOverride;
-(void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 ;
-(void)clearAssetMetadataRefreshIntervalSeconds;
-(double)assetMetadataRefreshIntervalSeconds;
-(void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 ;
-(id)trialPathOverrides;
-(BOOL)trialUseDefaultFiles;
-(void)setTrialUseDefaultFiles:(BOOL)arg1 ;
-(id)trialPathOverrideForNamespaceName:(id)arg1 factorName:(id)arg2 ;
-(void)setTrialPathOverrideForNamespaceName:(id)arg1 factorName:(id)arg2 path:(id)arg3 ;
-(id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 ;
-(void)setQueryPlanLoggingEnabled:(BOOL)arg1 ;
-(BOOL)queryPlanLoggingEnabled;
-(void)_updateQueryPlanLogging;
-(int)registerQueryPlanLoggingChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)arg1 ;
-(void)_clearTestSettings;
-(BOOL)isAuthorizedToLogLocation;
@end

