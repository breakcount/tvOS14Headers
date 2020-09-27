/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class NSXPCConnection, NSObject;

@interface MCMDMClient : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionSyncQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> xpcConnectionSyncQueue;              //@synthesize xpcConnectionSyncQueue=_xpcConnectionSyncQueue - In the implementation block
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcConnectionSyncQueue;
-(void)_queue_createAndStartMDMXPCConnection;
-(void)getAssertionDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_destroyXPCConnectionAndInvalidate:(BOOL)arg1 ;
-(void)scheduleTokenUpdate;
-(void)simulatePush;
-(BOOL)isManagedByMDM;
-(void)simulatePushIfNetworkTetheredWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateMDMWithContext:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)processDeviceRequest:(id)arg1 encodeResponse:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(int)accessRights;
-(id)userEnrollmentAuthenticationDictWithEnrollmentID:(id)arg1 ;
-(id)deviceEnrollmentAuthenticationDict;
-(BOOL)authenticateWithCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(BOOL)arg4 topic:(id)arg5 useDevelopmentAPNS:(BOOL)arg6 signMessage:(BOOL)arg7 isUserEnrollment:(BOOL)arg8 enrollmentID:(id)arg9 outError:(id*)arg10 ;
-(BOOL)checkOutCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(BOOL)arg4 topic:(id)arg5 signMessage:(BOOL)arg6 isUserEnrollment:(BOOL)arg7 enrollmentID:(id)arg8 outError:(id*)arg9 ;
-(void)notifyNewConfiguration;
-(void)scheduleTokenUpdateIfNecessary;
-(void)retryNotNowResponse;
-(void)uprootMDM;
-(BOOL)isActivationLockAllowedWhileSupervised;
@end
