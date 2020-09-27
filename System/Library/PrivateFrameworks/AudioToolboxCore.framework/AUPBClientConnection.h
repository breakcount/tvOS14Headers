/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AUPBInspecting;
@class NSXPCConnection;

@interface AUPBClientConnection : NSObject {

	NSXPCConnection* xpcconnection;
	id<AUPBInspecting> proxyInterface;

}

@property (nonatomic,retain) NSXPCConnection * xpcconnection; 
@property (nonatomic,retain) id<AUPBInspecting> proxyInterface; 
-(NSXPCConnection *)xpcconnection;
-(id<AUPBInspecting>)proxyInterface;
-(void)setXpcconnection:(NSXPCConnection *)arg1 ;
-(void)setProxyInterface:(id<AUPBInspecting>)arg1 ;
@end

