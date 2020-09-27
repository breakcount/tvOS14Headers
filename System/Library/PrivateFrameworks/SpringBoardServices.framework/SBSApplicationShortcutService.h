/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSAbstractApplicationService.h>

@interface SBSApplicationShortcutService : SBSAbstractApplicationService
-(void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)applicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 ;
-(void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

