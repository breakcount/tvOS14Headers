/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface GKContentPropertyList : NSObject {

	NSDictionary* _root;
	NSString* _bundleID;
	NSDictionary* _achievementsByIdentifier;
	NSDictionary* _leaderboardsByIdentifier;
	NSDictionary* _leaderboardSetsByIdentifier;

}

@property (retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (retain) NSDictionary * root;              //@synthesize root=_root - In the implementation block
+(id)localPropertyListForGameDescriptor:(id)arg1 ;
-(void)dealloc;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)_mainBundle;
-(NSDictionary *)root;
-(id)localizedStringForKey:(id)arg1 ;
-(void)setRoot:(NSDictionary *)arg1 ;
-(id)_rootDictionary;
-(id)achievementDescriptions;
-(id)achievementDescriptionForIdentifier:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 forLocalization:(id)arg2 ;
-(id)imageNameForDashboardLogo;
-(id)leaderboardDescriptions;
-(id)leaderboardSetDescriptions;
-(id)leaderboardDescriptionForIdentifier:(id)arg1 ;
-(id)leaderboardSetDescriptionForIdentifier:(id)arg1 ;
@end

