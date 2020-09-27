/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphBusinessEdge.h>

@interface PGGraphPlaceBusinessEdge : PGGraphBusinessEdge
+(id)filter;
-(unsigned short)domain;
-(id)label;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)initFromMomentNode:(id)arg1 toBusinessNode:(id)arg2 weight:(float)arg3 ;
@end

