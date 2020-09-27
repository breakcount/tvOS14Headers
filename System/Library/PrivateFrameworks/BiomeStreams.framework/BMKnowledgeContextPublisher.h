/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BPSPublisher.h>
#import <libobjc.A.dylib/BMLiveEventsPublisher.h>

@protocol _DKKnowledgeQuerying, _CDUserContext;
@class _DKEventQuery, NSString;

@interface BMKnowledgeContextPublisher : BPSPublisher <BMLiveEventsPublisher> {

	BOOL _includeLiveEvents;
	_DKEventQuery* _query;
	id<_DKKnowledgeQuerying> _store;
	id<_CDUserContext> _context;

}

@property (nonatomic,retain) _DKEventQuery * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<_CDUserContext> context;                  //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL includeLiveEvents;                      //@synthesize includeLiveEvents=_includeLiveEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_DKEventQuery *)query;
-(id<_CDUserContext>)context;
-(void)setQuery:(_DKEventQuery *)arg1 ;
-(void)setContext:(id<_CDUserContext>)arg1 ;
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id<_DKKnowledgeQuerying>)store;
-(void)subscribe:(id)arg1 ;
-(BOOL)includeLiveEvents;
-(id)initWithQuery:(id)arg1 store:(id)arg2 context:(id)arg3 includeLiveEvents:(BOOL)arg4 ;
-(id)withLiveEvents;
-(void)setIncludeLiveEvents:(BOOL)arg1 ;
@end

