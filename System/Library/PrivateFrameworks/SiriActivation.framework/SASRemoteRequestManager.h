/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFRemoteRequestWatcher, INUIAppIntentDeliverer, AFRequestInfo;

@interface SASRemoteRequestManager : NSObject {

	BOOL _hasPendingVoiceTriggerActivation;
	AFRemoteRequestWatcher* _remoteRequestWatcher;
	INUIAppIntentDeliverer* _currentAppIntentDeliverer;
	unsigned long long _currentVoiceTriggerRestriction;
	unsigned long long _pendingVoiceTriggerRestrictionCount;
	AFRequestInfo* _pendingVoiceTriggerActivationInfo;

}

@property (nonatomic,retain) AFRemoteRequestWatcher * remoteRequestWatcher;                       //@synthesize remoteRequestWatcher=_remoteRequestWatcher - In the implementation block
@property (nonatomic,retain) INUIAppIntentDeliverer * currentAppIntentDeliverer;                  //@synthesize currentAppIntentDeliverer=_currentAppIntentDeliverer - In the implementation block
@property (assign,nonatomic) unsigned long long currentVoiceTriggerRestriction;                   //@synthesize currentVoiceTriggerRestriction=_currentVoiceTriggerRestriction - In the implementation block
@property (assign,nonatomic) unsigned long long pendingVoiceTriggerRestrictionCount;              //@synthesize pendingVoiceTriggerRestrictionCount=_pendingVoiceTriggerRestrictionCount - In the implementation block
@property (assign,nonatomic) BOOL hasPendingVoiceTriggerActivation;                               //@synthesize hasPendingVoiceTriggerActivation=_hasPendingVoiceTriggerActivation - In the implementation block
@property (nonatomic,retain) AFRequestInfo * pendingVoiceTriggerActivationInfo;                   //@synthesize pendingVoiceTriggerActivationInfo=_pendingVoiceTriggerActivationInfo - In the implementation block
+(id)new;
+(id)manager;
-(id)init;
-(id)_init;
-(void)setRemoteRequestWatcher:(AFRemoteRequestWatcher *)arg1 ;
-(AFRemoteRequestWatcher *)remoteRequestWatcher;
-(void)_handleRemotePrewarmWithInfo:(id)arg1 ;
-(void)_handleNewRemoteRequestWithInfo:(id)arg1 ;
-(void)_handleRemoteRequestDismissalWithReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3 ;
-(BOOL)_requestWatcherVoiceActivationEnabled;
-(void)setCurrentVoiceTriggerRestriction:(unsigned long long)arg1 ;
-(unsigned long long)pendingVoiceTriggerRestrictionCount;
-(void)setPendingVoiceTriggerRestrictionCount:(unsigned long long)arg1 ;
-(void)_processPendingVoiceTriggerActivationsWithInfo:(id)arg1 delay:(double)arg2 ;
-(void)_handleRequestWatcherVoiceTriggerRequestWithInfo:(id)arg1 ;
-(void)setHasPendingVoiceTriggerActivation:(BOOL)arg1 ;
-(void)setPendingVoiceTriggerActivationInfo:(AFRequestInfo *)arg1 ;
-(unsigned long long)currentVoiceTriggerRestriction;
-(void)_handlePendingVoiceTriggerActivationsWithInfo:(id)arg1 ;
-(BOOL)hasPendingVoiceTriggerActivation;
-(AFRequestInfo *)pendingVoiceTriggerActivationInfo;
-(INUIAppIntentDeliverer *)currentAppIntentDeliverer;
-(void)setCurrentAppIntentDeliverer:(INUIAppIntentDeliverer *)arg1 ;
@end

