/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphPropertylessEdge.h>

@interface PGGraphROIEdge : PGGraphPropertylessEdge {

	float _weight;

}
+(id)filter;
-(unsigned short)domain;
-(id)label;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg1 toROINode:(id)arg2 weight:(float)arg3 ;
@end

