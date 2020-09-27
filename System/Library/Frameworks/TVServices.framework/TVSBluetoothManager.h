/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, TVSBluetoothManagerDelegate;
@class NSRecursiveLock, NSMutableArray, NSMutableSet, NSObject, NSSet;

@interface TVSBluetoothManager : NSObject {

	NSRecursiveLock* _lock;
	NSMutableArray* _allBTDevices;
	NSMutableSet* _observers;
	NSObject*<OS_os_log> _log;
	long long _scanningState;
	BOOL _discovering;
	BOOL _finishedSetup;
	NSSet* _connectedDevices;
	NSSet* _pairedDevices;
	NSSet* _discoveredDevices;
	id<TVSBluetoothManagerDelegate> _delegate;

}

@property (nonatomic,copy) NSSet * connectedDevices;                                       //@synthesize connectedDevices=_connectedDevices - In the implementation block
@property (nonatomic,copy) NSSet * pairedDevices;                                          //@synthesize pairedDevices=_pairedDevices - In the implementation block
@property (nonatomic,copy) NSSet * discoveredDevices;                                      //@synthesize discoveredDevices=_discoveredDevices - In the implementation block
@property (assign,nonatomic,__weak) id<TVSBluetoothManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPairing,nonatomic,readonly) BOOL pairing; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<TVSBluetoothManagerDelegate>)delegate;
-(void)setDelegate:(id<TVSBluetoothManagerDelegate>)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startScanning;
-(NSSet *)pairedDevices;
-(NSSet *)discoveredDevices;
-(NSSet *)connectedDevices;
-(void)stopScanning;
-(void)connectDevice:(id)arg1 ;
-(void)disconnectDevice:(id)arg1 ;
-(void)unpairDevice:(id)arg1 ;
-(id)__init;
-(BOOL)isPairing;
-(void)setConnectedDevices:(NSSet *)arg1 ;
-(void)setDiscoveredDevices:(NSSet *)arg1 ;
-(BOOL)filterDeviceScan;
-(void)_addBluetoothDevice:(id)arg1 ;
-(void)setPairedDevices:(NSSet *)arg1 ;
-(void)_discoveredPeripheralsDidChangeNotification:(id)arg1 ;
-(void)_peripheralStateDidChangeNotification:(id)arg1 ;
-(void)_bluetoothAvailabilityChanged:(id)arg1 ;
-(void)_bluetoothDeviceRemoved:(id)arg1 ;
-(void)_bluetoothConnectionSuccess:(id)arg1 ;
-(void)_bluetoothConnectionFailed:(id)arg1 ;
-(void)_bluetoothDisconnectSuccess:(id)arg1 ;
-(void)_bluetoothDisconnectFailed:(id)arg1 ;
-(void)_bluetoothDidUnpair:(id)arg1 ;
-(void)_bluetoothPairingPINRequest:(id)arg1 ;
-(void)_bluetoothPairingPINResultSuccess:(id)arg1 ;
-(void)_bluetoothPairingPINResultFailed:(id)arg1 ;
-(void)_bluetoothPowerStateChanged:(id)arg1 ;
-(void)_bluetoothNotificationHandler:(id)arg1 ;
-(void)_bluetoothHIDBehaviorKnownNotificationHandler:(id)arg1 ;
-(void)_updateDevicesLists;
-(unsigned long long)_pairingDeviceCount;
-(void)addScanObserver:(id)arg1 ;
-(void)_updateScanningStateIfNeeded;
-(void)removeScanObserver:(id)arg1 ;
-(id)bluetoothDeviceForBTLEPeripheral:(id)arg1 ;
-(void)_removeBluetoothDevice:(id)arg1 ;
-(void)_startBluetoothDeviceDiscovery;
-(id)bluetoothDeviceForClassicBluetoothDevice:(id)arg1 ;
-(void)cancelPINPairing;
-(void)_requestPINRequest:(id)arg1 ;
-(void)_presentPINRequest:(id)arg1 ;
-(void)_checkDeviceStatus;
-(void)_stopBluetoothDeviceDiscovery;
-(id)bluetoothDeviceWithIdentifier:(id)arg1 ;
-(void)enteredPIN:(id)arg1 forDevice:(id)arg2 ;
-(void)setFilterDeviceScan:(BOOL)arg1 ;
@end

