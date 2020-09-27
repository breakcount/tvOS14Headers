/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKCurrencyAmount, NSDecimalNumber, NSDate, NSURL, PKPeerPaymentAdditionalPushTopics, PKPeerPaymentAssociatedAccountInformation, NSSet, NSDictionary, NSArray;

@interface PKPeerPaymentAccount : NSObject <NSSecureCoding> {

	BOOL _accountStateDirty;
	BOOL _identityVerificationForDisbursementsRequired;
	BOOL _hasDisplayedAssociatedAccountActiveNotification;
	BOOL _identityVerificationRequired;
	BOOL _termsAcceptanceRequired;
	NSString* _identifier;
	unsigned long long _role;
	unsigned long long _state;
	unsigned long long _stage;
	unsigned long long _stateReason;
	unsigned long long _personToPersonRestrictionType;
	NSString* _countryCode;
	PKCurrencyAmount* _currentBalance;
	NSDecimalNumber* _maximumBalance;
	NSDate* _lastUpdated;
	double _proactiveFetchPeriod;
	NSDate* _nextPossibleFetchDate;
	long long _backoffRetryLevel;
	NSURL* _associatedPassURL;
	long long _pendingPaymentCount;
	NSString* _altDSID;
	PKPeerPaymentAdditionalPushTopics* _additionalPushTopics;
	PKPeerPaymentAssociatedAccountInformation* _associatedAccountInformation;
	NSString* _transactionSourceIdentifier;
	NSSet* _supportedFeatureDescriptors;
	NSString* _termsIdentifier;
	NSURL* _termsURL;
	NSString* _associatedPassSerialNumber;
	NSString* _associatedPassTypeIdentifier;
	NSSet* _cloudStoreZoneNames;

}

