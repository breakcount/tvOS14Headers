/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSArray;

@interface MCHTTPRequestor : NSObject <NSURLSessionDataDelegate> {

	BOOL _didFailDueToMissingCredentials;
	NSString* _username;
	NSString* _password;
	NSArray* _anchorCertificates;
	id _selfReference;

}

@property (nonatomic,copy) NSString * username;                                //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSArray * anchorCertificates;                     //@synthesize anchorCertificates=_anchorCertificates - In the implementation block
@property (nonatomic,retain) id selfReference;                                 //@synthesize selfReference=_selfReference - In the implementation block
@property (assign,nonatomic) BOOL didFailDueToMissingCredentials;              //@synthesize didFailDueToMissingCredentials=_didFailDueToMissingCredentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)password;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setAnchorCertificates:(NSArray *)arg1 ;
-(void)setSelfReference:(id)arg1 ;
-(void)setDidFailDueToMissingCredentials:(BOOL)arg1 ;
-(BOOL)didFailDueToMissingCredentials;
-(NSArray *)anchorCertificates;
-(void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)selfReference;
@end

