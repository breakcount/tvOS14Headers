/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface AMSFamilyInfoLookupResult : NSObject {

	BOOL _cached;
	BOOL _headOfHouseholdSharingPayment;
	NSArray* _familyMembers;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (getter=isCached,nonatomic,readonly) BOOL cached;                                                            //@synthesize cached=_cached - In the implementation block
@property (nonatomic,readonly) NSArray * familyMembers;                                                                //@synthesize familyMembers=_familyMembers - In the implementation block
@property (getter=isHeadOfHouseholdSharingPayment,nonatomic,readonly) BOOL headOfHouseholdSharingPayment;              //@synthesize headOfHouseholdSharingPayment=_headOfHouseholdSharingPayment - In the implementation block
+(id)_familyMembersFromDictionaryRepresentation:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isCached;
-(NSArray *)familyMembers;
-(BOOL)isHeadOfHouseholdSharingPayment;
-(id)initWithDictionaryRepresentation:(id)arg1 cached:(BOOL)arg2 ;
@end

