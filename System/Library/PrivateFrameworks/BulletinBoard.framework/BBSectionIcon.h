/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _variants;

}

@property (nonatomic,copy) NSSet * variants;              //@synthesize variants=_variants - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)variants;
-(void)setVariants:(NSSet *)arg1 ;
-(id)_bestVariantForFormat:(long long)arg1 ;
-(void)addVariant:(id)arg1 ;
@end

