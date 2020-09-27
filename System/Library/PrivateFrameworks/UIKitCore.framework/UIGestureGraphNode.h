/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureGraphElement.h>

@class NSMutableSet, NSMapTable, NSSet;

@interface UIGestureGraphNode : UIGestureGraphElement {

	NSMutableSet* _inEdges;
	NSMutableSet* _outEdges;
	NSMutableSet* _inOutEdges;
	NSMapTable* _edgesByLabel;

}

@property (nonatomic,readonly) unsigned long long edgeCount; 
@property (nonatomic,readonly) NSSet * allEdges; 
@property (nonatomic,readonly) NSSet * inEdges; 
@property (nonatomic,readonly) NSSet * outEdges; 
@property (nonatomic,readonly) NSSet * inOutEdges; 
-(id)description;
-(NSSet *)allEdges;
-(unsigned long long)edgeCount;
-(void)enumerateNeighborNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasEdgeTowardNode:(id)arg1 ;
-(BOOL)hasEdgeFromNode:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(unsigned long long)edgeCountForLabel:(id)arg1 ;
-(void)_addEdge:(id)arg1 ;
-(void)_removeEdge:(id)arg1 ;
-(NSSet *)outEdges;
-(NSSet *)inOutEdges;
-(NSSet *)inEdges;
-(BOOL)isInEdge:(id)arg1 ;
-(BOOL)isOutEdge:(id)arg1 ;
-(unsigned long long)typeOfEdge:(id)arg1 ;
-(id)_edgesForType:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2 ;
-(BOOL)hasEdgeBetweenNode:(id)arg1 ;
-(BOOL)isInOutEdge:(id)arg1 ;
-(void)enumerateEdgesTowardNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesFromNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesBetweenNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

