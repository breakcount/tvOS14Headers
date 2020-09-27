/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDDatabaseZoneManagerConfiguration.h>

@class NSSet, HMDHomeKitVersion, HMBCloudZoneConfiguration;

@interface HMDMutableDatabaseZoneManagerConfiguration : HMDDatabaseZoneManagerConfiguration

@property (getter=isZoneOwner) BOOL zoneOwner; 
@property (assign) BOOL shouldCreateZone; 
@property (copy) NSSet * externalRecordTypesForSubscriptions; 
@property (copy) HMDHomeKitVersion * minimumHomeKitVersion; 
@property (copy) NSSet * requiredSupportedFeatures; 
@property (copy) HMBCloudZoneConfiguration * cloudZoneConfiguration; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

