/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Accessibility.framework/Accessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accessibility/Accessibility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSAttributedString;

@interface AXCustomContent : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _importance;
	NSString* _label;
	NSAttributedString* _attributedLabel;
	NSString* _value;
	NSAttributedString* _attributedValue;

}

@property (nonatomic,copy) NSString * label;                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedLabel;              //@synthesize attributedLabel=_attributedLabel - In the implementation block
@property (nonatomic,copy) NSString * value;                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedValue;              //@synthesize attributedValue=_attributedValue - In the implementation block
@property (assign,nonatomic) unsigned long long importance;                   //@synthesize importance=_importance - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)customContentWithLabel:(id)arg1 value:(id)arg2 ;
+(id)customContentWithAttributedLabel:(id)arg1 attributedValue:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)importance;
-(void)setAttributedLabel:(NSAttributedString *)arg1 ;
-(void)setAttributedValue:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedLabel;
-(NSAttributedString *)attributedValue;
-(void)setImportance:(unsigned long long)arg1 ;
@end

