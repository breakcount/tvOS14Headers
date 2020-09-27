/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group;
@class CKDDecryptRecordsOperation, NSArray, NSMutableDictionary, NSSet, NSDictionary, NSObject, NSMapTable, CKDRecordCache, NSMutableArray;

@interface CKDFetchRecordsOperation : CKDDatabaseOperation {

	CKDDecryptRecordsOperation* _decryptOperation;
	BOOL _useCachedEtags;
	BOOL _useRecordCache;
	BOOL _forcePCSDecrypt;
	BOOL _skipDecryption;
	BOOL _shouldFetchAssetContent;
	BOOL _shouldFetchAssetContentInMemory;
	BOOL _shouldRollSharePCSOnFetch;
	NSArray* _fullRecordsToFetch;
	/*^block*/id _recordFetchProgressBlock;
	/*^block*/id _recordFetchCommandBlock;
	/*^block*/id _recordFetchCompletionBlock;
	NSArray* _recordIDsToFetch;
	NSMutableDictionary* _cachedRecords;
	NSSet* _desiredKeySet;
	NSDictionary* _recordIDsToETags;
	NSDictionary* _recordIDsToVersionETags;
	NSDictionary* _desiredPackageFileIndices;
	NSObject*<OS_dispatch_group> _fetchRecordsGroup;
	NSMutableDictionary* _errorsByRecordID;
	NSMapTable* _downloadTasksByRecordID;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;
	NSSet* _assetFieldNamesToPublishURLs;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	CKDRecordCache* _cache;
	NSMutableArray* _recordIDsToRefetch;
	NSMutableDictionary* _keyOrErrorForHostname;
	NSMutableDictionary* _shareRecordsToUpdateByRecordID;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSArray * recordIDsToFetch;                                                     //@synthesize recordIDsToFetch=_recordIDsToFetch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedRecords;                                            //@synthesize cachedRecords=_cachedRecords - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeySet;                                                          //@synthesize desiredKeySet=_desiredKeySet - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToETags;                                                //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToVersionETags;                                         //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (nonatomic,retain) NSDictionary * desiredPackageFileIndices;                                       //@synthesize desiredPackageFileIndices=_desiredPackageFileIndices - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchRecordsGroup;                                 //@synthesize fetchRecordsGroup=_fetchRecordsGroup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByRecordID;                                         //@synthesize errorsByRecordID=_errorsByRecordID - In the implementation block
@property (nonatomic,retain) NSMapTable * downloadTasksByRecordID;                                           //@synthesize downloadTasksByRecordID=_downloadTasksByRecordID - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;                          //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                                   //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;                                           //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,retain) NSSet * assetFieldNamesToPublishURLs;                                           //@synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                                                //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                                                  //@synthesize URLOptions=_URLOptions - In the implementation block
@property (nonatomic,retain) CKDRecordCache * cache;                                                         //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) CKDDecryptRecordsOperation * recordDecryptOperation; 
@property (nonatomic,readonly) BOOL hasRecordDecryptOperation; 
@property (nonatomic,retain) NSMutableArray * recordIDsToRefetch;                                            //@synthesize recordIDsToRefetch=_recordIDsToRefetch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyOrErrorForHostname;                                    //@synthesize keyOrErrorForHostname=_keyOrErrorForHostname - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareRecordsToUpdateByRecordID;                           //@synthesize shareRecordsToUpdateByRecordID=_shareRecordsToUpdateByRecordID - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;                                //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
@property (assign,nonatomic) BOOL shouldRollSharePCSOnFetch;                                                 //@synthesize shouldRollSharePCSOnFetch=_shouldRollSharePCSOnFetch - In the implementation block
@property (nonatomic,retain) id<CKFetchRecordsOperationCallbacks> clientOperationCallbackProxy; 
@property (assign,nonatomic) BOOL useCachedEtags;                                                            //@synthesize useCachedEtags=_useCachedEtags - In the implementation block
@property (assign,nonatomic) BOOL useRecordCache;                                                            //@synthesize useRecordCache=_useRecordCache - In the implementation block
@property (assign,nonatomic) BOOL forcePCSDecrypt;                                                           //@synthesize forcePCSDecrypt=_forcePCSDecrypt - In the implementation block
@property (assign,nonatomic) BOOL skipDecryption;                                                            //@synthesize skipDecryption=_skipDecryption - In the implementation block
@property (nonatomic,retain) NSArray * fullRecordsToFetch;                                                   //@synthesize fullRecordsToFetch=_fullRecordsToFetch - In the implementation block
@property (nonatomic,copy) id recordFetchProgressBlock;                                                      //@synthesize recordFetchProgressBlock=_recordFetchProgressBlock - In the implementation block
@property (nonatomic,copy) id recordFetchCommandBlock;                                                       //@synthesize recordFetchCommandBlock=_recordFetchCommandBlock - In the implementation block
@property (nonatomic,copy) id recordFetchCompletionBlock;                                                    //@synthesize recordFetchCompletionBlock=_recordFetchCompletionBlock - In the implementation block
-(void)main;
-(CKDRecordCache *)cache;
-(int)operationType;
-(void)finishWithError:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(BOOL)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(unsigned long long)requestedTTL;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(unsigned long long)URLOptions;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(NSDictionary *)recordIDsToETags;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
-(NSDictionary *)recordIDsToVersionETags;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(NSDictionary *)desiredPackageFileIndices;
-(void)setDesiredPackageFileIndices:(NSDictionary *)arg1 ;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(NSSet *)assetFieldNamesToPublishURLs;
-(void)setAssetFieldNamesToPublishURLs:(NSSet *)arg1 ;
-(void)setCache:(CKDRecordCache *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecordFetchProgressBlock:(id)arg1 ;
-(void)setRecordFetchCommandBlock:(id)arg1 ;
-(void)setRecordFetchCompletionBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(NSObject*<OS_dispatch_group>)fetchRecordsGroup;
-(NSSet *)desiredKeySet;
-(void)setDesiredKeySet:(NSSet *)arg1 ;
-(void)setFetchRecordsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setUseCachedEtags:(BOOL)arg1 ;
-(void)setSkipDecryption:(BOOL)arg1 ;
-(void)setFullRecordsToFetch:(NSArray *)arg1 ;
-(void)setForcePCSDecrypt:(BOOL)arg1 ;
-(NSMutableDictionary *)keyOrErrorForHostname;
-(BOOL)supportsClearAssetEncryption;
-(void)setKeyOrErrorForHostname:(NSMutableDictionary *)arg1 ;
-(id)desiredIndexedListKeys;
-(BOOL)useRecordCache;
-(void)setUseRecordCache:(BOOL)arg1 ;
-(id)recordFetchCompletionBlock;
-(id)recordFetchProgressBlock;
-(id)recordFetchCommandBlock;
-(NSArray *)recordIDsToFetch;
-(NSArray *)fullRecordsToFetch;
-(void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2 ;
-(NSMutableArray *)recordIDsToRefetch;
-(void)_fetchCloudCerts;
-(void)_saveUpdatedShareRecords;
-(void)_downloadAssets;
-(NSMutableDictionary *)shareRecordsToUpdateByRecordID;
-(void)_continueHandleFetchedRecord:(id)arg1 recordID:(id)arg2 ;
-(BOOL)useCachedEtags;
-(void)_findSpecialParticipantsOnShare:(id)arg1 identityDelegate:(id)arg2 ;
-(NSMutableDictionary *)cachedRecords;
-(void)_handleRecordFetch:(id)arg1 recordID:(id)arg2 etagMatched:(BOOL)arg3 responseCode:(id)arg4 ;
-(BOOL)hasRecordDecryptOperation;
-(CKDDecryptRecordsOperation *)recordDecryptOperation;
-(NSMutableDictionary *)errorsByRecordID;
-(id)errorForRecordID:(id)arg1 ;
-(BOOL)shouldRollSharePCSOnFetch;
-(void)setShouldRollSharePCSOnFetch:(BOOL)arg1 ;
-(void)_addDownloadTaskForRecord:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)forcePCSDecrypt;
-(void)setError:(id)arg1 forRecordID:(id)arg2 ;
-(void)_handleSharePCSPrepForShare:(id)arg1 recordID:(id)arg2 ;
-(void)_decryptPropertiesIfNeededForRecord:(id)arg1 record:(id)arg2 ;
-(BOOL)skipDecryption;
-(void)_decryptPropertiesOnRecord:(id)arg1 recordID:(id)arg2 ;
-(int)_prepareAsset:(id)arg1 record:(id)arg2 recordKey:(id)arg3 assetTransferOptions:(id)arg4 ;
-(NSMapTable *)downloadTasksByRecordID;
-(void)_finishAllDownloadTasksWithError:(id)arg1 ;
-(void)_didDownloadAssetsWithError:(id)arg1 ;
-(void)setRecordIDsToFetch:(NSArray *)arg1 ;
-(void)setCachedRecords:(NSMutableDictionary *)arg1 ;
-(void)setErrorsByRecordID:(NSMutableDictionary *)arg1 ;
-(void)setDownloadTasksByRecordID:(NSMapTable *)arg1 ;
-(void)setRecordIDsToRefetch:(NSMutableArray *)arg1 ;
-(void)setShareRecordsToUpdateByRecordID:(NSMutableDictionary *)arg1 ;
@end

