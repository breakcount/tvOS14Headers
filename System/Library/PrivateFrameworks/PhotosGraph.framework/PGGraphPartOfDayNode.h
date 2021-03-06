/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString;

@interface PGGraphPartOfDayNode : PGGraphOptimizedNode {

	unsigned long long _partOfDay;

}

@property (readonly) NSString * name; 
@property (readonly) unsigned long long partOfDay;              //@synthesize partOfDay=_partOfDay - In the implementation block
+(id)filter;
+(unsigned long long)partOfDayForPartOfDayName:(id)arg1 ;
+(id)partOfDayNameForPartOfDay:(unsigned long long)arg1 ;
+(id)stringValueForPartOfDay:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)description;
-(id)init;
-(unsigned short)domain;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(unsigned long long)partOfDay;
@end

