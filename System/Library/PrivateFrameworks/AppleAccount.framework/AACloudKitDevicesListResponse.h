/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface AACloudKitDevicesListResponse : AAResponse {

	NSArray* _incompatibleDevices;
	NSArray* _needUpgradeDevices;
	NSArray* _incompatibleDeviceNames;
	NSArray* _needUpgradeDeviceNames;

}

@property (nonatomic,readonly) NSArray * incompatibleDevices;                  //@synthesize incompatibleDevices=_incompatibleDevices - In the implementation block
@property (nonatomic,readonly) NSArray * needUpgradeDevices;                   //@synthesize needUpgradeDevices=_needUpgradeDevices - In the implementation block
@property (nonatomic,readonly) NSArray * incompatibleDeviceNames;              //@synthesize incompatibleDeviceNames=_incompatibleDeviceNames - In the implementation block
@property (nonatomic,readonly) NSArray * needUpgradeDeviceNames;               //@synthesize needUpgradeDeviceNames=_needUpgradeDeviceNames - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSArray *)incompatibleDevices;
-(NSArray *)needUpgradeDevices;
-(NSArray *)incompatibleDeviceNames;
-(NSArray *)needUpgradeDeviceNames;
@end

