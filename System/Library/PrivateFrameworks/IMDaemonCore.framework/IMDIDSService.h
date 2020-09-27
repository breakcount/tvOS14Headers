/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDService.h>
#import <libobjc.A.dylib/IDSAccountControllerDelegate.h>
#import <libobjc.A.dylib/IDSAccountRegistrationDelegate.h>

@class IDSAccountController, NSString, NSArray;

@interface IMDIDSService : IMDService <IDSAccountControllerDelegate, IDSAccountRegistrationDelegate> {

	IDSAccountController* _accountController;
	BOOL _activatingAccount;
	BOOL _deactivatingAccount;
	IMDIDSService* _subService;
	NSString* _subServiceName;
	IMDIDSService* _mainService;

}

@property (nonatomic,retain) IMDIDSService * subService;                                         //@synthesize subService=_subService - In the implementation block
@property (nonatomic,retain) NSString * subServiceName;                                          //@synthesize subServiceName=_subServiceName - In the implementation block
@property (assign,nonatomic) IMDIDSService * mainService;                                        //@synthesize mainService=_mainService - In the implementation block
@property (nonatomic,retain,readonly) NSArray * accountsLoadedFromIdentityServices; 
@property (nonatomic,readonly) NSArray * activeAccountsFromIdentityServices; 
@property (nonatomic,readonly) BOOL isSubService; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithBundle:(id)arg1 ;
-(void)setSubServiceName:(NSString *)arg1 ;
-(NSString *)subServiceName;
-(void)setSubService:(IMDIDSService *)arg1 ;
-(IMDIDSService *)subService;
-(void)enableAccount:(id)arg1 ;
-(void)disableAccount:(id)arg1 ;
-(void)accountAdded:(id)arg1 ;
-(void)accountRemoved:(id)arg1 ;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 profileChanged:(id)arg2 ;
-(void)account:(id)arg1 loginChanged:(id)arg2 ;
-(void)account:(id)arg1 displayNameChanged:(id)arg2 ;
-(void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2 ;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(void)accountController:(id)arg1 accountAdded:(id)arg2 ;
-(void)accountController:(id)arg1 accountUpdated:(id)arg2 ;
-(void)accountController:(id)arg1 accountRemoved:(id)arg2 ;
-(void)accountController:(id)arg1 accountEnabled:(id)arg2 ;
-(void)accountController:(id)arg1 accountDisabled:(id)arg2 ;
-(Class)accountClass;
-(IMDIDSService *)mainService;
-(id)_serviceDomain;
-(NSArray *)accountsLoadedFromIdentityServices;
-(NSArray *)activeAccountsFromIdentityServices;
-(id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2 ;
-(id)initWithBundle:(id)arg1 subServiceName:(id)arg2 ;
-(id)imdAccountLoginFromIDSAccountWithType:(int)arg1 login:(id)arg2 ;
-(BOOL)isSubService;
-(void)_loadIDSAccountController;
-(id)initWithBundle:(id)arg1 isMainService:(BOOL)arg2 ;
-(void)setMainService:(IMDIDSService *)arg1 ;
-(id)accountFromIDSAccountWithUniqueID:(id)arg1 ;
-(void)setMockAccountController:(id)arg1 ;
-(id)mockAccountController;
@end

