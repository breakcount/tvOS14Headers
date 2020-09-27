/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface TVHKDMAPEntityKind : NSObject <NSCopying> {

	NSArray* _attributes;
	NSDictionary* _attributesByCode;
	NSDictionary* _attributesByName;

}

@property (nonatomic,copy) NSDictionary * attributesByCode;              //@synthesize attributesByCode=_attributesByCode - In the implementation block
@property (nonatomic,copy) NSDictionary * attributesByName;              //@synthesize attributesByName=_attributesByName - In the implementation block
@property (nonatomic,copy) NSArray * attributes;                         //@synthesize attributes=_attributes - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)attributes;
-(id)attributeForName:(id)arg1 ;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSDictionary *)attributesByName;
-(NSDictionary *)attributesByCode;
-(void)setAttributesByCode:(NSDictionary *)arg1 ;
-(void)setAttributesByName:(NSDictionary *)arg1 ;
-(id)attributeForCode:(id)arg1 ;
@end

