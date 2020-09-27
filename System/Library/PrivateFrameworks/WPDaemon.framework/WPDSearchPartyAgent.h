/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSData, NSArray, NSObject;

@interface WPDSearchPartyAgent : NSObject {

	BOOL _isTestMode;
	BOOL _disableScans;
	BOOL _spBeaconState;
	unsigned char _spBeaconStatus;
	BOOL _testBeaconState;
	unsigned char _testBeaconStatus;
	NSData* _beaconKey;
	NSArray* _nearbyTokens;
	NSObject*<OS_dispatch_queue> _queue;
	NSData* _spBeaconReserved;
	NSData* _testBeaconReserved;

}

@property (retain) NSData * beaconKey;                                       //@synthesize beaconKey=_beaconKey - In the implementation block
@property (__weak,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL disableScans;                                        //@synthesize disableScans=_disableScans - In the implementation block
@property (assign) BOOL isTestMode;                                          //@synthesize isTestMode=_isTestMode - In the implementation block
@property (assign) BOOL spBeaconState;                                       //@synthesize spBeaconState=_spBeaconState - In the implementation block
@property (assign) unsigned char spBeaconStatus;                             //@synthesize spBeaconStatus=_spBeaconStatus - In the implementation block
@property (readonly) NSData * spBeaconReserved;                              //@synthesize spBeaconReserved=_spBeaconReserved - In the implementation block
@property (assign) BOOL testBeaconState;                                     //@synthesize testBeaconState=_testBeaconState - In the implementation block
@property (assign) unsigned char testBeaconStatus;                           //@synthesize testBeaconStatus=_testBeaconStatus - In the implementation block
@property (retain) NSData * testBeaconReserved;                              //@synthesize testBeaconReserved=_testBeaconReserved - In the implementation block
@property (readonly) BOOL beaconState; 
@property (readonly) unsigned char beaconStatus; 
@property (readonly) NSData * beaconReserved; 
@property (readonly) NSArray * nearbyTokens;                                 //@synthesize nearbyTokens=_nearbyTokens - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isTestMode;
-(BOOL)testBeaconState;
-(BOOL)spBeaconState;
-(unsigned char)testBeaconStatus;
-(unsigned char)spBeaconStatus;
-(NSData *)testBeaconReserved;
-(NSData *)spBeaconReserved;
-(id)initWithQueue:(id)arg1 beaconChange:(/*^block*/id)arg2 tokensChange:(/*^block*/id)arg3 ;
-(BOOL)beaconState;
-(unsigned char)beaconStatus;
-(NSData *)beaconReserved;
-(void)setIsTestMode:(BOOL)arg1 ;
-(NSData *)beaconKey;
-(void)setBeaconKey:(NSData *)arg1 ;
-(NSArray *)nearbyTokens;
-(BOOL)disableScans;
-(void)setDisableScans:(BOOL)arg1 ;
-(void)setSpBeaconState:(BOOL)arg1 ;
-(void)setSpBeaconStatus:(unsigned char)arg1 ;
-(void)setTestBeaconState:(BOOL)arg1 ;
-(void)setTestBeaconStatus:(unsigned char)arg1 ;
-(void)setTestBeaconReserved:(NSData *)arg1 ;
@end

