/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBSettingsGatewayServerInterface <NSObject>
@required
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)getEffectiveGlobalContentPreviewsSettingWithHandler:(/*^block*/id)arg1;
-(void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveGlobalSpokenNotificationSettingWithHandler:(/*^block*/id)arg1;
-(void)setEffectiveGlobalSpokenNotificationSetting:(long long)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
-(void)getSectionIDsWithHandler:(/*^block*/id)arg1;

@end

