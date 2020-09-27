/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLSyncStep.h>

@class CPLPullFromTransportTask, CPLMinglePulledChangesTask;

@interface CPLPullFromTransportSyncStep : CPLSyncStep {

	CPLPullFromTransportTask* _pullTask;
	CPLMinglePulledChangesTask* _mingleTask;

}
-(id)descriptionForTasks;
-(BOOL)launchNecessaryTasks;
-(void)cancelAllTasks:(BOOL)arg1 ;
-(BOOL)didFinishTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(void)moveTasksToBackground;
-(void)_retainPowerAssertionForMingleTaskIfNecessary;
-(void)_releasePowerAssertionForMingleTaskIfNecessary;
@end

