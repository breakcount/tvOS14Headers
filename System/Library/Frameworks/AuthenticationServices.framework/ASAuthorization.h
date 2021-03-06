/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASAuthorizationProvider, ASAuthorizationCredential;
@interface ASAuthorization : NSObject {

	id<ASAuthorizationProvider> _provider;
	id<ASAuthorizationCredential> _credential;

}

@property (nonatomic,readonly) id<ASAuthorizationProvider> provider;                  //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) id<ASAuthorizationCredential> credential;              //@synthesize credential=_credential - In the implementation block
+(id)new;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id<ASAuthorizationCredential>)credential;
-(id<ASAuthorizationProvider>)provider;
-(id)initWithProvider:(id)arg1 credential:(id)arg2 ;
@end

