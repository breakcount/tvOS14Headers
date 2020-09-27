/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, ISBiometricStore, NSArray;

@interface ISBiometricUpdateTouchIDSettingsOperation : ISOperation {

	BOOL _regeneratePublicKey;
	BOOL _shouldSuppressAuthPrompts;
	/*^block*/id _resultBlock;
	long long _status;
	NSNumber* _accountIdentifier;
	NSString* _attestationStringPurchase;
	NSString* _attestationStringExtendedActions;
	ISBiometricStore* _biometricStore;
	NSArray* _certChainPrimary;
	NSArray* _certChainExtended;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                             //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * attestationStringPurchase;                     //@synthesize attestationStringPurchase=_attestationStringPurchase - In the implementation block
@property (nonatomic,copy) NSString * attestationStringExtendedActions;              //@synthesize attestationStringExtendedActions=_attestationStringExtendedActions - In the implementation block
@property (nonatomic,retain) ISBiometricStore * biometricStore;                      //@synthesize biometricStore=_biometricStore - In the implementation block
@property (nonatomic,copy) NSArray * certChainPrimary;                               //@synthesize certChainPrimary=_certChainPrimary - In the implementation block
@property (nonatomic,copy) NSArray * certChainExtended;                              //@synthesize certChainExtended=_certChainExtended - In the implementation block
@property (assign) BOOL regeneratePublicKey;                                         //@synthesize regeneratePublicKey=_regeneratePublicKey - In the implementation block
@property (copy) id resultBlock;                                                     //@synthesize resultBlock=_resultBlock - In the implementation block
@property (assign) BOOL shouldSuppressAuthPrompts;                                   //@synthesize shouldSuppressAuthPrompts=_shouldSuppressAuthPrompts - In the implementation block
@property (readonly) long long status;                                               //@synthesize status=_status - In the implementation block
-(void)run;
-(long long)status;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(ISBiometricStore *)biometricStore;
-(void)setBiometricStore:(ISBiometricStore *)arg1 ;
-(NSArray *)certChainPrimary;
-(NSArray *)certChainExtended;
-(BOOL)shouldSuppressAuthPrompts;
-(id)_newUpdateTouchIDSettingsOperation;
-(BOOL)regeneratePublicKey;
-(void)setRegeneratePublicKey:(BOOL)arg1 ;
-(void)setShouldSuppressAuthPrompts:(BOOL)arg1 ;
-(NSString *)attestationStringPurchase;
-(void)setAttestationStringPurchase:(NSString *)arg1 ;
-(NSString *)attestationStringExtendedActions;
-(void)setAttestationStringExtendedActions:(NSString *)arg1 ;
-(void)setCertChainPrimary:(NSArray *)arg1 ;
-(void)setCertChainExtended:(NSArray *)arg1 ;
@end

