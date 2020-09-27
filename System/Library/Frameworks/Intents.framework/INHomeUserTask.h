/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INHomeAttributeValue, NSString;

@interface INHomeUserTask : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _taskType;
	long long _attribute;
	INHomeAttributeValue* _value;

}

@property (nonatomic,readonly) long long taskType;                             //@synthesize taskType=_taskType - In the implementation block
@property (nonatomic,readonly) long long attribute;                            //@synthesize attribute=_attribute - In the implementation block
@property (nonatomic,copy,readonly) INHomeAttributeValue * value;              //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INHomeAttributeValue *)value;
-(long long)attribute;
-(long long)taskType;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithTaskType:(long long)arg1 attribute:(long long)arg2 value:(id)arg3 ;
@end

