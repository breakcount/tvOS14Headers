/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKProfileIdentifier;

@interface HKHealthStoreConfiguration : NSObject <NSSecureCoding, NSCopying> {

	unsigned _applicationSDKVersion;
	NSString* _sourceBundleIdentifier;
	NSString* _sourceVersion;
	NSString* _debugIdentifier;
	HKProfileIdentifier* _profileIdentifier;

}

@property (nonatomic,copy,readonly) NSString * sourceBundleIdentifier;                    //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceVersion;                             //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugIdentifier;                           //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HKProfileIdentifier * profileIdentifier;              //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned applicationSDKVersion;                            //@synthesize applicationSDKVersion=_applicationSDKVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sourceVersion;
-(NSString *)debugIdentifier;
-(HKProfileIdentifier *)profileIdentifier;
-(id)initWithSourceBundleIdentifier:(id)arg1 sourceVersion:(id)arg2 debugIdentifier:(id)arg3 profileIdentifier:(id)arg4 applicationSDKVersion:(unsigned)arg5 ;
-(NSString *)sourceBundleIdentifier;
-(unsigned)applicationSDKVersion;
@end

