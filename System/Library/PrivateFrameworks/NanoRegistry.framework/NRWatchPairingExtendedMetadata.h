/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding> {

	BOOL _postFailsafeObliteration;
	BOOL _isCellularEnabled;
	long long _chipID;
	long long _pairingVersion;
	NSString* _productType;

}

@property (assign,nonatomic) long long chipID;                           //@synthesize chipID=_chipID - In the implementation block
@property (assign,nonatomic) long long pairingVersion;                   //@synthesize pairingVersion=_pairingVersion - In the implementation block
@property (nonatomic,retain) NSString * productType;                     //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) BOOL postFailsafeObliteration;              //@synthesize postFailsafeObliteration=_postFailsafeObliteration - In the implementation block
@property (assign,nonatomic) BOOL isCellularEnabled;                     //@synthesize isCellularEnabled=_isCellularEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(long long)chipID;
-(void)setChipID:(long long)arg1 ;
-(long long)pairingVersion;
-(void)setPairingVersion:(long long)arg1 ;
-(BOOL)postFailsafeObliteration;
-(void)setPostFailsafeObliteration:(BOOL)arg1 ;
-(BOOL)isCellularEnabled;
-(void)setIsCellularEnabled:(BOOL)arg1 ;
@end

