/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACMExternalAuthenticationControllerDelegate, ACFLocalAuthenticationContextProtocol;
@class ACCComponents;

@interface ACMExternalAuthenticationController : NSObject {

	id<ACMExternalAuthenticationControllerDelegate> _delegate;
	id<ACFLocalAuthenticationContextProtocol> _localAuthenticationContext;

}

@property (nonatomic,readonly) ACCComponents * components; 
@property (nonatomic,readonly) id<ACFKeychainManagerProtocol> keychainManager; 
@property (nonatomic,readonly) id<ACCTicketManagerProtocol> ticketManager; 
@property (nonatomic,retain) id<ACFLocalAuthenticationContextProtocol> localAuthenticationContext;              //@synthesize localAuthenticationContext=_localAuthenticationContext - In the implementation block
@property (assign,nonatomic) id<ACMExternalAuthenticationControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<ACMExternalAuthenticationControllerDelegate>)delegate;
-(void)setDelegate:(id<ACMExternalAuthenticationControllerDelegate>)arg1 ;
-(ACCComponents *)components;
-(id<ACFKeychainManagerProtocol>)keychainManager;
-(void)evaluateSSOWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authenticateWithRequest:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)verifyServiceTicketWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<ACCTicketManagerProtocol>)ticketManager;
-(id)tgtStoragePolicy;
-(void)setLocalAuthenticationContext:(id<ACFLocalAuthenticationContextProtocol>)arg1 ;
-(id<ACFLocalAuthenticationContextProtocol>)localAuthenticationContext;
-(id)localizedReasonForUsername:(id)arg1 ;
-(id)convertLAError:(id)arg1 ;
-(BOOL)isCriticalError:(id)arg1 ;
-(void)cleanSSOStorageWithRequest:(id)arg1 ;
-(BOOL)isValidToken:(id)arg1 duration:(double)arg2 ;
-(void)evaluateTouchIDWithToken:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)verifyToken:(id)arg1 withRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)tokenWithRequest:(id)arg1 ;
-(void)evaluateTouchIDIfNeededWithSSOToken:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateAuthContext:(id)arg1 ;
-(void)saveSSOIfNeeded:(id)arg1 withRequest:(id)arg2 ;
-(void)authenticate2SVWithSSOTokenIfRequired:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

