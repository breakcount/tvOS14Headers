/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDUserDataControllerDelegate <NSObject>
@property (readonly) BOOL isUserSettingsPrefEnabled; 
@required
-(id)sharedZoneControllerForUserDataController:(id)arg1;
-(id)privateZoneControllerForUserDataController:(id)arg1;
-(BOOL)isUserSettingsPrefEnabled;
-(BOOL)userDataController:(id)arg1 isPersonalRequestCapableAccessoryID:(id)arg2;
-(BOOL)userDataController:(id)arg1 isMediaContentProfileCapableAccessoryID:(id)arg2;
-(void)userDataControllerDidUpdateAssistantAccessControl:(id)arg1;
-(void)userDataControllerDidUpdateMediaContentProfile:(id)arg1;

@end

