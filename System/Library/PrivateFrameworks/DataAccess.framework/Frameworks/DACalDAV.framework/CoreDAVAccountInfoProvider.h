/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreDAVAccountInfoProvider <NSObject>
@optional
-(id)clientToken;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(void)noteHomeSetOnDifferentHost:(id)arg1;
-(id)additionalHeaderValues;
-(void)clientTokenRequestedByServer;
-(id)clientCertificateInfoProvider;
-(id)oauthInfoProvider;
-(BOOL)handleTrustChallenge:(id)arg1;
-(BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
-(BOOL)shouldRetryUnauthorizedConnection:(id)arg1;
-(BOOL)shouldTryRenewingCredential;
-(BOOL)renewCredential;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
-(BOOL)handleShouldUseCredentialStorage;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1;
-(CFURLStorageSessionRef)copyStorageSession;
-(BOOL)shouldUseOpportunisticSockets;
-(id)getAppleIDSession;
-(id)customConnectionProperties;
-(BOOL)shouldTurnModalOnBadPassword;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 forTask:(id)arg2;
-(void)noteFailedNetworkRequestForTask:(id)arg1;
-(void)noteFailedProtocolRequestForTask:(id)arg1;
-(void)noteTimeSpentInNetworking:(double)arg1 forTask:(id)arg2;
-(BOOL)shouldCompressRequests;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(/*^block*/id)arg4;

@required
-(id)scheme;
-(id)host;
-(long long)port;
-(id)user;
-(id)password;
-(id)accountID;
-(id)principalURL;
-(id)userAgentHeader;
-(id)serverRoot;
-(id)serverComplianceClasses;
-(BOOL)handleCertificateError:(id)arg1;
-(id)identityPersist;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1;
-(BOOL)shouldFailAllTasks;

@end

