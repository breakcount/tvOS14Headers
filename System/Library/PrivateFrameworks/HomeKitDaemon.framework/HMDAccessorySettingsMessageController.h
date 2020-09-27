/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDAccessorySettingsMessageController
@required
-(void)onMessageUpdateValue:(id)arg1 settingIdentifier:(id)arg2 senderVersion:(id)arg3 senderProductClass:(long long)arg4 completion:(/*^block*/id)arg5;
-(void)onMessageAddConstraint:(id)arg1 settingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)onMessageRemoveConstraint:(id)arg1 settingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)onMessageUpdateConstraints:(id)arg1 settingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)onMessageReplaceConstraintsWithAdditions:(id)arg1 constraintIdsToRemove:(id)arg2 settingIdentifier:(id)arg3 senderProductClass:(long long)arg4 completion:(/*^block*/id)arg5;

@end

