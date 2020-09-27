/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class ACAccount, NSMutableDictionary, NSString, NSDictionary;

@interface MFAccount : NSObject {

	ACAccount* _persistentAccount;
	os_unfair_lock_s _persistentAccountLock;
	NSMutableDictionary* _unsavedAccountProperties;
	NSString* _sourceApplicationBundleIdentifier;

}

@property (readonly) ACAccount * accountForRenewingCredentials; 
@property (readonly) ACAccount * persistentAccount; 
@property (readonly) ACAccount * parentAccount; 
@property (readonly) NSString * parentAccountIdentifier; 
@property (readonly) NSDictionary * properties; 
@property (readonly) NSString * uniqueId; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * syncStoreIdentifier; 
@property (readonly) NSString * managedTag; 
@property (readonly) NSString * type; 
@property (nonatomic,retain) NSString * username; 
@property (nonatomic,retain) NSString * hostname; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
+(id)hostname;
+(id)supportedDataclasses;
+(id)accountTypeIdentifier;
+(id)accountTypeString;
+(BOOL)shouldHealAccounts;
+(id)accountWithProperties:(id)arg1 ;
+(id)_accountClass;
+(id)_newPersistentAccount;
+(id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2 ;
+(BOOL)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3 ;
+(id)displayedAccountTypeString;
+(id)excludedAccountPropertyKeys;
+(BOOL)usesSSL;
+(unsigned)defaultSecurePortNumber;
+(unsigned)defaultPortNumber;
+(id)predefinedValueForKey:(id)arg1 ;
+(void)setShouldHealAccounts:(BOOL)arg1 ;
+(id)newAccountWithDictionary:(id)arg1 ;
+(id)authSchemesForAccountClass;
+(id)accountWithPersistentAccount:(id)arg1 ;
+(id)existingAccountForUniqueID:(id)arg1 ;
+(BOOL)isPredefinedAccountType;
+(id)propertiesWhichRequireValidation;
+(id)displayedShortAccountTypeString;
+(void*)legacyKeychainProtocol;
+(id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2 ;
+(BOOL)isCommonPortNumber:(unsigned)arg1 ;
+(BOOL)isSSLEditable;
+(id)saslProfileName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)domain;
-(id)password;
-(NSString *)type;
-(NSString *)identifier;
-(id)initWithProperties:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(NSString *)username;
-(NSDictionary *)properties;
-(id)_password;
-(void)setPassword:(id)arg1 ;
-(NSString *)displayName;
-(id)serviceName;
-(NSString *)hostname;
-(BOOL)isActive;
-(NSString *)uniqueId;
-(id)clientCertificates;
-(void)setClientCertificates:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(ACAccount *)parentAccount;
-(void)setUsername:(NSString *)arg1 ;
-(id)enabledDataclasses;
-(id)accountPropertyForKey:(id)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(NSString *)parentAccountIdentifier;
-(id)_credential;
-(id)credentialItemForKey:(id)arg1 ;
-(void)setCredentialItem:(id)arg1 forKey:(id)arg2 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setHostname:(NSString *)arg1 ;
-(BOOL)requiresAuthentication;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)syncStoreIdentifier;
-(id)oauth2Token;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(BOOL)isManaged;
-(id)_newConnection;
-(id)copyDiagnosticInformation;
-(id)initWithPersistentAccount:(id)arg1 ;
-(void)_setAccountProperties:(id)arg1 ;
-(void)setPersistentAccount:(ACAccount *)arg1 ;
-(void)releaseAllConnections;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(ACAccount *)persistentAccount;
-(void)accountInfoDidChange;
-(BOOL)setOAuth2Token:(id)arg1 refreshToken:(id)arg2 error:(id*)arg3 ;
-(void)_queueAccountInfoDidChange;
-(BOOL)usesSSL;
-(BOOL)_boolForAccountInfoKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)_credentialCreateIfNecessary:(BOOL)arg1 ;
-(id)_credentialCreateIfNecessary:(BOOL)arg1 error:(id*)arg2 ;
-(id)_passwordWithError:(id*)arg1 ;
-(id)preferredAuthScheme;
-(id)credentialItemForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setCredentialItem:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(ACAccount *)accountForRenewingCredentials;
-(BOOL)_renewCredentialsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)defaultSecurePortNumber;
-(unsigned)defaultPortNumber;
-(unsigned)portNumber;
-(BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned)arg1 ;
-(Class)connectionClass;
-(BOOL)_connectAndAuthenticate:(id)arg1 ;
-(void)setUsesSSL:(BOOL)arg1 ;
-(void)setPortNumber:(unsigned)arg1 ;
-(id)certUIService;
-(void)setTryDirectSSL:(BOOL)arg1 ;
-(id)secureServiceName;
-(CFStringRef)connectionServiceType;
-(BOOL)allowsTrustPrompt;
-(id)defaultConnectionSettings;
-(unsigned long long)credentialAccessibility;
-(id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3 ;
-(void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2 ;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(void)savePersistentAccount;
-(void)removePersistentAccount;
-(id)accountClass;
-(void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2 ;
-(void)removeValueInAccountPropertiesForKey:(id)arg1 ;
-(id)valueInAccountPropertiesForKey:(id)arg1 ;
-(id)_objectForAccountInfoKey:(id)arg1 ;
-(BOOL)canGoOffline;
-(BOOL)supportsMailDrop;
-(BOOL)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)managedTag;
-(BOOL)fetchTokensIfNecessary:(id*)arg1 ;
-(void)releaseAllForcedConnections;
-(void)setPreferredAuthScheme:(id)arg1 ;
-(id)authenticatedConnection;
-(void)applySettingsAsDefault:(id)arg1 ;
-(id)alternateConnectionSettings;
-(id)insecureConnectionSettings;
-(id)secureConnectionSettings;
-(id)nameForMailboxUid:(id)arg1 ;
-(BOOL)shouldEnableAfterError:(id)arg1 ;
-(BOOL)enableAccount;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(id)missingPasswordErrorWithTitle:(id)arg1 ;
-(id)inaccessiblePasswordErrorWithTitle:(id)arg1 ;
-(id)loginDisabledErrorWithTitle:(id)arg1 ;
-(BOOL)isSyncingNotes;
@end
