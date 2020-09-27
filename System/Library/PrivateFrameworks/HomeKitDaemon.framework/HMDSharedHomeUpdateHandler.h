/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDSharedHomeUpdateSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol OS_dispatch_queue;
@class HMFUnfairLock, HMDSharedHomeUpdateSession, HMDHome, NSObject, NSString;

@interface HMDSharedHomeUpdateHandler : HMFObject <HMDSharedHomeUpdateSessionDelegate, HMFLogging, HMFDumpState> {

	HMFUnfairLock* _lock;
	BOOL _firstFetchComplete;
	BOOL _suspended;
	BOOL _pendingRequestDataFromResident;
	HMDSharedHomeUpdateSession* _pendingRequestDataFromResidentSession;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (assign,nonatomic,__weak) HMDHome * home;                                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                          //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) BOOL firstFetchComplete;                                                         //@synthesize firstFetchComplete=_firstFetchComplete - In the implementation block
@property (getter=isSuspended) BOOL suspended;                                                                //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) BOOL pendingRequestDataFromResident;                                             //@synthesize pendingRequestDataFromResident=_pendingRequestDataFromResident - In the implementation block
@property (nonatomic,retain) HMDSharedHomeUpdateSession * pendingRequestDataFromResidentSession;              //@synthesize pendingRequestDataFromResidentSession=_pendingRequestDataFromResidentSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)resume;
-(void)setSuspended:(BOOL)arg1 ;
-(void)pause;
-(BOOL)isSuspended;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(id)dumpState;
-(id)logIdentifier;
-(void)registerForMessages;
-(void)configureWithHome:(id)arg1 ;
-(void)residentsChanged:(id)arg1 ;
-(void)handleHomeCloudZoneReadyNotification:(id)arg1 ;
-(void)setPendingRequestDataFromResidentSession:(HMDSharedHomeUpdateSession *)arg1 ;
-(void)_evaluateNeedForSync;
-(void)setFirstFetchComplete:(BOOL)arg1 ;
-(HMDSharedHomeUpdateSession *)pendingRequestDataFromResidentSession;
-(BOOL)firstFetchComplete;
-(void)_receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)didCompleteHomeUpdateSession:(id)arg1 withError:(id)arg2 ;
-(void)requestHomeDataSync;
-(void)receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)pendingRequestDataFromResident;
-(void)setPendingRequestDataFromResident:(BOOL)arg1 ;
@end

