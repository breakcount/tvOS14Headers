/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <DataAccess/DAAccount.h>
#import <libobjc.A.dylib/CDBAccountInfo.h>

@class NSMutableDictionary, NSMutableSet, NSMutableArray, CalDAVServerVersion, NSString, MobileCalDAVPrincipal, NSDictionary, CalDAVPrincipalSearchPropertySet, CalDAVRefreshContext, CoreDAVDiscoveryTaskGroup, MobileCalDAVAccountRefreshActor, DACoreDAVLogger, DACoreDAVTaskManager, NSURL, NSSet, NSTimeZone, NSArray;

@interface MobileCalDAVAccount : DAAccount <CDBAccountInfo> {

	int _wasMigrated;
	NSMutableDictionary* _principals;
	NSMutableDictionary* _itemIDsToMoveActions;
	NSMutableSet* _mMovedItemURLStrings;
	NSMutableSet* _calendars;
	NSMutableArray* _duplicateCalendars;
	CalDAVServerVersion* _serverVersion;
	NSString* _usernameForDiscovery;
	NSString* _hostForDiscovery;
	BOOL _needsAccountPropertyRefresh;
	BOOL _isRefreshing;
	BOOL _searchQueriesShouldCancel;
	BOOL _isSpinning;
	BOOL _subscribedCalendarsChanged;
	int _preferredEventDaysToSync;
	int _preferredToDoDaysToSync;
	NSMutableSet* _movedItemURLStrings;
	MobileCalDAVPrincipal* _mainPrincipal;
	NSDictionary* _delegateUserInfos;
	CalDAVPrincipalSearchPropertySet* _searchPropertySet;
	CalDAVRefreshContext* _refreshContext;
	CoreDAVDiscoveryTaskGroup* _checkValidityTaskGroup;
	MobileCalDAVAccountRefreshActor* _actor;
	NSMutableSet* _searchTaskSet;
	DACoreDAVLogger* _coreDAVLogger;

}

