/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFSettingsClient.h>

@interface WFFlashlightSettingsClient : WFSettingsClient
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)turnOffWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)turnOnWithBrightnessLevel:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)toggleWithBrightnessLevel:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

