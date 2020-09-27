/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDObjectLookup.h>

@class HMDHome;

@interface HMDHomeObjectLookup : HMDObjectLookup {

	HMDHome* _home;

}

@property (__weak) HMDHome * home;              //@synthesize home=_home - In the implementation block
+(id)logCategory;
-(void)scanObjects;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)logIdentifier;
-(void)_scanAccessoriesAndServices;
-(void)_scanRooms;
-(void)_scanZones;
-(void)_scanActionSets;
-(void)_scanServiceGroups;
-(void)_scanTriggers;
-(void)_scanResidentDevices;
-(void)_scanMediaSystems;
-(void)_scanUsers;
-(void)_scanSettings:(id)arg1 ;
@end

