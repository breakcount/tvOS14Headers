/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKFitnessMachineConnectionClientInterface.h>

@protocol _HKFitnessMachineConnectionDelegate;
@class HKTaskServerProxyProvider, NSUUID, _HKFitnessMachine, HKDevice, NSLock, NSString;

@interface _HKFitnessMachineConnection : NSObject <_HKXPCExportable, HKFitnessMachineConnectionClientInterface> {

	HKTaskServerProxyProvider* _proxyProvider;
	NSUUID* _currentSessionUUID;
	_HKFitnessMachine* _fitnessMachine;
	HKDevice* _deviceForFinalWorkout;
	NSLock* _lock;
	unsigned long long _machineState;
	unsigned long long _connectionState;
	id<_HKFitnessMachineConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (copy,readonly) _HKFitnessMachine * fitnessMachine; 
@property (nonatomic,readonly) unsigned long long machineState;                                    //@synthesize machineState=_machineState - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionState;                                 //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic,__weak) id<_HKFitnessMachineConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) HKDevice * deviceForFinalWorkout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<_HKFitnessMachineConnectionDelegate>)delegate;
-(void)setDelegate:(id<_HKFitnessMachineConnectionDelegate>)arg1 ;
-(id)_init;
-(id)exportedInterface;
-(void)end;
-(NSUUID *)uuid;
-(void)connectionInvalidated;
-(unsigned long long)connectionState;
-(id)remoteInterface;
-(void)connectionInterrupted;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_registerClient;
-(void)_connectionInterruptedWithError:(id)arg1 ;
-(void)clientRemote_deliverFailedWithError:(id)arg1 ;
-(void)_clientQueue_deliverFailedWithError:(id)arg1 ;
-(void)clientRemote_deliverDetectedNFC:(id)arg1 ;
-(void)clientRemote_deliverMachineInformationUpdated:(id)arg1 ;
-(void)clientRemote_deliverMachineChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 date:(id)arg4 ;
-(void)clientRemote_deliverConnectionChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 error:(id)arg4 ;
-(void)markClientReady;
-(void)endWithFitnessMachineSessionUUID:(id)arg1 ;
-(id)currentSessionConfiguration;
-(HKDevice *)deviceForFinalWorkout;
-(_HKFitnessMachine *)fitnessMachine;
-(void)_simulateDisconnect;
-(unsigned long long)machineState;
@end

