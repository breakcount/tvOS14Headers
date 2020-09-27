/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, TILanguageModelOfflineLearningTask;

@interface TILanguageModelOfflineLearningAgent : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TILanguageModelOfflineLearningTask* _currentLearningTask;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;                          //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) TILanguageModelOfflineLearningTask * currentLearningTask;              //@synthesize currentLearningTask=_currentLearningTask - In the implementation block
+(void)didFinishLearningWithAgent:(id)arg1 task:(id)arg2 ;
+(id)contactRecordsForRecipients:(id)arg1 ;
+(id)sharedLearningAgent;
-(id)init;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)continueLearningTaskWithStrategy:(id)arg1 ;
-(void)performLearningIfNecessaryWithStrategy:(id)arg1 lastAdaptationTime:(double)arg2 ;
-(void)performTaskInBackground:(/*^block*/id)arg1 ;
-(void)handleRemovalOfLearnedModels;
-(TILanguageModelOfflineLearningTask *)currentLearningTask;
-(void)setCurrentLearningTask:(TILanguageModelOfflineLearningTask *)arg1 ;
@end

