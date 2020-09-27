/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:37 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphPropertylessEdge.h>

@class NSString;

@interface PGGraphMeaningEdge : PGGraphPropertylessEdge {

	float _weight;

}

@property (assign,nonatomic) float weight;                 //@synthesize weight=_weight - In the implementation block
@property (readonly) BOOL isReliable; 
@property (readonly) NSString * meaningLabel; 
+(id)filter;
-(unsigned short)domain;
-(id)label;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)initFromMomentNode:(id)arg1 toMeaningNode:(id)arg2 weight:(float)arg3 ;
-(id)edgeDescription;
-(BOOL)isReliable;
-(NSString *)meaningLabel;
@end

