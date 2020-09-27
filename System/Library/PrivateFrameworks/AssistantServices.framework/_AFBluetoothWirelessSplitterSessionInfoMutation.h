/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFBluetoothWirelessSplitterSessionInfoMutating.h>

@class AFBluetoothWirelessSplitterSessionInfo, NSArray, NSString;

@interface _AFBluetoothWirelessSplitterSessionInfoMutation : NSObject <AFBluetoothWirelessSplitterSessionInfoMutating> {

	AFBluetoothWirelessSplitterSessionInfo* _baseModel;
	long long _state;
	NSArray* _deviceAddresses;
	struct {
		unsigned isDirty : 1;
		unsigned hasState : 1;
		unsigned hasDeviceAddresses : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setState:(long long)arg1 ;
-(id)generate;
-(void)setDeviceAddresses:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
@end

