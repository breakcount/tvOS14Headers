/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDMessageHistoryIDSTransactionLogSyncTask.h>

@class IMDReplayController;

@interface IMDMessageHistoryFirstUnlockReplaySyncTask : IMDMessageHistoryIDSTransactionLogSyncTask {

	IMDReplayController* _replayController;

}
-(void)dealloc;
-(id)initWithReplayController:(id)arg1 accountController:(id)arg2 ;
-(void)_setupAndBeginSync;
-(unsigned long long)syncTaskType;
@end