@property (nonatomic,retain) CoreDAVDiscoveryTaskGroup * checkValidityTaskGroup;                //@synthesize checkValidityTaskGroup=_checkValidityTaskGroup - In the implementation block
@property (nonatomic,retain) MobileCalDAVAccountRefreshActor * actor;                           //@synthesize actor=_actor - In the implementation block
@property (assign,nonatomic) BOOL isSpinning;                                                   //@synthesize isSpinning=_isSpinning - In the implementation block
@property (nonatomic,retain) NSMutableSet * searchTaskSet;                                      //@synthesize searchTaskSet=_searchTaskSet - In the implementation block
@property (nonatomic,retain) DACoreDAVLogger * coreDAVLogger;                                   //@synthesize coreDAVLogger=_coreDAVLogger - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mPrincipals;                                 //@synthesize principals=_principals - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mItemIDsToMoveActions;                       //@synthesize itemIDsToMoveActions=_itemIDsToMoveActions - In the implementation block
@property (nonatomic,retain) NSMutableSet * mMovedItemURLStrings;                               //@synthesize movedItemURLStrings=_movedItemURLStrings - In the implementation block
@property (nonatomic,retain) NSMutableSet * mCalendars;                                         //@synthesize calendars=_calendars - In the implementation block
@property (assign,nonatomic) BOOL subscribedCalendarsChanged;                                   //@synthesize subscribedCalendarsChanged=_subscribedCalendarsChanged - In the implementation block
@property (nonatomic,retain) MobileCalDAVPrincipal * mainPrincipal;                             //@synthesize mainPrincipal=_mainPrincipal - In the implementation block
@property (nonatomic,readonly) NSDictionary * principals; 
@property (nonatomic,retain) NSDictionary * delegateUserInfos;                                  //@synthesize delegateUserInfos=_delegateUserInfos - In the implementation block
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager; 
@property (nonatomic,retain) NSURL * collectionSetURL; 
@property (nonatomic,retain) CalDAVPrincipalSearchPropertySet * searchPropertySet;              //@synthesize searchPropertySet=_searchPropertySet - In the implementation block
@property (nonatomic,retain) NSString * overriddenServer; 
@property (nonatomic,retain) NSString * overriddenScheme; 
@property (assign,nonatomic) int overriddenPort; 
@property (assign,nonatomic) BOOL isWritable; 
@property (assign,nonatomic) BOOL wasMigrated; 
@property (assign,nonatomic) BOOL needsAccountPropertyRefresh;                                  //@synthesize needsAccountPropertyRefresh=_needsAccountPropertyRefresh - In the implementation block
@property (assign,nonatomic) BOOL isRefreshing;                                                 //@synthesize isRefreshing=_isRefreshing - In the implementation block
@property (nonatomic,readonly) NSDictionary * itemIDsToMoveActions; 
@property (nonatomic,readonly) NSSet * movedItemURLStrings; 
@property (nonatomic,copy) NSString * calendarHomeSyncToken; 
@property (nonatomic,retain) CalDAVServerVersion * serverVersion;                               //@synthesize serverVersion=_serverVersion - In the implementation block
@property (assign,nonatomic) int preferredEventDaysToSync;                                      //@synthesize preferredEventDaysToSync=_preferredEventDaysToSync - In the implementation block
@property (assign,nonatomic) int preferredToDoDaysToSync;                                       //@synthesize preferredToDoDaysToSync=_preferredToDoDaysToSync - In the implementation block
@property (nonatomic,readonly) NSTimeZone * viewedTimeZone; 
@property (nonatomic,readonly) BOOL shouldFilterEventSyncTimeRange; 
@property (nonatomic,readonly) BOOL shouldFilterSyncTimeRangeForInbox; 
@property (nonatomic,readonly) BOOL shouldUseCalendarHomeSyncReport; 
@property (nonatomic,readonly) BOOL supportsReminders; 
@property (nonatomic,readonly) BOOL supportsEvents; 
@property (nonatomic,retain) CalDAVRefreshContext * refreshContext;                             //@synthesize refreshContext=_refreshContext - In the implementation block
@property (nonatomic,readonly) NSURL * serverBaseURL; 
@property (nonatomic,readonly) NSArray * wellKnownPaths; 
@property (nonatomic,readonly) NSSet * calendars; 
@property (nonatomic,retain) NSDictionary * subscribedCalendars; 
@property (nonatomic,readonly) NSArray * duplicateCalendars; 
@property (assign,nonatomic) BOOL searchQueriesShouldCancel;                                    //@synthesize searchQueriesShouldCancel=_searchQueriesShouldCancel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)host;
-(id)username;
-(id)logHandle;
-(id)accountDescription;
-(void)setAccountDescription:(id)arg1 ;
-(id)emailAddresses;
-(id)principalPath;
-(void)setPrincipalPath:(id)arg1 ;
-(id)preferredAddress;
-(BOOL)isWritable;
-(DACoreDAVTaskManager *)taskManager;
-(void)releasePowerAssertion;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setPrincipalURL:(id)arg1 ;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(BOOL)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1 ;
-(void)coreDAVTransmittedDataFinished;
-(BOOL)addressIsAccountOwner:(id)arg1 ;
-(NSSet *)calendars;
-(BOOL)wasMigrated;
-(void)setWasMigrated:(BOOL)arg1 ;
-(void)retainPowerAssertion;
-(BOOL)isSpinning;
-(BOOL)isRefreshing;
-(void)ingestBackingAccountInfoProperties;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)removeFromCoreDAVLoggingDelegates;
-(void)addToCoreDAVLoggingDelegates;
-(BOOL)accountHasSignificantPropertyChangesWithChangeInfo:(id)arg1 ;
-(id)onBehalfOfBundleIdentifier;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(BOOL)isDelegateAccount;
-(BOOL)upgradeAccount;
-(id)spinnerIdentifiers;
-(BOOL)saveModifiedPropertiesOnBackingAccount;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(BOOL)isCalDAVAccount;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(BOOL)shouldUseCalendarHomeSyncReport;
-(void)calendarsDataclassModified;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(BOOL)_reallySearchQueriesRunning;
-(CalDAVServerVersion *)serverVersion;
-(void)setCollectionSetURL:(NSURL *)arg1 ;
-(void)setServerVersion:(CalDAVServerVersion *)arg1 ;
-(void)setSearchPropertySet:(CalDAVPrincipalSearchPropertySet *)arg1 ;
-(NSString *)calendarHomeSyncToken;
-(void)removeCalendar:(id)arg1 ;
-(void)setCalendarHomeSyncToken:(NSString *)arg1 ;
-(void)setMPrincipals:(NSMutableDictionary *)arg1 ;
-(MobileCalDAVPrincipal *)mainPrincipal;
-(void)setMainPrincipal:(MobileCalDAVPrincipal *)arg1 ;
-(void)setIsWritable:(BOOL)arg1 ;
-(NSMutableDictionary *)mPrincipals;
-(void)addPrincipal:(id)arg1 ;
-(void)setNeedsAccountPropertyRefresh:(BOOL)arg1 ;
-(void)setCoreDAVLogger:(DACoreDAVLogger *)arg1 ;
-(void)setSearchTaskSet:(NSMutableSet *)arg1 ;
-(void)_setSpinning:(BOOL)arg1 ;
-(NSDictionary *)subscribedCalendars;
-(void)setSubscribedCalendars:(NSDictionary *)arg1 ;
-(void)setSubscribedCalendarsChanged:(BOOL)arg1 ;
-(NSString *)overriddenServer;
-(int)overriddenPort;
-(NSString *)overriddenScheme;
-(void)_updateCalendarStore:(BOOL)arg1 ;
-(CalDAVPrincipalSearchPropertySet *)searchPropertySet;
-(void*)copyCalStore;
-(NSMutableSet *)mCalendars;
-(void)_foundDuplicateCalendar:(id)arg1 ofCalendar:(id)arg2 ;
-(void)setMCalendars:(NSMutableSet *)arg1 ;
-(void)_foundDuplicateCalendars:(int)arg1 ;
-(void)_logDuplicateCalendarDetails:(void*)arg1 ;
-(int)preferredEventDaysToSync;
-(BOOL)shouldFilterEventSyncTimeRange;
-(id)_calendarConstraintsName;
-(BOOL)supportsReminders;
-(BOOL)supportsEvents;
-(BOOL)_updateCalendarStoreProperties:(void*)arg1 ;
-(CalDAVRefreshContext *)refreshContext;
-(BOOL)_updateCalendarStoreNoDBOpen:(BOOL)arg1 ;
-(void)setIsSpinning:(BOOL)arg1 ;
-(MobileCalDAVAccountRefreshActor *)actor;
-(void)_clearOrphanedCalendarItemChangesOfType:(int)arg1 withContext:(id)arg2 goodCalendarIds:(id)arg3 ;
-(void)_clearOrphanedChangesWithChangesCall:(/*function pointer*/void*)arg1 entityType:(int)arg2 withContext:(id)arg3 ;
-(NSDictionary *)principals;
-(BOOL)_saveModifiedPrincipalsOnBackingAccount;
-(void)_syncEndedWithError:(id)arg1 ;
-(BOOL)subscribedCalendarsChanged;
-(BOOL)_saveModifiedSubscribedCalendarsOnBackingAccount;
-(void)_clearOrphanedChangesWithContext:(id)arg1 ;
-(NSMutableDictionary *)mItemIDsToMoveActions;
-(NSMutableSet *)mMovedItemURLStrings;
-(void)setRefreshContext:(CalDAVRefreshContext *)arg1 ;
-(void)setIsRefreshing:(BOOL)arg1 ;
-(void)setActor:(MobileCalDAVAccountRefreshActor *)arg1 ;
-(void)setMItemIDsToMoveActions:(NSMutableDictionary *)arg1 ;
-(void)setMMovedItemURLStrings:(NSMutableSet *)arg1 ;
-(id)_collectActionsFromMoveDictionary:(CFDictionaryRef)arg1 forDataclass:(id)arg2 outShouldSave:(BOOL*)arg3 ;
-(void)_collectMoveActions;
-(void)_syncStarted;
-(NSDictionary *)delegateUserInfos;
-(id)childAccountWithIdentifier:(id)arg1 ;
-(void)_setParentAccount:(id)arg1 ;
-(void)setIsDelegateAccount:(BOOL)arg1 ;
-(void)setDelegatePrincipalPath:(id)arg1 ;
-(NSMutableSet *)searchTaskSet;
-(NSURL *)collectionSetURL;
-(CoreDAVDiscoveryTaskGroup *)checkValidityTaskGroup;
-(BOOL)retryDiscoveryTask:(id)arg1 ;
-(void)setCheckValidityTaskGroup:(CoreDAVDiscoveryTaskGroup *)arg1 ;
-(void)performDiscoveryWithHostname:(id)arg1 username:(id)arg2 consumer:(id)arg3 ;
-(NSArray *)wellKnownPaths;
-(id)_powerAssertionContext;
-(id)_powerAssertionGroupIdentifier;
-(id)delegatePrincipalPath;
-(DACoreDAVLogger *)coreDAVLogger;
-(NSSet *)movedItemURLStrings;
-(NSDictionary *)itemIDsToMoveActions;
-(void)setOverriddenServer:(NSString *)arg1 ;
-(void)setOverriddenPort:(int)arg1 ;
-(void)setOverriddenScheme:(NSString *)arg1 ;
-(NSURL *)serverBaseURL;
-(void)addCalendar:(id)arg1 ;
-(void)removeCalendarWithURL:(id)arg1 ;
-(NSArray *)duplicateCalendars;
-(void)reloadCalendars;
-(void)removePrincipal:(id)arg1 ;
-(NSTimeZone *)viewedTimeZone;
-(BOOL)shouldFilterSyncTimeRangeForInbox;
-(void)cancelRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)refreshActor:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)refreshWithContext:(id)arg1 ;
-(void)updateDelegates;
-(void)dropPowerAssertions;
-(void)reattainPowerAssertions;
-(void)setPreferredEventDaysToSync:(int)arg1 ;
-(int)preferredToDoDaysToSync;
-(void)setPreferredToDoDaysToSync:(int)arg1 ;
-(void)setDelegateUserInfos:(NSDictionary *)arg1 ;
-(BOOL)needsAccountPropertyRefresh;
-(BOOL)searchQueriesShouldCancel;
-(void)setSearchQueriesShouldCancel:(BOOL)arg1 ;
@end

