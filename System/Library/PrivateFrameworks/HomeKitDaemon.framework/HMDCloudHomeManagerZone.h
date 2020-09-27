/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCloudZone.h>

@interface HMDCloudHomeManagerZone : HMDCloudZone
+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg1 ;
+(void)createHomeManagerZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setServerChangeToken:(id)arg1 ;
-(id)createCloudZoneChangeTemporaryCache:(BOOL)arg1 ;
@end

