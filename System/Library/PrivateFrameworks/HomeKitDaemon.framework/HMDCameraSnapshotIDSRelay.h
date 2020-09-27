/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSUUID, IDSService, HMFOSTransaction, NSString;

@interface HMDCameraSnapshotIDSRelay : HMFObject <HMFLogging, IDSServiceDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _sessionID;
	IDSService* _idsStreamService;
	HMFOSTransaction* _snapshotRelayTransaction;
	NSString* _logIdentifier;

}

@property (readonly) NSString * logIdentifier;                                 //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                   //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSUUID * sessionID;                                       //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) IDSService * idsStreamService;                            //@synthesize idsStreamService=_idsStreamService - In the implementation block
@property (readonly) HMFOSTransaction * snapshotRelayTransaction;              //@synthesize snapshotRelayTransaction=_snapshotRelayTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)sessionID;
-(NSString *)logIdentifier;
-(IDSService *)idsStreamService;
-(HMFOSTransaction *)snapshotRelayTransaction;
-(id)initWithSessionID:(id)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3 ;
@end

