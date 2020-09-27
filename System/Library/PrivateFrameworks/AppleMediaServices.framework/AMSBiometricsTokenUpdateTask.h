/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSSecurityClientInterface.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSRequestPresentationDelegate, AMSBagProtocol;
@class ACAccount, NSDictionary, AMSProcessInfo, AMSURLSession, NSString;

@interface AMSBiometricsTokenUpdateTask : AMSTask <AMSSecurityClientInterface, AMSBagConsumer> {

	BOOL _shouldGenerateKeysOnly;
	BOOL _shouldRequestConfirmation;
	BOOL _shouldPromptUser;
	ACAccount* _account;
	NSDictionary* _additionalDialogMetrics;
	AMSProcessInfo* _clientInfo;
	id<AMSRequestPresentationDelegate> _presentationDelegate;
	id<AMSBagProtocol> _bag;
	AMSURLSession* _session;

}

@property (nonatomic,readonly) id<AMSBagProtocol> bag;                                                    //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSURLSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL shouldPromptUser;                                                       //@synthesize shouldPromptUser=_shouldPromptUser - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalDialogMetrics;                                      //@synthesize additionalDialogMetrics=_additionalDialogMetrics - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                                                 //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic,__weak) id<AMSRequestPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldGenerateKeysOnly;                                                 //@synthesize shouldGenerateKeysOnly=_shouldGenerateKeysOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestConfirmation;                                              //@synthesize shouldRequestConfirmation=_shouldRequestConfirmation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
-(AMSURLSession *)session;
-(id)initWithAccount:(id)arg1 ;
-(void)setSession:(AMSURLSession *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(BOOL)shouldPromptUser;
-(void)setShouldPromptUser:(BOOL)arg1 ;
-(id<AMSRequestPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<AMSRequestPresentationDelegate>)arg1 ;
-(id)performUpdate;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(void)handleAuthenticateRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDialogRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldRequestConfirmation:(BOOL)arg1 ;
-(void)setAdditionalDialogMetrics:(NSDictionary *)arg1 ;
-(id)_sendRequestToDaemon;
-(NSDictionary *)additionalDialogMetrics;
-(BOOL)shouldGenerateKeysOnly;
-(BOOL)shouldRequestConfirmation;
-(void)setShouldGenerateKeysOnly:(BOOL)arg1 ;
@end

