/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KGEdgeChangeRequest.h>

@protocol KGNode;
@class NSArray, NSNumber, NSDictionary, KGEdgePlaceholder;

@interface KGEdgeCreationRequest : KGEdgeChangeRequest {

	NSArray* _labels;
	NSNumber* _weight;
	NSDictionary* _properties;
	id<KGNode> _targetNode;
	id<KGNode> _sourceNode;
	KGEdgePlaceholder* _placeholderForEdge;

}

@property (retain,readonly) NSArray * labels;                                       //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) id<KGNode> targetNode;                               //@synthesize targetNode=_targetNode - In the implementation block
@property (nonatomic,readonly) id<KGNode> sourceNode;                               //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) KGEdgePlaceholder * placeholderForEdge;              //@synthesize placeholderForEdge=_placeholderForEdge - In the implementation block
+(id)creationRequestWithLabels:(id)arg1 weight:(id)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5 ;
+(id)changeRequestForEdge:(id)arg1 ;
-(id)properties;
-(id)weight;
-(void)setWeight:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(NSArray *)labels;
-(id<KGNode>)targetNode;
-(id<KGNode>)sourceNode;
-(KGEdgePlaceholder *)placeholderForEdge;
@end

