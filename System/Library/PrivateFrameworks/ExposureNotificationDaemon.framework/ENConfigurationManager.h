/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ENConfigurationManagerDelegate, OS_dispatch_queue;
@class NSObject, ENConfigurationStore, ENActiveEntity, ENRegionMonitor, ENXPCTimer, ENCloudServerChannel;

@interface ENConfigurationManager : NSObject {

	BOOL _mobileCountryCodeOverriden;
	NSObject*<ENConfigurationManagerDelegate> _delegate;
	ENConfigurationStore* _configurationStore;
	ENActiveEntity* _activeEntity;
	ENRegionMonitor* _regionMonitor;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	ENXPCTimer* _serverConfigurationFetchTimer;
	ENXPCTimer* _gracePeriodConfigurationFetchTimer;
	ENCloudServerChannel* _cloudServerChannel;

}

@property (assign,nonatomic) BOOL mobileCountryCodeOverriden;                                        //@synthesize mobileCountryCodeOverriden=_mobileCountryCodeOverriden - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                             //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) ENXPCTimer * serverConfigurationFetchTimer;                             //@synthesize serverConfigurationFetchTimer=_serverConfigurationFetchTimer - In the implementation block
@property (nonatomic,retain) ENXPCTimer * gracePeriodConfigurationFetchTimer;                        //@synthesize gracePeriodConfigurationFetchTimer=_gracePeriodConfigurationFetchTimer - In the implementation block
@property (nonatomic,retain) ENConfigurationStore * configurationStore;                              //@synthesize configurationStore=_configurationStore - In the implementation block
@property (nonatomic,retain) ENCloudServerChannel * cloudServerChannel;                              //@synthesize cloudServerChannel=_cloudServerChannel - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ENConfigurationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) ENActiveEntity * activeEntity;                                            //@synthesize activeEntity=_activeEntity - In the implementation block
@property (nonatomic,retain) ENRegionMonitor * regionMonitor;                                        //@synthesize regionMonitor=_regionMonitor - In the implementation block
+(id)iCloudServerEndpoint;
+(BOOL)verifyAppleServerResponse:(id)arg1 signatureHeader:(id)arg2 ;
+(id)staticRegionForBundleID:(id)arg1 ;
-(void)dealloc;
-(void)_activate;
-(NSObject*<ENConfigurationManagerDelegate>)delegate;
-(void)setDelegate:(NSObject*<ENConfigurationManagerDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)regionMonitor:(id)arg1 regionDidChange:(id)arg2 ;
-(void)regionMonitor:(id)arg1 authorizationStateDidChange:(unsigned long long)arg2 ;
-(ENConfigurationStore *)configurationStore;
-(void)setCloudServerChannel:(ENCloudServerChannel *)arg1 ;
-(void)setConfigurationStore:(ENConfigurationStore *)arg1 ;
-(void)setActiveEntity:(ENActiveEntity *)arg1 ;
-(void)_scheduleRegionConfigurationRefresh;
-(ENXPCTimer *)serverConfigurationFetchTimer;
-(void)setServerConfigurationFetchTimer:(ENXPCTimer *)arg1 ;
-(void)_serverFetchRegionConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ENCloudServerChannel *)cloudServerChannel;
-(void)_reportErrorMetricForHTTPStatus:(long long)arg1 ;
-(ENActiveEntity *)activeEntity;
-(ENRegionMonitor *)regionMonitor;
-(ENXPCTimer *)gracePeriodConfigurationFetchTimer;
-(void)setupGracePeriodFetchTimerWithDelay:(double)arg1 ;
-(void)_fetchServerConfigurationsForRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processServerConfiguration:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)fetchServerConfigurationsForRegion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resetConfigurationManager;
-(void)stopGracePeriodTimer;
-(void)setGracePeriodConfigurationFetchTimer:(ENXPCTimer *)arg1 ;
-(void)updateRegionMonitorModeForCurrentRegion;
-(void)_saveAndRemoveStaleConfigurations:(id)arg1 region:(id)arg2 error:(id)arg3 ;
-(void)_printServerConfiguration:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 activeEntity:(id)arg2 ;
-(void)serverFetchRegionConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetConfigurationCache;
-(BOOL)isInGracePeriodTransition;
-(void)setRegionMonitor:(ENRegionMonitor *)arg1 ;
-(BOOL)mobileCountryCodeOverriden;
-(void)setMobileCountryCodeOverriden:(BOOL)arg1 ;
@end
