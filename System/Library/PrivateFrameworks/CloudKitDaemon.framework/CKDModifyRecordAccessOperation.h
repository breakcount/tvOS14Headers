/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableSet, NSMutableDictionary;

@interface CKDModifyRecordAccessOperation : CKDDatabaseOperation {

	int _numSaveAttempts;
	/*^block*/id _accessWasGrantedBlock;
	/*^block*/id _accessWasRevokedBlock;
	NSArray* _recordIDsToGrant;
	NSArray* _recordIDsToRevoke;
	NSMutableSet* _fetchedRecordIDs;
	NSMutableDictionary* _recordsToSaveByID;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSArray * recordIDsToGrant;                                                           //@synthesize recordIDsToGrant=_recordIDsToGrant - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToRevoke;                                                          //@synthesize recordIDsToRevoke=_recordIDsToRevoke - In the implementation block
@property (nonatomic,retain) NSMutableSet * fetchedRecordIDs;                                                      //@synthesize fetchedRecordIDs=_fetchedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordsToSaveByID;                                              //@synthesize recordsToSaveByID=_recordsToSaveByID - In the implementation block
@property (assign,nonatomic) int numSaveAttempts;                                                                  //@synthesize numSaveAttempts=_numSaveAttempts - In the implementation block
@property (nonatomic,retain) id<CKModifyRecordAccessOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id accessWasGrantedBlock;                                                               //@synthesize accessWasGrantedBlock=_accessWasGrantedBlock - In the implementation block
@property (nonatomic,copy) id accessWasRevokedBlock;                                                               //@synthesize accessWasRevokedBlock=_accessWasRevokedBlock - In the implementation block
+(long long)isPredominatelyDownload;
-(void)main;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)recordIDsToGrant;
-(void)setRecordIDsToGrant:(NSArray *)arg1 ;
-(NSArray *)recordIDsToRevoke;
-(void)setRecordIDsToRevoke:(NSArray *)arg1 ;
-(NSMutableDictionary *)recordsToSaveByID;
-(void)setRecordsToSaveByID:(NSMutableDictionary *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setAccessWasGrantedBlock:(id)arg1 ;
-(void)setAccessWasRevokedBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(void)_fetchRecords;
-(void)_saveRecords;
-(int)numSaveAttempts;
-(void)setNumSaveAttempts:(int)arg1 ;
-(void)_handleRecordSaved:(id)arg1 error:(id)arg2 ;
-(PCSIdentityDataRef)_copyShareProtectionFromRecord:(id)arg1 error:(id*)arg2 ;
-(void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3 ;
-(NSMutableSet *)fetchedRecordIDs;
-(void)setFetchedRecordIDs:(NSMutableSet *)arg1 ;
-(id)accessWasGrantedBlock;
-(id)accessWasRevokedBlock;
@end

