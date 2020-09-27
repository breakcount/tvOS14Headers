/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class ACAccount, NSArray, NSDictionary, NSString, AMSProcessInfo;

@interface AMSMediaTask : AMSTask <AMSBagConsumer> {

	BOOL _charts;
	BOOL _URLKnownToBeTrusted;
	ACAccount* _account;
	NSArray* _additionalPlatforms;
	NSDictionary* _additionalQueryParams;
	id<AMSBagProtocol> _bag;
	NSArray* _bundleIdentifiers;
	NSString* _clientIdentifier;
	AMSProcessInfo* _clientInfo;
	NSString* _clientVersion;
	NSDictionary* _filters;
	NSArray* _includedResultKeys;
	NSArray* _itemIdentifiers;
	NSString* _logKey;
	NSString* _searchTerm;
	long long _type;

}

@property (assign,nonatomic) BOOL URLKnownToBeTrusted;                          //@synthesize URLKnownToBeTrusted=_URLKnownToBeTrusted - In the implementation block
@property (nonatomic,retain) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSArray * additionalPlatforms;                     //@synthesize additionalPlatforms=_additionalPlatforms - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalQueryParams;              //@synthesize additionalQueryParams=_additionalQueryParams - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                          //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSArray * bundleIdentifiers;                       //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL charts;                                       //@synthesize charts=_charts - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                       //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) NSString * clientVersion;                        //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * filters;                            //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSArray * includedResultKeys;                      //@synthesize includedResultKeys=_includedResultKeys - In the implementation block
@property (nonatomic,retain) NSArray * itemIdentifiers;                         //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                 //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSString * searchTerm;                             //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)createBagForSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
-(long long)type;
-(NSString *)clientIdentifier;
-(NSDictionary *)filters;
-(void)setFilters:(NSDictionary *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithType:(long long)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3 bag:(id)arg4 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(void)setIncludedResultKeys:(NSArray *)arg1 ;
-(void)setAdditionalPlatforms:(NSArray *)arg1 ;
-(id)perform;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(NSString *)searchTerm;
-(NSArray *)bundleIdentifiers;
-(void)setSearchTerm:(NSString *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(NSString *)clientVersion;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(NSArray *)itemIdentifiers;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(void)setURLKnownToBeTrusted:(BOOL)arg1 ;
-(BOOL)URLKnownToBeTrusted;
-(NSArray *)additionalPlatforms;
-(NSDictionary *)additionalQueryParams;
-(void)setAdditionalQueryParams:(NSDictionary *)arg1 ;
-(BOOL)charts;
-(void)setCharts:(BOOL)arg1 ;
-(NSArray *)includedResultKeys;
@end

