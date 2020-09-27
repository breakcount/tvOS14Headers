/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface PPXPCClientPipelinedBatchQueryManager : NSObject {

	AQ _queryId;
	NSMutableDictionary* _queryContexts;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)assertBatch:(id)arg1 forQueryName:(id)arg2 hasExpectedContainedType:(Class)arg3 ;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(BOOL)syncExecuteQueryWithName:(id)arg1 error:(id*)arg2 queryInitializer:(/*^block*/id)arg3 handleBatch:(/*^block*/id)arg4 ;
-(void)handleReplyWithName:(id)arg1 batch:(id)arg2 isLast:(BOOL)arg3 error:(id)arg4 queryId:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)cancelPendingQueriesWithError:(id)arg1 ;
@end

