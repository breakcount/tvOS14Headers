/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying, OS_dispatch_queue;
@class NSObject, NSDate;

@interface ARPCorrelationTaskScheduler : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _bookmark;

}

@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (copy) NSDate * bookmark;                                                  //@synthesize bookmark=_bookmark - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(NSDate *)bookmark;
-(void)setBookmark:(NSDate *)arg1 ;
-(void)nowPlayingEventInserted:(id)arg1 ;
-(void)microLocationEventInserted:(id)arg1 ;
-(void)_executeCorrelationTask;
-(void)_executeHomeControlCorrelationTask;
-(void)executeCorrelationTask;
@end
