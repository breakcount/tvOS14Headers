/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSUUID;

@interface HMDExternalPersonManagerSettingsModel : HMBModel

@property (retain) NSNumber * importingFromPhotoLibraryEnabled; 
@property (retain) NSNumber * sharingFaceClassificationsEnabled; 
@property (retain) NSUUID * zoneUUID; 
+(id)hmbProperties;
-(id)createSettings;
@end

