/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HFUtilities : NSObject
+(BOOL)isInternalInstall;
+(BOOL)isHomePod;
+(BOOL)isDeviceUnlocked;
+(BOOL)isInAirplaneMode;
+(BOOL)isAMac;
+(id)demoModeDirectoryURL;
+(id)cachesDirectoryURL;
+(BOOL)isPressDemoModeEnabled;
+(/*^block*/id)comparatorWithSortedObjects:(id)arg1 ;
+(unsigned long long)enabledPerformanceUpgrades;
+(BOOL)isAnIPad;
+(BOOL)useSideBarLayout;
+(BOOL)shouldSuppressAllErrorsForDemo;
+(id)sharedUserDirectoryURL;
+(id)sharedLibraryDirectoryURL;
+(id)applicationSupportDirectoryURL;
+(id)sharedApplicationSupportDirectoryURL;
+(void)warmUpStaticPreferences;
+(/*^block*/id)comparatorWithSortedClasses:(id)arg1 secondaryComparator:(/*^block*/id)arg2 ;
+(BOOL)isInternalTest;
+(BOOL)useWLANInsteadOfWiFi;
+(BOOL)useToolBarLayout;
+(BOOL)useDefaultAccentColor;
+(BOOL)useMacIdiom;
+(BOOL)supportsAddAccessory;
+(BOOL)supportsBeingCurrentLocationDevice;
+(BOOL)perfUpgradeIsEnabled:(unsigned long long)arg1 ;
+(BOOL)shouldUseControlCenterMaterials;
+(BOOL)shouldShowReachabilityErrors;
+(BOOL)isCloudPhotosOn;
+(id)deviceAirDropIdentifier;
+(id)sanitizeAutoGeneratedHomeKitName:(id)arg1 ;
+(id)sanitizeUserEnteredHomeKitName:(id)arg1 ;
+(id)uniqueHomeKitNameForName:(id)arg1 allNames:(id)arg2 ;
+(id)libraryDirectoryURL;
+(id)documentsDirectoryURL;
+(id)wallpaperURL;
@end
