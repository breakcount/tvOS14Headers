/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICCloudAvailability.h>

@protocol OS_dispatch_queue;
@class ICConnectionConfiguration, NSXPCConnection, ICCloudServerListenerEndpointProvider, NSObject, ICCloudClientAvailabilityService, ICCloudClientCloudService, NSString;

@interface ICCloudClient : NSObject <ICCloudAvailability> {

	BOOL _active;
	ICConnectionConfiguration* _configuration;
	/*^block*/id _updateSagaInProgressChangedHandler;
	/*^block*/id _updateJaliscoInProgressChangedHandler;
	NSXPCConnection* _xpcConnection;
	ICCloudServerListenerEndpointProvider* _listenerEndpointProvider;
	NSObject*<OS_dispatch_queue> _serialAccessQueue;
	long long _preferredVideoQuality;
	ICCloudClientAvailabilityService* _availabilityService;
	ICCloudClientCloudService* _cloudService;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialAccessQueue;                                //@synthesize serialAccessQueue=_serialAccessQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) long long preferredVideoQuality;                                                 //@synthesize preferredVideoQuality=_preferredVideoQuality - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                     //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) ICCloudClientAvailabilityService * availabilityService;                        //@synthesize availabilityService=_availabilityService - In the implementation block
@property (nonatomic,readonly) ICCloudClientCloudService * cloudService;                                      //@synthesize cloudService=_cloudService - In the implementation block
@property (nonatomic,readonly) ICCloudServerListenerEndpointProvider * listenerEndpointProvider;              //@synthesize listenerEndpointProvider=_listenerEndpointProvider - In the implementation block
@property (nonatomic,readonly) ICConnectionConfiguration * configuration;                                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) id updateSagaInProgressChangedHandler;                                             //@synthesize updateSagaInProgressChangedHandler=_updateSagaInProgressChangedHandler - In the implementation block
@property (nonatomic,copy) id updateJaliscoInProgressChangedHandler;                                          //@synthesize updateJaliscoInProgressChangedHandler=_updateJaliscoInProgressChangedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(ICConnectionConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)isActive;
-(BOOL)isAuthenticated;
-(void)setActive:(BOOL)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(long long)preferredVideoQuality;
-(void)setPreferredVideoQuality:(long long)arg1 ;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(ICCloudServerListenerEndpointProvider *)listenerEndpointProvider;
-(void)listCloudServerOperations;
-(id)initWithUserIdentity:(id)arg1 ;
-(void)authenticateAndStartInitialImport:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enableCloudLibraryWithPolicy:(long long)arg1 startinitialImport:(BOOL)arg2 isExplicitUserAction:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_isAuthenticated;
-(void)disableCloudLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadScreenshotInfoForSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serialAccessQueue;
-(void)uploadCloudItemProperties;
-(ICCloudClientAvailabilityService *)availabilityService;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(ICCloudClientCloudService *)cloudService;
-(id)updateSagaInProgressChangedHandler;
-(void)loadIsSagaUpdateInProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)updateJaliscoInProgressChangedHandler;
-(void)loadIsJaliscoUpdateInProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)cloudAddToPlaylistBehavior;
-(void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)canSetPlaylistProperty:(id)arg1 ;
-(void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)publishPlaylistWithSagaID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updatePinnedSubscribedPlaylistsWithCompletion:(/*^block*/id)arg1 ;
-(void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableCloudLibraryWithPolicy:(long long)arg1 startInitialImport:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)disableCloudLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)becomeActive;
-(void)removeJaliscoLibraryWithCompletionHander:(/*^block*/id)arg1 ;
-(BOOL)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 ;
-(void)updateJaliscoLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateSagaLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deauthenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusCUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)enableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateJaliscoGeniusDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)isAuthenticatedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(/*^block*/id)arg1 ;
-(void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importScreenshotForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importContainerArtworkForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importSubscriptionScreenshotForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 ;
-(void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1 ;
-(void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1 ;
-(void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1 ;
-(void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1 ;
-(void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1 ;
-(void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1 ;
-(void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1 ;
-(void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1 ;
-(void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1 ;
-(void)loadArtworkInfoForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadScreenshotInfoForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForContainerSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadScreenshotInfoForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForSubscriptionItemPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadScreenshotInfoForSubscriptionPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForSubscriptionContainerPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadMissingArtwork;
-(void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadIsUpdateInProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadSagaUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetConfiguration:(id)arg1 ;
-(void)resignActive;
-(void)setDaemonConfiguration:(unsigned long long)arg1 ;
-(BOOL)canSetItemProperty:(id)arg1 ;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 ;
-(void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 ;
-(void)uploadItemProperties;
-(void)uploadCloudPlaylistProperties;
-(void)setAlbumProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateArtistHeroImages;
-(void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)handleAutomaticDownloadPreferenceChangedForMediaKindMusic:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)isAutomaticDownloadsEnabledForMediaKindMusic;
-(BOOL)hasSetPreferenceForAutomaticDownloads;
-(BOOL)isCellularDataRestricted;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(void)_serverDidLaunch;
-(void)_serverSagaUpdateInProgressDidChange;
-(void)_serverJaliscoUpdateInProgressDidChange;
-(void)setUpdateSagaInProgressChangedHandler:(id)arg1 ;
-(void)setUpdateJaliscoInProgressChangedHandler:(id)arg1 ;
@end

