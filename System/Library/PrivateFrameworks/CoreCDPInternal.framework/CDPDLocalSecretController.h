/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDCircleDelegate.h>
#import <libobjc.A.dylib/CDPDSecureBackupDelegate.h>

@protocol CDPStateUIProviderInternal, CDPLocalSecretFollowUpProvider;
@class CDPContext, CDPDCircleController, CDPDSecureBackupController;

@interface CDPDLocalSecretController : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate> {

	CDPContext* _context;
	CDPDCircleController* _circleController;
	CDPDSecureBackupController* _secureBackupController;
	id<CDPStateUIProviderInternal> _uiProvider;
	id<CDPLocalSecretFollowUpProvider> _followUpProvider;

}

@property (nonatomic,retain) CDPContext * context;                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CDPDCircleController * circleController;                          //@synthesize circleController=_circleController - In the implementation block
@property (nonatomic,retain) CDPDSecureBackupController * secureBackupController;              //@synthesize secureBackupController=_secureBackupController - In the implementation block
@property (nonatomic,retain) id<CDPStateUIProviderInternal> uiProvider;                        //@synthesize uiProvider=_uiProvider - In the implementation block
@property (nonatomic,retain) id<CDPLocalSecretFollowUpProvider> followUpProvider;              //@synthesize followUpProvider=_followUpProvider - In the implementation block
-(void)dealloc;
-(CDPContext *)context;
-(void)setContext:(CDPContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setUiProvider:(id<CDPStateUIProviderInternal>)arg1 ;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)attemptToEscrowPreRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishOfflineLocalSecretChangeWithCompletion:(/*^block*/id)arg1 ;
-(CDPDCircleController *)circleController;
-(void)setCircleController:(CDPDCircleController *)arg1 ;
-(CDPDSecureBackupController *)secureBackupController;
-(void)setSecureBackupController:(CDPDSecureBackupController *)arg1 ;
-(id)contextForController:(id)arg1 ;
-(void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(/*^block*/id)arg2 ;
-(id)secureChannelContextForController:(id)arg1 ;
-(void)_handleCompletionStatus:(BOOL)arg1 preRecord:(BOOL)arg2 ;
-(void)_attemptToEscrowPreRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createContextForSecret:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_repairWithStateMachine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_cdpStateMachine;
-(void)_collectLocalSecretWithCompletion:(/*^block*/id)arg1 ;
-(id<CDPLocalSecretFollowUpProvider>)followUpProvider;
-(void)_setContextWithAuthResults:(id)arg1 ;
-(id)circlePeerIDForSecureBackupController:(id)arg1 ;
-(BOOL)synchronizeCircleViewsForSecureBackupContext:(id)arg1 ;
-(void)promptForAdoptionOfMultipleICSCWithCompletion:(/*^block*/id)arg1 ;
-(void)promptForLocalSecretWithCompletion:(/*^block*/id)arg1 ;
-(void)setFollowUpProvider:(id<CDPLocalSecretFollowUpProvider>)arg1 ;
@end

