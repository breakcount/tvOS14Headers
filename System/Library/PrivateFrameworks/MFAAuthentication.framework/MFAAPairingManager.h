/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface MFAAPairingManager : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)verifyPairingWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generatePairingTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addPairingWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removePairingWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
