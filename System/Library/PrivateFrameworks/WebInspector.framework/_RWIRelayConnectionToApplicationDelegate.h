/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _RWIRelayConnectionToApplicationDelegate <NSObject>
@optional
-(void)xpcConnection:(id)arg1 unhandledMessage:(id)arg2;

@required
-(void)xpcConnectionFailed:(id)arg1;
-(void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;

@end

