/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface AVAudioDevice : NSObject {

	NSString* _deviceName;
	NSNumber* _deviceID;
	NSString* _UID;
	BOOL _inputAvailable;
	BOOL _outputAvailable;
	BOOL _preferredDevice;
	BOOL _isBluetoothDevice;
	BOOL _isLineIn;

}

@property (nonatomic,readonly) NSString * deviceName;                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceID;                                        //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSString * UID;                                             //@synthesize UID=_UID - In the implementation block
@property (nonatomic,readonly) BOOL inputAvailable;                                        //@synthesize inputAvailable=_inputAvailable - In the implementation block
@property (nonatomic,readonly) BOOL outputAvailable;                                       //@synthesize outputAvailable=_outputAvailable - In the implementation block
@property (getter=isPreferredDevice,nonatomic,readonly) BOOL preferredDevice;              //@synthesize preferredDevice=_preferredDevice - In the implementation block
@property (nonatomic,readonly) BOOL isBluetoothDevice; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSString *)deviceName;
-(NSNumber *)deviceID;
-(id)initWithDeviceID:(id)arg1 ;
-(NSString *)UID;
-(BOOL)isPreferredDevice;
-(BOOL)isBluetoothDevice;
-(void)createName;
-(void)createUID;
-(BOOL)isSomethingConnectedToJack;
-(void)createNameForScope:(unsigned)arg1 ;
-(BOOL)isValidDevice;
-(BOOL)isValidInputDevice;
-(BOOL)isBuiltInDevice;
-(unsigned*)allocDeviceControlListAndSize:(unsigned*)arg1 ;
-(unsigned)getDataSourceControlID;
-(BOOL)isStreamAvailableForScope:(unsigned)arg1 ;
-(BOOL)inputAvailable;
-(BOOL)outputAvailable;
@end

