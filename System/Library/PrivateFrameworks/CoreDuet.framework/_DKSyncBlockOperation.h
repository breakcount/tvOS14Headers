/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncOperation.h>

@class NSMutableArray;

@interface _DKSyncBlockOperation : _DKSyncOperation {

	os_unfair_lock_s _lock;
	BOOL _asynchronous;
	NSMutableArray* _blocks;

}

@property (readonly) NSMutableArray * blocks;                     //@synthesize blocks=_blocks - In the implementation block
@property (getter=isAsynchronous) BOOL asynchronous;              //@synthesize asynchronous=_asynchronous - In the implementation block
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isAsynchronous;
-(id)executionBlocks;
-(void)setAsynchronous:(BOOL)arg1 ;
-(NSMutableArray *)blocks;
@end

