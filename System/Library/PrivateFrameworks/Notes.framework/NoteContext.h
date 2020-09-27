/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICLegacyContext.h>

@class NSManagedObjectContext, NoteStoreObject, NoteAccountObject, AccountUtilities, CPExclusiveLock, NSNumber, NSMutableDictionary, ICManagedObjectContextUpdater, ICSelectorDelayer;

@interface NoteContext : NSObject <ICLegacyContext> {

	NSManagedObjectContext* _managedObjectContext;
	NoteStoreObject* _localStore;
	NoteAccountObject* _localAccount;
	AccountUtilities* _accountUtilities;
	NSManagedObjectContext* _nextIdContext;
	CPExclusiveLock* _nextIdLock;
	NSNumber* _nextId;
	CPExclusiveLock* _objectCreationLock;
	unsigned long long _notificationCount;
	BOOL _logChanges;
	BOOL _indexInBatches;
	BOOL _hasPriorityInSaveConflicts;
	BOOL _inMigrator;
	NSMutableDictionary* _notePropertyObjectsRealized;
	BOOL _isMainContext;
	BOOL _usePrivateQueue;
	ICManagedObjectContextUpdater* _mocUpdater;
	ICSelectorDelayer* _externalChangeNotificationDelayer;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain) AccountUtilities * accountUtilities;                                 //@synthesize accountUtilities=_accountUtilities - In the implementation block
