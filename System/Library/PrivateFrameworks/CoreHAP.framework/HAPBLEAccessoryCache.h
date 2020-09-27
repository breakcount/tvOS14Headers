/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HAPBLEPeripheralInfo, NSMutableArray;

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding> {

	NSString* _pairingIdentifier;
	HAPBLEPeripheralInfo* _peripheralInfo;
	NSMutableArray* _cachedServices;

}

@property (nonatomic,retain) HAPBLEPeripheralInfo * peripheralInfo;              //@synthesize peripheralInfo=_peripheralInfo - In the implementation block
@property (nonatomic,readonly) NSString * pairingIdentifier;                     //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableArray * cachedServices;                  //@synthesize cachedServices=_cachedServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)pairingIdentifier;
-(void)updateWithService:(id)arg1 ;
-(HAPBLEPeripheralInfo *)peripheralInfo;
-(void)setPeripheralInfo:(HAPBLEPeripheralInfo *)arg1 ;
-(NSMutableArray *)cachedServices;
-(id)initWithPairingIdentifier:(id)arg1 ;
-(void)updateWithPeripheralInfo:(id)arg1 ;
-(id)getCachedServiceWithUUID:(id)arg1 ;
@end

