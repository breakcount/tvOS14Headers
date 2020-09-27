/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NEIKEv2ConfigurationMessage, NEIKEv2Identifier, NSArray, NEIKEv2AuthenticationProtocol, NSString, NSData;

@interface NEIKEv2SessionConfiguration : NSObject <NSCopying> {

	NEIKEv2ConfigurationMessage* _configurationRequest;
	NEIKEv2ConfigurationMessage* _configurationReply;
	BOOL _initialContactDisabled;
	BOOL _negotiateMOBIKE;
	BOOL _natTraversalKeepaliveDisabled;
	BOOL _natTraversalKeepaliveEnabled;
	BOOL _natTraversalKeepaliveOffloadEnabled;
	BOOL _deadPeerDetectionEnabled;
	BOOL _idleTimeoutEnabled;
	BOOL _blackholeDetectionEnabled;
	BOOL _enableCertificateRevocationCheck;
	BOOL _strictCertificateRevocationCheck;
	BOOL _disableRemoteCertificateValidation;
	unsigned _deadPeerDetectionMaxRetryCount;
	unsigned _deadPeerDetectionMaxRetryCountBeforeReporting;
	unsigned _deadPeerDetectionReceiveMaxShortDPDBeforeReporting;
	NEIKEv2Identifier* _localIdentifier;
	NEIKEv2Identifier* _remoteIdentifier;
	NSArray* _additionalMOBIKEAddresses;
	unsigned long long _natTraversalKeepaliveInterval;
	unsigned long long _natTraversalKeepaliveOffloadInterval;
	unsigned long long _deadPeerDetectionInterval;
	unsigned long long _deadPeerDetectionRetryIntervalMilliseconds;
	unsigned long long _deadPeerDetectionReceiveIntervalTriggerReporting;
	unsigned long long _idleTimeoutSeconds;
	NEIKEv2AuthenticationProtocol* _authenticationProtocol;
	NEIKEv2AuthenticationProtocol* _remoteAuthentication;
	NSString* _localPrivateEAPIdentity;
	NSData* _localEncryptedEAPIdentity;
	NSString* _username;
	NSString* _password;
	NSData* _passwordReference;
	NSData* _sharedSecret;
	NSData* _sharedSecretReference;
	NSString* _localCertificateName;
	NSData* _localCertificateReference;
	NSString* _remoteCertificateHostname;
	NSString* _remoteCertificateAuthorityName;
	NSArray* _remoteCertificateAuthorityReferences;
	NSData* _remoteCertificateAuthorityHash;
	NSData* _localPrivateKey;
	NSData* _localPublicKey;
	NSData* _remotePublicKey;
	NSString* _tlsMinimumVersion;
	NSString* _tlsMaximumVersion;
	NSArray* _customIKEAuthPayloads;
	NSArray* _customIKEAuthVendorPayloads;
	NSArray* _customIKEAuthPrivateNotifies;

}

