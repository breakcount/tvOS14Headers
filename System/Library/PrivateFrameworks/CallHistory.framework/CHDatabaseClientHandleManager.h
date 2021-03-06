/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBClientHandle;

@interface CHDatabaseClientHandleManager : CHSynchronizedLoggable {

	CallHistoryDBClientHandle* _databaseClientHandle;

}

@property (nonatomic,__weak,readonly) CallHistoryDBClientHandle * databaseClientHandle;              //@synthesize databaseClientHandle=_databaseClientHandle - In the implementation block
+(id)sharedInstance;
-(id)init;
-(CallHistoryDBClientHandle *)databaseClientHandle;
@end

