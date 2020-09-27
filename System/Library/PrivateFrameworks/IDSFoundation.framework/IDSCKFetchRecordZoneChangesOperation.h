/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKFetchRecordZoneChangesOperation : IDSCKDatabaseOperation {

	BOOL _fetchAllChanges;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _recordWithIDWasDeletedBlock;
	/*^block*/id _recordZoneChangeTokensUpdatedBlock;
	/*^block*/id _recordZoneFetchCompletionBlock;
	/*^block*/id _fetchRecordZoneChangesCompletionBlock;

}

@property (assign,nonatomic) BOOL fetchAllChanges;                                //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                 //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordWithIDWasDeletedBlock;                        //@synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                 //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                     //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordZoneChangesCompletionBlock;              //@synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock - In the implementation block
+(id)alloc;
+(Class)__class;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setRecordWithIDWasDeletedBlock:(id)arg1 ;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(void)setFetchRecordZoneChangesCompletionBlock:(id)arg1 ;
-(BOOL)fetchAllChanges;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(id)recordZoneChangeTokensUpdatedBlock;
-(id)recordZoneFetchCompletionBlock;
-(id)recordChangedBlock;
-(id)recordWithIDWasDeletedBlock;
-(id)fetchRecordZoneChangesCompletionBlock;
@end

