/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeEventStreamDeleting
@required
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2;
-(void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

