/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSMutableArray;

@interface PSUsageBundleManager : NSObject {

	NSDictionary* _bundleMap;
	NSArray* _usageBundleApps;
	NSMutableArray* _storageReporters;

}
-(void)_loadUsageBundlesWithHandler:(/*^block*/id)arg1 ;
-(id)allUsageBundleApps;
-(void)vendUsageBundleAppsWithHandler:(/*^block*/id)arg1 ;
@end

