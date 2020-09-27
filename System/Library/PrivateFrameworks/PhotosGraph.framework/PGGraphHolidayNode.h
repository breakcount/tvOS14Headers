/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:53 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>

@class NSString;

@interface PGGraphHolidayNode : PGGraphOptimizedNode <PGGraphLocalizable> {

	unsigned _category : 8;
	NSString* _name;

}

@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(unsigned short)domain;
-(NSString *)localizedName;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(void)enumerateCelebratingMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateCelebratingHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
@end

