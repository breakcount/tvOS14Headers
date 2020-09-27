/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUUID, SFClient, NSData, NSString, SFService, SFSession, NSObject;

@interface SFDeviceSetupServiceiOS : NSObject {

	BOOL _activateCalled;
	BOOL _advertiseFast;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSUUID* _peer;
	BOOL _pinShowing;
	SFClient* _preventExitForLocaleClient;
	NSData* _resumeAuthTag;
	NSString* _resumePassword;
	int _resumeState;
	SFService* _sfService;
	BOOL _sfServiceActivated;
	SFSession* _sfSession;
	BOOL _suspendPending;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _showPINHandlerEx;
	/*^block*/id _showPINHandler;
	/*^block*/id _hidePINHandler;
	/*^block*/id _progressHandlerEx;
	/*^block*/id _receivedObjectHandler;

}

@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id showPINHandlerEx;                                       //@synthesize showPINHandlerEx=_showPINHandlerEx - In the implementation block
@property (nonatomic,copy) id showPINHandler;                                         //@synthesize showPINHandler=_showPINHandler - In the implementation block
@property (nonatomic,copy) id hidePINHandler;                                         //@synthesize hidePINHandler=_hidePINHandler - In the implementation block
@property (nonatomic,copy) id progressHandlerEx;                                      //@synthesize progressHandlerEx=_progressHandlerEx - In the implementation block
@property (nonatomic,copy) id receivedObjectHandler;                                  //@synthesize receivedObjectHandler=_receivedObjectHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_run;
-(void)_cleanup;
-(void)_completed:(int)arg1 ;
-(id)showPINHandlerEx;
-(void)setShowPINHandlerEx:(id)arg1 ;
-(id)showPINHandler;
-(void)setShowPINHandler:(id)arg1 ;
-(id)hidePINHandler;
-(void)setHidePINHandler:(id)arg1 ;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)setReceivedObjectHandler:(id)arg1 ;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(int)_runResumeIfNeeded;
-(void)_handleSessionSecured:(id)arg1 ;
-(void)_handleConfigRequestReceived:(id)arg1 ;
-(void)_handleAppEventReceived:(id)arg1 ;
-(void)_handleSetupActionRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)sendObject:(id)arg1 ;
-(void)_handleSetupActionSuspend;
-(void)_handleSetupActionResume;
-(void)sendSetupAction:(unsigned)arg1 info:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)progressHandlerEx;
-(void)setProgressHandlerEx:(id)arg1 ;
-(id)receivedObjectHandler;
@end

