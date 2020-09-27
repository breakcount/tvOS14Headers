/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol PKCorePlugInProtocol
@property (copy) NSDictionary * _userInfo; 
@required
-(NSDictionary *)_userInfo;
-(void)set_userInfo:(id)arg1;
-(void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(/*^block*/id)arg3;
-(void)prepareUsing:(id)arg1 reply:(/*^block*/id)arg2;
-(void)beginUsingPlugIn:(id)arg1 ready:(/*^block*/id)arg2;
-(void)hostHasControl;
-(void)shutdownPlugIn;
-(void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(/*^block*/id)arg3;
-(void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(/*^block*/id)arg4;

@end

