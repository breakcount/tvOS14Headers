/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRIXPCInternalServiceProtocol
@required
-(void)taskRecordsWithCompletion:(/*^block*/id)arg1;
-(void)experimentRecordsWithCompletion:(/*^block*/id)arg1;
-(void)experimentNotificationsWithExperimentId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 completion:(/*^block*/id)arg4;
-(void)submitTask:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)lastFetchDateForContainer:(int)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setLastFetchDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3 completion:(/*^block*/id)arg4;
-(void)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 teamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 completion:(/*^block*/id)arg8;
-(void)deregisterNamespaceWithNamespaceName:(id)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3;
-(void)startDownloadNamespaceWithName:(id)arg1 teamId:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)dynamicNamespaceRecordsWithCompletion:(/*^block*/id)arg1;

@end
