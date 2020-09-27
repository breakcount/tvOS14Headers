/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:49:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKObject.h>

@class NSString, USKToken, NSArray, NSDictionary;

@interface USKNode : USKObject {

	UsdPrim* _prim;

}

@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) USKToken * typeName; 
@property (nonatomic,readonly) NSArray * schemaTypes; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(id)path;
-(id)propertyList;
-(NSDictionary *)properties;
-(id)specifier;
-(id)parent;
-(id)metadata;
-(USKToken *)typeName;
-(BOOL)removeProperty:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 ;
-(BOOL)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3 ;
-(BOOL)setMetadataWithKey:(id)arg1 value:(id)arg2 ;
-(void)applyType:(id)arg1 ;
-(id)initWithUsdPrim:(UsdPrim*)arg1 ;
-(BOOL)setCustomMetadata:(id)arg1 value:(id)arg2 ;
-(id)metadataWithKey:(id)arg1 ;
-(id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 ;
-(id)customMetadataWithKey:(id)arg1 ;
-(UsdPrim*)usdPrim;
-(id)property:(id)arg1 ;
-(id)inheritedProperty:(id)arg1 ;
-(BOOL)selectVariant:(id)arg1 variantSet:(id)arg2 ;
-(id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 variability:(BOOL)arg4 ;
-(BOOL)hasSchemaType:(id)arg1 ;
-(void)addReferenceWithURL:(id)arg1 nodePath:(id)arg2 ;
-(void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2 ;
-(void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2 offset:(id)arg3 ;
-(void)clearReferences;
-(void)addVariantSet:(id)arg1 ;
-(void)addVariant:(id)arg1 variantSet:(id)arg2 ;
-(BOOL)hasVariantSets;
-(BOOL)hasVariantSet:(id)arg1 ;
-(id)variantSets;
-(id)variantsWithVariantSet:(id)arg1 ;
-(BOOL)editVariant:(id)arg1 variantSet:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)inheritedMaterialBinding;
-(id)inheritedSkeletonBinding;
-(id)inheritedSkeletonAnimationBinding;
-(BOOL)isInstanceNode;
-(id)masterNode;
-(id)newCustomPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 ;
-(id)childIterator;
-(id)subtreeIterator;
-(id)loadedChildIterator;
-(id)loadedSubtreeIterator;
-(NSArray *)schemaTypes;
@end

