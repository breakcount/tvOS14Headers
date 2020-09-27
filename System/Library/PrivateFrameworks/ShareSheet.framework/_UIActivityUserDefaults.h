/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:37 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUserDefaults;

@interface _UIActivityUserDefaults : NSObject {

	NSString* _activityDefaultsKey;
	NSUserDefaults* _underlyingUserDefaults;

}

@property (nonatomic,copy) NSString * activityDefaultsKey;                         //@synthesize activityDefaultsKey=_activityDefaultsKey - In the implementation block
@property (nonatomic,retain) NSUserDefaults * underlyingUserDefaults;              //@synthesize underlyingUserDefaults=_underlyingUserDefaults - In the implementation block
+(id)builtinActivityOrder;
+(id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg1 someSortedActivityIdentifiers:(id)arg2 ;
+(void)_migrateUserActivityOrderforKey:(id)arg1 userDefaults:(id)arg2 defaultOrder:(id)arg3 ;
+(void)migrateUserActivityOrderIfNecessary;
-(id)activitiesOrderedByUserActivityOrderForActivities:(id)arg1 ;
-(BOOL)activityIsHidden:(id)arg1 ;
-(void)setActivity:(id)arg1 asHidden:(BOOL)arg2 ;
-(void)setActivityDefaultsKey:(NSString *)arg1 ;
-(void)setUnderlyingUserDefaults:(NSUserDefaults *)arg1 ;
-(id)applicationExtensionForActivity:(id)arg1 ;
-(void)postActivityUserDefaultsDidChangeNotification;
-(id)identifierForActivity:(id)arg1 ;
-(id)activityIdentifiersInUserOrder;
-(id)activitiesBySortingActivities:(id)arg1 byIdentifierWithDefaultActivityIdentifierOrdering:(id)arg2 ;
-(id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg1 ;
-(void)setActivityIdentifiersInUserOrder:(id)arg1 ;
-(NSUserDefaults *)underlyingUserDefaults;
-(NSString *)activityDefaultsKey;
-(void)_userEditedActivityDefaults;
-(id)initWithUnderlyingUserDefaults:(id)arg1 activityDefaultsKey:(id)arg2 ;
-(BOOL)canHideActivity:(id)arg1 ;
-(id)migrateSortOrderIfNeededForBuiltInActivityType:(id)arg1 activityIdentifierOrdering:(id)arg2 ;
-(void)updateUserActivityOrderWithOrderedPartialActivities:(id)arg1 ;
-(void)removeActivityTypeFromDefaults:(id)arg1 ;
-(BOOL)hasUserEditedActivityOrder;
@end

