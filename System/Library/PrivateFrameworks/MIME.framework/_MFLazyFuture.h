/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFFuture.h>

@class NSConditionLock, MFPromise;

@interface _MFLazyFuture : MFFuture {

	NSConditionLock* _stateLock;
	/*^block*/id _block;
	MFPromise* _promise;

}
-(void)dealloc;
-(BOOL)run;
-(BOOL)isCancelled;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isFinished;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)onScheduler:(id)arg1 addSuccessBlock:(/*^block*/id)arg2 ;
-(void)onScheduler:(id)arg1 addFailureBlock:(/*^block*/id)arg2 ;
-(BOOL)tryCancel;
@end

