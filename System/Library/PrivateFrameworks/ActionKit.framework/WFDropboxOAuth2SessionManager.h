/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFOAuth2SessionManager.h>
#import <libobjc.A.dylib/WFOAuth2ProviderSessionManager.h>
#import <libobjc.A.dylib/WFOAuth2RevocableSessionManager.h>

@class NSString;

@interface WFDropboxOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager, WFOAuth2RevocableSessionManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithClientID:(id)arg1 clientSecret:(id)arg2 ;
-(id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 ;
-(void)revokeCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)authorizationSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)appAuthorizationSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authenticateWithLegacyAccessToken:(id)arg1 accessTokenSecret:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

