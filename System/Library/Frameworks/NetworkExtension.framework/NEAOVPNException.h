/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface NEAOVPNException : NSObject <NSSecureCoding, NSCopying> {

	NSString* _serviceName;
	NSString* _bundleIdentifier;
	NSArray* _limitToProtocols;
	long long _action;

}

@property (copy) NSString * serviceName;                   //@synthesize serviceName=_serviceName - In the implementation block
@property (copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSArray * limitToProtocols;               //@synthesize limitToProtocols=_limitToProtocols - In the implementation block
@property (assign) long long action;                       //@synthesize action=_action - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)serviceName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)limitToProtocols;
-(void)setLimitToProtocols:(NSArray *)arg1 ;
-(BOOL)isLimitedToUDP;
@end

