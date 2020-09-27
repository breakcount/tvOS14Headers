/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NRRegistry.h>

@protocol NRNSXPCConnectionProtocol;
@class NSMutableDictionary, NSMutableArray;

@interface NRRegistryClient : NRRegistry {

	NSMutableDictionary* _diffIndexObservers;
	BOOL _optimizeGetState;
	BOOL _outstandingRegistryQuery;
	int _devicesUpdateCounterNotifyToken_dispatch;
	int _devicesUpdateCounterNotifyToken_check;
	id<NRNSXPCConnectionProtocol> _connection;
	unsigned long long _tokenValue;
	unsigned long long _lastDevicesUpdateCounterNotifyTokenValue;
	unsigned long long _backoffDuration;
	NSMutableArray* _registryQueryCompletionBlockEntries;

}

@property (nonatomic,retain,readonly) id<NRNSXPCConnectionProtocol> connection; 
@property (nonatomic,readonly) unsigned long long devicesUpdateCounter; 
@property (nonatomic,retain,readonly) id<NRNSXPCConnectionProtocol> rawConnection; 
+(Class)proxyClass;
+(Class)xpcConnectionClass;
-(void)invalidate;
-(id<NRNSXPCConnectionProtocol>)connection;
-(id)initWithParameters:(id)arg1 ;
-(void)setCollection:(id)arg1 ;
-(void)_connectToDaemon;
-(void)grabRegistryWithReadBlockAsync:(/*^block*/id)arg1 ;
-(void)grabRegistryWithWriteBlockAsync:(/*^block*/id)arg1 ;
-(void)syncGrabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(void)_queryDataAsyncIfNeededWithBlock:(/*^block*/id)arg1 ;
-(void)grabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(id<NRNSXPCConnectionProtocol>)rawConnection;
-(void)_grabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(void)_grabRegistryWithWriteBlockAsync:(/*^block*/id)arg1 ;
-(unsigned long long)devicesUpdateCounter;
-(BOOL)daemonIdle;
-(id)addDiffIndexObserverWithWriteBlock:(/*^block*/id)arg1 ;
-(void)removeDiffIndexObserver:(id)arg1 ;
@end

