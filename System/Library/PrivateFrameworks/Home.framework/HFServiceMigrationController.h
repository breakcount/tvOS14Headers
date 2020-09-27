/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFHomeKitDispatcher, HMHome;

@interface HFServiceMigrationController : NSObject {

	HFHomeKitDispatcher* _dispatcher;
	HMHome* _home;
	unsigned long long _timeoutOverride;

}

@property (nonatomic,retain) HFHomeKitDispatcher * dispatcher;                //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) HMHome * home;                                   //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) unsigned long long timeoutOverride;              //@synthesize timeoutOverride=_timeoutOverride - In the implementation block
+(id)primaryServicesToMigrateForHome:(id)arg1 ;
+(id)accessoriesToMigrateFavoritesForHome:(id)arg1 ;
+(BOOL)homeNeedsMigration:(id)arg1 ;
+(BOOL)homeNeedsToDisplayMigrationOnboardingUI;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(HFHomeKitDispatcher *)dispatcher;
-(id)initWithHome:(id)arg1 ;
-(void)setDispatcher:(HFHomeKitDispatcher *)arg1 ;
-(void)setTimeoutOverride:(unsigned long long)arg1 ;
-(unsigned long long)timeoutOverride;
-(id)migrateServicesToAccessory;
@end
