/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKFHIRIdentifier : NSObject <NSSecureCoding, NSCopying> {

	NSString* _resourceType;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * resourceType;              //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(BOOL)supportsSecureCoding;
+(id)FHIRIdentifierWithString:(id)arg1 error:(out id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)identifier;
-(NSString *)resourceType;
-(id)initWithResourceType:(id)arg1 identifier:(id)arg2 ;
-(id)identifierForContainedResourceWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)parentResourceIdentifierWithError:(id*)arg1 ;
-(id)SQLWildcardIdentifierForContainedResources;
-(id)SQLWildcardIdentifierForContainedResourcesIdentifierOnly;
@end
