/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class HMDHAPAccessory, NSMutableSet, NSArray, NSObject, NSString;

@interface HMDTargetControllerManager : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	unsigned char _maximumTargets;
	BOOL _configurationRefreshed;
	HMDHAPAccessory* _controller;
	NSMutableSet* _configuredTargets;
	unsigned long long _ticksPerSecond;
	NSArray* _buttonConfiguration;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _logID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                    //@synthesize logID=_logID - In the implementation block
@property (assign,nonatomic) unsigned char maximumTargets;                          //@synthesize maximumTargets=_maximumTargets - In the implementation block
@property (assign,nonatomic) unsigned long long ticksPerSecond;                     //@synthesize ticksPerSecond=_ticksPerSecond - In the implementation block
@property (nonatomic,retain) NSArray * buttonConfiguration;                         //@synthesize buttonConfiguration=_buttonConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableSet * configuredTargets;                      //@synthesize configuredTargets=_configuredTargets - In the implementation block
@property (assign,nonatomic) BOOL configurationRefreshed;                           //@synthesize configurationRefreshed=_configurationRefreshed - In the implementation block
@property (nonatomic,__weak,readonly) HMDHAPAccessory * controller;                 //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) NSArray * targetUUIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHAPAccessory *)controller;
-(NSString *)logID;
-(id)logIdentifier;
-(NSArray *)buttonConfiguration;
-(void)setButtonConfiguration:(NSArray *)arg1 ;
-(NSArray *)targetUUIDs;
-(void)updateTargets:(id)arg1 ;
-(void)addTargetAccessory:(id)arg1 buttonConfiguration:(id)arg2 ;
-(void)removeTargetAccessory:(id)arg1 ;
-(void)updateTargetAccessory:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3 ;
-(void)registerForActiveIdentifierNotifications;
-(unsigned long long)ticksPerSecond;
-(id)initWithTargetControllerAccessory:(id)arg1 targets:(id)arg2 ;
-(void)refreshConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)autoConfigureTargets;
-(void)acknowledgeTargetControlService:(id)arg1 active:(BOOL)arg2 ;
-(void)updateButtonConfigurationForTarget:(id)arg1 ;
-(void)handleConfigureTargets:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)__accessoryNameUpdated:(id)arg1 ;
-(void)__accessoryConnected:(id)arg1 ;
-(void)__accessoryDisconnected:(id)arg1 ;
-(void)__accessoryRemoved:(id)arg1 ;
-(NSMutableSet *)configuredTargets;
-(void)setConfigurationRefreshed:(BOOL)arg1 ;
-(void)_refreshConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateName:(id)arg1 buttonConfiguration:(id)arg2 target:(id)arg3 ;
-(void)_removeTargets:(id)arg1 ;
-(void)_saveTargetUUIDs;
-(void)setMaximumTargets:(unsigned char)arg1 ;
-(void)setTicksPerSecond:(unsigned long long)arg1 ;
-(BOOL)configurationRefreshed;
-(void)_auditTargets:(id)arg1 ;
-(id)__refreshedConfiguration:(id)arg1 ;
-(int)_parseSupportedTargetConfiguration:(id)arg1 ;
-(unsigned char)maximumTargets;
-(void)_readSupportedConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)_listTargetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_notifyConfigurationRefresh:(id)arg1 ;
-(id)_dataForListTargetsWithOutError:(id*)arg1 ;
-(void)_addTargets:(id)arg1 ;
-(id)_dataForUpdateTarget:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3 outError:(id*)arg4 ;
-(id)targetConfigurationMatchingAccessory:(id)arg1 ;
-(id)_dataForAddTargets:(id)arg1 outError:(id*)arg2 ;
-(void)addConfiguredTarget:(id)arg1 ;
-(id)_dataForRemoveTargets:(id)arg1 outError:(id*)arg2 ;
-(void)removeConfiguredTarget:(id)arg1 ;
-(id)_dataForResetTargetsWithOutError:(id*)arg1 ;
-(id)targetConfigurationMatchingIdentifier:(id)arg1 ;
-(void)_postSelectionChangeNotification:(BOOL)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)__handleActiveIdentifierChange:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)__characteristicEventsReceived:(id)arg1 ;
-(void)_handleActiveIdentifierReadResponses:(id)arg1 ;
-(void)_registerForActiveIdentifierNotifications;
-(void)_handleConfigureTargets:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_configureTargetAccessories:(id)arg1 reason:(id)arg2 targetAccessories:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)resetConfiguredTargets;
-(void)_resetTargets;
-(void)setConfiguredTargets:(NSMutableSet *)arg1 ;
@end

