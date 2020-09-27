/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _powerOn;
	BOOL _isDiscoverable;
	BOOL _isConnectable;
	BOOL _isScanning;
	NSString* _address;
	NSArray* _devices;

}

@property (assign,nonatomic) BOOL powerOn;                     //@synthesize powerOn=_powerOn - In the implementation block
@property (nonatomic,copy) NSString * address;                 //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) BOOL isDiscoverable;              //@synthesize isDiscoverable=_isDiscoverable - In the implementation block
@property (assign,nonatomic) BOOL isConnectable;               //@synthesize isConnectable=_isConnectable - In the implementation block
@property (assign,nonatomic) BOOL isScanning;                  //@synthesize isScanning=_isScanning - In the implementation block
@property (nonatomic,copy) NSArray * devices;                  //@synthesize devices=_devices - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setIsScanning:(BOOL)arg1 ;
-(BOOL)isScanning;
-(BOOL)isDiscoverable;
-(BOOL)powerOn;
-(void)setPowerOn:(BOOL)arg1 ;
-(BOOL)isConnectable;
-(BOOL)isEqualToBluetoothStatus:(id)arg1 ;
-(void)setIsDiscoverable:(BOOL)arg1 ;
-(void)setIsConnectable:(BOOL)arg1 ;
@end

