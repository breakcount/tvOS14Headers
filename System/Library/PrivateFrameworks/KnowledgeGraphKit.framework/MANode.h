/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/KGNode.h>
#import <libobjc.A.dylib/MAElement.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MANodeImplementationProtocol;
@class MABaseGraph, NSString, MAGraphReference, NSArray, NSDictionary;

@interface MANode : NSObject <KGNode, MAElement, NSCopying> {

	unsigned _identifier;
	MAGraphReference* _graphReference;
	id<MANodeImplementationProtocol> _implementation;

}

@property (nonatomic,readonly) unsigned long long identifier; 
@property (nonatomic,readonly) float weight; 
@property (nonatomic,copy,readonly) NSArray * labels; 
@property (nonatomic,copy,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MAGraphReference * graphReference;                            //@synthesize graphReference=_graphReference - In the implementation block
@property (assign,nonatomic) unsigned identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<MANodeImplementationProtocol> implementation;              //@synthesize implementation=_implementation - In the implementation block
@property (assign,nonatomic) float weight; 
@property (nonatomic,__weak,readonly) MABaseGraph * graph; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,readonly) unsigned short domain; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)identifier;
-(NSDictionary *)properties;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(id)shortDescription;
-(void)setProperties:(NSDictionary *)arg1 ;
-(BOOL)isUnique;
-(unsigned long long)propertiesCount;
-(MABaseGraph *)graph;
-(id)allEdges;
-(id<MANodeImplementationProtocol>)implementation;
-(NSArray *)labels;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasProperties;
-(void)removeAllProperties;
-(void)setImplementation:(id<MANodeImplementationProtocol>)arg1 ;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)propertyKeys;
-(unsigned long long)countOfEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNeighborNodeThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateNeighborNodesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)countOfEdgesWithLabel:(id)arg1 ;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2 ;
-(BOOL)hasProperties:(id)arg1 ;
-(BOOL)isIdentifiedByProperties:(id)arg1 ;
-(id)visualString;
-(id)neighborNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)propertyDictionary;
-(BOOL)matchesNode:(id)arg1 includingProperties:(BOOL)arg2 ;
-(void)enumerateOutEdgesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(BOOL)hasEdgeWithNode:(id)arg1 ;
-(BOOL)hasEdgeTowardNode:(id)arg1 ;
-(id)visualStringWithName:(id)arg1 andPropertyKeys:(id)arg2 ;
-(BOOL)hasEdgeFromNode:(id)arg1 ;
-(id)edgesWithNode:(id)arg1 ;
-(id)edgesFromNode:(id)arg1 ;
-(id)edgesTowardNode:(id)arg1 ;
-(id)shortestPathToNode:(id)arg1 directed:(BOOL)arg2 ;
-(unsigned long long)edgesCount;
-(id)neighborNodes;
-(id)neighborNodesThroughOutEdges;
-(id)neighborNodesThroughInEdges;
-(unsigned long long)inEdgesCount;
-(unsigned long long)outEdgesCount;
-(void)setLocalProperties:(id)arg1 ;
-(void)mergeProperties:(id)arg1 ;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 ;
-(void)removeEdge:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)addEdge:(id)arg1 ;
-(void)enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(BOOL*)arg5 block:(/*^block*/id)arg6 ;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(void)setGraphReference:(MAGraphReference *)arg1 ;
-(BOOL)hasEqualPropertiesToNode:(id)arg1 ;
-(BOOL)isSameNodeAsNode:(id)arg1 ;
-(BOOL)isOrphan;
-(id)anyEdgeTowardNode:(id)arg1 ;
-(id)anyEdgeFromNode:(id)arg1 ;
-(id)anyEdgeWithNode:(id)arg1 ;
-(id)anyEdgeWithLabel:(id)arg1 ;
-(id)anyEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(BOOL)hasEdgeWithLabel:(id)arg1 ;
-(BOOL)hasEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateEdgesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateInEdgesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNeighborNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNeighborNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNeighborNodesThroughOutEdgesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateNeighborNodesThroughInEdgesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasEdge:(id)arg1 isIn:(BOOL*)arg2 ;
-(id)anyNeighborNodeThroughEdgesWithLabel:(id)arg1 ;
-(id)anyNeighborNodeThroughOutEdges;
-(id)anyNeighborNodeThroughOutEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNeighborNodeThroughInEdges;
-(id)anyNeighborNodeThroughInEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg1 ;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateSiblingNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)updatePersistedWeight:(float)arg1 ;
-(id)visualStringWithName:(id)arg1 ;
-(id)associatedNodesForRemoval;
-(MAGraphReference *)graphReference;
-(BOOL)conformsToNodeSchema:(id)arg1 ;
@end

