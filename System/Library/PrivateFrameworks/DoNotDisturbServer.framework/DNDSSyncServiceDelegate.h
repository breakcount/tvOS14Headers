/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSSyncServiceDelegate <NSObject>
@optional
-(BOOL)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4;

@required
-(void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4;

@end

