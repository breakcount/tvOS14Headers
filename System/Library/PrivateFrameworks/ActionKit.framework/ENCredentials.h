/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface ENCredentials : NSObject <NSCoding> {

	NSString* _host;
	NSString* _edamUserId;
	NSString* _noteStoreUrl;
	NSString* _webApiUrlPrefix;
	NSString* _authenticationToken;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSString * host;                             //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSString * edamUserId;                       //@synthesize edamUserId=_edamUserId - In the implementation block
@property (nonatomic,copy) NSString * noteStoreUrl;                     //@synthesize noteStoreUrl=_noteStoreUrl - In the implementation block
@property (nonatomic,copy) NSString * webApiUrlPrefix;                  //@synthesize webApiUrlPrefix=_webApiUrlPrefix - In the implementation block
@property (nonatomic,copy) NSString * authenticationToken;              //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                   //@synthesize expirationDate=_expirationDate - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)host;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setHost:(NSString *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(BOOL)saveToKeychain;
-(id)initWithHost:(id)arg1 edamUserId:(id)arg2 noteStoreUrl:(id)arg3 webApiUrlPrefix:(id)arg4 authenticationToken:(id)arg5 expirationDate:(id)arg6 ;
-(id)initWithHost:(id)arg1 authenticationResult:(id)arg2 ;
-(void)deleteFromKeychain;
-(BOOL)areValid;
-(id)keychainQuery;
-(NSString *)edamUserId;
-(void)setEdamUserId:(NSString *)arg1 ;
-(NSString *)noteStoreUrl;
-(void)setNoteStoreUrl:(NSString *)arg1 ;
-(NSString *)webApiUrlPrefix;
-(void)setWebApiUrlPrefix:(NSString *)arg1 ;
@end

