/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIAppCACommitFuture : NSObject {

	/*^block*/id _block;
	BOOL _invalidated;
	BOOL _finished;

}

@property (getter=_isInvalidated,nonatomic,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (getter=_isFinished,nonatomic,readonly) BOOL finished;                    //@synthesize finished=_finished - In the implementation block
+(id)scheduledPostCommitFuture:(/*^block*/id)arg1 ;
+(id)scheduledPreCommitFuture:(/*^block*/id)arg1 ;
-(void)invalidate;
-(BOOL)_isFinished;
-(BOOL)_isInvalidated;
-(void)_invoke;
-(id)initWithPhase:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
@end

