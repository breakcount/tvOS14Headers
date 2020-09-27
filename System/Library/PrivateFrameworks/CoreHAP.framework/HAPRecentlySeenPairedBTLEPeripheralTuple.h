/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class CBPeripheral, NSNumber, NSString, NSData, NSMutableDictionary, NSMapTable;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject {

	BOOL _notifyingCharacteristicUpdated;
	BOOL _monitorState;
	double _lastSeen;
	CBPeripheral* _peripheral;
	NSNumber* _statusFlags;
	NSNumber* _stateNumber;
	NSNumber* _configNumber;
	NSNumber* _categoryIdentifier;
	NSString* _identifier;
	NSData* _setupHash;
	unsigned long long _advertisementFormat;
	NSMutableDictionary* _cachedDescriptors;
	NSMapTable* _cachedCharacteristicSignatures;
	NSMapTable* _cachedServiceSignatures;
	unsigned long long _connectionPriority;

}

@property (nonatomic,readonly) double lastSeen;                                          //@synthesize lastSeen=_lastSeen - In the implementation block
@property (nonatomic,retain) CBPeripheral * peripheral;                                  //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,retain) NSNumber * statusFlags;                                     //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,retain) NSNumber * stateNumber;                                     //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,retain) NSNumber * configNumber;                                    //@synthesize configNumber=_configNumber - In the implementation block
@property (nonatomic,retain) NSNumber * categoryIdentifier;                              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * setupHash;                                       //@synthesize setupHash=_setupHash - In the implementation block
@property (assign,nonatomic) unsigned long long advertisementFormat;                     //@synthesize advertisementFormat=_advertisementFormat - In the implementation block
@property (assign,nonatomic) BOOL notifyingCharacteristicUpdated;                        //@synthesize notifyingCharacteristicUpdated=_notifyingCharacteristicUpdated - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedDescriptors;                  //@synthesize cachedDescriptors=_cachedDescriptors - In the implementation block
@property (nonatomic,readonly) NSMapTable * cachedCharacteristicSignatures;              //@synthesize cachedCharacteristicSignatures=_cachedCharacteristicSignatures - In the implementation block
@property (nonatomic,readonly) NSMapTable * cachedServiceSignatures;                     //@synthesize cachedServiceSignatures=_cachedServiceSignatures - In the implementation block
@property (assign,nonatomic) BOOL monitorState;                                          //@synthesize monitorState=_monitorState - In the implementation block
@property (assign,nonatomic) unsigned long long connectionPriority;                      //@synthesize connectionPriority=_connectionPriority - In the implementation block
-(id)description;
-(NSString *)identifier;
-(void)setCategoryIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)categoryIdentifier;
-(CBPeripheral *)peripheral;
-(NSNumber *)statusFlags;
-(void)setStatusFlags:(NSNumber *)arg1 ;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(double)lastSeen;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(NSNumber *)stateNumber;
-(NSNumber *)configNumber;
-(NSData *)setupHash;
-(void)setConfigNumber:(NSNumber *)arg1 ;
-(void)updateWithPeripheral:(id)arg1 ;
-(void)setMonitorState:(BOOL)arg1 ;
-(void)setConnectionPriority:(unsigned long long)arg1 ;
-(id)initRecentlySeenPairedBTLEPeripheral:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 identifier:(id)arg6 advertisementFormat:(unsigned long long)arg7 setupHash:(id)arg8 ;
-(void)updatePairedPeripheralConfiguration:(BOOL)arg1 connectionPriority:(unsigned long long)arg2 ;
-(unsigned long long)advertisementFormat;
-(void)setAdvertisementFormat:(unsigned long long)arg1 ;
-(BOOL)notifyingCharacteristicUpdated;
-(void)setNotifyingCharacteristicUpdated:(BOOL)arg1 ;
-(NSMutableDictionary *)cachedDescriptors;
-(NSMapTable *)cachedCharacteristicSignatures;
-(NSMapTable *)cachedServiceSignatures;
-(BOOL)monitorState;
-(unsigned long long)connectionPriority;
@end

