/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FLEnvironment : NSObject

@property (nonatomic,readonly) BOOL followUpExtensionSupportEnabled; 
@property (nonatomic,readonly) BOOL followUpZeroActionsForTheWorld; 
+(id)currentEnvironment;
-(BOOL)isInternal;
-(BOOL)isUnlocked;
-(BOOL)followUpExtensionSupportEnabled;
-(BOOL)stressMode;
-(id)stressBundleIdentifiers;
-(BOOL)shouldHideAllFollowUps;
-(BOOL)followUpZeroActionsForTheWorld;
-(void)setFollowUpExtensionSupportEnabled:(BOOL)arg1 ;
-(id)supportedBundleIdentifiers;
@end

