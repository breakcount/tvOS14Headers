/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSURL;

@interface NEEvaluateConnectionRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	long long _action;
	NSArray* _matchDomains;
	NSArray* _useDNSServers;
	NSURL* _probeURL;

}

@property (readonly) long long action;                    //@synthesize action=_action - In the implementation block
@property (readonly) NSArray * matchDomains;              //@synthesize matchDomains=_matchDomains - In the implementation block
@property (copy) NSArray * useDNSServers;                 //@synthesize useDNSServers=_useDNSServers - In the implementation block
@property (copy) NSURL * probeURL;                        //@synthesize probeURL=_probeURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)action;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)matchDomains;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSURL *)probeURL;
-(void)setProbeURL:(NSURL *)arg1 ;
-(id)initWithMatchDomains:(id)arg1 andAction:(long long)arg2 ;
-(NSArray *)useDNSServers;
-(void)setUseDNSServers:(NSArray *)arg1 ;
@end

