/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDCloudShareParticipantsManagerDataSource <NSObject>
@optional
-(BOOL)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2;
-(BOOL)canUseUntrustedAccountHandlesForParticipantManager:(id)arg1;
-(BOOL)areShareModificationsEnabledForManager:(id)arg1;

@required
-(BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2;

@end
