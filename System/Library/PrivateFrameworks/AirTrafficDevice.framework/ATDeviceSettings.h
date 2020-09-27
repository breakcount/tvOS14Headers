/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject, NSString, NSArray;

@interface ATDeviceSettings : NSObject {

	NSUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) BOOL isDeviceLinkClient; 
@property (nonatomic,copy,readonly) NSString * libraryIdentifier; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) NSString * serviceDomain; 
@property (nonatomic,copy,readonly) NSString * serviceType; 
@property (nonatomic,copy,readonly) NSString * interfaceName; 
@property (nonatomic,copy,readonly) NSArray * dataClassesNeedingSync; 
@property (nonatomic,readonly) double pairingSyncCompletionTime; 
@property (assign,nonatomic) double lastAuthenticationDialogResponseTime; 
@property (nonatomic,readonly) BOOL useNetServicesConnection; 
@property (nonatomic,readonly) BOOL fairPlayEnabled; 
@property (nonatomic,readonly) BOOL grappaEnabled; 
@property (nonatomic,readonly) BOOL restoreBatchingEnabled; 
@property (nonatomic,readonly) unsigned long long restoreBatchSize; 
@property (nonatomic,readonly) BOOL useNewDownloadService; 
@property (nonatomic,readonly) BOOL watchProxyDownloadsDisabled; 
+(id)sharedInstance;
-(id)init;
-(void)synchronize;
-(NSString *)serviceType;
-(NSString *)interfaceName;
-(NSString *)serviceName;
-(NSString *)serviceDomain;
-(NSString *)libraryIdentifier;
-(void)setLastAuthenticationDialogResponseTime:(double)arg1 ;
-(double)lastAuthenticationDialogResponseTime;
-(void)removePendingSyncSettingForDataClass:(id)arg1 ;
-(id)endpointInfo;
-(id)hostInfoForLibrary:(id)arg1 ;
-(void)removeEndpointInfoForLibrary:(id)arg1 ;
-(void)setPairingSyncCompletionTime:(double)arg1 ;
-(void)setSyncPending:(BOOL)arg1 forDataClass:(id)arg2 ;
-(void)setHostInfo:(id)arg1 forLibrary:(id)arg2 ;
-(BOOL)grappaEnabled;
-(BOOL)isSyncPendingForDataClass:(id)arg1 ;
-(id)syncStateForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(double)pairingSyncCompletionTime;
-(BOOL)useNetServicesConnection;
-(BOOL)isDeviceLinkClient;
-(int)activeRestoreType;
-(NSArray *)dataClassesNeedingSync;
-(void)setHasCompletedDataMigration:(BOOL)arg1 ;
-(BOOL)useNewDownloadService;
-(BOOL)hasCompletedDataMigration;
-(void)setActiveRestoreType:(int)arg1 ;
-(void)setEndpointInfo:(id)arg1 ;
-(id)_endpointInfoForLibrary:(id)arg1 ;
-(void)_setEndpointInfo:(id)arg1 forLibrary:(id)arg2 ;
-(BOOL)fairPlayEnabled;
-(BOOL)restoreBatchingEnabled;
-(unsigned long long)restoreBatchSize;
-(BOOL)watchProxyDownloadsDisabled;
-(void)setCurrentInstallDisposition:(id)arg1 ;
-(id)getCurrentInstallDisposition;
-(void)setPreExistingStoreIdentifiers:(id)arg1 ;
-(id)getPreExistingStoreIdentifiers;
-(void)setSyncState:(id)arg1 forLibrary:(id)arg2 dataClass:(id)arg3 ;
-(id)lastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(void)updateLastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(void)setVersion:(unsigned long long)arg1 forDataclass:(id)arg2 ;
-(unsigned long long)versionForDataclass:(id)arg1 ;
@end

