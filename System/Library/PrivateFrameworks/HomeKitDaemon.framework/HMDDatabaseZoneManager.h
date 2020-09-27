/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDatabaseDelegate.h>
#import <libobjc.A.dylib/HMDCloudShareMessengerDelegate.h>
#import <libobjc.A.dylib/HMDCloudShareParticipantsManagerDelegate.h>

@protocol HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDDatabase, HMBLocalZoneDelegateHMBCloudZoneDelegate, OS_dispatch_queue;
@class NSString, HMDHome, HMBLocalZone, HMBCloudZone, HMDDatabaseZoneManagerConfiguration, HMDCloudShareMessenger, NSObject, HMDCloudShareParticipantsManager, NSUUID;

@interface HMDDatabaseZoneManager : HMFObject <HMFLogging, HMDDatabaseDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDelegate> {

	id<HMDDatabaseZoneManagerDataSource> _dataSource;
	id<HMDDatabaseZoneManagerDelegate> _delegate;
	NSString* _zoneName;
	HMDHome* _home;
	HMBLocalZone* _localZone;
	HMBCloudZone* _cloudZone;
	HMDDatabaseZoneManagerConfiguration* _defaultConfiguration;
	long long _state;
	id<HMDDatabase> _database;
	HMDCloudShareMessenger* _shareMessenger;
	id<HMBLocalZoneDelegate><HMBCloudZoneDelegate> _zoneDelegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCloudShareParticipantsManager* _participantsManager;
	/*^block*/id _participantsManagerFactory;

}

@property (assign) long long state;                                                          //@synthesize state=_state - In the implementation block
@property (readonly) id<HMDDatabase> database;                                               //@synthesize database=_database - In the implementation block
@property (readonly) HMDCloudShareMessenger * shareMessenger;                                //@synthesize shareMessenger=_shareMessenger - In the implementation block
@property (__weak) id<HMBLocalZoneDelegate><HMBCloudZoneDelegate> zoneDelegate;              //@synthesize zoneDelegate=_zoneDelegate - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) HMDCloudShareParticipantsManager * participantsManager;                   //@synthesize participantsManager=_participantsManager - In the implementation block
@property (retain) HMBLocalZone * localZone;                                                 //@synthesize localZone=_localZone - In the implementation block
@property (retain) HMBCloudZone * cloudZone;                                                 //@synthesize cloudZone=_cloudZone - In the implementation block
@property (copy) id participantsManagerFactory;                                              //@synthesize participantsManagerFactory=_participantsManagerFactory - In the implementation block
@property (__weak) id<HMDDatabaseZoneManagerDataSource> dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDDatabaseZoneManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSString * containerIdentifier; 
@property (copy,readonly) NSString * zoneName;                                               //@synthesize zoneName=_zoneName - In the implementation block
@property (__weak,readonly) HMDHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (copy,readonly) NSUUID * messageTargetUUID; 
@property (copy) HMDDatabaseZoneManagerConfiguration * defaultConfiguration;                 //@synthesize defaultConfiguration=_defaultConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDDatabaseZoneManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDDatabaseZoneManagerDelegate>)arg1 ;
-(long long)state;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setState:(long long)arg1 ;
-(BOOL)start;
-(id)remove;
-(id<HMDDatabase>)database;
-(HMDDatabaseZoneManagerConfiguration *)defaultConfiguration;
-(NSString *)zoneName;
-(NSString *)containerIdentifier;
-(void)configure;
-(id<HMDDatabaseZoneManagerDataSource>)dataSource;
-(void)setDataSource:(id<HMDDatabaseZoneManagerDataSource>)arg1 ;
-(HMDHome *)home;
-(void)setDefaultConfiguration:(HMDDatabaseZoneManagerConfiguration *)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 messageTargetUUID:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6 ;
-(HMBLocalZone *)localZone;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(HMDCloudShareParticipantsManager *)participantsManager;
-(void)updateShareParticipants;
-(HMDCloudShareMessenger *)shareMessenger;
-(HMBCloudZone *)cloudZone;
-(void)setParticipantsManager:(HMDCloudShareParticipantsManager *)arg1 ;
-(void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3 ;
-(void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)messengerDidReceiveInvitationRequest:(id)arg1 ;
-(void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(BOOL)arg3 ;
-(void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(BOOL)arg3 ;
-(void)database:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2 ;
-(id)participantsManagerFactory;
-(void)setParticipantsManagerFactory:(id)arg1 ;
-(BOOL)startWithConfiguration:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 shareMessenger:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6 ;
-(BOOL)_fetchPrivateZonesWithConfiguration:(id)arg1 ;
-(BOOL)_fetchExistingPrivateZonesWithConfiguration:(id)arg1 ;
-(BOOL)_fetchSharedZonesWithConfiguration:(id)arg1 ;
-(void)_tearDownState;
-(id<HMBLocalZoneDelegate><HMBCloudZoneDelegate>)zoneDelegate;
-(BOOL)_handleFetchZonesResult:(id)arg1 configuration:(id)arg2 ;
-(void)setZoneDelegate:(id<HMBLocalZoneDelegate><HMBCloudZoneDelegate>)arg1 ;
@end

