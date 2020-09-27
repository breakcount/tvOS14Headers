/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/TRIXPCNamespaceManagementServiceProtocol.h>

@protocol TRITaskQueuing;
@class TRIServerContext;

@interface TRIXPCNamespaceManagementRequestHandler : NSObject <TRIXPCNamespaceManagementServiceProtocol> {

	TRIServerContext* _serverContext;
	id<TRITaskQueuing> _taskQueue;
	SCD_Struct_TR4 _auditToken;

}
+(void)usingServerContext:(id)arg1 registerNamespaceWithNamespaceName:(id)arg2 compatibilityVersion:(unsigned)arg3 defaultsFileURL:(id)arg4 teamId:(id)arg5 appContainerId:(id)arg6 appContainerType:(long long)arg7 cloudKitContainerId:(int)arg8 bundleId:(id)arg9 completion:(/*^block*/id)arg10 ;
+(void)usingServerContext:(id)arg1 deregisterNamespaceWithName:(id)arg2 teamId:(id)arg3 taskQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)usingServerContext:(id)arg1 taskQueue:(id)arg2 startDownloadNamespaceWithName:(id)arg3 attribution:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_usingEntitlementWitness:(id)arg1 serverContext:(id)arg2 taskQueue:(id)arg3 startDownloadAssetIndexesByTreatment:(id)arg4 namespace:(id)arg5 taskAttribution:(id)arg6 notificationKey:(id)arg7 ;
+(void)resumeTaskQueue:(id)arg1 forNetworkOptions:(id)arg2 ;
-(void)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 completion:(/*^block*/id)arg6 ;
-(void)deregisterNamespaceWithNamespaceName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startDownloadNamespaceWithName:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startDownloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithServerContext:(id)arg1 taskQueue:(id)arg2 auditToken:(SCD_Struct_TR4)arg3 ;
@end
