/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKEncryptedDataObject : NSObject <NSSecureCoding> {

	unsigned long long _version;
	NSData* _ephemeralPublicKey;
	NSData* _publicKeyHash;
	NSData* _data;

}

@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSData * ephemeralPublicKey;               //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,copy) NSData * publicKeyHash;                    //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSData * data;                             //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)version;
-(void)setData:(NSData *)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(id)initWithWebServiceDictionary:(id)arg1 ;
-(id)asWebServiceDictionary;
-(NSData *)ephemeralPublicKey;
-(void)setEphemeralPublicKey:(NSData *)arg1 ;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
@end

