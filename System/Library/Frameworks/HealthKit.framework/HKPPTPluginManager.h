/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface HKPPTPluginManager : NSObject {

	NSMutableDictionary* _testClasses;
	NSMutableDictionary* _builtinTests;

}
+(id)sharedPluginManager;
-(id)init;
-(void)_loadPPTBundles;
-(void)registerDriverClass:(Class)arg1 ;
-(id)builtinTests;
-(Class)classForTestType:(id)arg1 ;
@end

