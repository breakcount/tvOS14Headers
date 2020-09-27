/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PEPServiceConfiguration : NSObject {

	NSString* _cacheFilePath;
	BOOL _shouldDownloadNetworkConfigFile;
	double _cachedFileLastModifyDate;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_postNotification;
-(BOOL)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_updateDefaults:(id)arg1 ;
-(BOOL)registerNetworkDefaultsForAppID:(id)arg1 ;
@end

