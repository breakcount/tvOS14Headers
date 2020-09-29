/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:20 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GKRemoteUIController.h>

@class NSArray, NSURL, NSDictionary;

@interface GKAccountRemoteUIController : GKRemoteUIController {

	BOOL _authenticatePlayerOnCompletion;
	long long _mode;
	NSArray* _availableExternalServices;
	NSURL* _url;
	NSDictionary* _postBody;

}

@property (nonatomic,retain) NSArray * availableExternalServices;              //@synthesize availableExternalServices=_availableExternalServices - In the implementation block
@property (assign,nonatomic) long long mode;                                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL authenticatePlayerOnCompletion;              //@synthesize authenticatePlayerOnCompletion=_authenticatePlayerOnCompletion - In the implementation block
@property (nonatomic,retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * postBody;                          //@synthesize postBody=_postBody - In the implementation block
+(void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setMode:(long long)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(long long)mode;
-(id)initWithMode:(long long)arg1 ;
-(id)bagKey;
-(id)fallbackURL;
-(id)postBodyForInitialLoad;
-(void)fireCompletionHandler;
-(void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updatePostbackDictionary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithMode:(long long)arg1 player:(id)arg2 ;
-(void)setPostBody:(NSDictionary *)arg1 ;
-(BOOL)authenticatePlayerOnCompletion;
-(NSArray *)availableExternalServices;
-(void)setAuthenticatePlayerOnCompletion:(BOOL)arg1 ;
-(void)setAvailableExternalServices:(NSArray *)arg1 ;
-(NSDictionary *)postBody;
@end
