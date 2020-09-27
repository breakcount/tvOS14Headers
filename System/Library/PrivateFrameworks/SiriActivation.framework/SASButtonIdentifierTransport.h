/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:41 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SASButtonIdentifierTransport : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithSiriButtonIdentifier:(long long)arg1 ;
-(BOOL)_identifierMatchesSiriButtonIdentifier:(long long)arg1 ;
-(long long)siriButtonIdentifier;
@end

