/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCTransportSessionIDS.h>
#import <libobjc.A.dylib/VCConnectionManagerDelegate.h>
#import <libobjc.A.dylib/VCIDSSessionInfoSynchronizerDelegate.h>

@class VCIDSSessionInfoSynchronizer, NSString;

@interface VCTransportSessionIDSMultiLink : VCTransportSessionIDS <VCConnectionManagerDelegate, VCIDSSessionInfoSynchronizerDelegate> {

	VCIDSSessionInfoSynchronizer* _sessionInfoSynchronizer;
	BOOL _isWiFiAssistActive;

}

@property (nonatomic,readonly) VCIDSSessionInfoSynchronizer * sessionInfoSynchronizer;              //@synthesize sessionInfoSynchronizer=_sessionInfoSynchronizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setWiFiAssist:(BOOL)arg1 ;
-(void)startActiveProbingWithOptions:(id)arg1 ;
-(void)stopActiveProbingWithOptions:(id)arg1 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg1 ;
-(void)queryProbingResultsWithOptions:(id)arg1 ;
-(id)initWithCallID:(unsigned)arg1 reportingAgent:(id)arg2 ;
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)connectionCallback:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(void)handleLinkConnectedWithInfo:(id)arg1 ;
-(void)handleLinkDisconnectedWithInfo:(id)arg1 ;
-(void)handleUpdateRemoteSessionInfo:(id)arg1 ;
-(void)handleProbingResponse:(id)arg1 ;
-(int)onStart;
-(void)onStop;
-(void)setQuickRelayServerProvider:(int)arg1 ;
-(void)didEnableDuplication:(BOOL)arg1 activeConnection:(id)arg2 ;
-(void)discardConnection:(id)arg1 ;
-(void)updateParticipantGenerationCounter:(unsigned char)arg1 ;
-(void)resetParticipantGenerationCounter;
-(void)optOutAllStreamsForConnection:(id)arg1 ;
-(id)initWithCallID:(unsigned)arg1 requireEncryptionInfo:(BOOL)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(BOOL)arg5 ;
-(VCIDSSessionInfoSynchronizer *)sessionInfoSynchronizer;
-(void)VCIDSSessionInfoSynchronizer:(void*)arg1 sendVCIDSSessionInfoRequest:(id)arg2 ;
-(void)setDefaultLink:(id)arg1 ;
@end

