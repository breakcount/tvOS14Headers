/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface WCAClient : NSObject {

	NSXPCConnection* _connectionToService;

}

@property (nonatomic,retain) NSXPCConnection * connectionToService;              //@synthesize connectionToService=_connectionToService - In the implementation block
+(id)sharedClient;
-(NSXPCConnection *)connectionToService;
-(void)setConnectionToService:(NSXPCConnection *)arg1 ;
-(void)executeFetchRequest:(id)arg1 ;
-(void)_establishDaemonConnection;
@end

