/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKContentProvider.h>

@protocol _DKKnowledgeQuerying;
@class NSString;

@interface _DKKnowledgeContentProvider : NSObject <_DKContentProvider> {

	id<_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 queue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

