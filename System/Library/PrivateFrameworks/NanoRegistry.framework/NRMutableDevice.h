/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRMutableStateBase.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NRPBMutableDevice, NSMutableDictionary, NSUUID;

@interface NRMutableDevice : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {

	NRPBMutableDevice* _protobuf;
	NSMutableDictionary* _properties;

}

@property (nonatomic,readonly) NSUUID * pairingID; 
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isArchived; 
@property (nonatomic,readonly) BOOL migratable; 
@property (nonatomic,readonly) BOOL isAltAccount; 
@property (nonatomic,retain) NRPBMutableDevice * protobuf;              //@synthesize protobuf=_protobuf - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(id)diffsToActivate:(BOOL)arg1 withDate:(id)arg2 ;
+(id)diffsToPair:(BOOL)arg1 withDate:(id)arg2 ;
+(id)diffsToSetStatusCode:(unsigned long long)arg1 andCompatibilityState:(unsigned short)arg2 ;
+(id)diffsToSetStatusCode:(unsigned long long)arg1 ;
+(id)diffsToClearStatusCodeAndCompatibilityState;
+(void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)isActive;
-(id)propertyForName:(id)arg1 ;
-(void)setProtobuf:(NRPBMutableDevice *)arg1 ;
-(NRPBMutableDevice *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)isPaired;
-(void)setProperty:(id)arg1 forName:(id)arg2 ;
-(NSUUID *)pairingID;
-(BOOL)isArchived;
-(BOOL)isAltAccount;
-(BOOL)migratable;
-(BOOL)supportsCapability:(id)arg1 ;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(id)_createIndex:(id)arg1 ;
-(void)removePropertyForName:(id)arg1 ;
-(id)allPropertyNames;
@end

