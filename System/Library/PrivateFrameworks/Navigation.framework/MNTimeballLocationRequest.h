/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface MNTimeballLocationRequest : NSObject {

	double _desiredAccuracy;
	unsigned long long _attemptCount;
	unsigned long long _maxAttempts;
	NSDate* _requestDate;
	double _timeoutInterval;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) double desiredAccuracy;                       //@synthesize desiredAccuracy=_desiredAccuracy - In the implementation block
@property (assign,nonatomic) unsigned long long attemptCount;              //@synthesize attemptCount=_attemptCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxAttempts;               //@synthesize maxAttempts=_maxAttempts - In the implementation block
@property (nonatomic,retain) NSDate * requestDate;                         //@synthesize requestDate=_requestDate - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                       //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy) id completionBlock;                             //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)requestWithAccuracy:(double)arg1 maxAttempts:(unsigned long long)arg2 timeoutInterval:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)init;
-(void)setCompletionBlock:(id)arg1 ;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(id)completionBlock;
-(unsigned long long)attemptCount;
-(void)setAttemptCount:(unsigned long long)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)setRequestDate:(NSDate *)arg1 ;
-(void)setMaxAttempts:(unsigned long long)arg1 ;
-(unsigned long long)maxAttempts;
-(NSDate *)requestDate;
@end

