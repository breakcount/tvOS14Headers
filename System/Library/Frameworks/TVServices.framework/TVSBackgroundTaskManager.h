/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVSBackgroundTaskManager : NSObject {

	BOOL _scheduledNotificationPost;
	int _enabledTaskTypesChangedNotificationToken;

}

@property (nonatomic,readonly) int enabledTaskTypesChangedNotificationToken;              //@synthesize enabledTaskTypesChangedNotificationToken=_enabledTaskTypesChangedNotificationToken - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)unregisterBackgroundTask:(id)arg1 ;
-(void)registerBackgroundTask:(id)arg1 ;
-(void)updateTasksForTimeChange;
-(void)_configureDistributedNotifications;
-(void)_postEnabledTasksDidChangeNotification;
-(void)_updateTasksForEnabledTaskTypesChangeWithToken:(int)arg1 ;
-(void)enableBackgroundTasksOfType:(long long)arg1 ;
-(void)disableBackgroundTasksOfType:(long long)arg1 ;
-(int)enabledTaskTypesChangedNotificationToken;
-(unsigned long long)_enabledTaskTypesMask;
-(BOOL)tasksEnabledOfType:(long long)arg1 ;
-(void)performFinishedForTask:(id)arg1 ;
@end

