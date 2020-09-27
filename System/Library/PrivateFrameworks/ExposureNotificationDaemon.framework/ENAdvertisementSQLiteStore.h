/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
@class NSNumber, NSString;

@interface ENAdvertisementSQLiteStore : NSObject {

	sqlite3Ref _database;
	sqlite3_stmt* _preparedStatements;
	NSNumber* _storedAdvertisementCount;
	NSString* _databasePath;

}

@property (nonatomic,retain) NSString * databasePath;                            //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) NSNumber * storedAdvertisementCount;              //@synthesize storedAdvertisementCount=_storedAdvertisementCount - In the implementation block
+(id)temporaryStorePathsInFolderPath:(id)arg1 ;
+(BOOL)isCentralStore:(id)arg1 ;
+(BOOL)isTemporaryStore:(id)arg1 ;
+(BOOL)isStore:(id)arg1 ;
+(id)storePathsInFolderPath:(id)arg1 ;
+(id)errorForSQLiteResult:(int)arg1 ;
+(id)statementStringForStatementType:(unsigned long long)arg1 ;
+(SCD_Struct_EN6)advertisementForSQLiteStatement:(sqlite3_stmtRef)arg1 ;
+(BOOL)removeAllDatabaseFilesWithDatabasePath:(id)arg1 ;
+(id)centralStoreInFolderPath:(id)arg1 error:(id*)arg2 ;
+(id)temporaryStoreInFolderPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)temporaryStoresPresentInFolderPath:(id)arg1 ;
+(id)temporaryStoresInFolderPath:(id)arg1 ;
+(void)enumerateTemporaryStoresInFolderPath:(id)arg1 handler:(/*^block*/id)arg2 ;
+(BOOL)storesPresentInFolderPath:(id)arg1 ;
+(BOOL)removeAllStoresFromDiskWithFolderPath:(id)arg1 ;
+(BOOL)removeAllTemporaryStoresFromDiskWithFolderPath:(id)arg1 lastModifiedBeforeDate:(id)arg2 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(NSString *)databasePath;
-(int)closeDatabase;
-(void)setDatabasePath:(NSString *)arg1 ;
-(int)openDatabase;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(id)queryFilterWithBufferSize:(unsigned long long)arg1 hashCount:(unsigned long long)arg2 attenuationThreshold:(unsigned char)arg3 ;
-(NSNumber *)storedAdvertisementCount;
-(BOOL)connectToDatabaseAndReturnError:(id*)arg1 ;
-(void)disconnectFromDatabase;
-(BOOL)saveContactTracingAdvertisementBuffer:(SCD_Struct_EN6*)arg1 count:(unsigned long long)arg2 error:(id*)arg3 ;
-(int)enumerateAdvertisments:(/*^block*/id)arg1 ;
-(int)configureDatabase;
-(int)migrateDatabase;
-(int)initializeAdvertisementTable;
-(int)initializeRPIBufferModule;
-(int)initializePreparedStatements;
-(BOOL)refreshStoredAdvertismentCountWithError:(id*)arg1 ;
-(BOOL)purgeAndRemoveFromDisk:(BOOL)arg1 ;
-(void)enumeratePreparedStatements:(/*^block*/id)arg1 ;
-(int)migrateFromVersion:(int)arg1 ;
-(BOOL)transactionNeededForMigrationFromVersion:(int)arg1 ;
-(int)beginDatabaseTransaction;
-(int)setVersionCurrent;
-(int)endDatabaseTransaction;
-(int)rollbackDatabaseTransaction;
-(sqlite3_stmtRef)preparedStatementOfType:(unsigned long long)arg1 ;
-(int)bindAdvertisement:(SCD_Struct_EN6)arg1 toSQLiteStatement:(sqlite3_stmtRef)arg2 ;
-(int)bindRPIBuffer:(const void*)arg1 count:(unsigned long long)arg2 validityBuffer:(const void*)arg3 validRPICount:(unsigned long long)arg4 toSQLiteStatement:(sqlite3_stmtRef)arg5 ;
-(int)checkpointWAL;
-(BOOL)importContentsOfStore:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)getAdvertisementsMatchingRPIBuffer:(const void*)arg1 count:(unsigned long long)arg2 validityBuffer:(const void*)arg3 validRPICount:(unsigned long long)arg4 matchingAdvertisementBuffer:(/*function pointer*/void**)arg5 error:(id*)arg6 ;
-(BOOL)purgeAdvertismentsRecordedPriorToDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)cloneStoreTo:(id)arg1 ;
@end

