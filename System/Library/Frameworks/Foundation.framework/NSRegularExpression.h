/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSRegularExpression : NSObject <NSCopying, NSSecureCoding> {

	NSString* _pattern;
	unsigned long long _options;
	void* _internal;
	id _reserved1;
	int _checkout;
	int _reserved2;

}

@property (copy,readonly) NSString * pattern; 
@property (readonly) unsigned long long options; 
@property (readonly) unsigned long long numberOfCaptureGroups; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)escapedPatternForString:(id)arg1 ;
+(id)regularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)escapedTemplateForString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 usingBlock:(/*^block*/id)arg4 ;
-(unsigned long long)_captureGroupNumberWithName:(id)arg1 ;
-(NSRange)rangeOfFirstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)stringByReplacingMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 withTemplate:(id)arg4 ;
-(unsigned long long)replaceMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 withTemplate:(id)arg4 ;
-(id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSString *)pattern;
-(unsigned long long)numberOfCaptureGroups;
-(id)matchesInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(unsigned long long)numberOfMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)firstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)replacementStringForResult:(id)arg1 inString:(id)arg2 offset:(long long)arg3 template:(id)arg4 ;
@end

