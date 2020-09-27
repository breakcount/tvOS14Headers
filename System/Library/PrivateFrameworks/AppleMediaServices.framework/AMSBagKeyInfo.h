/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObject;
@class NSString;

@interface AMSBagKeyInfo : NSObject <NSSecureCoding> {

	NSString* _bagKey;
	id<NSObject> _defaultValue;
	unsigned long long _valueType;

}

@property (nonatomic,readonly) NSString * bagKey;                         //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,readonly) id<NSObject> defaultValue;                 //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;              //@synthesize valueType=_valueType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject>)defaultValue;
-(unsigned long long)valueType;
-(NSString *)bagKey;
-(id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

