/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface MFAATokenManager : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
+(BOOL)isTokenValidForFeatures:(unsigned long long)arg1 token:(id)arg2 ;
-(id)init;
-(id)_init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)requestActivationForAuthToken:(id)arg1 withUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)confirmActivationForAuthToken:(id)arg1 withUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestMetadataForAuthToken:(id)arg1 withUUID:(id)arg2 requestedLocale:(id)arg3 requestInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)requestMetadataForToken:(id)arg1 withUUID:(id)arg2 requestedLocale:(id)arg3 requestInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)requestActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)confirmActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

