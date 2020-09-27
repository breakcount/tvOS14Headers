/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString;

@interface PGGraphPerformerNode : PGGraphOptimizedNode {

	NSString* _name;
	NSString* _uuid;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(unsigned short)domain;
-(id)label;
-(NSString *)uuid;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
@end

