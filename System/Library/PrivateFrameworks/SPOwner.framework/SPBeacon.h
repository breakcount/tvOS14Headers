/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, SPHandle, NSString, SPBeaconRole, SPLostModeInfo, NSSet, NSDictionary, NSDate;

@interface SPBeacon : NSObject <NSCopying, NSSecureCoding> {

	BOOL _accepted;
	NSUUID* _identifier;
	SPHandle* _owner;
	NSString* _name;
	NSString* _model;
	SPBeaconRole* _role;
	SPLostModeInfo* _lostModeInfo;
	NSSet* _shares;
	NSDictionary* _taskInformation;
	NSString* _systemVersion;
	long long _vendorId;
	long long _productId;
	NSString* _stableIdentifier;
	NSDate* _pairingDate;
	NSString* _correlationIdentifier;

}

@property (nonatomic,copy) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * stableIdentifier;                   //@synthesize stableIdentifier=_stableIdentifier - In the implementation block
@property (nonatomic,copy) SPHandle * owner;                              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) BOOL accepted;                               //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,copy) NSDate * pairingDate;                          //@synthesize pairingDate=_pairingDate - In the implementation block
@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) SPBeaconRole * role;                           //@synthesize role=_role - In the implementation block
@property (nonatomic,copy) SPLostModeInfo * lostModeInfo;                 //@synthesize lostModeInfo=_lostModeInfo - In the implementation block
@property (nonatomic,copy) NSSet * shares;                                //@synthesize shares=_shares - In the implementation block
@property (nonatomic,copy) NSDictionary * taskInformation;                //@synthesize taskInformation=_taskInformation - In the implementation block
@property (nonatomic,copy) NSString * correlationIdentifier;              //@synthesize correlationIdentifier=_correlationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;                      //@synthesize systemVersion=_systemVersion - In the implementation block
@property (assign,nonatomic) long long vendorId;                          //@synthesize vendorId=_vendorId - In the implementation block
@property (assign,nonatomic) long long productId;                         //@synthesize productId=_productId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)SPOwner;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setOwner:(SPHandle *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)systemVersion;
-(NSString *)model;
-(SPBeaconRole *)role;
-(void)setRole:(SPBeaconRole *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setProductId:(long long)arg1 ;
-(long long)productId;
-(long long)vendorId;
-(void)setVendorId:(long long)arg1 ;
-(SPHandle *)owner;
-(void)setSystemVersion:(NSString *)arg1 ;
-(NSString *)correlationIdentifier;
-(void)setCorrelationIdentifier:(NSString *)arg1 ;
-(SPLostModeInfo *)lostModeInfo;
-(void)setAccepted:(BOOL)arg1 ;
-(BOOL)accepted;
-(NSString *)stableIdentifier;
-(void)setStableIdentifier:(NSString *)arg1 ;
-(NSDate *)pairingDate;
-(void)setPairingDate:(NSDate *)arg1 ;
-(void)setLostModeInfo:(SPLostModeInfo *)arg1 ;
-(NSSet *)shares;
-(void)setShares:(NSSet *)arg1 ;
-(NSDictionary *)taskInformation;
-(void)setTaskInformation:(NSDictionary *)arg1 ;
@end

