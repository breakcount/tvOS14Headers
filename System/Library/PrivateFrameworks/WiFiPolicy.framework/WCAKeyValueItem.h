/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray, NSData, NSError;

@interface WCAKeyValueItem : NSObject <NSSecureCoding> {

	id _value;
	NSString* _key;

}

@property (nonatomic,copy,readonly) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,readonly) NSArray * arrayValue; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,readonly) float floatValue; 
@property (nonatomic,readonly) int int32Value; 
@property (nonatomic,readonly) long long int64Value; 
@property (nonatomic,readonly) unsigned uint32Value; 
@property (nonatomic,readonly) unsigned long long uint64Value; 
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) NSData * bytesValue; 
@property (nonatomic,copy,readonly) NSError * error; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(double)doubleValue;
-(float)floatValue;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSError *)error;
-(NSString *)key;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(NSArray *)arrayValue;
-(NSDictionary *)dictionaryValue;
-(id)initWithKey:(id)arg1 error:(id)arg2 ;
-(long long)int64Value;
-(int)int32Value;
-(NSData *)bytesValue;
-(unsigned)uint32Value;
-(unsigned long long)uint64Value;
@end

