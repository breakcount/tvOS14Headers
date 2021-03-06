/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDDeviceSetupSessionInternal.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDDeviceSetupClientSession : HMDDeviceSetupSessionInternal <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedClasses;
+(long long)role;
+(BOOL)isSupported;
+(id)logCategory;
-(BOOL)processSessionData:(id)arg1 error:(id*)arg2 ;
@end

