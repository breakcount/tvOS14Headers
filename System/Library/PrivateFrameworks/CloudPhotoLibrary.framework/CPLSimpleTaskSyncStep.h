/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLSyncStep.h>

@class CPLEngineSyncTask;

@interface CPLSimpleTaskSyncStep : CPLSyncStep {

	Class _taskClass;
	CPLEngineSyncTask* _currentTask;

}

@property (nonatomic,readonly) Class taskClass;                              //@synthesize taskClass=_taskClass - In the implementation block
@property (nonatomic,readonly) CPLEngineSyncTask * currentTask;              //@synthesize currentTask=_currentTask - In the implementation block
-(CPLEngineSyncTask *)currentTask;
-(id)descriptionForTasks;
-(BOOL)launchNecessaryTasks;
-(void)cancelAllTasks:(BOOL)arg1 ;
-(BOOL)didFinishTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(void)moveTasksToBackground;
-(id)initWithSyncManager:(id)arg1 syncSession:(id)arg2 taskClass:(Class)arg3 ;
-(id)newTask;
-(Class)taskClass;
@end

