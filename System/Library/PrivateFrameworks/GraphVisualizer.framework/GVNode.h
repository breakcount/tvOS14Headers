/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GraphVisualizer/GraphVisualizer-Structs.h>
@class NSMutableOrderedSet;

@interface GVNode : NSObject {

	double x;
	double y;
	double w;
	double h;
	NSMutableOrderedSet* inNodes;
	NSMutableOrderedSet* outNodes;
	long long rank;
	long long index;
	GVNode* prev;
	GVNode* next;
	unsigned long long inPriority;
	unsigned long long outPriority;

}

@property (assign,nonatomic) double x; 
@property (assign,nonatomic) double y; 
@property (assign,nonatomic) double w; 
@property (assign,nonatomic) double h; 
@property (assign,nonatomic) double cx; 
@property (assign,nonatomic) double cy; 
@property (nonatomic,retain) NSMutableOrderedSet * inNodes; 
@property (nonatomic,retain) NSMutableOrderedSet * outNodes; 
@property (readonly) unsigned long long inDegree; 
@property (readonly) unsigned long long outDegree; 
@property (assign,nonatomic) long long rank; 
@property (assign,nonatomic) long long index; 
@property (assign,nonatomic) GVNode * prev; 
@property (assign,nonatomic) GVNode * next; 
@property (assign,nonatomic) unsigned long long inPriority; 
@property (assign,nonatomic) unsigned long long outPriority; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGPoint origin; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGSize size; 
-(id)description;
-(id)init;
-(void)dealloc;
-(CGSize)size;
-(long long)index;
-(GVNode *)next;
-(void)setIndex:(long long)arg1 ;
-(GVNode *)prev;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(NSMutableOrderedSet *)inNodes;
-(NSMutableOrderedSet *)outNodes;
-(CGPoint)center;
-(double)cx;
-(void)setCx:(double)arg1 ;
-(double)cy;
-(void)setCy:(double)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(unsigned long long)inDegree;
-(unsigned long long)outDegree;
-(BOOL)hasEdgeFrom:(id)arg1 ;
-(BOOL)hasEdgeTo:(id)arg1 ;
-(void)addEdgeFrom:(id)arg1 ;
-(void)addEdgeTo:(id)arg1 ;
-(void)removeEdgeFrom:(id)arg1 ;
-(void)removeEdgeTo:(id)arg1 ;
-(void)computePriority;
-(void)traversePostorder:(int)arg1 withCallback:(/*^block*/id)arg2 stopper:(/*^block*/id)arg3 randomize:(BOOL)arg4 ;
-(void)traversePreorder:(int)arg1 withCallback:(/*^block*/id)arg2 randomize:(BOOL)arg3 ;
-(double)x;
-(void)setX:(double)arg1 ;
-(double)y;
-(void)setY:(double)arg1 ;
-(double)w;
-(void)setW:(double)arg1 ;
-(double)h;
-(void)setH:(double)arg1 ;
-(void)setInNodes:(NSMutableOrderedSet *)arg1 ;
-(void)setOutNodes:(NSMutableOrderedSet *)arg1 ;
-(void)setPrev:(GVNode *)arg1 ;
-(void)setNext:(GVNode *)arg1 ;
-(unsigned long long)inPriority;
-(void)setInPriority:(unsigned long long)arg1 ;
-(unsigned long long)outPriority;
-(void)setOutPriority:(unsigned long long)arg1 ;
@end

