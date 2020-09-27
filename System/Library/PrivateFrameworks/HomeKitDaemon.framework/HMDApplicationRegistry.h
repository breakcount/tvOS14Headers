/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol HMFLocking;
@class NSMutableSet, LSApplicationWorkspace, NSArray, NSString;

@interface HMDApplicationRegistry : HMFObject <HMFLogging, LSApplicationWorkspaceObserverProtocol> {

	id<HMFLocking> _lock;
	NSMutableSet* _applications;
	LSApplicationWorkspace* _workspace;

}

@property (copy,readonly) NSArray * applications; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRegistry;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(id)applicationInfoForBundleIdentifier:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(NSArray *)applications;
-(id)applicationInfoForBundleURL:(id)arg1 ;
@end

