/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKQueryOperationCallbacks.h>

@class CKQuery, CKQueryCursor, CKRecordZoneID, NSArray, NSDictionary, CKQueryOperationInfo;

@interface CKQueryOperation : CKDatabaseOperation <CKQueryOperationCallbacks> {

	BOOL _shouldFetchAssetContent;
	BOOL _fetchAllResults;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _queryCompletionBlock;
	/*^block*/id _queryCursorFetchedBlock;
	CKQuery* _query;
	CKQueryCursor* _cursor;
	CKRecordZoneID* _zoneID;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	CKQueryCursor* _resultsCursor;
	NSDictionary* _assetTransferOptionsByKey;

}

@property (nonatomic,readonly) id<CKQueryOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKQueryOperationInfo * operationInfo; 
@property (nonatomic,copy) CKQueryCursor * resultsCursor;                                               //@synthesize resultsCursor=_resultsCursor - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                              //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) BOOL fetchAllResults;                                                      //@synthesize fetchAllResults=_fetchAllResults - In the implementation block
@property (nonatomic,copy) NSDictionary * assetTransferOptionsByKey;                                    //@synthesize assetTransferOptionsByKey=_assetTransferOptionsByKey - In the implementation block
@property (nonatomic,copy) id queryCursorFetchedBlock;                                                  //@synthesize queryCursorFetchedBlock=_queryCursorFetchedBlock - In the implementation block
@property (nonatomic,copy) CKQuery * query;                                                             //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) CKQueryCursor * cursor;                                                      //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                                                     //@synthesize zoneID=_zoneID - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                           //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                       //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                                       //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id queryCompletionBlock;                                                     //@synthesize queryCompletionBlock=_queryCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(SEL)daemonCallbackCompletionSelector;
-(id)init;
-(CKQuery *)query;
-(CKQueryCursor *)cursor;
-(void)setQuery:(CKQuery *)arg1 ;
-(CKRecordZoneID *)zoneID;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setQueryCompletionBlock:(id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(id)recordFetchedBlock;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(id)queryCursorFetchedBlock;
-(id)queryCompletionBlock;
-(void)setResultsCursor:(CKQueryCursor *)arg1 ;
-(CKQueryCursor *)resultsCursor;
-(void)setQueryCursorFetchedBlock:(id)arg1 ;
-(NSArray *)desiredKeys;
-(NSDictionary *)assetTransferOptionsByKey;
-(void)setAssetTransferOptionsByKey:(NSDictionary *)arg1 ;
-(BOOL)fetchAllResults;
-(void)setFetchAllResults:(BOOL)arg1 ;
-(void)handleOperationDidCompleteWithCursor:(id)arg1 metrics:(id)arg2 error:(id)arg3 ;
-(void)handleQueryDidFetchRecord:(id)arg1 ;
-(void)handleQueryDidFetchCursor:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithCursor:(id)arg1 ;
@end

