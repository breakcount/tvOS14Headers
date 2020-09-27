/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CBCentralManager, NSObject, ATVModel, NSString;

@interface CBConnectionsObserver : NSObject <CBCentralManagerDelegate> {

	BOOL _hasStarted;
	CBCentralManager* _central;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ATVModel* _model;

}

@property (retain) CBCentralManager * central;                              //@synthesize central=_central - In the implementation block
@property (__weak) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL hasStarted;                               //@synthesize hasStarted=_hasStarted - In the implementation block
@property (retain) ATVModel * model;                                        //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)hasStarted;
-(void)setHasStarted:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(ATVModel *)model;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setModel:(ATVModel *)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(CBCentralManager *)central;
-(id)getStatus;
-(id)initWithCentralManager:(id)arg1 Queue:(id)arg2 Error:(id*)arg3 ;
-(BOOL)cleanupWithError:(id*)arg1 ;
-(int)getAvailableHAPConnections;
-(BOOL)attachSessionWithError:(id*)arg1 ;
-(void)setCentral:(CBCentralManager *)arg1 ;
-(void)updateBleStatus:(BTRemoteContext*)arg1 ;
@end

