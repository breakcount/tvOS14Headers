/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRINamespaceManagementProtocol
@required
-(BOOL)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 error:(id*)arg6;
-(BOOL)startNamespaceDownloadWithName:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)startDownloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 options:(id)arg3 error:(id*)arg4;
-(BOOL)deregisterNamespaceWithNamespaceName:(id)arg1 error:(id*)arg2;

@end

