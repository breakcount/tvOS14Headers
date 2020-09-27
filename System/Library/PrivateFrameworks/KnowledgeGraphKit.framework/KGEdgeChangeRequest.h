/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KGEdge;
@class NSNumber, NSDictionary;

@interface KGEdgeChangeRequest : NSObject {

	id<KGEdge> _edge;
	NSNumber* _weight;
	NSDictionary* _properties;
	long long _mutationType;

}

@property (nonatomic,readonly) id<KGEdge> edge;                     //@synthesize edge=_edge - In the implementation block
@property (nonatomic,readonly) long long mutationType;              //@synthesize mutationType=_mutationType - In the implementation block
@property (nonatomic,retain) NSNumber * weight;                     //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy) NSDictionary * properties;               //@synthesize properties=_properties - In the implementation block
+(id)changeRequestForEdge:(id)arg1 ;
+(id)removeRequestForEdge:(id)arg1 ;
-(NSDictionary *)properties;
-(NSNumber *)weight;
-(void)setWeight:(NSNumber *)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id<KGEdge>)edge;
-(id)initWithMutationType:(long long)arg1 ;
-(long long)mutationType;
@end

