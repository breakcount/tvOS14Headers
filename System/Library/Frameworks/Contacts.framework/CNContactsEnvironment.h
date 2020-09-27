/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CNSchedulerProvider, SGSuggestionsServiceContactsProtocol, CNSiriIntelligenceSettingsProtocol, CNContactsLoggerProvider;
@class CNiOSAddressBook, NSURL, NSArray, CNiOSABPredicateRunner;

@interface CNContactsEnvironment : NSObject <NSCopying> {

	CNiOSAddressBook* _addressBook;
	id<CNSchedulerProvider> _schedulerProvider;
	NSURL* _baseURL;
	id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
	id<CNSiriIntelligenceSettingsProtocol> _siriIntelligenceSettings;
	NSArray* _delegateInfos;
	CNiOSABPredicateRunner* _abPredicateRunner;
	id<CNContactsLoggerProvider> _loggerProvider;

}

@property (nonatomic,retain) NSArray * delegateInfos;                                                      //@synthesize delegateInfos=_delegateInfos - In the implementation block
@property (nonatomic,retain) CNiOSABPredicateRunner * abPredicateRunner;                                   //@synthesize abPredicateRunner=_abPredicateRunner - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                  //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNContactsLoggerProvider> loggerProvider;                                //@synthesize loggerProvider=_loggerProvider - In the implementation block
@property (nonatomic,readonly) CNiOSAddressBook * addressBook; 
@property (nonatomic,copy) NSURL * baseURL;                                                                //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) id<SGSuggestionsServiceContactsProtocol> suggestionsService;                  //@synthesize suggestionsService=_suggestionsService - In the implementation block
@property (nonatomic,retain) id<CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;              //@synthesize siriIntelligenceSettings=_siriIntelligenceSettings - In the implementation block
@property (nonatomic,readonly) BOOL useInMemoryStores; 
+(BOOL)supportsSecureCoding;
+(id)currentEnvironment;
+(id)baseURLWithDataLocationName:(id)arg1 ;
+(id)unitTestingEnvironmentWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2 ;
+(id)inMemoryURL;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3 ;
+(id)unitTestingEnvironment;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 ;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(CNiOSAddressBook *)addressBook;
-(void)setAddressBook:(CNiOSAddressBook *)arg1 ;
-(id)copyWithDelegateInfos:(id)arg1 ;
-(id<CNContactsLoggerProvider>)loggerProvider;
-(BOOL)useInMemoryStores;
-(CNiOSABPredicateRunner *)abPredicateRunner;
-(id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2 ;
-(void)setDelegateInfos:(NSArray *)arg1 ;
-(void)makeCurrentEnvironment;
-(id<SGSuggestionsServiceContactsProtocol>)suggestionsService;
-(void)setSuggestionsService:(id<SGSuggestionsServiceContactsProtocol>)arg1 ;
-(id<CNSiriIntelligenceSettingsProtocol>)siriIntelligenceSettings;
-(void)setSiriIntelligenceSettings:(id<CNSiriIntelligenceSettingsProtocol>)arg1 ;
-(NSArray *)delegateInfos;
-(void)setAbPredicateRunner:(CNiOSABPredicateRunner *)arg1 ;
@end

