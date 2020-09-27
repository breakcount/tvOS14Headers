/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariCore/SafariCore-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSString, NSDate, NSArray;

@interface WBSSavedPassword : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _siteToProtectionSpaces;
	NSMutableArray* _sites;
	BOOL _userIsNeverSaveMarker;
	NSString* _highLevelDomain;
	NSString* _user;
	NSString* _password;
	NSDate* _earliestModifiedDateForSites;
	NSArray* _persistentIdentifiersForWarningManager;

}

@property (nonatomic,retain) NSArray * persistentIdentifiersForWarningManager;              //@synthesize persistentIdentifiersForWarningManager=_persistentIdentifiersForWarningManager - In the implementation block
@property (nonatomic,readonly) NSString * highLevelDomain;                                  //@synthesize highLevelDomain=_highLevelDomain - In the implementation block
@property (nonatomic,readonly) NSString * user;                                             //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * password;                                         //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSArray * protectionSpaces; 
@property (nonatomic,readonly) BOOL userIsNeverSaveMarker;                                  //@synthesize userIsNeverSaveMarker=_userIsNeverSaveMarker - In the implementation block
@property (nonatomic,readonly) NSDate * earliestModifiedDateForSites;                       //@synthesize earliestModifiedDateForSites=_earliestModifiedDateForSites - In the implementation block
@property (nonatomic,readonly) NSArray * sites; 
@property (nonatomic,readonly) NSString * userVisibleHighLevelDomain; 
@property (nonatomic,readonly) NSArray * userVisibleSites; 
+(void)enumerateRangesMatchingPatternWithTokenizer:(CFStringTokenizerRef)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4 withBlock:(/*^block*/id)arg5 ;
+(BOOL)stringMatchesPatternWithTokenizer:(CFStringTokenizerRef)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSString *)user;
-(NSString *)password;
-(NSString *)highLevelDomain;
-(BOOL)userIsNeverSaveMarker;
-(void)_deleteCredentialForProtectionSpace:(id)arg1 fromStorage:(id)arg2 ;
-(NSArray *)sites;
-(BOOL)_matchesSearchPattern:(id)arg1 matchAgainstUser:(BOOL)arg2 associatedDomains:(id)arg3 ;
-(NSArray *)protectionSpaces;
-(id)_initWithHighLevelDomain:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(void)_addProtectionSpace:(id)arg1 forSite:(id)arg2 ;
-(void)_addModificationDate:(id)arg1 ;
-(BOOL)_containsProtectionSpace:(id)arg1 ;
-(void)_deleteCredentials;
-(void)_deleteCredentialsForSite:(id)arg1 ;
-(BOOL)isDuplicateWithoutUserNameOfPassword:(id)arg1 ;
-(void)_setUser:(id)arg1 password:(id)arg2 ;
-(void)_adoptSitesFromSavedPassword:(id)arg1 ;
-(NSString *)userVisibleHighLevelDomain;
-(NSArray *)userVisibleSites;
-(BOOL)matchesUserTypedSearchPattern:(id)arg1 associatedDomains:(id)arg2 ;
-(BOOL)matchesServiceNameHintString:(id)arg1 ;
-(BOOL)matchesDomain:(id)arg1 associatedDomains:(id)arg2 ;
-(NSDate *)earliestModifiedDateForSites;
-(NSArray *)persistentIdentifiersForWarningManager;
-(void)setPersistentIdentifiersForWarningManager:(NSArray *)arg1 ;
@end

