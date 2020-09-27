/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying> {

	BOOL _regenerateKeys;
	BOOL _authenticationFallbackVisible;
	BOOL _displayAuthenticationReason;
	NSString* _clientCertLabel;
	NSString* _intermediateCertLabel;
	NSString* _label;
	unsigned long long _purpose;
	unsigned long long _style;
	NSString* _prompt;

}

@property (nonatomic,copy) NSString * clientCertLabel;                        //@synthesize clientCertLabel=_clientCertLabel - In the implementation block
@property (nonatomic,copy) NSString * intermediateCertLabel;                  //@synthesize intermediateCertLabel=_intermediateCertLabel - In the implementation block
@property (nonatomic,copy) NSString * label;                                  //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long purpose;                      //@synthesize purpose=_purpose - In the implementation block
@property (assign,nonatomic) BOOL regenerateKeys;                             //@synthesize regenerateKeys=_regenerateKeys - In the implementation block
@property (assign,nonatomic) unsigned long long style;                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL authenticationFallbackVisible;              //@synthesize authenticationFallbackVisible=_authenticationFallbackVisible - In the implementation block
@property (assign,nonatomic) BOOL displayAuthenticationReason;                //@synthesize displayAuthenticationReason=_displayAuthenticationReason - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                 //@synthesize prompt=_prompt - In the implementation block
+(unsigned long long)preferredAttestationStyle;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setPurpose:(unsigned long long)arg1 ;
-(unsigned long long)purpose;
-(id)optionsDictionary;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(BOOL)regenerateKeys;
-(void)setRegenerateKeys:(BOOL)arg1 ;
-(id)initWithOptionsDictionary:(id)arg1 ;
-(NSString *)clientCertLabel;
-(NSString *)intermediateCertLabel;
-(BOOL)authenticationFallbackVisible;
-(BOOL)displayAuthenticationReason;
-(BOOL)_compareString:(id)arg1 withString:(id)arg2 ;
-(void)setClientCertLabel:(NSString *)arg1 ;
-(void)setIntermediateCertLabel:(NSString *)arg1 ;
-(void)setAuthenticationFallbackVisible:(BOOL)arg1 ;
-(void)setDisplayAuthenticationReason:(BOOL)arg1 ;
@end

