/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, CBPeripheralManager, NSObject, NSString;

@interface CUBLEServer : NSObject <CBPeripheralManagerDelegate> {

	/*^block*/id _activateCompletion;
	NSMutableSet* _connections;
	BOOL _invalidateCalled;
	CBPeripheralManager* _peripheralManager;
	LogCategory* _ucat;
	unsigned short _listenPSM;
	unsigned short _listeningPSM;
	/*^block*/id _connectionStartedHandler;
	/*^block*/id _connectionEndedHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;

}

@property (nonatomic,copy) id connectionStartedHandler;                               //@synthesize connectionStartedHandler=_connectionStartedHandler - In the implementation block
@property (nonatomic,copy) id connectionEndedHandler;                                 //@synthesize connectionEndedHandler=_connectionEndedHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned short listenPSM;                                //@synthesize listenPSM=_listenPSM - In the implementation block
@property (assign,nonatomic) unsigned short listeningPSM;                             //@synthesize listeningPSM=_listeningPSM - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)peripheralManager:(id)arg1 didPublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3 ;
-(void)peripheralManager:(id)arg1 didUnpublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3 ;
-(void)peripheralManager:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_startIfNeeded;
-(void)_handleConnectionInvalidated:(id)arg1 ;
-(id)connectionStartedHandler;
-(void)setConnectionStartedHandler:(id)arg1 ;
-(id)connectionEndedHandler;
-(void)setConnectionEndedHandler:(id)arg1 ;
-(unsigned short)listenPSM;
-(void)setListenPSM:(unsigned short)arg1 ;
-(unsigned short)listeningPSM;
-(void)setListeningPSM:(unsigned short)arg1 ;
@end

