/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _HKDaemonPreferences : NSObject
+(BOOL)setValue:(id)arg1 forKey:(id)arg2 ;
+(id)valueForKey:(id)arg1 ;
+(BOOL)_boolValueForKey:(id)arg1 ;
+(BOOL)usingDemoDataDatabase;
+(BOOL)isGenerateDemoDataSet;
+(BOOL)isStoreDemoModeSet;
+(BOOL)_setPreferenceValue:(void*)arg1 forKey:(id)arg2 ;
+(id)_safePreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2 ;
+(BOOL)shouldGenerateDemoData;
+(void)synchronizePreferencesWithWatch:(id)arg1 ;
@end

