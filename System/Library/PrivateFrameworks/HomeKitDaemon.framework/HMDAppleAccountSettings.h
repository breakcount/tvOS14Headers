/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEducationMode,readonly) BOOL educationMode; 
@property (getter=isHomeEnabled,readonly) BOOL homeEnabled; 
@property (getter=isKeychainSyncEnabled,readonly) BOOL keychainSyncEnabled; 
@property (getter=isManaged,readonly) BOOL managed; 
@property (getter=isEphemeral,readonly) BOOL ephemeral; 
+(id)logCategory;
+(id)sharedSettings;
+(BOOL)supportsCloudSettings;
-(void)synchronize;
-(BOOL)isEphemeral;
-(BOOL)isManaged;
-(id)attributeDescriptions;
-(BOOL)isHomeEnabled;
-(BOOL)isKeychainSyncEnabled;
-(BOOL)isEducationMode;
-(void)updateHomeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
