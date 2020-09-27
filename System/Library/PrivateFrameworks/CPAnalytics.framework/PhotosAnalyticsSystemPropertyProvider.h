/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:41:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CPAnalytics/CPAnalyticsDynamicPropertyProvider.h>

@class NSString;

@interface PhotosAnalyticsSystemPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_process;
-(id)_osVersion;
-(id)_deviceModel;
-(void)registerSystemProperties:(id)arg1 ;
-(id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(id)_lowPowerModeEnabled;
-(id)_percentageOfFreeSpaceOnDevice;
-(id)_deviceFreeSpaceDescription;
@end

