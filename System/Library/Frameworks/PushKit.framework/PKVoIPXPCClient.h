/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKVoIPXPCClient
@optional
-(void)voipRegistrationFailed;

@required
-(void)voipPayloadReceived:(id)arg1 mustPostCall:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)voipRegistrationSucceededWithDeviceToken:(id)arg1;
-(void)voipPayloadReceived:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end

