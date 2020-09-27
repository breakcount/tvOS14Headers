/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSSmartQuoteOptions : NSObject <NSCopying, NSSecureCoding> {

	NSString* _leftSingleQuote;
	NSString* _rightSingleQuote;
	NSString* _apostrophe;
	NSString* _leftDoubleQuote;
	NSString* _rightDoubleQuote;

}

@property (copy,readonly) NSString * leftSingleQuote; 
@property (copy,readonly) NSString * rightSingleQuote; 
@property (copy,readonly) NSString * apostrophe; 
@property (copy,readonly) NSString * leftDoubleQuote; 
@property (copy,readonly) NSString * rightDoubleQuote; 
+(BOOL)supportsSecureCoding;
+(id)smartQuoteOptionsForLocale:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLeftSingleQuote:(id)arg1 rightSingleQuote:(id)arg2 apostrophe:(id)arg3 leftDoubleQuote:(id)arg4 rightDoubleQuote:(id)arg5 ;
-(NSString *)leftSingleQuote;
-(NSString *)rightSingleQuote;
-(NSString *)apostrophe;
-(NSString *)leftDoubleQuote;
-(NSString *)rightDoubleQuote;
@end

