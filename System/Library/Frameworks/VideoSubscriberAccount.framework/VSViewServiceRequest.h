/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VSAccountMetadataRequest, VSOptional, NSString, NSArray;

@interface VSViewServiceRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowsPrivacyUI;
	BOOL _requiresPrivacyUI;
	BOOL _canVetoAuthentication;
	BOOL _shouldInferFeaturedProviders;
	BOOL _shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;
	VSAccountMetadataRequest* _accountMetadataRequest;
	VSOptional* _requestingAppDisplayName;
	NSString* _requestingAppAdamID;

}

@property (nonatomic,retain) VSOptional * requestingAppDisplayName;                                         //@synthesize requestingAppDisplayName=_requestingAppDisplayName - In the implementation block
@property (nonatomic,retain) NSString * requestingAppAdamID;                                                //@synthesize requestingAppAdamID=_requestingAppAdamID - In the implementation block
@property (getter=isPreAuthRequest,nonatomic,readonly) BOOL preAuthRequest; 
@property (assign,nonatomic) BOOL allowsPrivacyUI;                                                          //@synthesize allowsPrivacyUI=_allowsPrivacyUI - In the implementation block
@property (assign,nonatomic) BOOL requiresPrivacyUI;                                                        //@synthesize requiresPrivacyUI=_requiresPrivacyUI - In the implementation block
@property (assign,nonatomic) BOOL canVetoAuthentication;                                                    //@synthesize canVetoAuthentication=_canVetoAuthentication - In the implementation block
@property (nonatomic,copy) VSAccountMetadataRequest * accountMetadataRequest;                               //@synthesize accountMetadataRequest=_accountMetadataRequest - In the implementation block
@property (nonatomic,readonly) BOOL allowsAuthenticationUI; 
@property (nonatomic,copy,readonly) NSArray * supportedIdentityProviderIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * featuredIdentityProviderIdentifiers; 
@property (assign,nonatomic) BOOL shouldInferFeaturedProviders;                                             //@synthesize shouldInferFeaturedProviders=_shouldInferFeaturedProviders - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;              //@synthesize shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront=_shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedAccountProviderAuthenticationSchemes; 
@property (nonatomic,copy,readonly) NSString * localizedVideoTitle; 
@property (nonatomic,copy,readonly) NSString * accountProviderAuthenticationToken; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAllowsPrivacyUI:(BOOL)arg1 ;
-(void)setRequiresPrivacyUI:(BOOL)arg1 ;
-(void)setShouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront:(BOOL)arg1 ;
-(void)setAccountMetadataRequest:(VSAccountMetadataRequest *)arg1 ;
-(void)setShouldInferFeaturedProviders:(BOOL)arg1 ;
-(void)setCanVetoAuthentication:(BOOL)arg1 ;
-(VSAccountMetadataRequest *)accountMetadataRequest;
-(NSString *)localizedVideoTitle;
-(NSString *)accountProviderAuthenticationToken;
-(BOOL)allowsAuthenticationUI;
-(NSArray *)supportedIdentityProviderIdentifiers;
-(NSArray *)featuredIdentityProviderIdentifiers;
-(NSArray *)supportedAccountProviderAuthenticationSchemes;
-(BOOL)isPreAuthRequest;
-(BOOL)allowsPrivacyUI;
-(BOOL)requiresPrivacyUI;
-(BOOL)canVetoAuthentication;
-(BOOL)shouldInferFeaturedProviders;
-(BOOL)shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;
-(VSOptional *)requestingAppDisplayName;
-(void)setRequestingAppDisplayName:(VSOptional *)arg1 ;
-(NSString *)requestingAppAdamID;
-(void)setRequestingAppAdamID:(NSString *)arg1 ;
@end

