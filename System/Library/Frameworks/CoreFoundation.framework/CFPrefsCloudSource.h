/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsPlistSource.h>

@interface CFPrefsCloudSource : CFPrefsPlistSource {

	const char* _configPath;
	const char* _storeName;
	BOOL _enabled;

}
-(void)dealloc;
-(int)alreadylocked_updateObservingRemoteChanges;
-(void)setConfigurationPath:(CFStringRef)arg1 ;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 sourceDictionary:(CFDictionaryRef)arg2 cloudKeyEvaluator:(/*^block*/id)arg3 ;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 containerPath:(CFStringRef)arg4 containingPreferences:(id)arg5 ;
-(id)createSynchronizeMessage;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setStoreName:(CFStringRef)arg1 ;
@end

