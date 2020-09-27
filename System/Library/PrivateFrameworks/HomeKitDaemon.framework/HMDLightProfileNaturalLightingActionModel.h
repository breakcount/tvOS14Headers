/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDActionModel.h>

@class NSNumber, NSUUID, NSSet;

@interface HMDLightProfileNaturalLightingActionModel : HMDActionModel

@property (retain) NSNumber * naturalLightingEnabledField; 
@property (retain) NSUUID * lightProfileUUID; 
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled; 
@property (retain) NSUUID * accessoryUUID; 
@property (retain) NSSet * serviceUUIDs; 
+(id)properties;
-(BOOL)isNaturalLightingEnabled;
-(void)setNaturalLightingEnabled:(BOOL)arg1 ;
-(id)dependentUUIDs;
@end

