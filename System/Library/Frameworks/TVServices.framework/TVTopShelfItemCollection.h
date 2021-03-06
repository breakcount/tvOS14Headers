/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVTopShelfObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface TVTopShelfItemCollection : TVTopShelfObject <NSSecureCoding> {

	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 removeDuplicateItems:(BOOL)arg2 ;
@end

