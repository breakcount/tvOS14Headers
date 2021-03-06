/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MABaseGraph, NSString;


@protocol MAElement <NSObject>
@property (readonly,nonatomic) MABaseGraph * graph; 
@property (readonly,nonatomic) unsigned identifier; 
@property (readonly,nonatomic) NSString * label; 
@property (readonly,nonatomic) unsigned short domain; 
@property (readonly,nonatomic) float weight; 
@required
-(id)objectForKeyedSubscript:(id)arg1;
-(id)objectForKeyedSubscript:(id)arg1;
-(unsigned short)domain;
-(id)propertyForKey:(id)arg1;
-(id)propertyForKey:(id)arg1;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
-(id)setObject:(id)arg1;
-(unsigned)identifier;
-(void)removePropertyForKey:(id)arg1;
-(void)removePropertyForKey:(id)arg1;
-(NSString *)label;
-(float)weight;
-(void)setProperties:(id)arg1;
-(unsigned long long)propertiesCount;
-(MABaseGraph *)graph;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1;
-(BOOL)hasProperties;
-(void)removeAllProperties;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2;
-(id)propertyKeys;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
-(BOOL)hasProperties:(id)arg1;
-(BOOL)isIdentifiedByProperties:(id)arg1;
-(BOOL)isIdentifiedByProperties:(id)arg1;
-(id)visualString;

@end

