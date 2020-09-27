/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _SWCApplicationIdentifier, _SWCDomain, NSString, NSNumber;

@interface _SWCServiceSpecifier : NSObject <SWCRedactedDescription, NSSecureCoding, NSCopying> {

	_SWCApplicationIdentifier* _applicationIdentifier;
	_SWCDomain* _domain;
	NSString* _serviceType;

}

@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * applicationIdentifierPrefix; 
@property (getter=isDomainWildcard,readonly) BOOL domainWildcard; 
@property (readonly) NSString * domainHost; 
@property (readonly) NSNumber * domainPort; 
@property (readonly) char domainModeOfOperation; 
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) _SWCApplicationIdentifier * SWCApplicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (readonly) _SWCDomain * SWCDomain;                                            //@synthesize domain=_domain - In the implementation block
@property (getter=isFullySpecified,readonly) BOOL fullySpecified; 
@property (readonly) NSString * serviceType;                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) NSString * applicationIdentifier; 
@property (readonly) NSString * domain; 
+(BOOL)supportsSecureCoding;
+(id)_serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
+(id)serviceSpecifiersWithEntitlementValue:(id)arg1 error:(id*)arg2 ;
+(id)serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(NSString *)domain;
-(id)redactedDescription;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceType;
-(NSString *)bundleIdentifier;
-(NSString *)applicationIdentifier;
-(id)_initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3 ;
-(id)initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3 ;
-(BOOL)isFullySpecified;
-(_SWCApplicationIdentifier *)SWCApplicationIdentifier;
-(_SWCDomain *)SWCDomain;
-(NSString *)applicationIdentifierPrefix;
-(NSString *)domainHost;
-(BOOL)isDomainWildcard;
-(NSNumber *)domainPort;
-(char)domainModeOfOperation;
-(BOOL)domainEncompassesDomain:(id)arg1 ;
-(BOOL)domainEncompassesDomainOfServiceSpecifier:(id)arg1 ;
@end

