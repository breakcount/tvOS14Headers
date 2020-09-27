/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class MAGraphSpecification, NSUUID, NSString;

@interface MABaseGraph : NSObject <NSXMLParserDelegate> {

	MAGraphSpecification* _specification;

}

@property (assign,nonatomic) unsigned long long version; 
@property (readonly) MAGraphSpecification * specification;              //@synthesize specification=_specification - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) BOOL isReadOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)graph;
+(void)disableKGDB;
+(void)enableKGDB;
+(id)visualStringWithFormat:(id)arg1 elements:(id)arg2 ;
+(BOOL)scanMatchString:(id)arg1 definitions:(id*)arg2 constraints:(id*)arg3 forCreation:(BOOL)arg4 error:(id*)arg5 ;
+(id)persistentStoreFileExtension;
+(BOOL)hasMarker:(id)arg1 ;
+(BOOL)setMarkerAtURL:(id)arg1 ;
+(id)defaultSpecification;
+(id)persistentStoreURLWithPath:(id)arg1 andName:(id)arg2 ;
+(BOOL)copyPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)migratePersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)destroyPersistentStoreAtURL:(id)arg1 error:(id*)arg2 ;
+(void)deleteMarker:(id)arg1 ;
+(BOOL)scanGraphElementString:(id)arg1 type:(unsigned long long*)arg2 optionalName:(id*)arg3 label:(id*)arg4 optionalDomains:(id*)arg5 optionalProperties:(id*)arg6 error:(id*)arg7 ;
+(id)scanGraphConstraintString:(id)arg1 error:(id*)arg2 ;
+(BOOL)scanGraphElementOptionsString:(id)arg1 minimum:(unsigned long long*)arg2 maximum:(unsigned long long*)arg3 error:(id*)arg4 ;
+(id)graphWithDefinitions:(id)arg1 constraints:(id)arg2 error:(id*)arg3 ;
+(BOOL)populateGraph:(id)arg1 withDefinitions:(id)arg2 constraints:(id)arg3 error:(id*)arg4 ;
+(id)graphWithVisualString:(id)arg1 error:(id*)arg2 ;
+(id)dataURLWithPath:(id)arg1 andName:(id)arg2 ;
+(id)graphMLURLWithPath:(id)arg1 andName:(id)arg2 ;
+(id)graphJSONURLWithPath:(id)arg1 andName:(id)arg2 ;
+(id)graphWithMergedGraphs:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSUUID *)identifier;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(MAGraphSpecification *)specification;
-(id)initWithSpecification:(id)arg1 ;
-(BOOL)isReadOnly;
-(id)allNodes;
-(void)removeNode:(id)arg1 ;
-(id)allEdges;
-(id)dataRepresentation:(id*)arg1 ;
-(id)databaseURL;
-(void)readUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(Class)nodeClass;
-(void)removeNodes:(id)arg1 ;
-(void)invalidateMemoryCaches;
-(id)graphNode;
-(void)closePersistentStore;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(id)nodesForLabel:(id)arg1 ;
-(BOOL)writeDataToURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithDataURL:(id)arg1 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(BOOL)hasPendingRead;
-(id)nodesForDomain:(unsigned short)arg1 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)matchWithVisualFormat:(id)arg1 elements:(id)arg2 error:(id*)arg3 ;
-(id)matchWithDefinitions:(id)arg1 constraints:(id)arg2 error:(id*)arg3 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)abstractEdges;
-(unsigned long long)edgesCount;
-(void)setMarker;
-(void)deleteMarker;
-(void)enterBatch;
-(void)leaveBatch;
-(BOOL)hasMarker;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(id)initWithPersistenceOptions:(long long)arg1 ;
-(id)addNodeWithLabel:(id)arg1 ;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)addNodeFromBase:(id)arg1 ;
-(void)removeNodeEdges:(id)arg1 ;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(id)nodesForIdentifiers:(id)arg1 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 ;
-(id)nodesMatchingFilter:(id)arg1 ;
-(id)anyNodeForLabel:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNodeMatchingFilter:(id)arg1 ;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)numberOfNodesMatchingFilter:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)nodesForDomain:(unsigned short)arg1 properties:(id)arg2 ;
-(unsigned long long)nodesCountForDomain:(unsigned short)arg1 ;
-(id)nodesForDomains:(id)arg1 ;
-(id)addUniquelyIdentifiedNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(unsigned long long)nodesCount;
-(id)nodesLabels;
-(id)nodesDomains;
-(void)enumerateNodesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateNodesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 ;
-(id)orphanNodes;
-(BOOL)edgesStoreWeakReferencesToNodes;
-(id)addEdgeFromBase:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(void)removeEdge:(id)arg1 ;
-(void)removeEdges:(id)arg1 ;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)edgesForIdentifiers:(id)arg1 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 ;
-(id)edgesMatchingFilter:(id)arg1 ;
-(id)anyEdgeMatchingFilter:(id)arg1 ;
-(unsigned long long)numberOfEdgesMatchingFilter:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)edgesForDomain:(unsigned short)arg1 ;
-(unsigned long long)edgesCountForDomain:(unsigned short)arg1 ;
-(id)edgesForDomains:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(id)edgesLabels;
-(id)edgesDomains;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)enumerateEdgesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateEdgesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesRelatedToNodeWithIdentifier:(unsigned)arg1 withRelation:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)nodeIdentifiersRelatedToSourceNodeIdentifiers:(id)arg1 relation:(id)arg2 ;
-(unsigned long long)countOfNodesRelatedToNodesWithIdentifiers:(id)arg1 relation:(id)arg2 ;
-(void)writeUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasPendingWrite;
-(void)waitUntilQuiescentUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithPersistentStoreURL:(id)arg1 options:(long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)savePersistentStoreWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)savePersistentStore;
-(BOOL)migratePersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)copyPersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forNodeWithIdentifier:(unsigned)arg3 ;
-(void)persistModelProperties:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(void)removeModelPropertyForKey:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(void)removeModelPropertiesForNodeWithIdentifier:(unsigned)arg1 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forEdgeWithIdentifier:(unsigned)arg3 ;
-(void)persistModelProperties:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(void)removeModelPropertyForKey:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(void)removeModelPropertiesForEdgeWithIdentifier:(unsigned)arg1 ;
-(void)persistWeight:(float)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(void)persistWeight:(float)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(BOOL)compareWithPersistedState;
-(id)nodeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 ;
-(id)edgeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 sourceNodeIdentifier:(int)arg5 targetNodeIdentifier:(int)arg6 ;
-(void)loadDomains:(id)arg1 ;
-(void)unloadDomains:(id)arg1 ;
-(id)initWithSpecification:(id)arg1 persistenceStoreURL:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)initWithPersistentStoreURL:(id)arg1 options:(long long)arg2 ;
-(void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4 createdNodes:(out id*)arg5 createdEdges:(out id*)arg6 ;
-(id)initWithSpecification:(id)arg1 dataURL:(id)arg2 ;
-(id)initWithGraphMLURL:(id)arg1 ;
-(id)initWithGraphJSONURL:(id)arg1 ;
-(id)_graphJSONDictionary;
-(id)_constraintAbstractEdgesFromAbstractNode:(id)arg1 inConstraints:(id*)arg2 ;
-(BOOL)_matchNode:(id)arg1 usingAbstractNode:(id)arg2 fromEdge:(id)arg3 atIteration:(unsigned long long)arg4 withDefinitions:(id)arg5 constraints:(id)arg6 unusedConstraints:(id)arg7 andSubGraph:(id)arg8 matchingNodeQueue:(id)arg9 ;
-(BOOL)updateGraphWithVisualString:(id)arg1 ;
-(id)selectBestRootNodeForPath:(id)arg1 withDefinitions:(id)arg2 ;
-(id)matchWithVisualString:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeGraphJSONToURL:(id)arg1 error:(id*)arg2 ;
-(id)_graphDictionary;
-(id)shortestPathFromNode:(id)arg1 toNode:(id)arg2 directed:(BOOL)arg3 ;
-(void)depthFirstSearchFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)breadthFirstSearchFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 createdNodes:(out id*)arg4 createdEdges:(out id*)arg5 ;
-(id)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 ;
-(id)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4 ;
-(id)nodeSchemeWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)edgeSchemeWithLabel:(id)arg1 domain:(unsigned short)arg2 sourceNode:(id)arg3 targetNode:(id)arg4 ;
-(BOOL)conformsToGraphSchema:(id)arg1 ;
-(id)schema:(id)arg1 ;
@end
