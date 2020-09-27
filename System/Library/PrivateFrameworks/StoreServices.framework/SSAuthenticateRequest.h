/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, SSLogConfig, UIViewController, NSString;

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	SSLogConfig* _logConfig;
	UIViewController* __parentViewController;

}

@property (nonatomic,retain) SSLogConfig * logConfig;                                      //@synthesize logConfig=_logConfig - In the implementation block
@property (nonatomic,readonly) NSString * logUUID; 
@property (assign,nonatomic,__weak) UIViewController * _parentViewController;              //@synthesize _parentViewController=__parentViewController - In the implementation block
@property (assign,nonatomic) id<SSAuthenticateRequestDelegate> delegate; 
@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isAuthkitEntitled;
+(id)_accountToAuthenticateWithAuthenticationContext:(id)arg1 ;
+(BOOL)localAuthenticationAvailable;
-(id)init;
-(id)run;
-(BOOL)start;
-(id)initWithAccount:(id)arg1 ;
-(SSLogConfig *)logConfig;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(id)initWithAuthenticationContext:(id)arg1 ;
-(NSString *)logUUID;
-(void)startWithAuthenticateResponseBlock:(/*^block*/id)arg1 ;
-(void)_performRemoteAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldRunAuthenticationForAccount:(id)arg1 ;
-(UIViewController *)_parentViewController;
-(id)_verifyCredentialsOptionsFromUpdateAccountResponse:(id)arg1 skipAuthKit:(BOOL)arg2 ;
-(void)_handleDialogFromError:(id)arg1 ;
-(long long)_responseTypeForError:(id)arg1 ;
-(void)setLogConfig:(SSLogConfig *)arg1 ;
-(void)set_parentViewController:(UIViewController *)arg1 ;
@end