@property (nonatomic,readonly) NSDictionary * minimumTransferAmounts; 
@property (nonatomic,readonly) NSDictionary * maximumTransferAmounts; 
@property (nonatomic,copy) NSString * identifier;                                                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long role;                                                               //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long stage;                                                              //@synthesize stage=_stage - In the implementation block
@property (assign,nonatomic) unsigned long long stateReason;                                                        //@synthesize stateReason=_stateReason - In the implementation block
@property (assign,nonatomic) unsigned long long personToPersonRestrictionType;                                      //@synthesize personToPersonRestrictionType=_personToPersonRestrictionType - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                                                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * currentBalance;                                                       //@synthesize currentBalance=_currentBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumBalance;                                                        //@synthesize maximumBalance=_maximumBalance - In the implementation block
@property (assign,nonatomic) BOOL identityVerificationRequired;                                                     //@synthesize identityVerificationRequired=_identityVerificationRequired - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                                                                  //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (assign,nonatomic) double proactiveFetchPeriod;                                                           //@synthesize proactiveFetchPeriod=_proactiveFetchPeriod - In the implementation block
@property (nonatomic,retain) NSDate * nextPossibleFetchDate;                                                        //@synthesize nextPossibleFetchDate=_nextPossibleFetchDate - In the implementation block
@property (assign,nonatomic) long long backoffRetryLevel;                                                           //@synthesize backoffRetryLevel=_backoffRetryLevel - In the implementation block
@property (assign,nonatomic) BOOL termsAcceptanceRequired;                                                          //@synthesize termsAcceptanceRequired=_termsAcceptanceRequired - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                                                              //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * termsURL;                                                                        //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy) NSURL * associatedPassURL;                                                               //@synthesize associatedPassURL=_associatedPassURL - In the implementation block
@property (nonatomic,copy) NSString * associatedPassSerialNumber;                                                   //@synthesize associatedPassSerialNumber=_associatedPassSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * associatedPassTypeIdentifier;                                                 //@synthesize associatedPassTypeIdentifier=_associatedPassTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * supportedFeatureDescriptors;                                                     //@synthesize supportedFeatureDescriptors=_supportedFeatureDescriptors - In the implementation block
@property (assign,nonatomic) long long pendingPaymentCount;                                                         //@synthesize pendingPaymentCount=_pendingPaymentCount - In the implementation block
@property (assign,nonatomic) BOOL identityVerificationForDisbursementsRequired;                                     //@synthesize identityVerificationForDisbursementsRequired=_identityVerificationForDisbursementsRequired - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                                                      //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSSet * cloudStoreZoneNames;                                                             //@synthesize cloudStoreZoneNames=_cloudStoreZoneNames - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAdditionalPushTopics * additionalPushTopics;                              //@synthesize additionalPushTopics=_additionalPushTopics - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAssociatedAccountInformation * associatedAccountInformation;              //@synthesize associatedAccountInformation=_associatedAccountInformation - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayedAssociatedAccountActiveNotification;                                  //@synthesize hasDisplayedAssociatedAccountActiveNotification=_hasDisplayedAssociatedAccountActiveNotification - In the implementation block
@property (nonatomic,copy) NSString * transactionSourceIdentifier;                                                  //@synthesize transactionSourceIdentifier=_transactionSourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultSuggestions; 
@property (assign,getter=isAccountStateDirty,nonatomic) BOOL accountStateDirty;                                     //@synthesize accountStateDirty=_accountStateDirty - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)identifier;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(unsigned long long)role;
-(void)setRole:(unsigned long long)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSDate *)lastUpdated;
-(unsigned long long)stage;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(NSArray *)defaultSuggestions;
-(PKCurrencyAmount *)currentBalance;
-(void)setCurrentBalance:(PKCurrencyAmount *)arg1 ;
-(id)associatedPassUniqueID;
-(BOOL)termsAcceptanceRequired;
-(NSString *)associatedPassTypeIdentifier;
-(NSString *)associatedPassSerialNumber;
-(NSSet *)cloudStoreZoneNames;
-(unsigned long long)stateReason;
-(void)setStateReason:(unsigned long long)arg1 ;
-(PKPeerPaymentAdditionalPushTopics *)additionalPushTopics;
-(void)setAdditionalPushTopics:(PKPeerPaymentAdditionalPushTopics *)arg1 ;
-(void)setAccountStateDirty:(BOOL)arg1 ;
-(void)setCloudStoreZoneNames:(NSSet *)arg1 ;
-(id)_featureWithIdentifier:(id)arg1 ;
-(BOOL)supportsPreserveCurrentBalance;
-(BOOL)supportsCardBalancePromotion;
-(id)loadFromCardFeatureDescriptor;
-(id)sendToUserFeatureDescriptor;
-(NSString *)transactionSourceIdentifier;
-(void)setTransactionSourceIdentifier:(NSString *)arg1 ;
-(void)setTermsAcceptanceRequired:(BOOL)arg1 ;
-(NSURL *)termsURL;
-(void)setTermsURL:(NSURL *)arg1 ;
-(NSURL *)associatedPassURL;
-(void)setAssociatedPassURL:(NSURL *)arg1 ;
-(void)setAssociatedPassTypeIdentifier:(NSString *)arg1 ;
-(void)setAssociatedPassSerialNumber:(NSString *)arg1 ;
-(id)instantWithdrawalPromotionFeatureDescriptor;
-(unsigned long long)personToPersonRestrictionType;
-(id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2 ;
-(BOOL)supportsFamilySharing;
-(id)peerPaymentAccountWithIdentifier:(id)arg1 ;
-(id)peerPaymentAccountWithAltDSID:(id)arg1 ;
-(id)accountInvitationWithAltDSID:(id)arg1 ;
-(BOOL)isAccountOutOfDate;
-(BOOL)areAssociatedAccountsOutOfDate;
-(BOOL)isParticipantAccountLockedByOwner;
-(BOOL)isPariticipantAccountSecurityDowngraded;
-(BOOL)isPariticipantAccountEmbargoRecovery;
-(BOOL)identityVerificationRequired;
-(void)setAssociatedAccountInformation:(PKPeerPaymentAssociatedAccountInformation *)arg1 ;
-(void)setStage:(unsigned long long)arg1 ;
-(void)setPersonToPersonRestrictionType:(unsigned long long)arg1 ;
-(NSDecimalNumber *)maximumBalance;
-(void)setMaximumBalance:(NSDecimalNumber *)arg1 ;
-(BOOL)isAccountStateDirty;
-(double)proactiveFetchPeriod;
-(void)setProactiveFetchPeriod:(double)arg1 ;
-(NSDate *)nextPossibleFetchDate;
-(void)setNextPossibleFetchDate:(NSDate *)arg1 ;
-(long long)backoffRetryLevel;
-(void)setBackoffRetryLevel:(long long)arg1 ;
-(long long)pendingPaymentCount;
-(void)setPendingPaymentCount:(long long)arg1 ;
-(BOOL)identityVerificationForDisbursementsRequired;
-(void)setIdentityVerificationForDisbursementsRequired:(BOOL)arg1 ;
-(PKPeerPaymentAssociatedAccountInformation *)associatedAccountInformation;
-(BOOL)hasDisplayedAssociatedAccountActiveNotification;
-(void)setHasDisplayedAssociatedAccountActiveNotification:(BOOL)arg1 ;
-(NSSet *)supportedFeatureDescriptors;
-(void)setSupportedFeatureDescriptors:(NSSet *)arg1 ;
-(void)setIdentityVerificationRequired:(BOOL)arg1 ;
-(id)transferToBankFeatureDescriptor;
-(id)requestFromUserFeatureDescriptor;
-(id)cardBalancePromotionFeatureDescriptor;
-(id)associatedAccountStateActionFeatureDescriptor;
-(id)preserveCurrentBalanceFeatureDescriptor;
-(id)supportsFamilySharingFeatureDescriptor;
-(id)supportsGraduationWhileAssociatedAccountLockedFeatureDescriptor;
-(BOOL)supportsLoadFromCard;
-(BOOL)supportsTransferToBank;
-(BOOL)supportsSendToUser;
-(BOOL)supportsRequestFromUser;
-(BOOL)supportsInstantWithdrawal;
-(BOOL)supportsAssociatedAccountStateAction;
-(BOOL)supportsGraduationWhileAssociatedAccountLocked;
-(NSDictionary *)minimumTransferAmounts;
-(NSDictionary *)maximumTransferAmounts;
@end

