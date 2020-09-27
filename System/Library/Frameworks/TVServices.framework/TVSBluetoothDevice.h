/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSString, NSArray;

@interface TVSBluetoothDevice : NSObject <NSSecureCoding> {

	/*^block*/id _connectDoneBlock;
	/*^block*/id _disconnectDoneBlock;
	/*^block*/id _unpairDoneBlock;
	NSError* _connectionFailure;
	NSError* _disconnectionFailure;
	NSError* _unpairingFailure;
	BOOL _supportsBatteryLevel;
	BOOL _supportsIsCharging;
	BOOL _paired;
	BOOL _pairing;
	BOOL _connected;
	BOOL _charging;
	BOOL _hasPoorBehavior;
	BOOL _PINPairing;
	BOOL _PINPairingFailed;
	BOOL _PINPairingCancelled;
	long long _transportType;
	long long _type;
	NSString* _name;
	NSString* _identifier;
	long long _state;
	double _lastPairTime;
	double _lastUnpairTime;
	double _lastConnectTime;
	double _lastDisconnectTime;
	long long _batteryLevel;
	id _bluetoothDeviceObject;

}

@property (nonatomic,copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long state;                                                     //@synthesize state=_state - In the implementation block
@property (assign,getter=isPaired,nonatomic) BOOL paired;                                         //@synthesize paired=_paired - In the implementation block
@property (assign,getter=isPairing,nonatomic) BOOL pairing;                                       //@synthesize pairing=_pairing - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                                   //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) double lastPairTime;                                                 //@synthesize lastPairTime=_lastPairTime - In the implementation block
@property (assign,nonatomic) double lastUnpairTime;                                               //@synthesize lastUnpairTime=_lastUnpairTime - In the implementation block
@property (assign,nonatomic) double lastConnectTime;                                              //@synthesize lastConnectTime=_lastConnectTime - In the implementation block
@property (assign,nonatomic) double lastDisconnectTime;                                           //@synthesize lastDisconnectTime=_lastDisconnectTime - In the implementation block
@property (assign,nonatomic) long long batteryLevel;                                              //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,getter=isCharging,nonatomic) BOOL charging;                                     //@synthesize charging=_charging - In the implementation block
@property (assign,nonatomic) BOOL hasPoorBehavior;                                                //@synthesize hasPoorBehavior=_hasPoorBehavior - In the implementation block
@property (nonatomic,retain) id bluetoothDeviceObject;                                            //@synthesize bluetoothDeviceObject=_bluetoothDeviceObject - In the implementation block
@property (assign,getter=isPINPairing,nonatomic) BOOL PINPairing;                                 //@synthesize PINPairing=_PINPairing - In the implementation block
@property (assign,getter=didPINPairingFail,nonatomic) BOOL PINPairingFailed;                      //@synthesize PINPairingFailed=_PINPairingFailed - In the implementation block
@property (assign,getter=wasPINPairingCancelled,nonatomic) BOOL PINPairingCancelled;              //@synthesize PINPairingCancelled=_PINPairingCancelled - In the implementation block
@property (nonatomic,readonly) long long transportType;                                           //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL supportsBatteryLevel;                                         //@synthesize supportsBatteryLevel=_supportsBatteryLevel - In the implementation block
@property (nonatomic,readonly) BOOL supportsIsCharging;                                           //@synthesize supportsIsCharging=_supportsIsCharging - In the implementation block
@property (nonatomic,copy,readonly) NSArray * registryIDs; 
@property (nonatomic,copy,readonly) NSString * physicalDeviceUniqueID; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * modelNumber; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,copy,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSString * multitouchFirmwareVersion; 
@property (nonatomic,copy,readonly) NSString * hardwareVersion; 
@property (nonatomic,copy,readonly) NSString * macAddress; 
@property (nonatomic,readonly) unsigned long long lastActivityTimeStamp; 
@property (getter=isCloudPaired,nonatomic,readonly) BOOL cloudPaired; 
@property (getter=isMagicPaired,nonatomic,readonly) BOOL magicPaired; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isConnected;
-(long long)transportType;
-(NSString *)serialNumber;
-(void)setConnected:(BOOL)arg1 ;
-(NSString *)hardwareVersion;
-(NSString *)physicalDeviceUniqueID;
-(BOOL)isCharging;
-(NSString *)manufacturer;
-(NSString *)macAddress;
-(NSString *)modelNumber;
-(void)setCharging:(BOOL)arg1 ;
-(long long)batteryLevel;
-(void)setBatteryLevel:(long long)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(void)unpairWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)firmwareVersion;
-(BOOL)isPaired;
-(BOOL)supportsBatteryLevel;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isPairing;
-(void)setPairing:(BOOL)arg1 ;
-(BOOL)isCloudPaired;
-(id)bluetoothDeviceObject;
-(void)setBluetoothDeviceObject:(id)arg1 ;
-(id)initWithClassicBluetoothDevice:(id)arg1 ;
-(id)initWithBTLEPeripheral:(id)arg1 ;
-(void)_checkStatus;
-(void)disconnectWithCompletion:(/*^block*/id)arg1 ;
-(void)_noteStateChangeFailure:(id)arg1 ;
-(void)_noteConnectionFailure:(id)arg1 ;
-(BOOL)isPINPairing;
-(BOOL)wasPINPairingCancelled;
-(void)_noteDisconnectionFailure:(id)arg1 ;
-(void)setPINPairing:(BOOL)arg1 ;
-(void)setPINPairingFailed:(BOOL)arg1 ;
-(void)setPINPairingCancelled:(BOOL)arg1 ;
-(void)_updateBehaviorState;
-(void)setLastDisconnectTime:(double)arg1 ;
-(double)lastDisconnectTime;
-(void)_finishInitializingAppleTVRemote;
-(void)_peripheralStateChanged:(id)arg1 ;
-(void)_peripheralBatteryLevelChanged:(id)arg1 ;
-(BOOL)_deviceHasPoorBehavior;
-(void)_remoteBatteryLevelChanged:(id)arg1 ;
-(void)_remoteChargingChanged:(id)arg1 ;
-(void)_remoteConnectedChanged:(id)arg1 ;
-(id)__accessory;
-(void)setLastPairTime:(double)arg1 ;
-(void)setLastUnpairTime:(double)arg1 ;
-(void)_invokeUnpairBlockIfNeeded;
-(void)setLastConnectTime:(double)arg1 ;
-(void)_invokeConnectBlockIfNeeded;
-(void)_invokeDisconnectBlockIfNeeded;
-(void)__updateRemoteConnected;
-(void)__updateRemotePowerState;
-(void)__updateRemoteIdentifiers;
-(void)__updateRemoteState;
-(void)__updateRemotePaired;
-(BOOL)hasPoorBehavior;
-(void)setHasPoorBehavior:(BOOL)arg1 ;
-(void)__updateDeviceIdentifiers;
-(void)__updateDeviceState;
-(void)__updateDevicePaired;
-(void)__updateDeviceConnected;
-(void)__updateDeviceBatteryLevel;
-(NSArray *)registryIDs;
-(BOOL)isMagicPaired;
-(NSString *)multitouchFirmwareVersion;
-(unsigned long long)lastActivityTimeStamp;
-(void)_notePairingFailure:(id)arg1 ;
-(BOOL)supportsIsCharging;
-(double)lastPairTime;
-(double)lastUnpairTime;
-(double)lastConnectTime;
-(BOOL)didPINPairingFail;
@end

