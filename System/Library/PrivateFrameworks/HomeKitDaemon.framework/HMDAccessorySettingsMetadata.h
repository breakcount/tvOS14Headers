/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@class HMDAccessorySettingGroupMetadata, NSString, NSArray;

@interface HMDAccessorySettingsMetadata : HMFObject <HMFObject> {

	HMDAccessorySettingGroupMetadata* _rootGroup;

}

@property (readonly) HMDAccessorySettingGroupMetadata * rootGroup;                //@synthesize rootGroup=_rootGroup - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSString *)propertyDescription;
-(HMDAccessorySettingGroupMetadata *)rootGroup;
@end

