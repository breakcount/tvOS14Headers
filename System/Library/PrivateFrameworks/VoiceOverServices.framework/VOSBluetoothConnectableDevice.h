/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VOSBluetoothConnectableDevice <NSObject>
@required
-(id)name;
-(id)identifier;
-(void)disconnect;
-(BOOL)connected;
-(void)connect;
-(BOOL)paired;
-(void)unpair;
-(BOOL)connecting;

@end