@property (retain) NEIKEv2Identifier * localIdentifier;                                              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (retain) NEIKEv2Identifier * remoteIdentifier;                                             //@synthesize remoteIdentifier=_remoteIdentifier - In the implementation block
@property (assign) BOOL initialContactDisabled;                                                      //@synthesize initialContactDisabled=_initialContactDisabled - In the implementation block
@property (assign) BOOL negotiateMOBIKE;                                                             //@synthesize negotiateMOBIKE=_negotiateMOBIKE - In the implementation block
@property (retain) NSArray * additionalMOBIKEAddresses;                                              //@synthesize additionalMOBIKEAddresses=_additionalMOBIKEAddresses - In the implementation block
@property (assign) BOOL natTraversalKeepaliveDisabled;                                               //@synthesize natTraversalKeepaliveDisabled=_natTraversalKeepaliveDisabled - In the implementation block
@property (assign) BOOL natTraversalKeepaliveEnabled;                                                //@synthesize natTraversalKeepaliveEnabled=_natTraversalKeepaliveEnabled - In the implementation block
@property (assign) unsigned long long natTraversalKeepaliveInterval;                                 //@synthesize natTraversalKeepaliveInterval=_natTraversalKeepaliveInterval - In the implementation block
@property (assign) BOOL natTraversalKeepaliveOffloadEnabled;                                         //@synthesize natTraversalKeepaliveOffloadEnabled=_natTraversalKeepaliveOffloadEnabled - In the implementation block
@property (assign) unsigned long long natTraversalKeepaliveOffloadInterval;                          //@synthesize natTraversalKeepaliveOffloadInterval=_natTraversalKeepaliveOffloadInterval - In the implementation block
@property (assign) BOOL deadPeerDetectionEnabled;                                                    //@synthesize deadPeerDetectionEnabled=_deadPeerDetectionEnabled - In the implementation block
@property (assign) unsigned long long deadPeerDetectionInterval;                                     //@synthesize deadPeerDetectionInterval=_deadPeerDetectionInterval - In the implementation block
@property (assign) unsigned long long deadPeerDetectionRetryIntervalMilliseconds;                    //@synthesize deadPeerDetectionRetryIntervalMilliseconds=_deadPeerDetectionRetryIntervalMilliseconds - In the implementation block
@property (assign) unsigned deadPeerDetectionMaxRetryCount;                                          //@synthesize deadPeerDetectionMaxRetryCount=_deadPeerDetectionMaxRetryCount - In the implementation block
@property (assign) unsigned deadPeerDetectionMaxRetryCountBeforeReporting;                           //@synthesize deadPeerDetectionMaxRetryCountBeforeReporting=_deadPeerDetectionMaxRetryCountBeforeReporting - In the implementation block
@property (assign) unsigned long long deadPeerDetectionReceiveIntervalTriggerReporting;              //@synthesize deadPeerDetectionReceiveIntervalTriggerReporting=_deadPeerDetectionReceiveIntervalTriggerReporting - In the implementation block
@property (assign) unsigned deadPeerDetectionReceiveMaxShortDPDBeforeReporting;                      //@synthesize deadPeerDetectionReceiveMaxShortDPDBeforeReporting=_deadPeerDetectionReceiveMaxShortDPDBeforeReporting - In the implementation block
@property (assign) BOOL idleTimeoutEnabled;                                                          //@synthesize idleTimeoutEnabled=_idleTimeoutEnabled - In the implementation block
@property (assign) unsigned long long idleTimeoutSeconds;                                            //@synthesize idleTimeoutSeconds=_idleTimeoutSeconds - In the implementation block
@property (assign) BOOL blackholeDetectionEnabled;                                                   //@synthesize blackholeDetectionEnabled=_blackholeDetectionEnabled - In the implementation block
@property (retain) NEIKEv2AuthenticationProtocol * authenticationProtocol;                           //@synthesize authenticationProtocol=_authenticationProtocol - In the implementation block
@property (retain) NEIKEv2AuthenticationProtocol * remoteAuthentication;                             //@synthesize remoteAuthentication=_remoteAuthentication - In the implementation block
@property (retain) NSString * localPrivateEAPIdentity;                                               //@synthesize localPrivateEAPIdentity=_localPrivateEAPIdentity - In the implementation block
@property (retain) NSData * localEncryptedEAPIdentity;                                               //@synthesize localEncryptedEAPIdentity=_localEncryptedEAPIdentity - In the implementation block
@property (retain) NSString * username;                                                              //@synthesize username=_username - In the implementation block
@property (retain) NSString * password;                                                              //@synthesize password=_password - In the implementation block
@property (retain) NSData * passwordReference;                                                       //@synthesize passwordReference=_passwordReference - In the implementation block
@property (retain) NSData * sharedSecret;                                                            //@synthesize sharedSecret=_sharedSecret - In the implementation block
@property (retain) NSData * sharedSecretReference;                                                   //@synthesize sharedSecretReference=_sharedSecretReference - In the implementation block
@property (retain) NSString * localCertificateName;                                                  //@synthesize localCertificateName=_localCertificateName - In the implementation block
@property (retain) NSData * localCertificateReference;                                               //@synthesize localCertificateReference=_localCertificateReference - In the implementation block
@property (retain) NSString * remoteCertificateHostname;                                             //@synthesize remoteCertificateHostname=_remoteCertificateHostname - In the implementation block
@property (retain) NSString * remoteCertificateAuthorityName;                                        //@synthesize remoteCertificateAuthorityName=_remoteCertificateAuthorityName - In the implementation block
@property (retain) NSArray * remoteCertificateAuthorityReferences;                                   //@synthesize remoteCertificateAuthorityReferences=_remoteCertificateAuthorityReferences - In the implementation block
@property (retain) NSData * remoteCertificateAuthorityHash;                                          //@synthesize remoteCertificateAuthorityHash=_remoteCertificateAuthorityHash - In the implementation block
@property (assign) BOOL enableCertificateRevocationCheck;                                            //@synthesize enableCertificateRevocationCheck=_enableCertificateRevocationCheck - In the implementation block
@property (assign) BOOL strictCertificateRevocationCheck;                                            //@synthesize strictCertificateRevocationCheck=_strictCertificateRevocationCheck - In the implementation block
@property (assign) BOOL disableRemoteCertificateValidation;                                          //@synthesize disableRemoteCertificateValidation=_disableRemoteCertificateValidation - In the implementation block
@property (retain) NSData * localPrivateKey;                                                         //@synthesize localPrivateKey=_localPrivateKey - In the implementation block
@property (retain) NSData * localPublicKey;                                                          //@synthesize localPublicKey=_localPublicKey - In the implementation block
@property (retain) NSData * remotePublicKey;                                                         //@synthesize remotePublicKey=_remotePublicKey - In the implementation block
@property (retain) NSString * tlsMinimumVersion;                                                     //@synthesize tlsMinimumVersion=_tlsMinimumVersion - In the implementation block
@property (retain) NSString * tlsMaximumVersion;                                                     //@synthesize tlsMaximumVersion=_tlsMaximumVersion - In the implementation block
@property (retain) NEIKEv2ConfigurationMessage * configurationRequest; 
@property (retain) NEIKEv2ConfigurationMessage * configurationReply; 
@property (retain) NSArray * customIKEAuthPayloads;                                                  //@synthesize customIKEAuthPayloads=_customIKEAuthPayloads - In the implementation block
@property (retain) NSArray * customIKEAuthVendorPayloads;                                            //@synthesize customIKEAuthVendorPayloads=_customIKEAuthVendorPayloads - In the implementation block
@property (nonatomic,retain) NSArray * customIKEAuthPrivateNotifies;                                 //@synthesize customIKEAuthPrivateNotifies=_customIKEAuthPrivateNotifies - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setPasswordReference:(NSData *)arg1 ;
-(void)setSharedSecretReference:(NSData *)arg1 ;
-(void)setLocalIdentifier:(NEIKEv2Identifier *)arg1 ;
-(void)setRemoteIdentifier:(NEIKEv2Identifier *)arg1 ;
-(NSData *)sharedSecret;
-(NSData *)passwordReference;
-(NEIKEv2AuthenticationProtocol *)authenticationProtocol;
-(void)setAuthenticationProtocol:(NEIKEv2AuthenticationProtocol *)arg1 ;
-(NEIKEv2Identifier *)localIdentifier;
-(NEIKEv2Identifier *)remoteIdentifier;
-(NEIKEv2ConfigurationMessage *)configurationRequest;
-(NEIKEv2ConfigurationMessage *)configurationReply;
-(NSArray *)customIKEAuthPrivateNotifies;
-(BOOL)initialContactDisabled;
-(void)setInitialContactDisabled:(BOOL)arg1 ;
-(BOOL)negotiateMOBIKE;
-(void)setNegotiateMOBIKE:(BOOL)arg1 ;
-(NSArray *)additionalMOBIKEAddresses;
-(void)setAdditionalMOBIKEAddresses:(NSArray *)arg1 ;
-(BOOL)natTraversalKeepaliveDisabled;
-(void)setNatTraversalKeepaliveDisabled:(BOOL)arg1 ;
-(unsigned long long)natTraversalKeepaliveInterval;
-(void)setNatTraversalKeepaliveInterval:(unsigned long long)arg1 ;
-(BOOL)natTraversalKeepaliveOffloadEnabled;
-(void)setNatTraversalKeepaliveOffloadEnabled:(BOOL)arg1 ;
-(unsigned long long)natTraversalKeepaliveOffloadInterval;
-(void)setNatTraversalKeepaliveOffloadInterval:(unsigned long long)arg1 ;
-(BOOL)deadPeerDetectionEnabled;
-(void)setDeadPeerDetectionEnabled:(BOOL)arg1 ;
-(unsigned long long)deadPeerDetectionInterval;
-(void)setDeadPeerDetectionInterval:(unsigned long long)arg1 ;
-(unsigned long long)deadPeerDetectionRetryIntervalMilliseconds;
-(void)setDeadPeerDetectionRetryIntervalMilliseconds:(unsigned long long)arg1 ;
-(unsigned)deadPeerDetectionMaxRetryCount;
-(void)setDeadPeerDetectionMaxRetryCount:(unsigned)arg1 ;
-(unsigned)deadPeerDetectionMaxRetryCountBeforeReporting;
-(void)setDeadPeerDetectionMaxRetryCountBeforeReporting:(unsigned)arg1 ;
-(unsigned long long)deadPeerDetectionReceiveIntervalTriggerReporting;
-(void)setDeadPeerDetectionReceiveIntervalTriggerReporting:(unsigned long long)arg1 ;
-(unsigned)deadPeerDetectionReceiveMaxShortDPDBeforeReporting;
-(void)setDeadPeerDetectionReceiveMaxShortDPDBeforeReporting:(unsigned)arg1 ;
-(BOOL)idleTimeoutEnabled;
-(void)setIdleTimeoutEnabled:(BOOL)arg1 ;
-(unsigned long long)idleTimeoutSeconds;
-(void)setIdleTimeoutSeconds:(unsigned long long)arg1 ;
-(BOOL)blackholeDetectionEnabled;
-(void)setBlackholeDetectionEnabled:(BOOL)arg1 ;
-(NSString *)localPrivateEAPIdentity;
-(void)setLocalPrivateEAPIdentity:(NSString *)arg1 ;
-(NSData *)localEncryptedEAPIdentity;
-(void)setLocalEncryptedEAPIdentity:(NSData *)arg1 ;
-(void)setSharedSecret:(NSData *)arg1 ;
-(NSData *)sharedSecretReference;
-(NSString *)localCertificateName;
-(void)setLocalCertificateName:(NSString *)arg1 ;
-(NSData *)localCertificateReference;
-(void)setLocalCertificateReference:(NSData *)arg1 ;
-(NSString *)remoteCertificateHostname;
-(void)setRemoteCertificateHostname:(NSString *)arg1 ;
-(NSString *)remoteCertificateAuthorityName;
-(void)setRemoteCertificateAuthorityName:(NSString *)arg1 ;
-(NSArray *)remoteCertificateAuthorityReferences;
-(void)setRemoteCertificateAuthorityReferences:(NSArray *)arg1 ;
-(NSData *)remoteCertificateAuthorityHash;
-(void)setRemoteCertificateAuthorityHash:(NSData *)arg1 ;
-(BOOL)enableCertificateRevocationCheck;
-(void)setEnableCertificateRevocationCheck:(BOOL)arg1 ;
-(BOOL)strictCertificateRevocationCheck;
-(void)setStrictCertificateRevocationCheck:(BOOL)arg1 ;
-(BOOL)disableRemoteCertificateValidation;
-(void)setDisableRemoteCertificateValidation:(BOOL)arg1 ;
-(NSData *)localPrivateKey;
-(void)setLocalPrivateKey:(NSData *)arg1 ;
-(NSData *)localPublicKey;
-(void)setLocalPublicKey:(NSData *)arg1 ;
-(NSData *)remotePublicKey;
-(void)setRemotePublicKey:(NSData *)arg1 ;
-(NEIKEv2AuthenticationProtocol *)remoteAuthentication;
-(void)setRemoteAuthentication:(NEIKEv2AuthenticationProtocol *)arg1 ;
-(NSString *)tlsMinimumVersion;
-(void)setTlsMinimumVersion:(NSString *)arg1 ;
-(NSString *)tlsMaximumVersion;
-(void)setTlsMaximumVersion:(NSString *)arg1 ;
-(void)setConfigurationRequest:(NEIKEv2ConfigurationMessage *)arg1 ;
-(void)setConfigurationReply:(NEIKEv2ConfigurationMessage *)arg1 ;
-(NSArray *)customIKEAuthPayloads;
-(void)setCustomIKEAuthPayloads:(NSArray *)arg1 ;
-(NSArray *)customIKEAuthVendorPayloads;
-(void)setCustomIKEAuthVendorPayloads:(NSArray *)arg1 ;
-(void)setCustomIKEAuthPrivateNotifies:(NSArray *)arg1 ;
-(BOOL)natTraversalKeepaliveEnabled;
-(void)setNatTraversalKeepaliveEnabled:(BOOL)arg1 ;
@end

