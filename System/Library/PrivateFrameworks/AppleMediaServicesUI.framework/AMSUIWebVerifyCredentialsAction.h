/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSUIWebClientContext, ACAccount, NSString;

@interface AMSUIWebVerifyCredentialsAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _ephemeral;
	BOOL _usernameEditable;
	AMSUIWebClientContext* _context;
	ACAccount* _account;
	NSString* _buttonText;
	long long _serviceType;
	NSString* _serviceIdentifier;
	NSString* _subtitle;
	NSString* _title;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * buttonText;                        //@synthesize buttonText=_buttonText - In the implementation block
@property (assign,nonatomic) BOOL ephemeral;                               //@synthesize ephemeral=_ephemeral - In the implementation block
@property (assign,nonatomic) long long serviceType;                        //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;                 //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL usernameEditable;                        //@synthesize usernameEditable=_usernameEditable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_serviceTypeFromType:(long long)arg1 ;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(BOOL)ephemeral;
-(BOOL)usernameEditable;
-(void)setUsernameEditable:(BOOL)arg1 ;
-(void)setEphemeral:(BOOL)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

