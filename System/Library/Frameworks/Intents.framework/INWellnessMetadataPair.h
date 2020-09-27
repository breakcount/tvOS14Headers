/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface INWellnessMetadataPair : NSObject <NSCopying, NSSecureCoding> {

	NSString* _key;
	NSNumber* _numberValue;
	NSString* _stringValue;

}

@property (nonatomic,copy,readonly) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberValue;              //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)key;
-(id)_dictionaryRepresentation;
-(NSNumber *)numberValue;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithNumber:(id)arg1 key:(id)arg2 ;
-(id)initWithString:(id)arg1 key:(id)arg2 ;
@end

