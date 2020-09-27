/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSNumber, NSDictionary;

@interface AKUserInformation : NSObject <NSSecureCoding, NSCopying> {

	NSString* _givenName;
	NSString* _familyName;
	NSString* _forwardingEmail;
	NSString* _previouslySelectedEmail;
	NSString* _primaryEmailAddress;
	NSString* _accountName;
	NSArray* _accountAliases;
	NSArray* _reachableEmails;
	NSString* _authorizedApplicationsListVersion;
	NSString* _masterKeyID;
	NSNumber* _vettedPrimaryEmail;
	NSNumber* _phoneAsAppleID;
	NSNumber* _isUnderage;
	NSString* _ageOfMajority;
	NSNumber* _isLegacyStudent;
	NSNumber* _hasUsedAuthorization;
	NSNumber* _previouslyWantedPrivateEmail;
	unsigned long long _appleIDSecurityLevel;
	unsigned long long _authMode;
	unsigned long long _repairState;
	NSDictionary* _additionalInfo;
	NSString* _selectedEmail;

}

@property (nonatomic,copy) NSString * givenName;                                      //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                                     //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * forwardingEmail;                                //@synthesize forwardingEmail=_forwardingEmail - In the implementation block
@property (nonatomic,copy) NSString * previouslySelectedEmail;                        //@synthesize previouslySelectedEmail=_previouslySelectedEmail - In the implementation block
@property (nonatomic,copy) NSString * primaryEmailAddress;                            //@synthesize primaryEmailAddress=_primaryEmailAddress - In the implementation block
@property (nonatomic,copy) NSString * accountName;                                    //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSArray * accountAliases;                                  //@synthesize accountAliases=_accountAliases - In the implementation block
@property (nonatomic,copy) NSArray * reachableEmails;                                 //@synthesize reachableEmails=_reachableEmails - In the implementation block
@property (nonatomic,copy) NSString * authorizedApplicationsListVersion;              //@synthesize authorizedApplicationsListVersion=_authorizedApplicationsListVersion - In the implementation block
@property (nonatomic,copy) NSString * masterKeyID;                                    //@synthesize masterKeyID=_masterKeyID - In the implementation block
@property (nonatomic,copy) NSNumber * vettedPrimaryEmail;                             //@synthesize vettedPrimaryEmail=_vettedPrimaryEmail - In the implementation block
@property (nonatomic,copy) NSNumber * phoneAsAppleID;                                 //@synthesize phoneAsAppleID=_phoneAsAppleID - In the implementation block
@property (nonatomic,copy) NSNumber * isUnderage;                                     //@synthesize isUnderage=_isUnderage - In the implementation block
@property (nonatomic,copy) NSString * ageOfMajority;                                  //@synthesize ageOfMajority=_ageOfMajority - In the implementation block
@property (nonatomic,copy) NSNumber * isLegacyStudent;                                //@synthesize isLegacyStudent=_isLegacyStudent - In the implementation block
@property (nonatomic,copy) NSNumber * hasUsedAuthorization;                           //@synthesize hasUsedAuthorization=_hasUsedAuthorization - In the implementation block
@property (nonatomic,copy) NSNumber * previouslyWantedPrivateEmail;                   //@synthesize previouslyWantedPrivateEmail=_previouslyWantedPrivateEmail - In the implementation block
@property (assign,nonatomic) unsigned long long appleIDSecurityLevel;                 //@synthesize appleIDSecurityLevel=_appleIDSecurityLevel - In the implementation block
@property (assign,nonatomic) unsigned long long authMode;                             //@synthesize authMode=_authMode - In the implementation block
@property (assign,nonatomic) unsigned long long repairState;                          //@synthesize repairState=_repairState - In the implementation block
@property (nonatomic,copy) NSString * selectedEmail;                                  //@synthesize selectedEmail=_selectedEmail - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalInfo;                             //@synthesize additionalInfo=_additionalInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)accountName;
-(NSDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(id)initWithResponseBody:(id)arg1 ;
-(void)setSelectedEmail:(NSString *)arg1 ;
-(NSString *)selectedEmail;
-(void)setForwardingEmail:(NSString *)arg1 ;
-(void)setPrimaryEmailAddress:(NSString *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setAccountAliases:(NSArray *)arg1 ;
-(void)setReachableEmails:(NSArray *)arg1 ;
-(void)setAuthorizedApplicationsListVersion:(NSString *)arg1 ;
-(void)setMasterKeyID:(NSString *)arg1 ;
-(void)setVettedPrimaryEmail:(NSNumber *)arg1 ;
-(void)setPhoneAsAppleID:(NSNumber *)arg1 ;
-(void)setHasUsedAuthorization:(NSNumber *)arg1 ;
-(void)setIsUnderage:(NSNumber *)arg1 ;
-(void)setAgeOfMajority:(NSString *)arg1 ;
-(void)setPreviouslySelectedEmail:(NSString *)arg1 ;
-(void)setPreviouslyWantedPrivateEmail:(NSNumber *)arg1 ;
-(void)setIsLegacyStudent:(NSNumber *)arg1 ;
-(void)setAppleIDSecurityLevel:(unsigned long long)arg1 ;
-(void)setAuthMode:(unsigned long long)arg1 ;
-(void)setRepairState:(unsigned long long)arg1 ;
-(NSString *)forwardingEmail;
-(NSString *)previouslySelectedEmail;
-(NSString *)primaryEmailAddress;
-(NSArray *)accountAliases;
-(NSArray *)reachableEmails;
-(NSString *)authorizedApplicationsListVersion;
-(NSString *)masterKeyID;
-(NSNumber *)vettedPrimaryEmail;
-(NSNumber *)phoneAsAppleID;
-(NSNumber *)isUnderage;
-(NSString *)ageOfMajority;
-(NSNumber *)isLegacyStudent;
-(NSNumber *)hasUsedAuthorization;
-(NSNumber *)previouslyWantedPrivateEmail;
-(unsigned long long)appleIDSecurityLevel;
-(unsigned long long)authMode;
-(unsigned long long)repairState;
@end

