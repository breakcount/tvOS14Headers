/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKAccountOverrideInfo, CKContainerID, NSDictionary, NSString, CKFrameworkFingerprint;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _captureResponseHTTPHeaders;
	BOOL _wantsSiloedContext;
	BOOL _useZoneWidePCS;
	BOOL _holdAllOperations;
	BOOL _returnPCSMetadata;
	BOOL _bypassPCSEncryption;
	BOOL _forceEnableReadOnlyManatee;
	BOOL _masqueradeAsThirdPartyApp;
	BOOL _useClearAssetEncryption;
	BOOL _connectToTestingDaemon;
	unsigned _clientSDKVersion;
	CKAccountOverrideInfo* _accountInfoOverride;
	CKContainerID* _containerID;
	NSDictionary* _fakeEntitlements;
	unsigned long long _mmcsEncryptionSupport;
	NSString* _containerEncryptionServiceName;
	CKFrameworkFingerprint* _frameworkFingerprint;
	NSString* _personaIdentifier;
	NSString* _applicationBundleIdentifierOverrideForContainerAccess;
	NSString* _applicationBundleIdentifierOverrideForNetworkAttribution;
	NSString* _applicationBundleIdentifierOverrideForPushTopicGeneration;
	NSString* _applicationBundleIdentifierOverrideForTCC;

}

@property (nonatomic,retain) CKContainerID * containerID;                                                       //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) CKAccountOverrideInfo * accountInfoOverride;                                         //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (assign,nonatomic) BOOL captureResponseHTTPHeaders;                                                   //@synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL wantsSiloedContext;                                                           //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
@property (assign,nonatomic) BOOL useZoneWidePCS;                                                               //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (nonatomic,retain) NSDictionary * fakeEntitlements;                                                   //@synthesize fakeEntitlements=_fakeEntitlements - In the implementation block
@property (assign,nonatomic) BOOL holdAllOperations;                                                            //@synthesize holdAllOperations=_holdAllOperations - In the implementation block
@property (assign,nonatomic) BOOL returnPCSMetadata;                                                            //@synthesize returnPCSMetadata=_returnPCSMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long mmcsEncryptionSupport;                                          //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,retain) NSString * containerEncryptionServiceName;                                         //@synthesize containerEncryptionServiceName=_containerEncryptionServiceName - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryption;                                                          //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (assign,nonatomic) BOOL forceEnableReadOnlyManatee;                                                   //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (assign,nonatomic) unsigned clientSDKVersion;                                                         //@synthesize clientSDKVersion=_clientSDKVersion - In the implementation block
@property (assign,nonatomic) BOOL masqueradeAsThirdPartyApp;                                                    //@synthesize masqueradeAsThirdPartyApp=_masqueradeAsThirdPartyApp - In the implementation block
@property (nonatomic,retain) CKFrameworkFingerprint * frameworkFingerprint;                                     //@synthesize frameworkFingerprint=_frameworkFingerprint - In the implementation block
@property (nonatomic,retain) NSString * personaIdentifier;                                                      //@synthesize personaIdentifier=_personaIdentifier - In the implementation block
@property (assign,nonatomic) BOOL useClearAssetEncryption;                                                      //@synthesize useClearAssetEncryption=_useClearAssetEncryption - In the implementation block
@property (assign,nonatomic) BOOL connectToTestingDaemon;                                                       //@synthesize connectToTestingDaemon=_connectToTestingDaemon - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleIdentifierOverrideForContainerAccess;                  //@synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleIdentifierOverrideForNetworkAttribution;               //@synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleIdentifierOverrideForPushTopicGeneration;              //@synthesize applicationBundleIdentifierOverrideForPushTopicGeneration=_applicationBundleIdentifierOverrideForPushTopicGeneration - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleIdentifierOverrideForTCC;                              //@synthesize applicationBundleIdentifierOverrideForTCC=_applicationBundleIdentifierOverrideForTCC - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKContainerID *)containerID;
-(NSString *)personaIdentifier;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(BOOL)returnPCSMetadata;
-(BOOL)connectToTestingDaemon;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(NSString *)applicationBundleIdentifierOverrideForPushTopicGeneration;
-(NSString *)applicationBundleIdentifierOverrideForTCC;
-(CKAccountOverrideInfo *)accountInfoOverride;
-(BOOL)captureResponseHTTPHeaders;
-(BOOL)wantsSiloedContext;
-(BOOL)useZoneWidePCS;
-(NSDictionary *)fakeEntitlements;
-(BOOL)holdAllOperations;
-(unsigned long long)mmcsEncryptionSupport;
-(NSString *)containerEncryptionServiceName;
-(BOOL)bypassPCSEncryption;
-(BOOL)forceEnableReadOnlyManatee;
-(unsigned)clientSDKVersion;
-(BOOL)masqueradeAsThirdPartyApp;
-(CKFrameworkFingerprint *)frameworkFingerprint;
-(BOOL)useClearAssetEncryption;
-(id)hashString;
-(void)setAccountInfoOverride:(CKAccountOverrideInfo *)arg1 ;
-(void)setCaptureResponseHTTPHeaders:(BOOL)arg1 ;
-(void)setWantsSiloedContext:(BOOL)arg1 ;
-(void)setUseZoneWidePCS:(BOOL)arg1 ;
-(void)setFakeEntitlements:(NSDictionary *)arg1 ;
-(void)setHoldAllOperations:(BOOL)arg1 ;
-(void)setReturnPCSMetadata:(BOOL)arg1 ;
-(void)setMmcsEncryptionSupport:(unsigned long long)arg1 ;
-(void)setContainerEncryptionServiceName:(NSString *)arg1 ;
-(void)setBypassPCSEncryption:(BOOL)arg1 ;
-(void)setForceEnableReadOnlyManatee:(BOOL)arg1 ;
-(void)setClientSDKVersion:(unsigned)arg1 ;
-(void)setMasqueradeAsThirdPartyApp:(BOOL)arg1 ;
-(void)setFrameworkFingerprint:(CKFrameworkFingerprint *)arg1 ;
-(void)setPersonaIdentifier:(NSString *)arg1 ;
-(void)setUseClearAssetEncryption:(BOOL)arg1 ;
-(void)setConnectToTestingDaemon:(BOOL)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForContainerAccess:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForPushTopicGeneration:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForTCC:(NSString *)arg1 ;
@end

