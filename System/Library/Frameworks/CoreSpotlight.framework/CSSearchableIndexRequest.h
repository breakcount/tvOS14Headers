/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, CSSearchableIndex, NSString, CSDataWrapper;

@interface CSSearchableIndexRequest : NSObject {

	BOOL _shouldThrottle;
	BOOL _started;
	BOOL _finished;
	BOOL _throttled;
	AI _requestID;
	unsigned long long _maxRetryCount;
	NSData* _data;
	/*^block*/id _performBlock;
	/*^block*/id _completionDataBlock;
	/*^block*/id _completionBlock;
	CSSearchableIndex* _index;
	NSString* _label;
	CSDataWrapper* _dataWrapper;
	unsigned long long _retryCount;

}

@property (nonatomic,retain) CSSearchableIndex * index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CSDataWrapper * dataWrapper;                   //@synthesize dataWrapper=_dataWrapper - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                 //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) AI requestID;                                  //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL started;                                  //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL finished;                                 //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL throttled;                                //@synthesize throttled=_throttled - In the implementation block
@property (assign,nonatomic) unsigned long long maxRetryCount;              //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (assign,nonatomic) BOOL shouldThrottle;                           //@synthesize shouldThrottle=_shouldThrottle - In the implementation block
@property (nonatomic,readonly) NSData * data;                               //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id performBlock;                                 //@synthesize performBlock=_performBlock - In the implementation block
@property (nonatomic,copy) id completionDataBlock;                          //@synthesize completionDataBlock=_completionDataBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                              //@synthesize completionBlock=_completionBlock - In the implementation block
+(void)initialize;
-(id)description;
-(void)dealloc;
-(NSData *)data;
-(void)setCompletionBlock:(id)arg1 ;
-(void)start;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(CSSearchableIndex *)index;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(id)completionBlock;
-(BOOL)started;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setIndex:(CSSearchableIndex *)arg1 ;
-(BOOL)throttled;
-(void)setThrottled:(BOOL)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(unsigned long long)maxRetryCount;
-(void)setMaxRetryCount:(unsigned long long)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 label:(id)arg2 ;
-(void)setShouldThrottle:(BOOL)arg1 ;
-(void)retryIfNecessaryWithError:(id)arg1 ;
-(void)setPerformBlock:(id)arg1 ;
-(void)_perform;
-(void)_finishWithError:(id)arg1 ;
-(void)retryIfNecessaryWithError:(id)arg1 dataWrapper:(id)arg2 ;
-(void)_unthrottleIfNecessary;
-(void)_throttleIfNecessary;
-(void)finishWithError:(id)arg1 ;
-(BOOL)shouldThrottle;
-(id)performBlock;
-(id)completionDataBlock;
-(void)setCompletionDataBlock:(id)arg1 ;
-(CSDataWrapper *)dataWrapper;
-(void)setDataWrapper:(CSDataWrapper *)arg1 ;
-(AI)requestID;
-(void)setRequestID:(AI)arg1 ;
@end

