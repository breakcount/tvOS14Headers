/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSModeAssertionInvalidationPredicate.h>

@class NSArray;

@interface DNDSModeAssertionClientIdentifierInvalidationPredicate : DNDSModeAssertionInvalidationPredicate {

	NSArray* _clientIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * clientIdentifiers;              //@synthesize clientIdentifiers=_clientIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(NSArray *)clientIdentifiers;
-(id)initWithClientIdentifiers:(id)arg1 ;
-(unsigned long long)predicateType;
@end
