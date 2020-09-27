/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRIInternalServiceProtocol
@required
-(id)taskRecordsWithError:(id*)arg1;
-(id)experimentRecordsWithError:(id*)arg1;
-(id)experimentNotificationsWithExperimentId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 error:(id*)arg4;
-(BOOL)submitTask:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)lastFetchDateForContainer:(int)arg1 teamId:(id)arg2 error:(id*)arg3;
-(BOOL)setLastFetchDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3 error:(id*)arg4;
-(BOOL)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 withTeamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 error:(id*)arg8;
-(BOOL)deregisterNamespaceWithNamespaceName:(id)arg1 withTeamId:(id)arg2 error:(id*)arg3;
-(BOOL)startNamespaceDownloadWithName:(id)arg1 withTeamId:(id)arg2 options:(id)arg3 error:(id*)arg4;
-(id)dynamicNamespaceRecordsWithError:(id*)arg1;

@end

