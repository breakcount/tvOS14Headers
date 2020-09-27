/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUContactsDataSource;
@class TUContactsDataProviderAppleCareHandles;

@interface TUContactsDataProvider : NSObject {

	BOOL _useAsianNameFormat;
	/*^block*/id _localeSupportsPrefixHintForFetchRequest;
	id<TUContactsDataSource> _contactsDataSource;
	TUContactsDataProviderAppleCareHandles* _appleCareHandles;

}

@property (assign,nonatomic) BOOL useAsianNameFormat;                                              //@synthesize useAsianNameFormat=_useAsianNameFormat - In the implementation block
@property (nonatomic,copy) id localeSupportsPrefixHintForFetchRequest;                             //@synthesize localeSupportsPrefixHintForFetchRequest=_localeSupportsPrefixHintForFetchRequest - In the implementation block
@property (nonatomic,readonly) id<TUContactsDataSource> contactsDataSource;                        //@synthesize contactsDataSource=_contactsDataSource - In the implementation block
@property (nonatomic,copy) TUContactsDataProviderAppleCareHandles * appleCareHandles;              //@synthesize appleCareHandles=_appleCareHandles - In the implementation block
+(id)numberFormatter;
+(id)asianLocaleCountryCodes;
+(id)unsupportedLocalesForPrefixHint;
+(id)defaultContactKeyDescriptors;
+(id)keysByCombiningDefaultKeysWithKeysToFetch:(id)arg1 ;
-(id)init;
-(TUContactsDataProviderAppleCareHandles *)appleCareHandles;
-(id)executeFetchRequest:(id)arg1 ;
-(id)initWithContactsDataSource:(id)arg1 ;
-(id)ISOCountryCodeForHandle:(id)arg1 fetchRequest:(id)arg2 ;
-(id)contactsForHandle:(id)arg1 countryCode:(id)arg2 keysToFetch:(id)arg3 prefixHint:(id)arg4 ;
-(id)compositeNameForContacts:(id)arg1 ;
-(id)contactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 ;
-(id)unifiedContactsForFetchRequest:(id)arg1 ;
-(int)personIDForContact:(id)arg1 ;
-(id)contactLabelForContacts:(id)arg1 matchingHandle:(id)arg2 countryCode:(id)arg3 ;
-(id)compositeNameForFetchRequest:(id)arg1 ;
-(id)labeledHandlesForContacts:(id)arg1 ;
-(id<TUContactsDataSource>)contactsDataSource;
-(id)prefixHintForFetchRequest:(id)arg1 ;
-(BOOL)useAsianNameFormat;
-(id)localizedCompositeNameForContact:(id)arg1 secondContact:(id)arg2 ;
-(id)formattedNameForHandle:(id)arg1 countryCode:(id)arg2 ;
-(id)localeSupportsPrefixHintForFetchRequest;
-(id)labeledHandlesForContactWithIdentifier:(id)arg1 ;
-(void)setUseAsianNameFormat:(BOOL)arg1 ;
-(void)setLocaleSupportsPrefixHintForFetchRequest:(id)arg1 ;
-(void)setAppleCareHandles:(TUContactsDataProviderAppleCareHandles *)arg1 ;
@end

