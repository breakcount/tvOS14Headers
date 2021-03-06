/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVISScreenSaverServiceInterface <NSObject>
@optional
-(void)fetchScreenSaverConfigurationWithReply:(/*^block*/id)arg1;
-(void)forceDownloadAssetsWithIDs:(id)arg1 reply:(/*^block*/id)arg2;
-(void)activateCategoryWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)deactivateCategoryWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;

@end

