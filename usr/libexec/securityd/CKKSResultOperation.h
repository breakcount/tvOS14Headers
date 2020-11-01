//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@class CKKSCondition, NSDate, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKKSResultOperation : NSBlockOperation
{
    _Bool _timeoutCanOccur;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDate *_finishDate;	// 24 = 0x18
    CKKSCondition *_completionHandlerDidRunCondition;	// 32 = 0x20
    long long _descriptionErrorCode;	// 40 = 0x28
    NSMutableArray *_successDependencies;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_timeoutQueue;	// 56 = 0x38
    CDUnknownBlockType _finishingBlock;	// 64 = 0x40
}

+ (id)named:(id)arg1 withBlockTakingSelf:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fad74
+ (id)named:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fad04
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000facb4
- (void).cxx_destruct;	// IMP=0x00000001000fa89c
@property(copy) CDUnknownBlockType finishingBlock; // @synthesize finishingBlock=_finishingBlock;
@property(retain) NSObject<OS_dispatch_queue> *timeoutQueue; // @synthesize timeoutQueue=_timeoutQueue;
@property _Bool timeoutCanOccur; // @synthesize timeoutCanOccur=_timeoutCanOccur;
@property(retain) NSMutableArray *successDependencies; // @synthesize successDependencies=_successDependencies;
@property long long descriptionErrorCode; // @synthesize descriptionErrorCode=_descriptionErrorCode;
@property(retain) CKKSCondition *completionHandlerDidRunCondition; // @synthesize completionHandlerDidRunCondition=_completionHandlerDidRunCondition;
@property(retain) NSDate *finishDate; // @synthesize finishDate=_finishDate;
@property(retain) NSError *error; // @synthesize error=_error;
- (_Bool)allSuccessful:(id)arg1;	// IMP=0x00000001000fa2d8
- (_Bool)allDependentsSuccessful;	// IMP=0x00000001000fa280
- (void)addNullableSuccessDependency:(id)arg1;	// IMP=0x00000001000fa1c8
- (void)addSuccessDependency:(id)arg1;	// IMP=0x00000001000fa1bc
- (id)timeout:(unsigned long long)arg1;	// IMP=0x00000001000fa0cc
- (id)_onqueueTimeoutError;	// IMP=0x00000001000f9f8c
- (id)descriptionError;	// IMP=0x00000001000f9e74
- (id)dependenciesDescriptionError;	// IMP=0x00000001000f9c60
- (void)invalidateTimeout;	// IMP=0x00000001000f9be4
- (void)start;	// IMP=0x00000001000f9b74
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f9a78
- (id)debugDescription;	// IMP=0x00000001000f9a6c
- (id)description;	// IMP=0x00000001000f9894
- (id)operationStateString;	// IMP=0x00000001000f978c
- (id)init;	// IMP=0x00000001000f95cc

@end
