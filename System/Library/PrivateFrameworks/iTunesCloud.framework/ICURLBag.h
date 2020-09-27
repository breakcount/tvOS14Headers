/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, NSObject, NSArray, NSSet, NSDate, NSString, ICURLBagRadioConfiguration, ICURLBagLibraryDAAPConfiguration;

@interface ICURLBag : NSObject {

	NSDictionary* _bagValues;
	NSMutableDictionary* _convertedActionsCache;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _GUIDURLRegexPatterns;
	NSSet* _GUIDURLSchemes;
	NSDate* _expirationDate;
	NSString* _serverCorrelationKey;
	NSString* _serverEnvironment;

}

@property (nonatomic,copy) NSDictionary * bagValues;                                                     //@synthesize bagValues=_bagValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * convertedActionsCache;                                //@synthesize convertedActionsCache=_convertedActionsCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (getter=UIDURLRegexPatterns,nonatomic,retain) NSArray * GUIDURLRegexPatterns;                  //@synthesize GUIDURLRegexPatterns=_GUIDURLRegexPatterns - In the implementation block
@property (getter=UIDURLSchemes,nonatomic,retain) NSSet * GUIDURLSchemes;                                //@synthesize GUIDURLSchemes=_GUIDURLSchemes - In the implementation block
@property (nonatomic,readonly) NSDictionary * _propertyListRepresentation; 
@property (setter=_setExpirationDate:,nonatomic,copy) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * allValues; 
@property (nonatomic,readonly) BOOL canPostKeybagSyncData; 
@property (nonatomic,readonly) ICURLBagRadioConfiguration * radioConfiguration; 
@property (nonatomic,readonly) ICURLBagLibraryDAAPConfiguration * libraryDAAPConfiguration; 
@property (nonatomic,copy,readonly) NSString * storefrontHeaderSuffix; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,copy,readonly) NSString * serverCorrelationKey;                                     //@synthesize serverCorrelationKey=_serverCorrelationKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverEnvironment;                                        //@synthesize serverEnvironment=_serverEnvironment - In the implementation block
-(NSDictionary *)allValues;
-(NSDate *)expirationDate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_setExpirationDate:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isExpired;
-(NSDictionary *)_propertyListRepresentation;
-(id)valueForBagKey:(id)arg1 ;
-(id)urlForBagKey:(id)arg1 ;
-(BOOL)boolValueForBagKey:(id)arg1 ;
-(ICURLBagRadioConfiguration *)radioConfiguration;
-(id)_initWithDictionary:(id)arg1 expirationDate:(id)arg2 serverCorrelationKey:(id)arg3 serverEnvironment:(id)arg4 ;
-(id)_initWithPropertyListRepresentation:(id)arg1 ;
-(BOOL)canPostKeybagSyncData;
-(NSString *)storefrontHeaderSuffix;
-(BOOL)shouldAppendDeviceGUIDForURL:(id)arg1 ;
-(BOOL)shouldAppendMachineDataHeadersForURL:(id)arg1 ;
-(id)mescalConfigurationForRequest:(id)arg1 ;
-(NSString *)serverCorrelationKey;
-(NSString *)serverEnvironment;
-(long long)int64ValueForBagKey:(id)arg1 ;
-(NSDictionary *)bagValues;
-(void)_validateGUIDURLConfigIfNeeded;
-(NSArray *)GUIDURLRegexPatterns;
-(NSSet *)GUIDURLSchemes;
-(BOOL)_shouldMescalSignBodyForURL:(id)arg1 withSignatureConfiguration:(id)arg2 ;
-(id)mescalConfigurationForResponse:(id)arg1 ;
-(void)setGUIDURLRegexPatterns:(NSArray *)arg1 ;
-(void)setGUIDURLSchemes:(NSSet *)arg1 ;
-(BOOL)hasValueForBagKey:(id)arg1 ;
-(id)mescalConfigurationForRequestURL:(id)arg1 ;
-(id)mescalConfigurationForResponseURL:(id)arg1 ;
-(ICURLBagLibraryDAAPConfiguration *)libraryDAAPConfiguration;
-(void)setBagValues:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)convertedActionsCache;
-(void)setConvertedActionsCache:(NSMutableDictionary *)arg1 ;
@end

