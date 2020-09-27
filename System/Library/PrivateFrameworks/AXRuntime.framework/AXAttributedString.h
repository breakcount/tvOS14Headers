/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <Foundation/NSMutableString.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXAttributedString : NSMutableString <NSCopying> {

	CFAttributedStringRef _string;

}
+(id)string;
+(id)axAttributedStringWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)length;
-(id)string;
-(id)attributesAtIndex:(long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(id)lowercaseString;
-(id)uppercaseString;
-(id)stringByTrimmingCharactersInSet:(id)arg1 ;
-(void)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(void)setAttributes:(id)arg1 ;
-(BOOL)hasAttributes;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasAttribute:(id)arg1 ;
-(id)attributedString;
-(id)initWithCFAttributedString:(CFAttributedStringRef)arg1 ;
-(void)convertAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(const CFAttributedStringRef)cfAttributedString;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(NSRange)arg3 ;
-(id)initWithStringOrAttributedString:(id)arg1 ;
-(void)setAttributes:(id)arg1 withRange:(NSRange)arg2 ;
-(void)appendAXAttributedString:(id)arg1 ;
-(void)enumerateAttributesUsingBlock:(/*^block*/id)arg1 ;
-(void)replaceString:(CFStringRef)arg1 ;
-(void)removeAttributes:(id)arg1 ;
-(id)axAttributedStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
-(id)axStringByReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)appendStringOrAXAttributedString:(id)arg1 ;
-(id)attributeValueForKey:(id)arg1 ;
-(BOOL)isAXAttributedString;
-(id)coalescedAttributes;
-(id)coalescedFontAttributes;
-(id)axAttributedStringDescription;
-(id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1 ;
-(id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1 ;
@end

