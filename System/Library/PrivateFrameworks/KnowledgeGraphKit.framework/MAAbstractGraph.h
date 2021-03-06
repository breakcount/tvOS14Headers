/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MAAbstractGraph : NSObject {

	NSMutableArray* _nodes;
	NSMutableArray* _edges;

}
-(id)init;
-(id)addUniqueNodeWithLabel:(id)arg1 didCreate:(BOOL*)arg2 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 didCreate:(BOOL*)arg4 ;
@end

