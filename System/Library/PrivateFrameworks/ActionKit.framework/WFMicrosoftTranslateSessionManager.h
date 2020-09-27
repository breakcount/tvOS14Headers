/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, NSString, NSURL;

@interface WFMicrosoftTranslateSessionManager : NSObject {

	NSURLSession* _session;
	NSString* _apiKey;
	NSURL* _baseURL;

}

@property (nonatomic,readonly) NSURL * baseURL;                     //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * apiKey;                       //@synthesize apiKey=_apiKey - In the implementation block
-(id)init;
-(NSURL *)baseURL;
-(NSURLSession *)session;
-(id)initWithSession:(id)arg1 ;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)getAvailableLanguages:(/*^block*/id)arg1 ;
-(void)detectLanguagesOfStrings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)translateStrings:(id)arg1 fromLanguage:(id)arg2 intoLanguage:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getAccessTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)sendRequestWithURL:(id)arg1 queryParameters:(id)arg2 requestBody:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)apiKey;
-(void)setApiKey:(NSString *)arg1 ;
@end

