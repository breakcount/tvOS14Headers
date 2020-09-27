/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PPSQLDatabase, PPContactStorage;

@interface PPSourceStorage : NSObject {

	PPSQLDatabase* _db;
	PPContactStorage* _contactStorage;

}
+(double)matchAccuracyForSecondsFrom1970;
-(id)init;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)iterSourcesWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)whereSourceIdInSubclauseWithSourceIds:(id)arg1 tableNameAlias:(id)arg2 binders:(id)arg3 ;
-(id)loadSourcesWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 txnWitness:(id)arg4 ;
-(id)createSourceWithStatement:(id)arg1 txnWitness:(id)arg2 ;
-(long long)updateOrCreateRowForSource:(id)arg1 addingRefCount:(long long)arg2 txnWitness:(id)arg3 ;
-(long long)pruneSourcesWithNoReferencesWithTxnWitness:(id)arg1 ;
@end

