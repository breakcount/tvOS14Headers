/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface REShortcutFilter : NSObject
+(unsigned long long)filterVersion;
-(id)init;
-(unsigned long long)_actionIdentifierForIntent:(id)arg1 ;
-(unsigned long long)_actionIdentifierForUserActivity:(id)arg1 ;
-(id)intentByFilteringIntent:(id)arg1 withLevel:(unsigned long long)arg2 ;
-(id)userActivityByFilteringUserActivity:(id)arg1 withLevel:(unsigned long long)arg2 ;
-(id)identifierForIntent:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)identifierForUserActivity:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

