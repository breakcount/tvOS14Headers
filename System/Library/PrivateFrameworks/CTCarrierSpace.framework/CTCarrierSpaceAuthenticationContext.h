/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCarrierSpaceAuthenticationContext : NSObject <NSSecureCoding> {

	BOOL _supportsState;
	NSString* _clientID;
	NSString* _authURL;
	NSString* _tokenURL;
	NSString* _carrierName;
	NSString* _iccid;
	NSString* _scope;
	NSString* _sourceApplicationAccountIdentifier;

}

@property (nonatomic,retain) NSString * clientID;                                        //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSString * authURL;                                         //@synthesize authURL=_authURL - In the implementation block
@property (nonatomic,retain) NSString * tokenURL;                                        //@synthesize tokenURL=_tokenURL - In the implementation block
@property (nonatomic,retain) NSString * carrierName;                                     //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * iccid;                                           //@synthesize iccid=_iccid - In the implementation block
@property (nonatomic,retain) NSString * scope;                                           //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) BOOL supportsState;                                         //@synthesize supportsState=_supportsState - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationAccountIdentifier;              //@synthesize sourceApplicationAccountIdentifier=_sourceApplicationAccountIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)scope;
-(NSString *)clientID;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)iccid;
-(NSString *)carrierName;
-(void)setCarrierName:(NSString *)arg1 ;
-(void)setIccid:(NSString *)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)authURL;
-(NSString *)tokenURL;
-(void)setTokenURL:(NSString *)arg1 ;
-(BOOL)supportsState;
-(NSString *)sourceApplicationAccountIdentifier;
-(void)setAuthURL:(NSString *)arg1 ;
-(void)setSupportsState:(BOOL)arg1 ;
-(void)setSourceApplicationAccountIdentifier:(NSString *)arg1 ;
@end

