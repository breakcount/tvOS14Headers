/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKServiceProviderPurchaseData, NSDate, NSArray;

@interface PKServiceProviderPurchase : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _visibleTransactionIdentifier;
	unsigned long long _state;
	NSString* _deviceIdentifier;
	NSString* _regionIdentifier;
	NSString* _serviceProviderIdentifier;
	PKServiceProviderPurchaseData* _serviceProviderData;
	NSDate* _purchaseDate;
	NSString* _signature;
	NSString* _partnerMetadata;
	NSArray* _actions;

}

@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * visibleTransactionIdentifier;                          //@synthesize visibleTransactionIdentifier=_visibleTransactionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                                      //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * regionIdentifier;                                      //@synthesize regionIdentifier=_regionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serviceProviderIdentifier;                             //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,copy) PKServiceProviderPurchaseData * serviceProviderData;              //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
@property (nonatomic,copy) NSDate * purchaseDate;                                            //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (nonatomic,copy) NSString * signature;                                             //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy) NSString * partnerMetadata;                                       //@synthesize partnerMetadata=_partnerMetadata - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                                //@synthesize actions=_actions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)purchaseWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)signature;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setSignature:(NSString *)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSDate *)purchaseDate;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSString *)serviceProviderIdentifier;
-(PKServiceProviderPurchaseData *)serviceProviderData;
-(void)setServiceProviderIdentifier:(NSString *)arg1 ;
-(void)setServiceProviderData:(PKServiceProviderPurchaseData *)arg1 ;
-(NSString *)visibleTransactionIdentifier;
-(BOOL)isEqualToServiceProviderPurchase:(id)arg1 ;
-(void)setVisibleTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)regionIdentifier;
-(void)setRegionIdentifier:(NSString *)arg1 ;
-(NSString *)partnerMetadata;
-(void)setPartnerMetadata:(NSString *)arg1 ;
@end