@property (assign,nonatomic) BOOL isMainContext;                                                  //@synthesize isMainContext=_isMainContext - In the implementation block
@property (assign,nonatomic) BOOL usePrivateQueue;                                                //@synthesize usePrivateQueue=_usePrivateQueue - In the implementation block
@property (nonatomic,retain) ICManagedObjectContextUpdater * mocUpdater;                          //@synthesize mocUpdater=_mocUpdater - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * externalChangeNotificationDelayer;               //@synthesize externalChangeNotificationDelayer=_externalChangeNotificationDelayer - In the implementation block
@property (nonatomic,retain,readonly) NSManagedObjectContext * managedObjectContext; 
+(id)persistentStoreCoordinator;
+(id)managedObjectModel;
+(id)storeOptions;
+(id)fileProtectionOption;
+(id)urlForPersistentStore;
+(id)pathForPersistentStore;
+(id)pathForIndex;
+(void)removeSqliteAndIdxFiles;
+(void)removeConflictingSqliteAndIdxFiles;
+(id)visibleNotesPredicate;
+(id)newFetchRequestForAccounts;
+(id)newFetchRequestForStores;
+(id)newFetchRequestForNotes;
+(id)defaultNotesSortDescriptors;
+(id)generateGUID;
+(id)newlyAddedAttachmentInContext:(id)arg1 ;
+(BOOL)databaseIsCorrupt:(id)arg1 ;
+(unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1 includingNoteWithoutBodyContent:(BOOL)arg2 context:(id)arg3 ;
+(unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2 context:(id)arg3 ;
+(id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2 context:(id)arg3 fetchLimit:(unsigned long long)arg4 ;
+(id)visibleNotesIncludingEmptyBodyContentPredicate;
+(BOOL)shouldLogIndexing;
+(void)setTestsNotesRootPath:(id)arg1 ;
+(void)clearTestsNotesRootPath;
+(id)fileURLProtectionOption;
+(unsigned long long)countOfVisibleNotesInCollectionIncludingNotesWithoutBodyContent:(id)arg1 ;
+(unsigned long long)countOfVisibleNotesInCollection:(id)arg1 ;
+(id)allVisibleNotesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)newManagedObjectContext;
+(id)newLegacyContext;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)reset;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(BOOL)save:(id*)arg1 ;
-(void)clearCaches;
-(id)localAccount;
-(id)nextIndex;
-(id)newlyAddedAccount;
-(AccountUtilities *)accountUtilities;
-(id)newlyAddedStore;
-(BOOL)forceDeleteAccount:(id)arg1 ;
-(void)_createLocalAccount:(id*)arg1 andStore:(id*)arg2 ;
-(void)setUpUniqueObjects;
-(BOOL)setUpLocalAccountAndStore;
-(BOOL)setUpLastIndexTid;
-(BOOL)saveSilently:(id*)arg1 ;
-(void)handleMigration;
-(BOOL)shouldObserveDarwinNotifications;
-(void)setMocUpdater:(ICManagedObjectContextUpdater *)arg1 ;
-(void)postNotesChangedExternally;
-(void)setExternalChangeNotificationDelayer:(ICSelectorDelayer *)arg1 ;
-(void)managedObjectContextWillSaveNotification:(id)arg1 ;
-(id)initWithAccountUtilities:(id)arg1 inMigrator:(BOOL)arg2 ;
-(id)initWithAccountUtilities:(id)arg1 inMigrator:(BOOL)arg2 isMainContext:(BOOL)arg3 usePrivateQueue:(BOOL)arg4 ;
-(BOOL)setUpCoreDataStack;
-(void)tearDownCoreDataStack;
-(id)visibleNotesPredicate;
-(id)newFRCForFetchRequest:(id)arg1 delegate:(id)arg2 performFetch:(BOOL)arg3 ;
-(id)newFRCForCollection:(id)arg1 delegate:(id)arg2 performFetch:(BOOL)arg3 ;
-(id)newFetchRequestForNotes;
-(id)newlyAddedNoteWithGUID:(id)arg1 ;
-(id)storeForObjectID:(id)arg1 ;
-(void)deleteNoteRegardlessOfConstraints:(id)arg1 ;
-(id)allVisibleNotesMatchingPredicate:(id)arg1 ;
-(unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1 ;
-(id)allVisibleNotesInCollection:(id)arg1 sorted:(BOOL)arg2 ;
-(id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2 ;
-(id)allNotesMatchingPredicate:(id)arg1 ;
-(unsigned long long)countOfNotesMatchingPredicate:(id)arg1 ;
-(id)liveNotesNeedingBodiesPredicate;
-(id)accountForAccountId:(id)arg1 ;
-(void)forceSetUpUniqueObjects;
-(id)allAccountsAsFaults:(BOOL)arg1 prefechedRelationshipKeyPaths:(id)arg2 ;
-(id)allAccounts;
-(id)localStore;
-(id)allNotesInCollection:(id)arg1 ;
-(unsigned long long)countOfStores;
-(unsigned long long)countOfNotesInCollection:(id)arg1 ;
-(id)_notePropertyObjectForKey:(id)arg1 ;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)getNextIdObject;
-(BOOL)isMainContext;
-(BOOL)usePrivateQueue;
-(ICManagedObjectContextUpdater *)mocUpdater;
-(void)trackChanges:(id)arg1 ;
-(id)noteChangeWithType:(int)arg1 store:(id)arg2 ;
-(unsigned long long)countOfVisibleNotesInCollection:(id)arg1 ;
-(id)initForMainContext;
-(id)initForMigrator;
-(id)initWithPrivateQueue;
-(id)initWithPrivateQueue:(BOOL)arg1 ;
-(id)initWithAccountUtilities:(id)arg1 ;
-(id)newFRCForAccountsWithDelegate:(id)arg1 ;
-(id)newFRCForStoresWithDelegate:(id)arg1 ;
-(id)newFRCForCollection:(id)arg1 delegate:(id)arg2 ;
-(void)sortNotes:(id)arg1 ;
-(void)batchFaultNotes:(id)arg1 ;
-(id)newlyAddedNote;
-(id)newlyAddedAttachment;
-(id)collectionForObjectID:(id)arg1 ;
-(void)deleteNote:(id)arg1 ;
-(void)deleteChanges:(id)arg1 ;
-(void)enableChangeLogging:(BOOL)arg1 ;
-(BOOL)saveOutsideApp:(id*)arg1 ;
-(id)allVisibleNotes;
-(unsigned long long)countOfVisibleNotes;
-(id)allVisibleNotesInCollection:(id)arg1 ;
-(id)visibleNoteForObjectID:(id)arg1 ;
-(id)visibleNotesForIntegerIds:(id)arg1 ;
-(id)mostRecentlyModifiedNoteInCollection:(id)arg1 ;
-(id)allNotes;
-(unsigned long long)countOfNotes;
-(id)noteForObjectID:(id)arg1 ;
-(id)notesForIntegerIds:(id)arg1 ;
-(id)allNotesWithoutBodiesInCollection:(id)arg1 ;
-(id)collectionForInfo:(id)arg1 ;
-(id)allStores;
-(id)faultedInStoresForAccounts:(id)arg1 ;
-(id)defaultStoreForNewNote;
-(BOOL)deleteAccount:(id)arg1 ;
-(BOOL)deleteStore:(id)arg1 ;
-(BOOL)shouldDisableLocalStore;
-(BOOL)hasMultipleEnabledStores;
-(id)propertyValueForKey:(id)arg1 ;
-(void)setHasPriorityInSaveConflicts:(BOOL)arg1 ;
-(void)receiveDarwinNotificationWithChangeLogging:(BOOL)arg1 ;
-(void)resetNotificationCount;
-(void)cleanUpLocks;
-(void)updateForRecentChanges;
-(void)setAccountUtilities:(AccountUtilities *)arg1 ;
-(void)setIsMainContext:(BOOL)arg1 ;
-(void)setUsePrivateQueue:(BOOL)arg1 ;
-(ICSelectorDelayer *)externalChangeNotificationDelayer;
-(id)allVisibleNotesForAccountWithObjectID:(id)arg1 ;
-(BOOL)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1 ;
-(unsigned long long)countOfVisibleNotesForAccountWithObjectID:(id)arg1 ;
-(id)allVisibleNoteObjectIDsForAccountWithObjectID:(id)arg1 ;
@end

