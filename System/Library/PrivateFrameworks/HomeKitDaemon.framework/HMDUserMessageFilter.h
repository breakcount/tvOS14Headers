/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageFilter.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDUserMessageFilter : HMFMessageFilter <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)canInitWithMessage:(id)arg1 ;
-(BOOL)acceptWithPolicies:(id)arg1 error:(id*)arg2 ;
@end

