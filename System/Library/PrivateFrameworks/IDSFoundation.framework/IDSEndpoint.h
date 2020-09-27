/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IDSURI, NSData, IDSEndpointCapabilities, IDSMPPublicDeviceIdentityContainer, NSError, NSDate, NSString;

@interface IDSEndpoint : NSObject <NSSecureCoding, NSCopying> {

	char _legacyVersion;
	BOOL _mismatchedAccountFlag;
	BOOL _verifiedBusiness;
	short _ngmVersion;
	IDSURI* _URI;
	NSData* _pushToken;
	IDSEndpointCapabilities* _capabilities;
	IDSMPPublicDeviceIdentityContainer* _publicDeviceIdentityContainer;
	NSData* _serializedNGMDeviceIdentity;
	NSData* _serializedLegacyPublicIdentity;
	NSData* _serializedNGMDevicePrekey;
	NSError* _identityContainerDeserializationError;
	NSData* _KTLoggableData;
	NSData* _sessionToken;
	NSDate* _expireDate;
	NSDate* _refreshDate;
	NSString* _anonymizedSenderID;
	NSString* _senderCorrelationIdentifier;
	double _queryTimeInterval;

}

@property (nonatomic,retain) IDSURI * URI;                                                                    //@synthesize URI=_URI - In the implementation block
@property (nonatomic,retain) NSData * pushToken;                                                              //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) IDSMPPublicDeviceIdentityContainer * publicDeviceIdentityContainer;              //@synthesize publicDeviceIdentityContainer=_publicDeviceIdentityContainer - In the implementation block
@property (nonatomic,retain) IDSEndpointCapabilities * capabilities;                                          //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) NSData * serializedNGMDeviceIdentity;                                          //@synthesize serializedNGMDeviceIdentity=_serializedNGMDeviceIdentity - In the implementation block
@property (nonatomic,readonly) NSData * serializedLegacyPublicIdentity;                                       //@synthesize serializedLegacyPublicIdentity=_serializedLegacyPublicIdentity - In the implementation block
@property (nonatomic,readonly) NSData * serializedNGMDevicePrekey;                                            //@synthesize serializedNGMDevicePrekey=_serializedNGMDevicePrekey - In the implementation block
@property (nonatomic,readonly) short ngmVersion;                                                              //@synthesize ngmVersion=_ngmVersion - In the implementation block
@property (nonatomic,readonly) char legacyVersion;                                                            //@synthesize legacyVersion=_legacyVersion - In the implementation block
@property (nonatomic,readonly) NSError * identityContainerDeserializationError;                               //@synthesize identityContainerDeserializationError=_identityContainerDeserializationError - In the implementation block
@property (nonatomic,readonly) NSData * KTLoggableData;                                                       //@synthesize KTLoggableData=_KTLoggableData - In the implementation block
@property (nonatomic,readonly) BOOL mismatchedAccountFlag;                                                    //@synthesize mismatchedAccountFlag=_mismatchedAccountFlag - In the implementation block
@property (nonatomic,readonly) NSData * sessionToken;                                                         //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,readonly) NSDate * expireDate;                                                           //@synthesize expireDate=_expireDate - In the implementation block
@property (nonatomic,readonly) NSDate * refreshDate;                                                          //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,readonly) NSString * anonymizedSenderID;                                                 //@synthesize anonymizedSenderID=_anonymizedSenderID - In the implementation block
@property (nonatomic,readonly) BOOL verifiedBusiness;                                                         //@synthesize verifiedBusiness=_verifiedBusiness - In the implementation block
@property (nonatomic,readonly) NSString * senderCorrelationIdentifier;                                        //@synthesize senderCorrelationIdentifier=_senderCorrelationIdentifier - In the implementation block
@property (nonatomic,readonly) double queryTimeInterval;                                                      //@synthesize queryTimeInterval=_queryTimeInterval - In the implementation block
@property (nonatomic,readonly) NSData * serializedPublicLegacyIdentity; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IDSURI *)URI;
-(IDSEndpointCapabilities *)capabilities;
-(NSData *)pushToken;
-(void)setPushToken:(NSData *)arg1 ;
-(void)setCapabilities:(IDSEndpointCapabilities *)arg1 ;
-(NSDate *)expireDate;
-(NSData *)sessionToken;
-(short)ngmVersion;
-(NSString *)senderCorrelationIdentifier;
-(id)initWithURI:(id)arg1 clientData:(id)arg2 KTLoggableData:(id)arg3 mismatchedAccountFlag:(BOOL)arg4 pushToken:(id)arg5 sessionToken:(id)arg6 expireDate:(id)arg7 refreshDate:(id)arg8 anonymizedSenderID:(id)arg9 verifiedBusiness:(BOOL)arg10 serializedPublicMessageProtectionIdentity:(id)arg11 senderCorrelationIdentifier:(id)arg12 queryTimeInterval:(double)arg13 serializedNGMDeviceIdentity:(id)arg14 serializedNGMDevicePrekey:(id)arg15 ;
-(id)initWithURI:(id)arg1 capabilities:(id)arg2 ngmVersion:(short)arg3 legacyVersion:(char)arg4 KTLoggableData:(id)arg5 mismatchedAccountFlag:(BOOL)arg6 pushToken:(id)arg7 sessionToken:(id)arg8 expireDate:(id)arg9 refreshDate:(id)arg10 anonymizedSenderID:(id)arg11 verifiedBusiness:(BOOL)arg12 serializedPublicMessageProtectionIdentity:(id)arg13 senderCorrelationIdentifier:(id)arg14 queryTimeInterval:(double)arg15 serializedNGMDeviceIdentity:(id)arg16 serializedNGMDevicePrekey:(id)arg17 ;
-(NSData *)serializedNGMDeviceIdentity;
-(BOOL)isEqualToEndpoint:(id)arg1 ;
-(double)queryTimeInterval;
-(NSData *)KTLoggableData;
-(NSDate *)refreshDate;
-(NSString *)anonymizedSenderID;
-(BOOL)verifiedBusiness;
-(NSData *)serializedLegacyPublicIdentity;
-(NSData *)serializedNGMDevicePrekey;
-(char)legacyVersion;
-(BOOL)mismatchedAccountFlag;
-(id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6 ;
-(IDSMPPublicDeviceIdentityContainer *)publicDeviceIdentityContainer;
-(NSData *)serializedPublicLegacyIdentity;
-(void)setURI:(IDSURI *)arg1 ;
-(void)setPublicDeviceIdentityContainer:(IDSMPPublicDeviceIdentityContainer *)arg1 ;
-(NSError *)identityContainerDeserializationError;
@end

