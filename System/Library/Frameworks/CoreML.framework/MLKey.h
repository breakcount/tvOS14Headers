/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MLKey : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _scope;

}

@property (nonatomic,readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * scope;              //@synthesize scope=_scope - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)scope;
-(id)initWithKeyName:(id)arg1 ;
-(id)scopedTo:(id)arg1 ;
-(id)deletingPrefixingScope:(id)arg1 ;
-(id)initWithKeyName:(id)arg1 scope:(id)arg2 ;
-(BOOL)hasGlobalScope;
-(BOOL)hasSameNameAsKey:(id)arg1 ;
@end

