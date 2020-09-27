/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDNetworkRouterFirewallRuleWAN, NSString, NSSet;

@interface HMDAccessoryAllowedHost : HMFObject <NSSecureCoding> {

	HMDNetworkRouterFirewallRuleWAN* _cachedWANRule;
	NSString* _jsonWANRule;

}

@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleWAN * wanRule; 
@property (readonly) NSString * name; 
@property (readonly) NSSet * addresses; 
@property (readonly) unsigned long long purpose; 
@property (readonly) NSString * jsonWANRule;                                           //@synthesize jsonWANRule=_jsonWANRule - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allowedHostsFromFirewallRuleConfiguration:(id)arg1 ;
+(id)allowedHostsFromJSONFirewallWANRules:(id)arg1 ;
+(id)allowedHostForFullWANAccess;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)addresses;
-(unsigned long long)purpose;
-(id)attributeDescriptions;
-(NSString *)jsonWANRule;
-(id)initWithJSONFirewallWANRule:(id)arg1 ;
-(id)initWithWANRule:(id)arg1 ;
-(HMDNetworkRouterFirewallRuleWAN *)wanRule;
-(void)_encodeForSPIEntitledXPCTransportWithCoder:(id)arg1 ;
@end

